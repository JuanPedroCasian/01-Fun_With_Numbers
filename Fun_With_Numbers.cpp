/*
Fun_With_Numbers.cpp
Aug 11, 2017
Juan Casian
*/

#include <iostream>   // input and output stream
//#include <string>       package to use string type variables

using namespace std; //importing std family

int main () {

  int Value1, Value2, Answer;         /* This is the declaration of variables
                                it used an integer type of variable.
                                The separation by comma is the same as writting
                                int Value1;
                                int Value2;
                                */
  cout <<"Enter Value 1" <<endl;   //print "Enter Value 1" and change line
  cin >> Value1;   /*
                          "cin" is the comand to read the console info, it
                          is followed by the extraction operato (">>") which
                          makes the program read the value entered by the user.
                          after ">>" comes a variable ("Value1")
                          */

  cout <<"Enter Value 2" <<endl;
  cin >> Value2;

  Answer = Value1 + Value2;       /* This line of code is stating the value of
                                    the variable "Answer" by adding the
                                    previously inputed value of variables
                                    "Value 1" and "Value2"
                                    */
  cout <<"Result of Addition = ";  cout << Answer <<endl;  /* This line of
                                    *code is printing "Result of Addition = "
                                    *(add the space in the last) and the value
                                    *for the variable "Answer". At the end it
                                    *just changed line
                                    */

  Answer = Value1 - Value2;             //Same but with Substraction
  cout<<"Result of Substraction = "; cout <<Answer <<endl;

  Answer = Value1 * Value2;            //Same but with Multiplication
  cout<<"Result of Multiplication = "; cout <<Answer <<endl;

  Answer = Value1 / Value2;           //Same but with division
  cout<<"Result of Divition = "; cout <<Answer <<endl;

  Answer = Value1 % Value2;           /* This is the same but what "%" makes,
                                      is that the value of "Answer" will be the
                                      remainder of the division of "Value1"
                                      divided by "Value2"
                                      */
  cout<<"Remainder of Divition = "; cout <<Answer <<endl;

  return 0;

}
