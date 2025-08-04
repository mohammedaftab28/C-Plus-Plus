#include<iostream>
using namespace std ;
int main (){

    int arr[10];
    int sum = 0 ;

    cout << "enter the element :"<<endl;

    for (int i = 0 ; i < 10 ; i++){
        cin >> arr[i];
    }
    cout << "output array" <<endl;

    for (int i = 0 ; i < 10 ; i++){
        cout <<"|"<< arr[i] <<"|";
    }
    cout << "\n\n\n";
    //necessary changes made by me 
    int count = 0;

    for (int i = 0 ; i < 10 ; i++){
        if(arr[i] > 0){
            sum = sum + arr[i];
            count++;
        }     
    }
    cout << endl ;
    cout << double(sum)/double(count) ;
    
}