import matplotlib.pyplot as plt

# Definindo os pontos A e B
x_A, y_A = 3, 2
x_B, y_B = 6, 8

# Criando a figura e os eixos
fig, ax = plt.subplots()

# Definindo os limites dos eixos
ax.set_xlim(-10, 10)
ax.set_ylim(-10, 10)

# Plotando o ponto A com caractere 'o' (verde) e o ponto B com caractere '+' (azul)
ax.plot(x_A, y_A, 'go', markersize=8, label='Ponto A')  # 'go' = green (verde) 'o'
ax.plot(x_B, y_B, 'b+', markersize=12, label='Ponto B')  # 'b+' = blue (azul) '+'

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