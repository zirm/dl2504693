/* 
 * File:   Question 4
 * Author: David Leanos
 *
 * Created on July 2, 2014, 7:50 PM
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
    float cost_r,min_in;
//Asking the user for info
    cout<<"How much is the replacement cost of a your home?\n";
    cin>>cost_r;
            
            
//Calculations 
    
    min_in=cost_r*.8f;
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
     
//Output
    
    cout<<"The minimum insurance you should purchase should be " <<min_in <<" Dollars\n";
    
    
    return 0;
}
