#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int sodien;
    int tiendien;
    cout<<" nhap so dien thang nay: " << endl;
    cin>>sodien;
    if( sodien < 50 ){
        cout<<" gia moi so dien la 1000!\n";
        tiendien=sodien*1000;
        cout<<" so tien phai tra trong thang nay" << tiendien << endl;
    }else if( sodien > 50){
          cout<<" gia moi so dien la 1200!\n";
          tiendien = ((50*1000+(sodien - 50)*1200));
          cout<<" tien dien thang nay phai tra la:\n "<< tiendien << endl;

    }
    else{
        cout<<" m ko can phai tra tien dien nua!!!!!";
    }
}