#include<iostream>
using namespace std;
int main(){

    // Working of the for loop
    // Syntax : 
    // for (initialization ; condition check ; incrementation){
        // code block to be executed if the condition check is true
    //    }

    // initialization executed only once at the begining of the loop. 
    // we can initialize multiple variables in this initilaization.
    // the scope of  the iitialized variable is valid in the loop block only.
    // all the variables decleared with the same name as the loop initialization variable    
    // before in the code got hidden by the loop initialized variable inside the loop block.
    // Syntax : 
    // for (int i = 0; i < n ; i++){
    //      body
    //  }
    // for(auto element : arr){
    //     body
    // }

    // Write a program to print hello world 5 times :
    for(int i = 1 ; i <= 5 ; i++){
        cout << "Hello Wolrd" << endl;
    }

    return 0;

}

