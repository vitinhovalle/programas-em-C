#include <stdio.h>
int main(){
    int a, b, c = 1, quadrado[3][3] = {{0,0,0},{0,0,0},{0,0,0}}, x, y;
    do{
        printf("Digite as coordenadas do 1: ");
        scanf("%d %d", &x, &y);
        if ((x >= 1 && x <= 3)&&(y >= 1 && y <= 3)){
            a = x; 
            b = y;
        }
        else
            puts("Coordenadas invalidas, tente novamente.");
    } while ((x < 1 || x > 3)||(y < 1 || y > 3));
    x -= 1;
    y -= 1;
    while (c < 10){
        if (quadrado[x][y] == 0){
            quadrado[x][y] = c;
            x = (x + 1) % 3;
            y = (y + 2) % 3;
            c++;
        }
        else{
            x = (x + 1) % 3;
            y = (y + 1) % 3;
        }
    }
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
            printf("%d ", quadrado[i][j]); 
       }
       printf("\n"); 
    }
    if ((a - b == 1) || (a - b == -1))
        puts("Quadrado magico!!");
    else
        puts("Nao e quadrado magico");
    return 0;
}
