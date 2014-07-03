/* 
 * File:   Question 9
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
    float w_pall, w_num;
    
    
//Asking the user for info
    cout<<"Enter wight of the pallet: ";
    cin>> w_pall;
    
//Calculations 
    
    w_num=w_pall/9.2;
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(0);
     
//Output
    
    cout<< "The number of widgets in the pallet is " <<w_num;
    
    
    return 0;
}
