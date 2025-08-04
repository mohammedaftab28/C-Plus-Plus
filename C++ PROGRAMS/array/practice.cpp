#include<iostream>
using namespace std;

int sumArray(){

    int arr[5] = {2 , 3 , 4 , 8 , 7};
    int sum = 0 ;

    for (int i = 0 ; i < 5 ; i++){
        sum = sum + arr[i];
    }
    return sum;

}

int main(){

    cout << "the answer is : " << sumArray();

}