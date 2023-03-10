#include<iostream>
using namespace std;
void mang(int a[] , int n){
    for( int i = 0 ; i < n ; i++){
        cout << a[i]<<"";
    }
}
void intersionsort(int a[], int n){
    int index,value;
    for(int i = 0 ; i < n ;i++){
      index = i;
      value = a[i];
      while ( index > 0 && a[index - 1]> value)
      {
        a[index] = a[index-1 ];
        index--; 
      }
      a[index ] =value ;   
      }
}
int a[100];
int main(){
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    mang( a ,n);
    intersionsort( a, n);

    return 0;
}