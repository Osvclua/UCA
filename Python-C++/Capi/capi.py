# funcion capicua de cuaquier cosa
def capi(i):
    ist=str(i)
    jst=str(i)[::-1]
    return ist==jst

x = input("Ingrese un entero: ")
ix=int(x)
print (ix, type(ix))
print (capi(ix))