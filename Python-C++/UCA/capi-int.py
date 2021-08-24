# funcion capicua de cuaquier cosa
def capi(i,j):
    ist=str(i)
    jst=str(j)
    return ist==jst[::-1]

x, y = input("Ingrese 2 enteros: ").split()
print (x,y)
print (capi(int(x),int(y)))