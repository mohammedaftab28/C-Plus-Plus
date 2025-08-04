#include<iostream>
using namespace std;
int main(){
    int i=1,n,count=1;
    cout<<"enter the limit"<<endl;
    cin>>n;//taking the value of n 
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";//printing the column when 1st i loop works
            j=j+1;
            count++;
        }
        cout<<endl;
        i=i+1;//it will increase the value when one j loops complete
    }
    return 0;
}