/* 
 * File:  Gaddis Ch3Q1
 * Author: David Leanos
 *
 * Created on July 2, 2014, 6:14 PM
 */


//System Level Libraries
#include <iostream>

using namespace std;
//User Defined Libraries 

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    float tank_full, miles, miles_per_gallon;
    //Asking user for inputs
    cout<<"How many Gallons will fill up your Vehicle?";
    cin>>tank_full;
    cout<<"How many Miles until can you drive before you run out of gas?";
    cin>>miles;
    
    //Calculations 
    
    miles_per_gallon= miles/tank_full;
    
    //Output
    
    cout<<"Your Fuel Efficiency is: " << miles_per_gallon <<" miles per gallon\n";
    
  
    
    return 0;
}

