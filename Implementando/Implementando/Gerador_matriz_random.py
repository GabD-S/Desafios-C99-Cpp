import numpy as np
import subprocess

print("Digite o tamanho da matriz:")
tamanho = int(input())

with open("txt.txt", "w") as file:
    # Escrevendo o tamanho pra nao bugar o codigo
    file.write(f"{tamanho}\n")
    file.write(f"{tamanho}\n")
    # ------------------------
    for i in range(1, tamanho):
        for j in range(1, tamanho):
            valor = j * (np.random.random()*1000)
            file.write(f"{valor:.5f} ")
            file.write("\n")


print(
    f"Matriz de {tamanho} linhas e {tamanho} colunas gerado com sucesso só rodar o programa\n")

print(
    "Você quer que eu execute o programa automaticamente? Escreva [Y] pra sim ou [N] pra não")
sim_nao = input().lower()

if sim_nao == 'y':
    comando = "clang escalonando_gaus.c -o olamundo && ./olamundo < txt.txt"
    try:
        subprocess.run(comando, shell=True, check=True)
        print("O programa foi executado com sucesso.")
    except subprocess.CalledProcessError as e:
        print(f"Ocorreu um erro ao executar o programa: {e}")
else:
    print("O programa Python foi executado com sucesso, faça bom uso do programa de matriz")
