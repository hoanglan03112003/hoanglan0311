#include<stdio.h>
#include<conio.h>
#include<math.h>
float sqrt3(float x){
    if( x == 0)
    return 0;
    if( x < 0)
    return (-sqrt3(-x));
    retrun (exp((lon(x)/3)));
}
int main(){
    float x;
    printf("nhap x: ");
    scanf("%f".&x);
    x = sqrt3(x);
    printf(" ket qua = %2f",x);
    getch();
    return 0;
}