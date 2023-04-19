#include <stdio.h>

int binary(int arr[],int x, int low, int high){
    int mid= low + (high-low)/2;

    if (x==mid)
    {
        printf("its found in index %d",x);
    }else if (x>=mid)
    {
        low=mid+1;
    }else{
        high=mid-1;
    }
    
   return -1; 
}
 int main()
{
  int arr[]= {12, 45, 74, 85, 96};
  int x= 74;
  int n=5;
  int result= binary(arr,x,0,n-1);
  if (result!= -1)
  {
    printf("The search is present at %d",result);
  }else{
    printf("The search is not present");
  }
  
}