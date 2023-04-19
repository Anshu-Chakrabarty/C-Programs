int main(){
    int a[10];
    int b;
    int i;
    int j;
    int n;
    
    printf("enter length");
    scanf("%d",&n);
    
    printf("enter the elements");
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter your search");
    scanf("%d",&j);
    
    for(int i=0;i<n;i++){
        if(a[i]==j){
            printf("%d",i);
        }
    }


return 0;
}

