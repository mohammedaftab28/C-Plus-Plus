#include<iostream>
using namespace std;

int main(){

    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Simple Calculator ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

    char ch;cout<<"PRESS s TO START AND ANY KEYWORD TO QUIT: ";
    cin>>ch;
    while (ch=='s')
    {
        double num1,num2;
        cout<<"enter first number : ";cin>>num1;
        cout<<endl;
        cout<<"enter second number : ";cin>>num2;
        cout<<endl;

        string operation;cout<<"enter operator : ";
        cin>>operation;

        if (operation=="+")
        {
            cout<<num1 + num2<<endl;
        }
        else if (operation=="-")
        {
            cout<<num1 - num2<<endl;
        }
        else if (operation=="*")
        {
            cout<<num1 * num2<<endl;
        }
        else if (operation=="/")
        {
            cout<<num1 / num2<<endl;
        }
        
        cout<<"PRESS s TO START AND ANY KEYWORD TO QUIT: ";
        cin>>ch;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    
    
    
}
