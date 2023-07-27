#include<stdio.h>
#include<math.h>
int main(){
int n;

    scanf("%d", &n);
    
    if(n-pow(2,7)>=0){       
    printf("1");
    n-=pow(2,7);
    }else
    printf("0");
    if(n-pow(2,6)>=0){       
    printf("1");
    n-=pow(2,6);
    }else
    printf("0");
    if(n-pow(2,5)>=0){       
    printf("1");
    n-=pow(2,5);
    }else
    printf("0");
    if(n-pow(2,4)>=0){       
    printf("1");
    n-=pow(2,4);
    }else
    printf("0");
    if(n-pow(2,3)>=0){       
    printf("1");
    n-=pow(2,3);
    }else
    printf("0");
    if(n-pow(2,2)>=0){       
    printf("1");
    n-=pow(2,2);
    }else
    printf("0");
    if(n-pow(2,1)>=0){       
    printf("1");
    n-=pow(2,1);
    }else
    printf("0");
    if(n-pow(2,0)>=0){       
    printf("1");
    n-=pow(2,0);
    }else
    printf("0");

    return 0;
}