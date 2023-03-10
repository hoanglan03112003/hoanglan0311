#include<stdio.h>
void xuat(int *p, int n){
    for(int i =0; i < n;i++){
        printf(" %d\n",*(p+i));
    }
}
void nhap(int *p,int n){
    int i;
    for( i =0;i < n ; i++){
        printf("phan tu thu tu: \n",i);
        scanf("%d",(p+i));
    }
}
void giaohoan(int *a,int*b){
    int doi;
    doi =*a;
    *a*=*b;
    *b=doi;
}
void sapxep(int *p,int n){
    for(int i=0;i < n-1;i++){
        for(int j=i+1; j < n;j++){
            if (*(p+i)>*(p+j)) giaohoan((p+i),(p+j));
        }
    }
}
int main(){
    int *p;
    
    int n;

    printf("nhap so phan tu mang: ");
    scanf("%d",&n);
    nhap(p,n);
    sapxep(p,n);
    printf("\n");
    xuat(p,n);
    return 0;
}