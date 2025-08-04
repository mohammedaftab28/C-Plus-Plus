#include<iostream>
using namespace std;
int main(){
    /*int i=1;//; is used to end the line code
    int n;
    cin>>n;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
    return 0;
    int i=1,n,sum=0;
    cin>>n;
    while(i<=n){//we use while loop when we know number of times loop will get executed
        sum=sum+i;
        i++;
    }*/
    int i=1,n,sum=0;
    cin>>n;
    while(i<=n){//we use while loop when we know number of times loop will get executed
        if(i%2==0)//checks for even numbers
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;//it will give only last output 
    return 0;
}
