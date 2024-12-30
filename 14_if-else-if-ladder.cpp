#include<iostream>
using namespace std;
int main(){

    // Working of the if else-if ladder in c++
    // used when there are multiple conditions to check
    // Syntax : 
    // if(condition 1){
    //     code block to be executed if the condition 1 is true
    // }
    // else if(condition 2){
    //     code block to be executed if the condition 2 is true
    // } 
    // else if(condition 3){
    //     code clock to be executed if the condition 3 is true
    // }
    // .
    // .
    // .
    // else{
    //     code block to be executed if all th e conditions are false
    // }


    // working :
    // WAP to find the user is a child , a teenager or an adult.

    int user_age;
    cout << "User enter your age : ";
    cin >> user_age;
    if(user_age >= 0 && user_age < 13){
        cout << "A child." << endl;
    }
    else if(user_age >= 13 && user_age <= 18){
        cout << "A teen." << endl;
    }
    else if(user_age > 18){
        cout << "An Adult." << endl;
    }
    else{
        cout << "invalid age entered." << endl; 
    }

    cout << "program ends." << endl;
    return 0;
}
