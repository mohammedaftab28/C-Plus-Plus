#include<iostream>
using namespace std;
int main(){

    int i = 1 ;
    int num;
    cout<<"enter the number : "<<endl;
    cin>>num;

    while(i<=num){

        int count = i;
        int j = 1;
        while(j<=i){
            cout<<count;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}