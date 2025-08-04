#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
if(num>0){//check num for positive value
    cout<<"is positive"<<endl;
}
else{
    if(num<0){//check for negative value
        cout<<"is negative"<<endl;
    }
    else{
        cout<<"is zero";//atlast print zero
    }
}
}