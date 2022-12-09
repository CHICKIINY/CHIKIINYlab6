#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 0;
    int c = 0;
    while(a != 0){
        cout << "Enter an integer: ";
    cin >> a;
    if(a != 0){
        if(a % 2 == 0){
            b += 1;
        }else{
            c += 1;
        }
        
    }
    } 
        
    cout << "#Even numbers = " << b << "\n";
    cout << "#Odd numbers = " << c << "\n";
    return 0;
}
