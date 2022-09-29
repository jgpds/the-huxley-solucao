#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int j=0, i=0, n, num=0, cont=0;
 scanf("%d", &n);
if(n>=2){
    printf("2");
    printf("\n3\n");
}
else if(n=1){
    printf("2\n");
}
for(i=5; num<n-2; i+=2){
    for(j=3; j*j<=i; j+=2){
        if(i%j==0 && j!=1 && j!=i){
            cont++;
            break;
        }
    }
            if(cont==0 && i!=1){
            printf("%d\n", i);
            num++;
        }
cont=0;}
	return 0;
}
