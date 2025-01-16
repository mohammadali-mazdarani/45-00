#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/* 
* Description of program :
* Cascading member function calls with the this pointer
*/
//create namespace
/*
* Branch name : 
* main : total program and ready to run.
* main_test : write program and debug.
*/
//prototype
//--------------------------
//micro
//---------------------
//global variable
//-------------------
//struct
//-------------------
//union
// !-------------------
// TODO classes

// & TODO class Time.

class Time{

private : 

int _hours ;

int _minute ;

int _second ;

public :

Time ( int = 0 , int = 0 , int = 0 ) ;

} ;

// !-------------------

int main(int argc, char** argv)
{

getch();
}

//function variable

// !--------------------------

// TODO Constructors and functions for classes and friend function and function's for main program.

// & ToDo constructors and functions for classes.

// ? TODO Constructors and functions for class Time.

/*
* Constructor_1 .
* This constructor receive three integer value .
* This constructor use setTime function .
*/

Time :: Time ( int hours_constructor_1 , int minute_constructor_1 , int second_constructor_1){

setTime( hours_constructor_1 , minute_constructor_1 , second_constructor_1 ) ;

}