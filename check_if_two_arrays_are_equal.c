#include <stdio.h>
int check(int A[], int B[], int N){

for ( int i = 0; i <N; i++)
{   
        if (A[i]!=B[i])
        {
            return 0;
        }else {
            return 1;
        }
        
    
}

}
int main(){
    int A[]= {1,2,4,5,};
    int B[]= {1,2,4,5};
    int N= sizeof(A)/sizeof(A[0]);
    int N= sizeof(B)/sizeof(B[0]);

    int result= chechk(A,B,N);

    if (result==1)
    {
        printf("its equal");
    }else{
        printf("not equal");
    }
    
}