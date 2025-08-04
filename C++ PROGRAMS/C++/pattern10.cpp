#include<iostream>
using namespace std;
int main(){
    int i=1,n;//initializing of variables
    cout<<"take a size: "<<endl;
    cin>>n;
    // i loop start from here
    while(i<=n){
        int j=i;//every time i loop executes j get shorter by 1
        //first triangle column operations
        while(j<=n){//eg n=4
            cout<<"#";
            j++;
        }
        //second upper triangle column operations
        int k=1;
        while(k<=i){
            cout<<i;
            k=k+1;
        }
        cout<<endl;
        i++;
    }
}