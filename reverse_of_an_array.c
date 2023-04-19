#include <stdio.h>
  
  int reverse(int arr[],int n){
    for(int i=n-1;i>0;i--){
        printf("%d",arr[i]);
    }
  }
  int main(){
    int arr[]= {14, 15, 85, 74, 84};
    int n= 5;
    int result= reverse(arr[],n);
    return 0;
  }