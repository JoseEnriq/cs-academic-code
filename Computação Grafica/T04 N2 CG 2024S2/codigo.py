import matplotlib.pyplot as plt
import matplotlib.patches as patches

# Criação da figura e dos eixos
fig, ax = plt.subplots()

# Fundo da casa (retângulo amarelo)
house_body = patches.Rectangle((-4, -4), 8, 6, facecolor='orange', edgecolor='black')
ax.add_patch(house_body)

# Porta (retângulo azul)
door = patches.Rectangle((-3, -4), 2, 3, facecolor='blue', edgecolor='black')
ax.add_patch(door)

# Janela (retângulo verde)
window = patches.Rectangle((1, -2), 2, 2, facecolor='green', edgecolor='black')
ax.add_patch(window)

# Telhado (triângulo vermelho)
roof = patches.Polygon([(-4, 2), (4, 2), (0, 5)], closed=True, facecolor='red', edgecolor='black')
ax.add_patch(roof)

# Ajuste dos eixos
ax.set_xlim(-6, 6)
ax.set_ylim(-6, 6)
ax.set_aspect('equal', adjustable='box')

# Adição de linhas da grade
ax.axhline(0, color='black', linewidth=1)
ax.axvline(0, color='black', linewidth=1)
ax.set_xticks(range(-6, 7))
ax.set_yticks(range(-6, 7))
ax.grid(True, which='both', linestyle='--', linewidth=0.5)

# Exibição da figura
plt.show()