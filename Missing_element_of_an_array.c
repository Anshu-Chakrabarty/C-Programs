#include <stdio.h>
int missing(int a[],int n){
    for( int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if (a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
    }
    for (int  i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int t= a[i];
        int k = t+1;
        if(a[i]!=a[i+1]){
            printf("%d",k);
        }
    }
    
    
}
int main(){
    int a[]= {1,2,4,5,6,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int result = missing(a,n);
}