/* 
* File:   Problem 1 Savage Ch1
* Author: David Leanos
*
* Created on June 25, 2014, 8:49 PM
*/

//System Level Libraries 
#include <iostream>
using namespace std;
//User Defined Libraries 

//Global Constants

//Function Pootypes

//Execution Begins Here 
int main(int argc, char** argv) {
   
   int number_of_pods, peas_per_pod,total_peas;
   
   cout<<"Hello\n";
   cout<<"Press return after entering a number\n";
   cout<<"Enter the number of pods:\n";
   cin>>number_of_pods;
   cout<<"Ener the number of peas in the pods\n";
   cin>>peas_per_pod;
   
   total_peas = number_of_pods * peas_per_pod;
   
   cout<<"If you have ";
   cout<<number_of_pods;
   cout<<" pea pods\n";
   cout<<"and ";
   cout<<peas_per_pod;
   cout<<"peas in each pod, then \n";
   cout<<"you have ";
   cout<<total_peas;
   cout<<" peas in all the pods.\n";

   
   return 0;
}