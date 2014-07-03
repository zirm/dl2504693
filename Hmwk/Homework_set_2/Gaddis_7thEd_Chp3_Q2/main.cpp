/* 
 * File:   Question 2
 * Author: David Leanos
 *
 * Created on July 2, 2014, 6:27 PM
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
    float class_a, class_b, class_c, total_in;
//Asking the user for info
    cout<<"How many tickets were sold for Class A seats?";
    cin>>class_a;
    cout<<"How many Tickets were sold for Class B seats?";
    cin>>class_b;
    cout<<"How many Tickets were sold for Class C seats?";
    cin>>class_c;
   
//Calculations 
    total_in=class_a*15 + class_b*12 + class_c*8;
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
     
//Output
    
    cout<<"The total revenue collected is " <<total_in <<" Dollars\n";
    
    
    return 0;
}

