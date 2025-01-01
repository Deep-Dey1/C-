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

    int arr[] = {1,2,3,4,5,6};
    for(auto element : arr){
        cout << element << endl;
        // will print all the elements of the arrray arr
    }


    // lop with multiple initialization variables:
    for(int i = 1 , j = 2 , k = 3 ; i + j + k < 20 ; i = i+2 , j = j - 1 , k = k+ 5){
        cout << i + j + k << endl;
    }


    // variable scope in the loop :
    int i = 10 ;
    for (int i = 20 ; i > 0 ; i--){
        cout << "Inside loop i : " << i << endl;
    }
    cout << "Outside loop I : " << i << endl;
    return 0;

}

