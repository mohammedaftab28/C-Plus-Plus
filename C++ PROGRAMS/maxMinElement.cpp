//Find the maximum and minimum elements in an array
#include <iostream>
using namespace std ;

int main(){
    
    int array [100] = {1,3,2,5,65,7,-1,3,-3};
    int min = array[0];
    int max = array[0];

    cout << "original array :"<< endl;

    for(int i = 0 ; i <= 10 ; i++ ){
        cout << array[i] << "," << endl;  
    }

    cout << "LOOP FOR MINIMUM ELEMENT : " << endl;

    for (int i = 0 ; i <= 10 ; i++){
        if(array[i] < min){
        }
        min = array[i];
    }
     cout << "minimum number :" << min << endl;

    cout << "LOOP FOR MAXIMUM ELEMENT : " << endl;

    for (int i = 0 ; i <= 10 ; i++){
        if(array[i] < min){
        }
        max = array[i];
    }
    cout << "maximum number :" << max << endl;
    return 0;
}