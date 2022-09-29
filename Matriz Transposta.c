#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, linha, coluna, matriz[1001][1001]={0}, transposta[1001][1001]={0};
scanf("%d %d", &linha, &coluna);
for(i=0; i<linha; i++){
    for(j=0; j<coluna; j++){
        scanf("%d", &matriz[i][j]);
        transposta[j][i]=matriz[i][j];
    }
}
for(i=0; i<coluna; i++){
        printf("| ");
    for(j=0; j<linha; j++){
        printf("%d ", transposta[i][j]);
    }
        printf("|\n");
}
return 0;
}
