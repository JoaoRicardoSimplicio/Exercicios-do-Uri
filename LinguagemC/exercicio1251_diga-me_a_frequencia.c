#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Letras {
    int letra;
    int freq;

}Letras;


int main (){
    int cont, i, x=0, l, tot = 0, y, auxletra, auxfreq, rep = 0, vez = 0;
    char texto[1000];
    while (scanf(" %[^\n]", texto)!=EOF){
        if (vez!=0){
            printf("\n");
        }
        Letras Atual[strlen(texto)];
        for (cont=0; cont<strlen(texto); cont++){
            rep = 0;
            l = texto[cont];
            tot = 0;
            for (i=0; i<strlen(texto); i++){
                if (texto[cont]==texto[i]){
                    tot+=1;
                }
            }
            for (y=0; y<x; y++){
                if (Atual[y].letra!=l){
                    if (Atual[y].freq>tot){
                        auxfreq = Atual[y].freq;
                        auxletra = Atual[y].letra;
                        Atual[y].freq = tot;
                        Atual[y].letra = l;
                        tot = auxfreq;
                        l = auxletra;
                        rep = 0;
                    }
                    else if (Atual[y].freq==tot){
                        if (Atual[y].letra<l){
                            auxfreq = Atual[y].freq;
                            auxletra = Atual[y].letra;
                            Atual[y].freq = tot;
                            Atual[y].letra = l;
                            tot = auxfreq;
                            l = auxletra;
                            rep = 0;
                        }
                    }
                }
                else if (Atual[y].letra==l){
                    rep = 1;
                    break;
                }
            }
            if (rep==0){
                Atual[x].freq = tot;
                Atual[x].letra = l;
                x++;
            }
        }
        for (cont=0; cont<x; cont++){
            printf("%d %d\n", Atual[cont].letra, Atual[cont].freq);
        }
    x = 0;
    tot = 0;
    rep = 0;
    vez = 1;
    }
return 0;
}



## João Ricardo Simplício Soares ##

