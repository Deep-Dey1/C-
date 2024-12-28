#include<iostream>
#include <cstdlib> // to access the system.

// using coloured textes in this project through ANSI codes  
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

using namespace std ;

int main(){
            // This is the first project based learning in this repository. 
            // This project is about the operators in CPP langauge.
        system("cls");
        cout << YELLOW << "Hello World ! \n";
        cout << YELLOW << "This is a basic project to understand the operators in C++ langauge. \n";
        cout << endl ;
        int user_choice ;
        cout << BLUE << "Hey User choose the operation number you want to perform based on the following list : " << endl;
        cout << endl;

        cout << GREEN << "---" << " OPERATION NUMBER " << "----------" << " OPERATION " << "-----------" << endl;
        cout << "\t 1 \t" << "\t\tUNARY OPERATION" << endl;
        cout << "\t 2 \t" << "\t\tARITHMATIC OPERATION" << endl;
        cout << "\t 3 \t" << "\t\tRELATIONAL OPERATION" << endl;
        cout << "\t 4 \t" << "\t\tLOGICAL OPERATION" << endl;
        cout << "\t 5 \t" << "\t\tBITWISE OPERATION" << endl;
        cout << "\t 6 \t" << "\t\tTERNARY OPERATION" << endl;
        cout << GREEN << "-----------------------------------------------------";
        cout << endl << endl;
        cout << BLUE << "User enter your choice : ";
        cin >> user_choice;
        switch(user_choice){
            case 1:
                cout << endl;
                cout << CYAN << "UNARY OPERATION" << endl;
                cout << RED << "++(variable)" << endl << "(variable)++" << endl << "--(variable)" << endl << "(variable)--" << endl;
            break;
        } 


        



}