import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection

# Definir os vértices de um tetraedro
vertices = np.array([
    [1, 1, 1],   # Vértice no topo
    [-1, -1, 1], # Vértice da base
    [1, -1, 1],  # Vértice da base
    [-1, 1, 1]   # Vértice da base
])

# Definir as faces do tetraedro (listas de índices de vértices)
faces = [[0, 1, 2], [0, 1, 3], [0, 2, 3], [1, 2, 3]]

# Aplicar a reflexão em relação à origem, invertendo as coordenadas
vertices_reflexao = -vertices

# Função para desenhar um tetraedro
def desenhar_tetraedro(ax, vertices, color, alpha=1.0):
    # Desenha as faces do tetraedro
    for face in faces:
        tri = [vertices[vertice] for vertice in face]
        ax.add_collection3d(Poly3DCollection([tri], facecolors=color, linewidths=1, edgecolors='k', alpha=alpha))

# Criar a figura e eixos 3D
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Desenhar o tetraedro original
desenhar_tetraedro(ax, vertices, color='cyan', alpha=0.7)

# Desenhar o tetraedro refletido na origem
desenhar_tetraedro(ax, vertices_reflexao, color='magenta', alpha=0.5)

# Configurações dos eixos
ax.set_xlabel('X axis')
ax.set_ylabel('Y axis')
ax.set_zlabel('Z axis')
ax.set_xlim([-2, 2])
ax.set_ylim([-2, 2])
ax.set_zlim([-2, 2])
ax.set_title('Tetraedro e sua reflexão')

# Exibir o gráfico
plt.show()
