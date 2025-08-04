#include<iostream>
using namespace std;
int main(){
    int money,currentAmount,noOfNote,c=1;
    cout<<"enter the money: "<<endl;
    cin>>money;
    switch(c){
        case 1:noOfNote=money/100;
        cout<<"number of hundred note: "<<noOfNote<<endl;
        money=money%100;
        case 2:noOfNote=money/50;
        cout<<"number of hundred note: "<<noOfNote<<endl;
        money=money%50;
        case 3:noOfNote=money/20;
        cout<<"number of hundred note: "<<noOfNote<<endl;
        money=money%20;
        case 4:noOfNote=money/1;
        cout<<"number of hundred note: "<<noOfNote<<endl;
        money=money%1;
        break;
    }
}