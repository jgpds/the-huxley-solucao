#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, k, m, j, i, aux=0, aux2=0, cont=0, cont2=0;
    scanf("%d %d", &a, &b);
    int A[a], B[b];
    scanf("%d %d", &k, &m);
    for(i=0; i<a; i++){
        scanf("%d", &A[i]);
    }
     for(i=0; i<b; i++){
        scanf("%d", &B[i]);
    }
for(i = 0; i < a - 1; i++){
		for(j = 0; j < a - 1; j++){
			if(A[j] > A[j+1]){
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
		}
	}
for(i = 0; i < b - 1; i++){
		for(j = 0; j < b - 1; j++){
			if(B[j] < B[j+1]){
				aux2 = B[j];
				B[j] = B[j+1];
				B[j+1] = aux2;
			}
		}
	}
for(i=0; i<m; i++){
    for(j=0; j<k; j++){
        if(A[j]<B[i]){
            cont++;
        }
    }
            if(cont>=k){
            cont2++;
        }
        cont=0;
}
if(cont2>=m){
    printf("YES");
}
else{
    printf("NO");
}
	return 0;
}
