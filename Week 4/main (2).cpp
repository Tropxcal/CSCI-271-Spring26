Name: Aiden WHite
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: While loop
Description: this is a while loop that reapts whats in the loop while the condition in the () parethese are true 

#include <iostream>
 using namespace std;
int main()
{
int total = 0;
int counter = 1;
cout << "enter a grade"<<endl;     
     while (counter <= 10 ) {
         int grade;
         cin >>grade;
         total += grade;
         counter ++;
        cout<<"enter another grade"<<endl;
         
     }
     double average = static_cast<double>(total) / 10 ; 
     cout <<average;
    return 0;
}


this can help when you need to code a programand  need to run a loop until somethin is finishbeing executed