#include<iostream>
using namespace std ;
int main(){
    int arr[10] = {23 , 45 ,-56 , 67 , 5 , 1 , 23 , 34 , 56 , 5};

    for (int i = 0 ; i < 10 ; i++){

        if (arr[i] == 1){
            cout << "one is present at position : " << i << endl;
        }
        // else {
        //     cout<<"not present"<<endl;
        // }
    }
} 