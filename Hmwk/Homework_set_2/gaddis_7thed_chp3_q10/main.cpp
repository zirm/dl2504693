/* 
 * File:   Question 10
 * Author: David Leanos
 *
 * Created on July 2, 2014, 7:27 PM
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
    float ate,calories,cookie;
    
    
//Asking the user for info
    cout<<"How many cookies did you eat? ";
    cin>> ate;
    
            
//Calculations 
    cookie=(300.f)/4;
    calories=cookie*ate;
            
   
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
     
//Output
    
    cout<<"You consumed " <<calories <<" calories";
    
    
    return 0;
}
