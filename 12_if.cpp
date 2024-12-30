#include<iostream>
using namespace std;


int main(){

    // program to demonstrate the working of the if conditional statement in c++ language
    // Syntax : 
    // if(condition){
    //                 Code block to execute if the conditon is true 
    //             }

    // Working :
    // WAP to print if the user is allowed to vote or not.

    int user_age;
    cout << "User enter your age : ";
    cin >> user_age;
    if(user_age >= 18){
        cout << "Allowed to Vote." << endl;
    }
    cout << "Program Ends" << endl ;
    
    return 0;
}