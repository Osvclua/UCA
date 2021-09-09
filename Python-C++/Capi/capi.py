# funcion capicua de cuaquier cosa
import os

def capi(i):
    ist=str(i)
    jst=str(i)[::-1]
    return ist==jst

print ("proceso", os.getpid())
x = input("Ingrese un entero: ")
ix=int(x)
print (ix, type(ix))
print (capi(ix))