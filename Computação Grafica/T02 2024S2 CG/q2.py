import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d.art3d import Poly3DCollection

# Definir os vértices de um cubo com um vértice na origem
vertices = np.array([
    [0, 0, 0],  # Vértice na origem
    [1, 0, 0],  # Vértices na face x=1
    [1, 1, 0],
    [0, 1, 0],
    [0, 0, 1],  # Vértices na face x=0, z=1
    [1, 0, 1],
    [1, 1, 1],
    [0, 1, 1]
])

# Definir as faces do cubo (listas de índices dos vértices)
faces = [[0, 1, 2, 3], [0, 1, 5, 4], [0, 3, 7, 4], [1, 2, 6, 5], [2, 3, 7, 6], [4, 5, 6, 7]]

# Definir a matriz de cisalhamento no plano XZ (fator de cisalhamento = 0.5)
s = 0.5
shear_matrix = np.array([
    [1, 0, s, 0],
    [0, 1, 0, 0],
    [0, 0, 1, 0],
    [0, 0, 0, 1]
])

# Função para aplicar a transformação de cisalhamento aos vértices
def aplicar_cisalhamento(vertices, shear_matrix):
    # Converter para coordenadas homogêneas (adicionando uma coluna de 1s)
    vertices_homogeneos = np.hstack([vertices, np.ones((vertices.shape[0], 1))])
    # Aplicar a matriz de cisalhamento
    vertices_cisalhados_homogeneos = np.dot(vertices_homogeneos, shear_matrix.T)
    # Retornar as coordenadas 3D (remover a última coluna homogênea)
    return vertices_cisalhados_homogeneos[:, :3]

# Aplicar o cisalhamento aos vértices do cubo
vertices_cisalhados = aplicar_cisalhamento(vertices, shear_matrix)

# Função para desenhar o cubo
def desenhar_cubo(ax, vertices, color, alpha=1.0):
    for face in faces:
        quad = [vertices[vertice] for vertice in face]
        ax.add_collection3d(Poly3DCollection([quad], facecolors=color, linewidths=1, edgecolors='k', alpha=alpha))

# Criar a figura e os eixos 3D
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Desenhar o cubo original
desenhar_cubo(ax, vertices, color='cyan', alpha=0.7)

# Desenhar o cubo cisalhado
desenhar_cubo(ax, vertices_cisalhados, color='magenta', alpha=0.5)

# Configurações dos eixos
ax.set_xlabel('Eixo X')
ax.set_ylabel('Eixo Y')
ax.set_zlabel('Eixo Z')
ax.set_xlim([-1, 3])
ax.set_ylim([-1, 2])
ax.set_zlim([-1, 2])
ax.set_title('Cubo Original e Cisalhado (Plano XZ)')

# Exibir o gráfico
plt.show()