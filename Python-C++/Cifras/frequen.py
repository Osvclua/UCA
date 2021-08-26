# acumula la ocurrencia de los caracteres en un dict
import sys
def acumula(linea,res):
    for letras in linea:
        res[letras] = res.get(letras, 0) + 1
    return
if len(sys.argv) <2:
    print("Uso: ", sys.argv[0]," <archivo>")
    exit(1)
#n_arch=input('Archivo? ')
n_arch=sys.argv[1]
archin=open(n_arch,'r')
res={}
while True:
    linea=archin.readline()
    if not linea:
        break
    acumula(linea,res)

res_ord=dict(sorted(res.items()))
print ("La cuenta es : \n"+  str(res_ord))
res_ord_val=dict(sorted(res.items(),key=lambda x:x[1],reverse=True))
print ("Por frecuencia: \n",str(res_ord_val))
