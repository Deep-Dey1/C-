#include<iostream>
using namespace std;
int main(){
    // Working of the Switch Statement in c++.
    //Syntax :
    // Switch(case number to be executed){
    //     case 1:{
    //         code block to be executed if the case number of the Switch is 1
    //         break;
    //     }
    //     case 2:{
    //         code block to be executed if the case number of the Switch is 2
    //         break;
    //     }
    //     .
    //     .
    //     .
    //     default :{
    //         code block to be execute if no case number among the available are choosen
    //         break;
    //     }
    // }

    // Working :
    // WAP to print "CAPITAL CHARACTER" if 'A' is choosen in the switch case.
    // or if 'a' is choosen as switch case then print "small character".

    char user_input;
    cout << "user enter..." << endl << "character 'A' to print \"CAPITAL CHARACTER\"" << endl << "or enter character 'a' to print \"small character\"" << endl << "Input : ";
    cin >> user_input;
    switch(user_input){
        case 'A':{
            cout << "CAPITAL CHARACTER" << endl;
            break;
        }
        case 'a':{
            cout << "small character" << endl;
            break;
        }
        default:{
            cout << "Invalid character entered." << endl;
            break;
        }
    }
    return 0;
}