#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"enter the limit"<<endl;
    cin>>n;//taking the value of n 
    while(i<=n){
        int j=1;
        int count=i;
        while(j<=i){
            cout<<count;//printing the column when 1st i loop works
            count++;
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;//it will increase the value when one j loops complete
    }
    return 0;
}