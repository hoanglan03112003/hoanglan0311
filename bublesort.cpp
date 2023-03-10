#include<iostream>
using namespace std;
void mang(int a[],int n){
    for(int i = 0; i < n ; i++){
        cout<< a[i]<< "";
    }
}
void bubblesort(int a[], int n ){
    for(int i = n; i >= 1;i--){
        bool swapped = true;
        for(int j =0;j < i;j++){
            if (a[j] > a[j+1] )
            {
               int temp = a[j];
               a[j] = a[j + 1];
               a[ j +1 ]= temp;
               swapped = false;
            }
        }
        if (swapped){
            break;
        }
    }
}
int a[100];
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubblesort( a , n);
    mang( a,n);

    return 0;
}