#include<stdio.h>
void ehPA(int n,int vet[n]){
    int i, c=0;
    for(i=0;i<n;i++){
        if(n==1){
                    printf("NAO");
            c++;
        }
        if(i+1<n){
        if((vet[1]-vet[0])!= vet[i+1]-vet[i]){
        printf("NAO");
    c++;}}
    }
    if(c==0)
    printf("RESP:%d", vet[1]-vet[0]);

}

int main(){
    int i,n;
    scanf("%d",&n);
    
    int vet[n];
    for(i=0; i<n;i++){
        scanf("%d", &vet[i]);
    }
    ehPA(n, vet);


    return 0;
}