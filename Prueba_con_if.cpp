/*
Fun_With_Numbers.cpp
Aug 11, 2017
Juan Casian
*/

#include <iostream>   // input and output stream
#include <string>     // package to use string type variables
#include <ostream>    //

using namespace std; //importing std family

int main () {

  string Operation;
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

  cout <<"Enter: + , - , * , / or remainder" <<endl;
  cin >> Operation;


  if (Operation == "+") {

    Answer = Value1 + Value2;
    cout << "Result = "  <<Answer <<endl;

  } else {

    if (Operation == "-") {

      Answer = Value1 - Value2;
      cout << "Result = "  <<Answer <<endl;

      else {

        if (Operation == "*") {

          Answer = Value1 * Value2;
          cout << "Result = "  <<Answer <<endl;

          else {

            if (Operation == "/") {

              Answer = Value1 / Value2;
              cout << "Result = "  <<Answer <<endl;

              else {

                if (Operation == "remainder") {

                  Answer = Value1 / Value2;
                  cout << "Aun no sé cómo" <<endl;
                  else {

                    cout << "Input not found" <<endl;

                  }

                }

              }

            }

          }

        }

      }

    }

  }






}
