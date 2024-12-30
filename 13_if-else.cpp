#include<iostream>

using namespace std;
int main(){

    // working of the if-else statement in c++ langauge
    // Syntax : 
    // if(condition){
    //     code block to be execute if the condition is true
    // }
    // else{
    //     code block to be execute if the condition is false 
    // }

    // working :
    // WAP to find if the user input number is even or odd 

    int user_input;
    cout << "User enter any number : ";
    cin >> user_input;
    if(user_input >= 0){
        cout << "Number is Positive." << endl; 
    }
    else{
        cout << "Number is Negetive." << endl;
    }

    cout << "Program Ends." << endl;

    return 0;
}
