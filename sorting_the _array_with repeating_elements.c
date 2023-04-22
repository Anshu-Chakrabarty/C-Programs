#include <stdio.h>

int sort(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if (a[i]>a[j])
            {
                int temp;
                temp= a[j];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
                for(int i=0; i<n; i++){
                    printf("%d",a[i]);
                }
}
int main(){
    int a[]= {0,1,2,0,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    int result = sort(a,n);
}