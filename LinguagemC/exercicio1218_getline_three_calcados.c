#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char Par[3], Estoque[1000];
    int cont, vez = 1, pares = 0, fem = 0, masc = 0;
    while(scanf("%s", Par)!=EOF){
        if (vez>1){
            printf("\n");
        }
        scanf(" %[^\n]", Estoque);
        for (cont=0; cont<strlen(Estoque); cont+=5){
            if (Estoque[cont]==Par[0]){
                if (Estoque[cont+1]==Par[1]){
                    pares+=1;
                    if (Estoque[cont+3]=='F'){
                        fem+=1;
                    }
                    else if (Estoque[cont+3]=='M'){
                        masc+=1;
                    }
                }
            }
        }
        printf("Caso %d:\n", vez);
        printf("Pares Iguais: %d\n", pares);
        printf("F: %d\n", fem);
        printf("M: %d\n", masc);
        vez+=1;
        masc = 0;
        fem = 0;
        pares = 0;
    }
return 0;
}

## João Ricardo Simplício Soares ##

