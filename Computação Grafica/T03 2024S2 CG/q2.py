import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np

# Definir os pontos de controle iniciais
control_points = np.array([[45, 10, 10], [100, 120, 100], [80, 80, 80]])

# Função para calcular a curva de Bézier de grau 2
def bezier_curve(t, P1, P2, P3):
    return (1 - t)**2 * P1 + 2 * (1 - t) * t * P2 + t**2 * P3

# Atualizar os pontos de controle
def update_curve():
    ax.cla()  # Limpar o gráfico
    t_values = np.linspace(0, 1, 100)
    curve = np.array([bezier_curve(t, *control_points) for t in t_values])

    # Desenhar a curva de Bézier
    ax.plot(curve[:, 0], curve[:, 1], curve[:, 2], color="blue", label="Curva Bézier")

    # Desenhar os pontos de controle
    ax.scatter(control_points[:, 0], control_points[:, 1], control_points[:, 2], color='red', s=100, label="Pontos de Controle")

    # Adicionar rótulos aos pontos de controle
    for i, point in enumerate(control_points):
        ax.text(point[0], point[1], point[2], f'P{i+1}', fontsize=12, color='black')

    # Configurações do gráfico
    ax.set_xlim([0, 150])
    ax.set_ylim([0, 150])
    ax.set_zlim([0, 150])
    ax.set_xlabel('X')
    ax.set_ylabel('Y')
    ax.set_zlabel('Z')
    ax.legend()
    fig.canvas.draw()

# Função para detectar se o mouse clicou em um ponto de controle
def on_click(event):
    if event.inaxes == ax:
        # Converter coordenadas 3D em 2D (para comparar com a posição do clique do mouse)
        x2d, y2d, _ = ax.proj_transform(control_points[:, 0], control_points[:, 1], control_points[:, 2], ax.get_proj())
        dist = np.sqrt((x2d - event.x)**2 + (y2d - event.y)**2)
        min_dist = np.min(dist)
        if min_dist < 30:  # Tolerância de clique
            global dragged_point
            dragged_point = np.argmin(dist)

# Função para mover o ponto de controle arrastado
def on_motion(event):
    if dragged_point is not None and event.inaxes == ax:
        # Converter coordenadas 2D de volta para 3D para mover o ponto de controle
        control_points[dragged_point, 0] = event.xdata
        control_points[dragged_point, 1] = event.ydata
        update_curve()

# Função para soltar o ponto de controle
def on_release(event):
    global dragged_point
    dragged_point = None

# Variável global para controlar o arrasto
dragged_point = None

# Configurar a figura 3D
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Desenhar a curva inicial
update_curve()

# Conectar os eventos de clique, arrasto e soltar
fig.canvas.mpl_connect('button_press_event', on_click)
fig.canvas.mpl_connect('motion_notify_event', on_motion)
fig.canvas.mpl_connect('button_release_event', on_release)

plt.show()