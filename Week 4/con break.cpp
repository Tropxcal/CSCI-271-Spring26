Name: Aiden White
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: For Loop
Description: This loops counts from 1 - 10 but throught hte way it uses the continue  to keep couting then  breaks becuase of the break menaing stop.

#include <iostream>

 using namespace std;
int main(){
for (int i = 1 ; i <= 10 ; i ++){
    if (i == 3 ) {
        continue;
    }
    if (i == 6) {
        break;
        
    }
    cout << i << " "<<endl;
}
    return 0;
}


these comands are inportan because the for loop can executer a program x amount of times 

the continue is useful becauyse it can  check if sonmethiung is true then continue  the code 
the break function similare to the continue does the opposite it stops the code 
this is all possible because of the if statement 