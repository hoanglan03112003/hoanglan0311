#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
    float a,b,c,d,x1,x2,delta;
    cout<<"nhap so a: \n";
    cin>>a;
    cout<<"nhap so b: \n";
    cin>>b;
    cout<<"nhap so c: \n";
    cin>>c;
    d = -c/b;
    if(a == 0 ){
        if(b == 0){
            if( c == 0){
                cout<<"phuong trinh nay co vo so nghiem!\n";
            } else{
                cout<<" phuong trinh co nghiem! \n";
            }
        }
        else{
        cout<<" phuong trinh co nghiem duy nhat: \n";
        cin>>d;}
    }else{
        delta = b*b - 4*a*c;
        if( delta > 0){
            x1 = (-b+sqrt(delta))/2*a;
            x2 = (-b-sqrt(delta))/2*a;
            cout<<" phuong trinh x1 co nghiem la:\n " << x1 << endl;
            cout<<" phuong trinh x2 co nghiem la: \n"<< x2 << endl;
        }else if (delta == 0)
        {
           cout<<" phuong trinh co nghiem kep x1 = x2= "<< -b/2*a << endl;
        }else{
            cout<<" phuong trinh vo nghiem!";
        }
    }
    return 0;
}

