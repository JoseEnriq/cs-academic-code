import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import math  # Importação do módulo math para usar factorial

# Inicializar pontos de controle
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


# Função para desenhar a curva e os pontos
def update_plot():
    ax.cla()
    ax.set_title("Curva Bézier 3D com Arrasto")
    ax.set_xlim(0, 120)
    ax.set_ylim(0, 120)
    ax.set_zlim(0, 120)
    ax.set_xlabel('X')
    ax.set_ylabel('Y')
    ax.set_zlabel('Z')

    # Desenhar a curva
    t_values = np.linspace(0, 1, 100)
    bezier_curve = bezier_curve_3d(control_points, t_values)
    ax.plot(bezier_curve[:, 0], bezier_curve[:, 1], bezier_curve[:, 2], color='blue', label='Curva Bézier')

    # Desenhar os pontos de controle
    ax.scatter(control_points[:, 0], control_points[:, 1], control_points[:, 2], color='red', s=50,
               label='Pontos de Controle')
    for i, point in enumerate(control_points):
        ax.text(point[0], point[1], point[2], f"P{i}", color="black")
    ax.legend()


# Função de arrasto dos pontos
def on_press(event):
    if event.inaxes == ax:
        x, y = event.xdata, event.ydata
        for i, point in enumerate(control_points):
            dist = np.linalg.norm([point[0] - x, point[1] - y])
            if dist < 5:  # Tolerância para selecionar o ponto
                selected_point[0] = i
                break


def on_motion(event):
    if selected_point[0] is not None and event.inaxes == ax:
        i = selected_point[0]
        control_points[i, 0] = event.xdata
        control_points[i, 1] = event.ydata
        update_plot()
        plt.draw()


def on_release(event):
    selected_point[0] = None


# Inicializar figura
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
selected_point = [None]

# Conectar eventos
fig.canvas.mpl_connect('button_press_event', on_press)
fig.canvas.mpl_connect('motion_notify_event', on_motion)
fig.canvas.mpl_connect('button_release_event', on_release)

# Atualizar o gráfico
update_plot()
plt.show()
