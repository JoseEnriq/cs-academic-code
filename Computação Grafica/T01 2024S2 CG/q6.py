import matplotlib.pyplot as plt
import numpy as np

# Definindo os pontos A, B e C originais
x_A, y_A = 3, 2
x_B, y_B = 6, 8
x_C, y_C = -1, 7

# Matriz de escala S = [[3, 0, 0, 0], [0, 4, 0, 0], [0, 0, 0, 0], [0, 0, 0, 1]]
S = np.array([
    [3, 0, 0, 0],
    [0, 4, 0, 0],
    [0, 0, 0, 0],
    [0, 0, 0, 1]
])

# Função para aplicar a transformação de escala a um ponto
def aplica_escala(ponto):
    # Converter para coordenadas homogêneas
    ponto_homogeneo = np.array([ponto[0], ponto[1], 0, 1])
    # Multiplicar pelo matriz de escala
    ponto_transformado = np.dot(S, ponto_homogeneo)
    # Retornar o ponto transformado (ignorar as coordenadas extra)
    return ponto_transformado[0], ponto_transformado[1]

# Aplicando a escala aos pontos A, B e C
x_A_s, y_A_s = aplica_escala((x_A, y_A))
x_B_s, y_B_s = aplica_escala((x_B, y_B))
x_C_s, y_C_s = aplica_escala((x_C, y_C))

# Função para calcular os pontos de um segmento de reta usando a equação paramétrica
def segmento_reta(x1, y1, x2, y2):
    t = np.linspace(0, 1, 100)
    x = (1 - t) * x1 + t * x2
    y = (1 - t) * y1 + t * y2
    return x, y

# Criando a figura e os eixos
fig, ax = plt.subplots()

# Definindo os limites dos eixos
ax.set_xlim(-10, 30)
ax.set_ylim(-10, 40)

# Plotando o triângulo original
x_AB, y_AB = segmento_reta(x_A, y_A, x_B, y_B)
x_BC, y_BC = segmento_reta(x_B, y_B, x_C, y_C)
x_CA, y_CA = segmento_reta(x_C, y_C, x_A, y_A)
ax.plot(x_AB, y_AB, 'r-', linewidth=2, label='Segmento AB (original)')
ax.plot(x_BC, y_BC, 'b-', linewidth=3, label='Segmento BC (original)')
ax.plot(x_CA, y_CA, 'g-', linewidth=4, label='Segmento CA (original)')

# Plotando o triângulo escalado
x_AB_s, y_AB_s = segmento_reta(x_A_s, y_A_s, x_B_s, y_B_s)
x_BC_s, y_BC_s = segmento_reta(x_B_s, y_B_s, x_C_s, y_C_s)
x_CA_s, y_CA_s = segmento_reta(x_C_s, y_C_s, x_A_s, y_A_s)
ax.plot(x_AB_s, y_AB_s, 'r--', linewidth=2, label='Segmento AB (escalado)')
ax.plot(x_BC_s, y_BC_s, 'b--', linewidth=3, label='Segmento BC (escalado)')
ax.plot(x_CA_s, y_CA_s, 'g--', linewidth=4, label='Segmento CA (escalado)')

# Plotando os pontos originais e escalados
ax.plot(x_A, y_A, 'go', markersize=8, label='Ponto A (original)')
ax.plot(x_B, y_B, 'bo', markersize=8, label='Ponto B (original)')
ax.plot(x_C, y_C, 'ro', markersize=8, label='Ponto C (original)')

ax.plot(x_A_s, y_A_s, 'gx', markersize=8, label='Ponto A (escalado)')
ax.plot(x_B_s, y_B_s, 'bx', markersize=8, label='Ponto B (escalado)')
ax.plot(x_C_s, y_C_s, 'rx', markersize=8, label='Ponto C (escalado)')

# Adicionando rótulos aos pontos
ax.text(x_A, y_A, 'A', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_B, y_B, 'B', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_C, y_C, 'C', fontsize=12, verticalalignment='bottom', horizontalalignment='right')

ax.text(x_A_s, y_A_s, 'A\'', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_B_s, y_B_s, 'B\'', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_C_s, y_C_s, 'C\'', fontsize=12, verticalalignment='bottom', horizontalalignment='right')

# Adicionando grade e legenda
ax.grid(True)
ax.legend(fontsize='x-small')

# Exibindo o gráfico com os eixos
plt.axhline(0, color='black',linewidth=1)
plt.axvline(0, color='black',linewidth=1)
plt.gca().set_aspect('equal', adjustable='box')
plt.show()