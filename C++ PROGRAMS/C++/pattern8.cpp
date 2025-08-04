#include<iostream>
using namespace std;
int main(){
    int i=1,n;//initializing of variables
    cout<<"take a size: "<<endl;
    cin>>n;
    // i loop start from here
    while(i<=n){
        int j=1;
        //first triangle column operations
        while(j<i){
            cout<<"#";
            j=j+1;
        }
        //second upper triangle column operations
        int k=n;
        while(k>=i){
            cout<<i;
            k=k-1;
        }
        cout<<endl;
        i++;
    }
}