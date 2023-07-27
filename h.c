#include<stdio.h>
int main(){
 int h1, m1, h2, m2, dH=0, dM=0, aux1=0, aux2=0, difA=0;
    scanf("%d:%d %d:%d", &h1,&m1,&h2,&m2);

    if(h1==h2&&m1==m2){
        printf("24:00\n");
    }else{
        if(h1>h2 || (h1==h2 && m1>m2)){//horario inicial maior que final(outro dia)
                aux1 = h1*60+m1;
                aux2 = h2*60+m2;
                difA = aux2-aux1;
                if(difA<0)
                difA*=-1;
                dH = 23 - difA/60;
                dM = 60 - difA%60;
        }
        else{//horario inicial menor que final(mesmo dia)
            if(h1==h2){
                dM = m2-m1;
            }
            else{
                aux1 = h1*60+m1;
                aux2 = h2*60+m2;
                difA = aux2-aux1;
                dM = difA;
                if(difA>59){
                    dH = difA/60;
                    dM = difA%60;
                }
            }
        }
        printf("%02d:%02d\n",dH,dM);
    }
    return 0;
}