#include <stdio.h>

int leap(int a){
    if(a%400==0){return 1;}
    if(a%100==0){return 0;}
    if(a%4==0){return 1;}
    return 0;
}

int diasMesAno(int m,int a){
    if(m>12 || m<1){return 0;}
    if(m==1 || m==3 || m==5 || m==7 ||m==8 || m==10 || m==12){return 31;}
    if(m==4 || m==6 || m==9 || m==11){return 30;}
    if(m==2){return 28+leap(a);}
}

int isAvalidDate(int d, int m, int a){
    if(m>12 || m<1){return 0;}
    if(d>diasMesAno(m,a) || d < 1){return 0;}
    return 1;
}

int toQuantDias(int d, int m, int a){
    int quantDias=0,i;
    if(isAvalidDate(d,m,a)==0){return 0;}
    for(i=1;i<m;i++){
        quantDias=quantDias + diasMesAno(i,a);
    }
    return quantDias+d;
}

int toDate(int quantDias,int a){
    int d=0, m;

    for(m=1;quantDias > diasMesAno(m,a);m++){
        quantDias= quantDias - diasMesAno(m,a);
    }
    d = quantDias;
    printf("M: %d\n",m);
    printf("D: %d",d);
return 0;}

int main(){

printf("%d\n",leap(2019));

printf("%d\n",diasMesAno(2,2019));

printf("%d\n",isAvalidDate(28,2,2019));
}
