narch="casorio.txt"
arch=open(narch,"r")
res={}
while True:
    linea=arch.readline()
    if not linea:
        break
    print (linea,'\n')
    
# for letras in linea:
#         res[letras] = res.get(letras, 0) + 1
# linea=arch.readline().replace('\n','')
# print (linea,'\n')
# for letras in linea:
#         res[letras] = res.get(letras, 0) + 1
# print ("Cuenta \n",str(res))