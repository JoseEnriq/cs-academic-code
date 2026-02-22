import matplotlib.pyplot as plt
import numpy as np

# Definindo os pontos A, B e C originais
x_A, y_A = 3, 2
x_B, y_B = 6, 8
x_C, y_C = -1, 7

# Matriz de translação T = [[1, 0, 0, 3], [0, 1, 0, 5], [0, 0, 0, 0], [0, 0, 0, 1]]
T = np.array([
    [1, 0, 0, 3],
    [0, 1, 0, 5],
    [0, 0, 0, 0],
    [0, 0, 0, 1]
])

# Função para aplicar translação a um ponto
def aplica_translacao(ponto):
    # Converter para coordenadas homogêneas
    ponto_homogeneo = np.array([ponto[0], ponto[1], 0, 1])
    # Multiplicar pelo matriz de translação
    ponto_transformado = np.dot(T, ponto_homogeneo)
    # Retornar o ponto transformado (ignorar as coordenadas extra)
    return ponto_transformado[0], ponto_transformado[1]

# Aplicando a translação aos pontos A, B e C
x_A_t, y_A_t = aplica_translacao((x_A, y_A))
x_B_t, y_B_t = aplica_translacao((x_B, y_B))
x_C_t, y_C_t = aplica_translacao((x_C, y_C))

# Função para calcular os pontos de um segmento de reta usando a equação paramétrica
def segmento_reta(x1, y1, x2, y2):
    t = np.linspace(0, 1, 100)
    x = (1 - t) * x1 + t * x2
    y = (1 - t) * y1 + t * y2
    return x, y

# Criando a figura e os eixos
fig, ax = plt.subplots()

# Definindo os limites dos eixos
ax.set_xlim(-10, 15)
ax.set_ylim(-10, 15)

# Plotando o triângulo original
x_AB, y_AB = segmento_reta(x_A, y_A, x_B, y_B)
x_BC, y_BC = segmento_reta(x_B, y_B, x_C, y_C)
x_CA, y_CA = segmento_reta(x_C, y_C, x_A, y_A)
ax.plot(x_AB, y_AB, 'r-', linewidth=2, label='Segmento AB (original)')
ax.plot(x_BC, y_BC, 'b-', linewidth=3, label='Segmento BC (original)')
ax.plot(x_CA, y_CA, 'g-', linewidth=4, label='Segmento CA (original)')

# Plotando o triângulo transladado
x_AB_t, y_AB_t = segmento_reta(x_A_t, y_A_t, x_B_t, y_B_t)
x_BC_t, y_BC_t = segmento_reta(x_B_t, y_B_t, x_C_t, y_C_t)
x_CA_t, y_CA_t = segmento_reta(x_C_t, y_C_t, x_A_t, y_A_t)
ax.plot(x_AB_t, y_AB_t, 'r--', linewidth=2, label='Segmento AB (transladado)')
ax.plot(x_BC_t, y_BC_t, 'b--', linewidth=3, label='Segmento BC (transladado)')
ax.plot(x_CA_t, y_CA_t, 'g--', linewidth=4, label='Segmento CA (transladado)')

# Plotando os pontos originais e transladados
ax.plot(x_A, y_A, 'go', markersize=8, label='Ponto A (original)')
ax.plot(x_B, y_B, 'bo', markersize=8, label='Ponto B (original)')
ax.plot(x_C, y_C, 'ro', markersize=8, label='Ponto C (original)')

ax.plot(x_A_t, y_A_t, 'gx', markersize=8, label='Ponto A (transladado)')
ax.plot(x_B_t, y_B_t, 'bx', markersize=8, label='Ponto B (transladado)')
ax.plot(x_C_t, y_C_t, 'rx', markersize=8, label='Ponto C (transladado)')

# Adicionando rótulos aos pontos
ax.text(x_A, y_A, 'A', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_B, y_B, 'B', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_C, y_C, 'C', fontsize=12, verticalalignment='bottom', horizontalalignment='right')

ax.text(x_A_t, y_A_t, 'A\'', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_B_t, y_B_t, 'B\'', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_C_t, y_C_t, 'C\'', fontsize=12, verticalalignment='bottom', horizontalalignment='right')

# Adicionando grade e legenda
ax.grid(True)
ax.legend()

# Exibindo o gráfico com os eixos
plt.axhline(0, color='black',linewidth=1)
plt.axvline(0, color='black',linewidth=1)
plt.gca().set_aspect('equal', adjustable='box')
plt.show()