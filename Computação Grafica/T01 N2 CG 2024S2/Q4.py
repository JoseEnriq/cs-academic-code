import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import math

# Definição dos pontos A e B
A = np.array([20, 30, 40])
B = np.array([20, 100, 40])
d = B - A  # Vetor da reta AB

# Pontos de controle da curva Bézier
control_points = np.array([[45, 10, 45],
                           [100, 120, 100],
                           [80, 80, 80],
                           [20, 20, 20]])


# Função para calcular a curva de Bézier
def bezier_curve_3d(control_points, t_values):
    n = len(control_points) - 1  # Grau da curva
    curve = np.zeros((len(t_values), 3))
    for i, t in enumerate(t_values):
        for j, p in enumerate(control_points):
            bernstein_poly = (math.factorial(n) /
                              (math.factorial(j) * math.factorial(n - j))) * \
                             (t ** j) * ((1 - t) ** (n - j))
            curve[i] += bernstein_poly * p
    return curve


# Função para calcular a matriz de rotação em torno de um eixo arbitrário
def rotation_matrix(axis, theta):
    axis = axis / np.linalg.norm(axis)  # Normalizar o eixo
    a = np.cos(theta / 2.0)
    b, c, d = -axis * np.sin(theta / 2.0)
    return np.array([[a * a + b * b - c * c - d * d, 2 * (b * c - a * d), 2 * (b * d + a * c)],
                     [2 * (b * c + a * d), a * a + c * c - b * b - d * d, 2 * (c * d - a * b)],
                     [2 * (b * d - a * c), 2 * (c * d + a * b), a * a + d * d - b * b - c * c]])


# Função para aplicar a rotação
def rotate_curve(curve, A, d, theta):
    rotated_curve = []
    rotation_axis = d / np.linalg.norm(d)  # Direção normalizada da reta AB
    rotation_mat = rotation_matrix(rotation_axis, theta)

    for point in curve:
        # Transladar para alinhar com a origem
        point_translated = point - A
        # Aplicar a rotação
        point_rotated = rotation_mat @ point_translated
        # Reverter a translação
        rotated_curve.append(point_rotated + A)
    return np.array(rotated_curve)


# Configuração da curva e rotação
t_values = np.linspace(0, 1, 100)
bezier_curve = bezier_curve_3d(control_points, t_values)

# Rotacionar a curva em torno da reta AB com um ângulo de 45 graus (pi/4 radianos)
theta = np.pi / 4  # Ângulo de rotação
rotated_curve = rotate_curve(bezier_curve, A, d, theta)

# Visualizar as curvas
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Curva original
ax.plot(bezier_curve[:, 0], bezier_curve[:, 1], bezier_curve[:, 2], color='blue', label='Curva Original')

# Curva rotacionada
ax.plot(rotated_curve[:, 0], rotated_curve[:, 1], rotated_curve[:, 2], color='green', label='Curva Rotacionada')

# Pontos de controle
ax.scatter(control_points[:, 0], control_points[:, 1], control_points[:, 2], color='red', s=50,
           label='Pontos de Controle')

# Eixo AB
ax.plot([A[0], B[0]], [A[1], B[1]], [A[2], B[2]], color='black', linestyle='--', label='Eixo de Rotação')

# Configurações do gráfico
ax.set_title("Curva Bézier Rotacionada em Torno da Reta AB")
ax.set_xlabel("X")
ax.set_ylabel("Y")
ax.set_zlabel("Z")
ax.legend()
plt.show()
