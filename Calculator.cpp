#include<iostream>//This is for cin and cout functions to work in c++ program.
using namespace std;//importing the namespace std to use cout and cin.
int main(){//This is a function to start the program.
    int num1,num2,add,sub,mul,div,option;//This is a variable declaration to store the number.
    cout<<"Enter Two Number :-  ";//This is a statement to ask user to enter two numbers.
    cin>>num1>>num2;//This is a statement to take input from user.
    for(;;){//This is a loop to run the program.
        cout<<"\nEnter 1 for Addition ";//This is a statement to print the option Addition.
        cout<<"\nEnter 2 for Subtraction ";//This is a statement to print the option Subtraction.
        cout<<"\nEnter 3 for Multiplication ";// This is a statement to print the option Multiplication.
        cout<<"\nEnter 4 for Division ";//This is a statement to print the option Division.
        cout<<"\nEnter 5 for Exit  ";//This is a statement to print the option Exit.
        cout<<"\nEnter Your Option :-  ";//This is a statement to ask user to enter the option.
        cin>>option;//This is a statement to take input from user.
        switch(option){//This is a switch case to check the option.
            case 1://This is a case to check the option Addition.
                add=num1+num2;//This is a statement to add the two numbers num1 and num2.
                cout<<"\nAddition of Two Number is: "<<add;//This is a statement to print the addition of two numbers.
                break;//This is a statement to break the option Addition case 1
            case 2://This is a case to check the option Subtraction.
                sub=num1-num2;//This is a statement to subtract the two numbers num1 and num2.
                cout<<"\nSubtraction of Two Number is: "<<sub;//This is a statement to print the subtraction of two numbers.
                break;//This is a statement to break the option Subtraction case 2
            case 3://This is a case to check the option Multiplication.
                mul=num1*num2;//This is a statement to multiply the two numbers num1 and num2.
                cout<<"\nMultiplication of Two Number is: "<<mul;//This is a statement to print the multiplication of two numbers.
                break;//This is a statement to break the option Multiplication case 3
            case 4://This is a case to check the option Division.
                div=num1/num2;//This is a statement to divide the two numbers num1 and num2.
                cout<<"\nDivision of Two Number is: "<<div;//This is a statement to print the division of two numbers.
                break;//This is a statement to break the option Division case 4
            case 5://This is a case to check the option Exit.
                exit(0);//This is a statement to exit the program.
                break;//This is a statement to break the option Exit case 5
        }//This is a statement to end the switch case.
    }//This is a statement to end the loop.
    return 0;//This is a statement to return 0 to main function and end of program is here and this is for end of program.
}//Close of main function.
