import matplotlib.pyplot as plt
import numpy as np

# Definir os pontos de controle P1 e P2
P1 = np.array([45, 10])
P2 = np.array([100, 120])

# Função que gera a curva de Bézier linear
def bezier_linear(t, P1, P2):
    return (1 - t) * P1 + t * P2

# Criar uma série de valores de t de 0 a 1 para desenhar a reta
t_values = np.linspace(0, 1, 100)

# Gerar os pontos da reta de Bézier
bezier_points = np.array([bezier_linear(t, P1, P2) for t in t_values])

# Configurar a figura e os eixos
plt.figure()
plt.plot(bezier_points[:, 0], bezier_points[:, 1], label="Reta Bézier", color="blue")

# Plotar os pontos de controle
plt.plot(P1[0], P1[1], 'ro', label='P1 (45, 10)')
plt.plot(P2[0], P2[1], 'go', label='P2 (100, 120)')

# Adicionar o rótulo dos pontos de controle
plt.text(P1[0], P1[1], 'P1', fontsize=12, color='red', ha='right')
plt.text(P2[0], P2[1], 'P2', fontsize=12, color='green', ha='left')

# Configurações dos eixos
plt.xlim(30, 110)
plt.ylim(0, 130)
plt.grid(True)
plt.legend()
plt.title("Reta usando equação paramétrica de Bézier (P1, P2)")
plt.gca().set_aspect('equal', adjustable='box')

# Mostrar a figura
plt.show()