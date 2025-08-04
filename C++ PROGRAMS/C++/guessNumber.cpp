#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main() {

    cout<<"##############################################################################################################################"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ NUMBER GUESSING GAME ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"##############################################################################################################################"<<endl;
    cout<<endl;
    srand(time(0));
    int num;
    string mode;

    //Choose the difficulty level

    cout<<"                             PRESS e FOR EASY MODE | PRESS m MEDIUM LEVEL | PRESS h FOR HARD LEVEL"<<endl;
    cout<<"MODE__";
    cin>>mode;

    //Condition to check difficulty level and to execute loop accordingly

    while(mode=="e"|| mode=="m" || mode=="h"){

        if(mode=="e"){
            num=rand()%10+1;
            cout<<"EASY LEVEL => NUMBER RANGE IS FROM 1 TO 10"<<endl;
        }

        else if(mode=="m"){
            num=rand()%100+1;
            cout<<"MEDIUM LEVEL => NUMBER RANGE IS FROM 1 TO 100"<<endl;
        }

        else{
            num=rand()%1000+1;
            cout<<"HARD LEVEL => NUMBER RANGE IS FROM 1 TO 1000"<<endl;
        }
        
        int n;
        cout<<"CHOOSE A NUMBER: ";
        cin>>n;
        
        //Loop to check the and find the choosen number
        
        while(n!=num){

            if(n<num){
                cout<<"YOUR GUESS IS LOW "<<endl;
            }

            else{
                cout<<"YOUR GUESS IS HIGH "<<endl;
            }

            cout<<"CHOOSE AGAIN: ";
            cin>>n;
        }

        cout<<"                             CONGRATULATION! YOU GOT WRITE NUMBER: "<<num<<endl;
        cout<<"##############################################################################################################################"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"##############################################################################################################################"<<endl;
        cout<<" "<<endl;

        cout<<"                             PRESS e FOR EASY MODE | PRESS m MEDIUM LEVEL | PRESS h FOR HARD LEVEL"<<endl;
        cin>>mode;
    }
    
    return 0;
}