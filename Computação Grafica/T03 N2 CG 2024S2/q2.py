import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Definição dos valores de luminosidade
luminosity_levels = [0.24, 0.50, 0.75]

# Resolução para a malha de pontos
resolution = 100
R, G = np.meshgrid(np.linspace(0, 1, resolution), np.linspace(0, 1, resolution))


# Função para calcular B dado L, R e G
def calculate_B(L, R, G):
    B = (L - 0.30 * R - 0.59 * G) / 0.11
    return B


# Criar o cubo RGB e os planos de luminosidade
fig = plt.figure(figsize=(10, 8))
ax = fig.add_subplot(111, projection='3d')
ax.set_title("Planos de Luminosidade no Cubo RGB", fontsize=14)
ax.set_xlabel("R", fontsize=12)
ax.set_ylabel("G", fontsize=12)
ax.set_zlabel("B", fontsize=12)

# Plotar cada plano correspondente a um nível de luminosidade
colors = ['red', 'green', 'blue']
for L, color in zip(luminosity_levels, colors):
    B = calculate_B(L, R, G)
    # Filtrar valores válidos dentro do cubo RGB (0 <= B <= 1)
    mask = (B >= 0) & (B <= 1)
    R_valid = np.where(mask, R, np.nan)  # Substituir valores inválidos por NaN
    G_valid = np.where(mask, G, np.nan)  # Substituir valores inválidos por NaN
    B_valid = np.where(mask, B, np.nan)  # Substituir valores inválidos por NaN

    ax.plot_surface(R_valid, G_valid, B_valid, color=color, alpha=0.6, label=f'L = {L:.2f}')

# Limites do cubo RGB
ax.set_xlim(0, 1)
ax.set_ylim(0, 1)
ax.set_zlim(0, 1)

# Adicionar legenda
ax.text2D(0.05, 0.95, "Planos de Luminosidade", transform=ax.transAxes, fontsize=12)
plt.show()
