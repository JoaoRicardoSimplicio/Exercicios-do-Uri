#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Turma {
    char Nome[100];
    int Pres;
    int Pos;

}Turma;

int main (){
    int teste, alunos, cont, i, a = 0, x = 0, ind = 0, pos, tot = 0;
    double aulastotais = 0, faltas = 0;
    scanf("%d", &teste);
    while (teste>=1){
        char Aux[100], Nome[100];
        int Auxpos;
        scanf("%d", &alunos);
        Turma Classe[alunos];
        char Saida[alunos][100];
        char Freq[100];
        for (cont=0; cont<alunos; cont++){
            scanf("%s", Nome);
            pos = cont;
            for (i = 0; i < a; i++){
                x = 0;
                while (ind = 0){
                    if (Nome[x]<Classe[i].Nome[x]){
                        strcpy(Aux, Classe[i].Nome);
                        strcpy(Classe[i].Nome, Nome);
                        strcpy(Nome, Aux);
                        Auxpos = Classe[i].Pos;
                        Classe[i].Pos = pos;
                        pos = Auxpos;
                        break;
                    }
                    else if (Nome[x]==Classe[i].Nome[x]){
                        x++;
                    }
                    else if (Nome[x]>Classe[i].Nome[x]){
                        break;
                    }
                }
            }
            strcpy(Classe[a].Nome, Nome);
            Classe[a].Pos = pos;
            a++;
        }
        for (cont=0; cont<alunos; cont++){
            scanf("%s", Freq);
            aulastotais = 0;
            faltas = 0;
            for (i=0; i<strlen(Freq); i++){
                if (Freq[i]!='M'){
                    aulastotais+=1;
                    if (Freq[i]=='P'){
                        faltas+=1;
                    }
                }
            }
            if (faltas/aulastotais<0.75){
                for (i=0; i<alunos; i++){
                    if (Classe[i].Pos==cont){
                        strcpy(Saida[tot], Classe[i].Nome);
                        tot++;
                        break;
                    }
                }
            }
        }
        if (tot==0){
            printf("\n");
        }
        else if (tot!=0){
            for (cont = 0; cont<tot; cont++){
                if (cont==tot-1){
                    printf("%s\n", Saida[cont]);
                }
                else if (cont!=tot-1){
                    printf("%s ", Saida[cont]);
                }
            }
        }
        teste-=1;
        tot = 0;
        x = 0;
        a = 0;
    }
return 0;
}



## João Ricardo Simplício Soares ##