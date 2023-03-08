#include<stdio.h>
#include<conio.h>

long tong(int n ){
    if(n == 0)
    return 0;
    return tong(n - 1)*2;
}
int main(){
    int n,s;
    printf("nhap n: \n"); 
    scanf("%d",&n);
    
    s = tong(n);
    printf( "s = %d",s);
    getch();
    return 0;
}