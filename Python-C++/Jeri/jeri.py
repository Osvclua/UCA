vocal={"a","e","i","o","u"}
def jeri(s):
    res=""
    for c in s:
        res+=c
        if c in vocal:
            res+="p"+c
    return res

def desjeri(s):
    ls=len(s)
    res=""
    i=0
    while i <ls:
        res+=s[i]
        if s[i] in vocal:
            i+=2
        i+=1
    return res

while True:
    try:
        pal=input("Palabra a pasar a jerigonzo? ")
    except EOFError:
        break
    print (jeri(pal))
    print (desjeri(jeri(pal)))
print ()