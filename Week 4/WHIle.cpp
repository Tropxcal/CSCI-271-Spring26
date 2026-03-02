Name: Aiden White
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program:  while loop 
Description: this promt the user to enter an age that is between 1 - 120 and is a realistic age that is possible.

#include <iostream>
 using namespace std;
int main(){
int age ; 
cout << "enter age (1-120); " ;
cin >> age ;


while (age <1|| age > 120 ) { 
    cout << "invalid. please enter a realistic age : " <<endl ; 
    cin >> age; 
}
    return 0;
}




these are important because it can execute a proram if something is true  or have something run while thats true 