#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void ptbac1() {
    int x,y,z;
    cout<<"nhap vao x : ";
    cin>>x;
    cout<<"nhap vao y : ";
    cin>>y;
    if (x = 0) {
        if (y = 0) {
            cout<<"phuong trinh vo so ngiem\n";
        } else {
            cout<<"phuong trinh vo nghiem\n";
        }
    } else {
        z= -x/y;
        cout<<"nghiem cua phuong trinh la : " << z <<"\n";
    }
}

void giatPtBac2 () {
    int a,b,c,x,y,delta;
    cout<<"nhap vao a : ";
    cin>>a;
    cout<<"nhap vao b : ";
    cin>>b;
    cout<<"nhap vao c : ";
    cin>>c;
    delta = b*b-4*a*c;

    if(delta < 0) {
        cout<<"phuong trinh vo nghiem\n";
    } else if (delta == 0)
    {
       x=-b/2*a;
       cout<<"phuong trinh co nghiem kep la : "<<x<<"\n";
    } else {
        x = (-b+sqrt(delta))/2*a;
        y = (-b-sqrt(delta))/2*a;
        cout<<" phuong trinh co 2 nghiem rieng biet \n";
        cout<<" x = "<<x<<"\n";
        cout<<" y = "<<y<<"\n";
    }
}

void tinhTienDien() {
    int dienSuDung;
    int tongTienDien;
    cout<<"nhap vao so dien da su dung : ";
    cin>>dienSuDung;
    if(dienSuDung < 50) {
        tongTienDien = dienSuDung * 1000;
    } else {
        tongTienDien = 50*1000 + (dienSuDung - 50)*1200;
    }

    cout<<"tien dien thang nay cua ban la : "<<tongTienDien<<"\n";
}

int main () {
    int number;
    do {
    cout<<"MENU";
    cout<<"\n";
    cout<<"1. giai pt bac 1\n";
    cout<<"2. giai phuong trinh bac 2\n";
    cout<<"3. tinh tien dien\n";
    cout<<"4. thoat\n";
    cout<<"nhap vao number : ";
    cin>>number;
    switch (number)
    {
    case 1:
       ptbac1();
        break;
    case 2:
       giatPtBac2();
       break;
    case 3:
         tinhTienDien();
         break;
    default:
        break;
    }
} while (number != 4);
    {
    return 0;
    }
}