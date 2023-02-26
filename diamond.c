#include<stdio.h>
int main(){
    int i,j,k,p,l,q,m;
    int n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            printf(" ");
        }
        for(k=0; k<(2*i)+1; k++){
            printf("*");
        }
        printf("\n");
    }
        for(p=0; p<n; p++){
            for(l=0; l<p; l++){
                printf(" ");
            }
            for(q=0; q<(2*(n-p))-1; q++){
                printf("*");
            }
            printf("\n");
        }
    return 0;
}
