#include<stdio.h>>
    void subarray (int arr[],int n,int S){
    int i,j;
        for(i=0;i<=n;i++){
          int  sum= arr[i];
          if (sum==S)
          {
            printf("the index of he number is %d", i);
            return;
          }   
    else{
       for(j=i+1;j<=n;j++){
        sum+=  arr[j];
        if (sum==S)
        {
         printf("The index of the numbers are %d"
         "and %d",
          i,j);
          return;
        }
        }
        
       }
        }
     printf("Subarrayas not found");
     return;
        }
    

int main(){
int arr[]= { 1, 2, 3, 4, 5,14,15};
   int n= sizeof(arr)/sizeof(arr[0]);
   int S= 10;
    subarray(arr, n, S);

   return 0;


}
