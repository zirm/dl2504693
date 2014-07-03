/* 
 * File:   Question 3
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
    float rent, util, phones, cable, total_month, total_year;
//Asking the user for info
    cout<<"How much do you spend on rent monthly?";
    cin>>rent;
    cout<<"How much do you spend on phones monthly?";
    cin>>phones;
    cout<<"How much do you spend on cable monthly?";
    cin>>cable;
    cout<<"How much do you spend on utilities monthly?";
    cin>>util;
            
   
//Calculations 
    
    total_month=rent + util+ phones +cable;
    total_year=total_month*12;
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
     
//Output
    
    cout<<"The total expenses monthly is " <<total_month <<" Dollars\n";
    cout<<"The total expenses yearly is " <<total_year <<" Dollars\n";
    
    
    return 0;
}
