/* 
 * File:   Question 9 Chapter1 Savitch
 * Author: David Leanos Badillo
 *
 * Created on June 30, 2014, 8:12 PM
 */
//System Libraries 
#include <iostream>
using namespace std;
//User Defined Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here

int main(int argc, char** argv) {
    
    int second_f, distance_f, acceleration_g;
    
    
    cout<<"How far a would you fall?\n";
    cout<<"Input how many seconds you would fall for? \n";
    cin>>second_f;
   //Calculations 
    
    acceleration_g=32;
    distance_f =(((second_f) * (second_f)) * acceleration_g)*.5;
    
    //Display
    cout<<"You would fall ";
    cout<<distance_f;
    cout<<" feet\n";
    
    
    
    return 0;
}

