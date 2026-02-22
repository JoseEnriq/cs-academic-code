import matplotlib.pyplot as plt

# Definindo o ponto A
x_A, y_A = 5, 5

# Criando a figura e os eixos
fig, ax = plt.subplots()

# Definindo os limites dos eixos
ax.set_xlim(-10, 10)
ax.set_ylim(-10, 10)

# Plotando o ponto A com caractere 'o', cor vermelha e tamanho 8
ax.plot(x_A, y_A, 'ro', markersize=8)

# Adicionando rótulo ao ponto A
ax.text(x_A, y_A, 'A', fontsize=12, verticalalignment='bottom', horizontalalignment='right')

# Adicionando grade
ax.grid(True)

# Exibindo o gráfico
plt.axhline(0, color='black',linewidth=1)
plt.axvline(0, color='black',linewidth=1)
plt.gca().set_aspect('equal', adjustable='box')
plt.show()