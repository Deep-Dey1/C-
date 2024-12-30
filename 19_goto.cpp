#include<iostream>
using namespace std;
int main(){
    // Working of the goto jump statement in c++ language.
    // example :
    int user_age;
    cout << "User enter your age : ";
    cin >> user_age;
    if(user_age < 0 ){
        goto Invalid_age;
    }
    else if(user_age < 18 && user_age > 0){
        goto Notallowed;
    }
    else{
        goto Allowed;
    }

    Invalid_age:{
        cout << "Invalid age entered." << endl << "program ends." << endl;
        goto termination;
    }
    Notallowed:{
        cout << "Not allowed to vote." << endl << "program ends." << endl;
        goto termination;
    }
    Allowed:{
        cout << "Allowed to vote." << endl << "program ends." << endl;
        goto termination;
    }
    termination:{
        return 0;
    }
}