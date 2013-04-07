#include<stdio.h>
int main(){
    int i, n, p1, p2, p3, aprovados=0, reprovados=0;
    float media_aluno, media_classe;
    
    printf("Informe a quantidade de alunos: ");
    scanf("%i", &n);
    
    for(i=1;i<=n;i++){
        printf("P1 do aluno %i: ", i);
        scanf("%i", &p1);
        printf("P2 do aluno %i: ", i);
        scanf("%i", &p2);
        printf("P3 do aluno %i: ", i);
        scanf("%i", &p3);
        
        media_aluno = (float) (p1+p2+p3)/3;
        printf("Média do aluno %i: %f\n", i, media_aluno);
        if(media_aluno >= 5)
            aprovados++;
        else
            reprovados++;
        media_classe += media_aluno;
    }
    media_classe = media_classe/n;
    printf("Media da classe: %f\nAprovados: %i\nReprovados: %i\n", media_classe, aprovados, reprovados);
    
    return 0;
}
