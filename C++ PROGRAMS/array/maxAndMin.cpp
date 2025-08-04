#include<iostream>
using namespace std ;
int main(){

    int ar[5] = {3,5,2,3,-1};
    int min = ar[0] , max = ar[0];

    cout << "original array\n"<<endl;
    
    for(int i = 0 ; i < 5 ; i++ ){
        cout << ar[i] <<" , ";
    }
    cout << endl;

    for(int i = 0 ; i <= 5 ; i++ ){
        if(ar[i] < min){
            min = ar[i];
        }
    }

    cout << min <<" is minimum element";
    cout << endl;

    for(int i = 0 ; i < 5 ; i++ ){
        if(ar[i] > max){
            max = ar[i];
        }
    }

    cout << max <<" is maximum element";
    cout << endl;

    
}