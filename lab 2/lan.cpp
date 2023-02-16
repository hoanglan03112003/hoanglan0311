#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    cout<<" nhap so a = ";
    cin>>x;
    cout<<" nhap so b = ";
    cin>>y;
    if( x == 0){
        if( y== 0){
            cout<<"phuong trinh vo so nghiem!\n";
        }
        else{
            cout<<"phuong trinh vo nghiem!\n";
        }
    } else {
        z = -y/x;
        cout<<"phuong trinh co nghiem la: \n";
        cout<< z << endl;
    }
    return 0;
}
        