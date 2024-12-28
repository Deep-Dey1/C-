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
        cout << YELLOW << "Hey User choose the operation number you want to perform based on the following list ... " << endl;
        cout << endl;

        cout << GREEN << "--------" << " OPERATION NUMBER " << "-----------------" << " OPERATION " << "-----------" << endl;
        cout << endl;
        cout << "\t\t 1 \t" << "\t\tUNARY OPERATION" << endl ;
        cout << "\t\t 2 \t" << "\t\tARITHMATIC OPERATION" << endl ;
        cout << "\t\t 3 \t" << "\t\tRELATIONAL OPERATION" << endl ;
        cout << "\t\t 4 \t" << "\t\tLOGICAL OPERATION" << endl ;
        cout << "\t\t 5 \t" << "\t\tBITWISE OPERATION" << endl ;
        cout << "\t\t 6 \t" << "\t\tASSIGNMENT OPERATION" << endl;
        cout << "\t\t 7 \t" << "\t\tTERNARY OPERATION" << endl ;
        cout << "\t\t 8 \t" << "\t\tEND PROGRAM" << endl ;
        cout << endl;
        cout << GREEN << "-----------------------------------------------------------------";
        cout << endl << endl;
        cout << BLUE << "User enter your choice : ";
        cin >> user_choice;
        switch(user_choice){
            case 1:
            {
                system("cls");
                cout << endl;
                cout << CYAN << "UNARY OPERATION" << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << RED << "[1] : " << "  ++(variable)\t" << "Pre Increment" << endl << "[2] :" << "  (variable)++\t" << "Post Increment" << endl << "[3] : " <<"  --(variable)\t" << "Pre Decrement" << endl << "[4] : " << "  (variable)--\t" << "Post Increment" <<  endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << endl;

                    int input_var ;

                    cout << BLUE << "User enter the input value : ";
                    cin >> input_var;
                    int temp = input_var;

                    cout << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << MAGENTA << "[1] :   ++(" << input_var<<")  :  " << ++temp <<endl;
                    temp = input_var;
                    cout << MAGENTA << "[2] :   (" << input_var <<")++  :  " << temp++ <<endl;
                    temp = input_var;
                    cout << MAGENTA << "[3] :   --(" << input_var <<")  :  " << --temp <<endl;
                    temp = input_var;
                    cout << MAGENTA << "[4] :   (" << input_var <<")--  :  " << temp-- <<endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << endl;
                break;
            }

            case 2:
            {
                system("cls");
                cout << endl;
                cout << CYAN << "ARITHMATIC OPERATION   " << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << RED << "[1] : " << "  +\t" << "Addition" << endl << "[2] :" << "   -\t" << "Subtraction" << endl << "[3] : " <<"  *\t" << "Multiplication" << endl << "[4] : " << "  /\t" << "Division" << endl << "[5] : " << "  %\t" << "Modulo" << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << endl;
                int input_var1 ;

                    cout << BLUE << "User enter the first input : ";
                    cin >> input_var1;

                    int input_var2;
                    cout << BLUE << "User enter the second input : ";
                    cin >> input_var2;


                    cout << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << MAGENTA << "[1] :   " << input_var1<<" + " << input_var2 <<"  =  " << input_var1 + input_var2<<endl;
                    cout << MAGENTA << "[2] :   " << input_var1<<" - " << input_var2 <<"  =  " << input_var1 - input_var2<<endl;
                    cout << MAGENTA << "[3] :   " << input_var1<<" * " << input_var2 <<"  =  " << input_var1 * input_var2<<endl;
                    cout << MAGENTA << "[4] :   " << input_var1<<" / " << input_var2 <<"  =  " << input_var1 / input_var2<<endl;
                    cout << MAGENTA << "[5] :   " << input_var1<<" % " << input_var2 <<"  =  " << input_var1 % input_var2<<endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << endl;


                break;
            }

            case 3:
            {
                system("cls");
                cout << endl;
                cout << CYAN << "RELATIONAL OPERATION   " << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << RED << "[1] : " << "  ==\t" << "Is Equal To" << endl << "[2] :" << "   >\t" << "Greater Than" << endl << "[3] : " <<"  >=\t" << "Greater Than or Equal To" << endl << "[4] : " << "  <\t" << "Less Than" << endl << "[5] : " << "  <=\t" << "Less Than or Equal To" << endl << "[6] : " << "  !=\t" << "Not Equal To" << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << endl;
                int input_var1 ;

                    cout << BLUE << "User enter the first input : ";
                    cin >> input_var1;

                    int input_var2;
                    cout << BLUE << "User enter the second input : ";
                    cin >> input_var2;


                    cout << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << MAGENTA << "   1 : TRUE      0 : FALSE" <<endl;
                    cout << MAGENTA << "[1] :   " << input_var1 <<" == " << input_var2 <<"  =  " << (input_var1 == input_var2) << endl;
                    cout << MAGENTA << "[2] :   " << input_var1 <<" >  " << input_var2 <<"  =  " << (input_var1 > input_var2) << endl;
                    cout << MAGENTA << "[3] :   " << input_var1 <<" >= " << input_var2 <<"  =  " <<   (input_var1 >= input_var2) << endl;
                    cout << MAGENTA << "[4] :   " << input_var1 <<" <  " << input_var2 <<"  =  " <<    (input_var1 < input_var2) << endl;
                    cout << MAGENTA << "[5] :   " << input_var1 <<" <= " << input_var2 <<"  =  " <<    (input_var1 <= input_var2) << endl;
                    cout << MAGENTA << "[6] :   " << input_var1 <<" != " << input_var2 <<"  =  " <<    (input_var1 != input_var2) << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << endl;

                break;
            }


            case 4:
            {
                system("cls");
                cout << endl;
                cout << CYAN << "LOGICAL OPERATION   " << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << RED << "[1] : " << "  &&\t" << "Logical AND" << endl << "[2] :" << "   ||\t" << "Logical OR" << endl << "[3] : " <<"  !\t" << "Logical NOT" << endl << endl;
                cout << CYAN << "All non zero inputs : TRUE      All Zero inputs : FALSE" <<endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << endl;
                int input_var1 ;

                    cout << BLUE << "User enter the first input : ";
                    cin >> input_var1;

                    int input_var2;
                    cout << BLUE << "User enter the second input : ";
                    cin >> input_var2;


                    cout << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << MAGENTA << "   1 : TRUE      0 : FALSE" <<endl;
                    cout << MAGENTA << "[1] :   " << input_var1 <<" && " << input_var2 <<"  =  " << (input_var1 && input_var2) << endl;
                    cout << MAGENTA << "[2] :   " << input_var1 <<" || " << input_var2 <<"  =  " << (input_var1 || input_var2) << endl;
                    cout << MAGENTA << "[3] :   !(" << input_var1<<")     =  " <<   !(input_var1) << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << endl;

                break;
            }


            case 5:
            {
                system("cls");
                cout << endl;
                cout << CYAN << "BITWISE OPERATION" << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << RED << "[1] : " << "  &\t" << "Bitwise AND" << endl << "[2] :" << "   |\t" << "Bitwise OR" << endl << "[3] : " <<"  ^\t" << "Bitwise XOR" << endl << "[4] : " <<"  <<\t" << "Left Shift" << endl << "[5] : " <<"  >>\t" << "Right Shift" << endl << "[6] : " <<"  ~\t" << "One's Complement" << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << endl;
                int input_var1 ;

                    cout << BLUE << "User enter the first input : ";
                    cin >> input_var1;

                    int input_var2;
                    cout << BLUE << "User enter the second input : ";
                    cin >> input_var2;


                    cout << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << MAGENTA << "[1] :   " << input_var1 <<" & " << input_var2 <<"   =  " << (input_var1 & input_var2) << endl;
                    cout << MAGENTA << "[2] :   " << input_var1 <<" | " << input_var2 <<"   =  " << (input_var1 | input_var2) << endl;
                    cout << MAGENTA << "[3] :   " << input_var1 <<" ^ " << input_var2 <<"   =  " << (input_var1 ^ input_var2) << endl;
                    cout << MAGENTA << "[4] :   " << input_var1 <<" << " << input_var2 <<"  =  " << (input_var1 << input_var2) << endl;
                    cout << MAGENTA << "[5] :   " << input_var1 <<" >> " << input_var2 <<"  =  " << (input_var1 >> input_var2) << endl;
                    cout << MAGENTA << "[6] :   " << "~(" << input_var1 <<")     =  " << ~(input_var1) << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << endl;

                break;
            }

            case 6:
            {
                system("cls");
                cout << endl;
                cout << CYAN << "ASSIGNMENT OPERATION" << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << RED << "[1] : " << "  =\t" << "Assignment Operator" << endl << "[2] :" << "   +=\t" << "Add and Assignment Operator" << endl << "[3] : " <<"  -=\t" << "Subtract and Assignment Operator" << endl << "[4] : " <<"  *=\t" << "Multiply and Assignment Operator" << endl << "[5] : " <<"  /=\t" << "Divide and Assignment Operator" << endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << endl;
                int input_var1 ;

                    cout << BLUE << "User enter the input : ";
                    cin >> input_var1;


                    cout << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << MAGENTA << "[1] :   " << "int variable = " << input_var1 << "                    => variable = " << input_var1 << endl;
                    cout << MAGENTA << "[2] :   " << "int variable = 10 " <<"=> variable += " << input_var1 << "  => variable = " <<  (input_var1 + 10) << endl;
                    cout << MAGENTA << "[3] :   " << "int variable = 10 " <<"=> variable -= " << input_var1 << "  => variable = "<<(10 - input_var1) << endl;
                    cout << MAGENTA << "[4] :   " << "int variable = 10 " <<"=> variable *= " << input_var1 << "  => variable = "<<(input_var1 * 10) << endl;
                    cout << MAGENTA << "[5] :   " << "int variable = 10 " <<"=> variable /= " << input_var1 << "  => variable = "<<(10 / input_var1) << endl;
                    cout << CYAN << "-------------------------------------------------------" << endl;
                    cout << endl;

                break;
            }

            case 7:
            {
                system("cls");
                cout << endl;
                cout << MAGENTA << "(condition) ? (statement execute if condition is true) : (statement execute if condition is false)" << endl;
                cout << endl;

                string true_input;
                string false_input;
                char condition;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << BLUE << "user input a word to print for true condition : ";
                cin >> true_input;

                cout << BLUE << "user input a word to print for false condition : ";
                cin >> false_input;

                cout << BLUE << "user input condition state [T] : True and any other value for : False : ";
                cin >> condition;
                cout << CYAN << "-------------------------------------------------------" << endl;
                cout << endl <<endl;
                cout << CYAN << "-------------------------------------------------------" << endl;
               cout << MAGENTA << "( " << (condition == 'T' ? "True" : "False") << " ) : ( " 
     << true_input << " ) ? ( " << false_input << " )" << " = " <<  (condition == 'T' ? true_input : false_input) << endl;
     cout << CYAN << "-------------------------------------------------------" << endl;
                cout << endl;

                break;
            }


        }

    cout << RESET;
    return 0;


        



}