#include<iostream>
using namespace std;
void interchangesort (int a[],int n){
    int i,j;
    for( int i = 0; i < n-1;i++){
        for( int j = i +1; j < n -1 ;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
int main(){
    int a[5] = {8,1,3,5,6};
    interchangesort(a,5);
    cout<<" mang sau khi sap xep: " << endl;
    for(int i = 0; i < 5;i++){
        cout<< a[i] <<"";
    }
    system("PAUSE");
}