import matplotlib.pyplot as plt
import numpy as np

# Definindo os pontos A, B e C
x_A, y_A = 3, 2
x_B, y_B = 6, 8
x_C, y_C = -1, 7

# Função para calcular os pontos de um segmento de reta usando a equação paramétrica
def segmento_reta(x1, y1, x2, y2):
    t = np.linspace(0, 1, 100)
    x = (1 - t) * x1 + t * x2
    y = (1 - t) * y1 + t * y2
    return x, y

# Criando a figura e os eixos
fig, ax = plt.subplots()

# Definindo os limites dos eixos
ax.set_xlim(-10, 10)
ax.set_ylim(-10, 10)

# Plotando o segmento AB em vermelho e espessura 2
x_AB, y_AB = segmento_reta(x_A, y_A, x_B, y_B)
ax.plot(x_AB, y_AB, 'r-', linewidth=2, label='Segmento AB')

# Plotando o segmento BC em azul e espessura 3
x_BC, y_BC = segmento_reta(x_B, y_B, x_C, y_C)
ax.plot(x_BC, y_BC, 'b-', linewidth=3, label='Segmento BC')

# Plotando o segmento CA em verde e espessura 4
x_CA, y_CA = segmento_reta(x_C, y_C, x_A, y_A)
ax.plot(x_CA, y_CA, 'g-', linewidth=4, label='Segmento CA')

# Plotando os pontos A, B e C
ax.plot(x_A, y_A, 'go', markersize=8, label='Ponto A')  # 'go' = ponto verde
ax.plot(x_B, y_B, 'bo', markersize=8, label='Ponto B')  # 'bo' = ponto azul
ax.plot(x_C, y_C, 'ro', markersize=8, label='Ponto C')  # 'ro' = ponto vermelho

# Adicionando rótulos aos pontos
ax.text(x_A, y_A, 'A', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_B, y_B, 'B', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_C, y_C, 'C', fontsize=12, verticalalignment='bottom', horizontalalignment='right')

# Adicionando grade e legenda
ax.grid(True)
ax.legend()

# Exibindo o gráfico com os eixos
plt.axhline(0, color='black',linewidth=1)
plt.axvline(0, color='black',linewidth=1)
plt.gca().set_aspect('equal', adjustable='box')
plt.show()