import matplotlib.pyplot as plt
import numpy as np

# Definindo os pontos A e B
x_A, y_A = 3, 2
x_B, y_B = 6, 8

# Criando o parâmetro t variando de 0 a 1
t = np.linspace(0, 1, 100)

# Calculando os pontos da reta usando a equação paramétrica
x = (1 - t) * x_A + t * x_B
y = (1 - t) * y_A + t * y_B

# Criando a figura e os eixos
fig, ax = plt.subplots()

# Definindo os limites dos eixos
ax.set_xlim(-10, 10)
ax.set_ylim(-10, 10)

# Plotando o segmento de reta AB
ax.plot(x, y, 'r-', label='Segmento AB')  # 'r-' = linha vermelha

# Plotando os pontos A e B
ax.plot(x_A, y_A, 'go', markersize=8, label='Ponto A')  # 'go' = ponto verde
ax.plot(x_B, y_B, 'b+', markersize=12, label='Ponto B')  # 'b+' = ponto azul

# Adicionando rótulos aos pontos
ax.text(x_A, y_A, 'A', fontsize=12, verticalalignment='bottom', horizontalalignment='right')
ax.text(x_B, y_B, 'B', fontsize=12, verticalalignment='bottom', horizontalalignment='right')

# Adicionando grade e legenda
ax.grid(True)
ax.legend()

# Exibindo o gráfico com os eixos
plt.axhline(0, color='black',linewidth=1)
plt.axvline(0, color='black',linewidth=1)
plt.gca().set_aspect('equal', adjustable='box')
plt.show()