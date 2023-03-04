#include<stdio.h>
#include<conio.h>
struct honso
{
    int tu;
    int mau;
    int nguyen;
};
typedef struct honso HONSO;
    void nhaphonso(HONSO &);
    void xuathonso(HONSO);
    void nhaphonso(HONSO &hs){
        printf("nhap nguyen: \n");
        scanf("%d,&hs.nguyen");
        printf("nhap tu: \n");
        scanf("%d,&hs.tu");
        printf("nhap mau: \n");
        scanf("%d,&hs.mau");
    }
    void xuathonso(HONSO hs){
        printf(("%d(%d/%d)"),hs.nguyen,hs.tu,hs.mau);
    }
    int main(){
        HONSO hs;
        nhaphonso(hs);
        xuathonso(hs);
        getch();
        return 0;
    }


