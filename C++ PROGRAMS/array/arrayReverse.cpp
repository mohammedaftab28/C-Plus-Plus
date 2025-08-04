#include<iostream>
using namespace std ;
int main(){

    int ar[10] = {3,5,2,3,-1,56,73,0};

    cout << "original array\n"<<endl;
    
    for(int i = 0 ; i < 8 ; i++ ){
        cout << " | " << ar[i] <<" | ";
    }
    cout << endl <<"\n\n\n";
    
    cout << "reversed array\n"<<endl;
    
    for(int i = 7 ; i >= 0 ; i-- ){
        cout << " | " << ar[i] <<" | ";
    }
    cout << endl;

}