#include<stdio.h>
int main(){
    int i;
    char c[8];
    
    printf("palavra: ");
    scanf("%c %c %c %c %c %c %c %c ", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5], &c[6], &c[7]);
    
    for(i=0;i<8;i++){
        switch(v[i])
                case 'a'||'b'||'c':
                        printf("%i", 2);
                        break;
                case 'd'||'e'||'f':
                    printf("%i", 3);
                    break;
    }
    
    return 0;
}
