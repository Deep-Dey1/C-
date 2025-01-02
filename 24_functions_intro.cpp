#include<iostream>
using namespace std;

int max(int , int); // function declearation 
// int the above function declearartion the inside the parenthesis the datatypes are of the formal variables.
// syntax :
// datatype-of-function-returning-value function-name(datatype-of-formal-variable-1 , datatype-of-formal-variable-1);

int main(){
    int num1 , num2 ;
    cout << "Enter the value of First number : " ;
    cin >> num1 ;
    cout << "Enter the value of the Second number : " ;
    cin >> num2 ;
    cout << "The maximum value among these two numbers is : " ;
    cout << max(num1 , num2) ; // function calling 
    cout << endl ;
    return 0;
}

int max(int var1 , int var2){ // function defination
    if(var1 <= var2){
        return var2;
    }
    else{
        return var1;
    }
}