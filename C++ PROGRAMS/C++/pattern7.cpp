#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    while(i<=n){//i loop start
        int j=n-1;
        while(j>=i){
            // printing of space
            cout<<" ";
            j--;
        }
        int k=1;
        while(k<=i){
            //printing of *
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}