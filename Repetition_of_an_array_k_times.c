#include <stdio.h>
int occur(int a[], int n, int k){
    for (int i = 0; i < n; i++)
    {
        int count =0;
        for (int j = 0; i < n; j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }
            if (count==k)
            {
                return a[i];
            }
            
            
        }
        
    }
  return 0;  
}
int main(){
    int a[]= {1,2,3,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int k=2;
    int result = occur(a,n,k);

}