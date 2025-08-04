#include<iostream>
using namespace std ;

int main(){

    int arr[5] ;
    cout << "take the value in arr : " << endl;
    for( int i = 0 ; i < 5 ; i++){
        cin >> arr[i];
        
    }

    // for ( int j = 0 ; j < 5 ; j++){
    //     temp[j] = arr[i];
    // }

    for (int i = 0 ; i < 5 ; i++){
        if(arr[i] == arr[i+1]){
            cout << i;
        }
        cout << "not";
    }
    return 0;
}