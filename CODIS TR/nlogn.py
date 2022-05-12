from easyinput import read
n = read(int)
llista = []

for i in range(n):
    x = read(int)
    llista.append(x)

llista_ordenada = sorted(llista)
print(llista_ordenada)



