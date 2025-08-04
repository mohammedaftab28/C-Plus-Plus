#include <iostream>
#include<vector>  

using namespace std;

void board(vector<string>array){

    cout<<"  "<<array[1]<<"  |  "<<array[2]<<"  |  "<<array[3]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |   "<<endl;
    cout<<"  "<<array[4]<<"  |  "<<array[5]<<"  |  "<<array[6]<<"  "<<endl;
    cout<<"_____|_____|____"<<endl;
    cout<<"     |     |   "<<endl;
    cout<<"  "<<array[7]<<"  |  "<<array[8]<<"  |  "<<array[9]<<"  "<<endl;
    cout<<endl;
}

bool checkmove(int m,vector<string>array){
    if (m<=0 && m>=10)
    {
        return false;
    }
    if (array[m]=="X" || array[m]=="O")
    {
        return false;
    }
    return true;
}

void validmove(int move,string s,vector<string>&array){
    array[move]=s;
}

string wincheck(string s,vector<string>array){
    if((array[1]==s&&array[2]==s&&array[3]==s)||(array[4]==s&&array[5]==s&&array[6]==s)||(array[7]==s&&array[8]==s&&array[9]==s)||(array[1]==s&&array[4]==s&&array[7]==s)||(array[2]==s&&array[5]==s&&array[8]==s)||(array[3]==s&&array[6]==s&&array[9]==s)||(array[1]==s&&array[5]==s&&array[9]==s)||(array[3]==s&&array[5]==s&&array[7]==s)){
            return s;
        }
        return "0";

}
int main(){
    vector<string>array(10);
    for(int i=1;i<10;i++){
        array[i]=to_string(i);
    }
    
    cout<<"#######################################################[[TIC TAC TOI]]###########################################################"<<endl;
    cout<<endl;
    char game;
    cout<<"TYPE 's' TO START THE GAME OR ANY OTHER KEY TO QUIT"<<endl;
    cin>>game;

    while (game=='s')
    {
        board(array);      //Function for printing the board

        int count=0,P1=0,P2=0;
        while (count<10)      // Run the loop when box is empty
        {
            int move;
            cout<<"PLAYER ONE TURN!.."<<endl;
            cout<<"ENTER THE MOVE!..";
            cin>>move;

            while (!checkmove(move,array))      // Checking whether move is available or not  
            {
                cout<<"IT IS A WRONG MOVE BY PLAYER 1, TRY AGAIN.."<<endl;
                cin>>move;
            }

            validmove(move,"X",array);      // move by player 1
            
            if (wincheck("X",array)=="X")
            {
                P1=1;
                break;
            }

            count+=1;      // Box is filled
    
            if (count==9)
            {
                break;
            }
            
            board(array);

            cout<<"PLAYER TWO TURN!..>"<<endl;
            cout<<"ENTER THE MOVE!..";
            cin>>move;

            while (!checkmove(move,array))      // Checking whether move is available or not  
            {
                cout<<"IT IS A WRONG MOVE BY PLAYER 2, TRY AGAIN.."<<endl;
                cin>>move;
            }

            validmove(move,"O",array);      // Move by player 2

            if (wincheck("O",array)=="O")
            {
                P2=1;
                break;
            }

            count+=1;      //Box is filled
            board(array);
        }
        
        board(array);
        if (P1==1)
        {
            cout<<"PLAYER 1 IS THE WINNER..."<<endl;
        }
        else if (P2==1)
        {
            cout<<"PLAYER 2 IS THE WINNER..."<<endl;
        }
        else{
            cout<<"GAME DRAW..."<<endl;
        }

        for(int i=1;i<10;i++){
            array[i]=to_string(i);
        }
        cout<<"Type 'start' TO START THE GAME OR ANY OTHER KEY TO QUIT"<<endl;
        cin>>game;
    }   
}