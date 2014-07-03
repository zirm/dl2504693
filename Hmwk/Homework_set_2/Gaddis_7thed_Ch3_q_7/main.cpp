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
    float m1,m2,m3,m_avg;
    const char MSIZE=10;
    char month1[MSIZE], month2[MSIZE], month3[MSIZE];
    
//Asking the user for info
    cout<<"Enter the first month name: ";
    cin>> month1;
    cout<<"Enter the second month name: ";
    cin>>month2;
    cout<<"Enter the third month name: ";
    cin>>month3; 
    cout<<"Enter the average rain fall for " <<month1 <<" in inches \n"; 
    cin>>m1;
    cout<<"Enter the average rain fall for " <<month2 <<" in inches \n";
    cin>>m2;
    cout<<"Enter the average rain fall for " <<month3 <<"in inches \n";
    cin>>m3;
            
//Calculations 
    
    m_avg=(m1+m2+m3)/3;
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
     
//Output
    
    cout<<"The average rain fall for "<<month1 <<" " <<month2 <<" and " <<month3 <<" is " <<m_avg <<" inches.";
    
    
    return 0;
}
