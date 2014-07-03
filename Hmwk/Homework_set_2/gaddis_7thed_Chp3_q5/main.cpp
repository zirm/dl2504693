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
    float swing, hit, avg;
//Asking the user for info
    cout<<"How many times did you swing? ";
    cin>>swing;
    cout<<"How many did you hit? ";
    cin>>hit;
            
   
//Calculations 
    
    avg=hit/swing;
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
     
//Output
    
    cout<<"Your batting average is " <<avg <<" try harder ";
    
    
    
    return 0;
}
