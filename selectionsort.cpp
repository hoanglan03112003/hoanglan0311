#include<iostream>
using namespace std;
void mang(int a[], int n){
    for(int i = 0; i < n ; i ++){
        cout<< a[i] << "";
    }
}
void selectionsort(int a[], int n){
    int min;
    for(int i = 0; i < n-1 ;i ++){
        min = 1;
        for(int j= i+1;j < n ;j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        if( i != min){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
int a[100];
int main(){
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    selectionsort( a,5);
    mang ( a,5);

    return 0;
}