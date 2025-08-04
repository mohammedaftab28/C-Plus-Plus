#include<iostream>
using namespace std;

int main(){

    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Simple Calculator ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

    char ch;
    cout<<"PRESS s TO START AND ANY KEYWORD TO QUIT: ";
    //taking s as ch to start or any other keyword to quit
    cin>>ch;
    // if ch is s then while loop is executed
    while (ch=='s')
    {
        double num1,num2;
        cout<<"enter first number : ";
        cin>>num1;//Taking first number
        cout<<endl;
        cout<<"enter second number : ";
        cin>>num2;//Taking second number
        cout<<endl;

        string operation;
        cout<<"enter operator : ";
        cin>>operation;//Taking operator to perform operation

        if (operation=="+")
        {
            cout<<num1 + num2<<endl;//Addition operation 
        }
        else if (operation=="-")
        {
            cout<<num1 - num2<<endl;//Substraction operation
        }
        else if (operation=="*")
        {
            cout<<num1 * num2<<endl;//Multiplication operation
        }
        else if (operation=="/")
        {
            cout<<num1 / num2<<endl;//Division operation
        }
        
        cout<<"PRESS s TO START AND ANY KEYWORD TO QUIT: ";
        cin>>ch;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    
    
    
}
