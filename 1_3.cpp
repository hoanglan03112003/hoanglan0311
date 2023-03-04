#include<stdio.h>
#include<conio.h>
struct diem
{
float x;
float y;
};
typedef struct diem DIEM;
void nhapdiem(DIEM &);
void xuatdiem(DIEM);
void nhapdiem(DIEM &d)
{
float temp;
printf("\nNhap x: ");
scanf("%f", &temp);
d.x = temp;
printf("\nNhap y: ");
scanf("%f", &temp);
d.y = temp;
}
void xuatdiem(DIEM d)
{
printf("(%8.3f, %8.3f)", d.x, d.y);
}
int main()
{
DIEM d;
nhapdiem(d);
xuatdiem(d);
getch();
return 0;
}