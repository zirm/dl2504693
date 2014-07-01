/* 
* File:   Problem 5 Savage Ch1
* Author: David Leanos
*
* Created on June 25, 2014, 8:49 PM
*/

//System Level Libraries 
#include <iostream>
using namespace std;
//User Defined Libraries 

//Global Constants

//Function Protypes

//Execution Begins Here 
int main(int argc, char** argv) {
   
   int number_first, number_second,total_addition, total_multiplication;
   
   cout<<"Hello\n";
   cout<<"Press return after entering a number\n";
   cout<<"Enter Two Numbers that you would like me to add and also multiply\n";
   cin>>number_first;
   cout<<"Enter the second number\n";
   cin>>number_second;
   
   total_addition = number_second + number_first;
   total_multiplication = number_second * number_first;
   
   cout<<"If you add ";
   cout<<number_first;
   cout<<" and ";
   cout<<number_second;
   cout<<" the result will be ";
   cout<<total_addition;
   cout<<". \n";
   cout<<"If you multiply";
   cout<<number_first;
   cout<<" and ";
   cout<<number_second;
   cout<<" Then the product will be ";
   cout<<total_multiplication;
           
   return 0;
      
}
