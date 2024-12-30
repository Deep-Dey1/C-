#include<iostream>
using namespace std;
int main(){
    //working of nested if else statement in c++

    // Syntax :
    // if(condition 1){
    //     if(condition 1-a){
    //         ...
    //             code block to be execute if all the conditions are true
    //     }
    //     else{
    //         ...
    //     }
    // }
    // else{
    //     if(condition){
    //         ...
    //     }
    //     else{
    //         ...
    //     }
    // }


    // working 
    // WAP to check if the given number if positive , negetive or zero
    // And if the number is positive then check if it is even or odd

    int user_number;
    cout << "User input your number : ";
    cin >> user_number;

    if(user_number > 0){
        if(user_number % 2 == 0){
            cout << "Number is Positive and Even." << endl;
        }
        else{
            cout << "Number is Positive and Odd." << endl;
        }
    }
    else if(user_number == 0){
        cout << "Number is Zero" << endl; 
    }
    else{
        cout << "Number is Negetive." << endl;
    } 

    cout << "program ends." << endl;
    return 0;
}