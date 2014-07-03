/* 
 * File:   Question 5
 * Author: David Leanos
 *
 * Created on July 1, 2014, 7:00 PM
 */
//System Defined Libraries 
#include <iostream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
//Naming the Variables 
    float t_1,t_2,t_3,t_4,t_5,t_avg;
//Asking the user for info
    cout<<"What did you score on test#1?";
    cin>>t_1;
    cout<<"What did you score on test#2?";
    cin>>t_2;
    cout<<"What did you score on test#3?";
    cin>>t_3;
    cout<<"What did you score on test#4?";
    cin>>t_4;
    cout<<"What did you score on test#5?";
    cin>>t_5;
  
   
//Calculations 
    
    t_avg=(t_1+t_2+t_3+t_4+t_5)/5;
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
     
//Output
    
    cout<<"Your test average is " <<t_avg <<"% try harder ";
    
    
    
    return 0;
}
