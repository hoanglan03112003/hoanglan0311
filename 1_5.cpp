#include<stdio.h>
#include<conio.h>
struct donthuc
{
    float a;
    int n;
};
typedef struct donthuc DONTHUC;
void nhapdonthuc(DONTHUC &);
void xuatdonthuc(DONTHUC);
void nhapdonthuc(DONTHUC &dt){
    float temp;
    printf("nhap he so: \n");
    scanf("%f",&temp);
    printf("nhap don thuc: \n");
    scanf("%f",&dt.n);
}
void xuatodnthuc(DONTHUC dt){
printf("%8.3fx^%d",dt.a,dt.n);
}
int main(){
DONTHUC dt;
nhapdonthuc(dt);
xuatdonthuc(dt);
getch();
return 0;
}

