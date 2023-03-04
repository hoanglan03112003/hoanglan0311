#include<stdio.h>
#include<conio.h>
struct diem
{
float x;
float y;
float z;
};
typedef struct diem DIEM;
void nhapdiem(DIEM &);
void xuatdiem(DIEM);
void nhapdiem(DIEM &d)
{
float temp;
printf("Nhap x: \n");
scanf("%f", &temp);
d.x = temp;
printf("Nhap y: \n");
scanf("%f", &temp);
d.y = temp;
printf("nhap z: \n");
scanf("%f",&temp);
d.z = temp;
}
void xuatdiem(DIEM d)
{
printf("(%8.3f, %8.3f,%8.3f)", d.x, d.y,d.z);
}
int main()
{
DIEM d;
nhapdiem(d);
xuatdiem(d);
getch();
return 0;
}