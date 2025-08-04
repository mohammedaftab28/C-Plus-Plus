#include<iostream>
using namespace std;

int power(){

    int a , int b;

    int ans = 1;

    for(int i = 1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}
int main(){

    int a , b;
    cout<<"enter the value in a and b "<<endl;
    cin>>a>>b;

    int answer = power(a,b);
    cout<<"answer is "<<answer<<endl;

    int c , d;
    cout<<"enter the value in c and d "<<endl;
    cin>>c>>d;

    int answer =power(c,d);
    cout<<"answer is "<<answer<<endl;

    return 0;
}