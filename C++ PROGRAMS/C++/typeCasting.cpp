#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int a=ch;
    cout<<a<<endl;
    if(a>64 && a<96){
        cout<<"uppercase"<<endl;
    }
    else if(a>96){
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"is numeric number"<<endl;
    }
    return 0;
}