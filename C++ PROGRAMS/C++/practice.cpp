#include<iostream>
using namespace std ;
int main(){

    int i , j , k , size;
    cout<<"ENTER THE SIZE : "<<endl;
    cin>>size;

    for( i = 1 ; i <= size ; i++){

        for( j = 1 ; j<=i ; j++){
            cout<<"#";
        }

        for( k = size-1 ; k>=i ; k--){
            cout<<i;
        }
        cout<<endl;
    }
}