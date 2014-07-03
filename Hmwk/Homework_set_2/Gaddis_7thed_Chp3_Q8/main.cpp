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
    float t_k,t_a,t_gross,t_net, t_loss;
    const char MSIZE=10;
    char movie1[MSIZE], movie2[MSIZE], movie3[MSIZE];
    
//Asking the user for info
    cout<<"Enter the name of the movie: ";
    cin>> movie1;
    cout<<"Enter number of children tickets sold: ";
    cin>>t_k;
    cout<<"Enter the number of adult tickets sold: ";
    cin>>t_a; 
            
//Calculations 
    t_gross=(t_a*6)+(t_k*3);
    t_loss=t_gross*0.8f;
    t_net=t_gross-t_loss;
            
    
    
//Controlling the decimal points 
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
     
//Output
    cout<<"\n";
    cout<<"Movie name:                    "<<movie1<<"\n";
    cout<<"Kid tickets sold:              "<<t_k<<"\n";
    cout<<"Adult tickets sold:            "<<t_a<<"\n";
    cout<<"Gross Box Office Profit      $ "<<t_gross<<"\n";
    cout<<"Amount Paid to Distributor  -$ "<<t_loss<<"\n";
    cout<<"Net Box Office Profit        $ "<<t_net<<"\n";
            
    
    
    return 0;
}
