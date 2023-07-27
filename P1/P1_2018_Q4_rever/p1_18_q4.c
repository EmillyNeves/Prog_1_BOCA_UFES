#include<stdio.h>
int main(){
    int aux=0, h, m, dia=0, incre;//inclremento em min
    scanf("%d:%d %d", &h,&m,&incre);

    m += incre;

    if(m>=1440){
        dia= m/1440;
        m = m%1440;        
    }

    if(m>59){
    h +=  m/60;
    m = m%60;
        if(h>=24){
            dia+= h/24;
            h = h%24;
        }
    }

    if(dia>1)
    printf("(%d dias)",dia);
    else if(dia==1)
    printf("(%d dia)",dia);
    if(h==1)
    printf("(%d hora)", h);
    else if(h>1)
    printf("(%d horas)", h);
    if(m==1)
    printf("(%d minuto)", m);
    else if(m>1)
    printf("(%d minutos)", m);
    
    printf("\n");
    return 0;
}