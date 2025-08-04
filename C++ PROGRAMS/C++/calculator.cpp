#include<iostream>
using namespace std;
int main(){
    cout<<"================================================================================================================================="<<endl;

    cout<<"-------------------------------------------------------SIMPLE CALCULATOR---------------------------------------------------------"<<endl;

    cout<<"================================================================================================================================="<<endl;
    
    //Declaration of variables

     double num1 , num2 , operation ;
     int newNum1 , newNum2 ;
     char op ;
     char start;

    //Start the calculator if start is equal to s

    cout<<"ENTER 's' TO START OR ANY OTHER KEY TO QUIT __";
    cin>>start;

    //if start == s then loop is executed

    while(start=='s'){
         double num1 , num2 , operation ;
         int newNum1 , newNum2 ;
         char op ;

        //Initialization of numbers and operators

         cout<<"ENTER FIRST NUMBER : ";
         cin>>num1;
         cout<<"ENTER SECOND NUMBER : ";
         cin>>num2;
         cout<<"CHOOSE OPERATOR : ";
         cin>>op;
         cout<<endl;

         //Switch case for specific operator and its operation

    switch (op)
    {
    case '+' : operation=num1+num2;
    cout<<"ANSWER : "<<num1<<" "<<op<<" "<< num2 <<" = ";
    cout<<operation<<endl;
        break;
    case '-' : operation=num1-num2;
    cout<<"ANSWER : "<<num1<<" "<<op<<" "<< num2 <<" = ";
    cout<<operation<<endl;
        break;
    case '*' : operation=num1*num2;
    cout<<"ANSWER : "<<num1<<" "<<op<<" "<< num2 <<" = ";
    cout<<operation<<endl;
        break;
    case '/' : operation=num1/num2;
    cout<<"ANSWER : "<<num1<<" "<<op<<" "<< num2 <<" = ";
    cout<<operation<<endl;
        break;
    case '%' : newNum1=num1;newNum2=num2;
    cout<<"ANSWER : "<<num1<<" "<<op<<" "<< num2 <<" = ";
    operation=newNum1%newNum2;
    cout<<operation<<endl;
        break;
    default:cout<<"ERROR OR INVALID INPUTS"<<endl;
        break;
    }
    cout<<"================================================================================================================================="<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"================================================================================================================================="<<endl;
    cout<<" "<<endl;
    cout<<"ENTER 's' TO START OR ANY OTHER KEY TO QUIT __";
    cin>>start;
    }
    return 0;
}