dias = int(input())
guardachuvas = 0
house = 0
office = 0
emcasa = 0
noescritorio = 0
cas = []
of = []
while dias>=1:
        casa, trabalho = input().split(" ")
        of.append(trabalho) 
        cas.append(casa)
        dias-=1
for cont in range(0, len(cas), 1):
        if cas[cont]=='chuva':
                if house>0:
                        house-=1
                        office+=1
                elif house==0:
                        guardachuvas+=1
                        office+=1
                        emcasa+=1
        if of[cont]=='chuva':
                if office>0:
                        office-=1
                        house+=1
                elif office==0:
                        guardachuvas+=1
                        house+=1
                        noescritorio+=1
print(emcasa, noescritorio)




## João Ricardo Simplício Soares ##