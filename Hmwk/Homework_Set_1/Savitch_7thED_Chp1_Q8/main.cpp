/* 
 * File:   Question 8 Chp1
 * Author: David Leanos
 *
 * Created on June 30, 2014, 7:45 PM
 */
//System Libraries
#include <iostream>

using namespace std;

//User Defined Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here 
int main(int argc, char** argv) {
    int number_quarters, number_dimes, number_nickels, number_qc, number_dc,number_nc, total_cents;
    cout<<"How much money do you have?!\n";
    cout<<"How many quarters do you have?\n";
    cin>>number_quarters;
    cout<<"How many dimes do you have?\n";
    cin>>number_dimes;
    cout<<"How many nickles do you have?\n";
    cin>>number_nickels;
    
    //Calculations 
    
    number_qc=number_quarters * 25;
    number_dc= number_dimes * 10;
    number_nc= number_nickels * 5;
    total_cents=number_qc + number_dc + number_nc;

    cout<<"You have ";
    cout<<total_cents;
    cout<<" cents\n";
        
    return 0;
}

