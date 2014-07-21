//David Leanos
//July 10th, 2014
//homework and midterm, etc....

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();


//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    char dummy;
      

    cout<<"Welcome to the Oregon Trail: The Modern Edition!\nYou will be challenged with the task of getting your family";
    cout<<" across America and into the great State of Oregon.\nDo you accept the challenge?\nPress any key to continue (If you don't continue your family will die...)"; 
    cin>>dummy;
    cout<<endl;
    cout<<"In your great journey you will need a vehicle to great across the country. Make your choice wise.\n";
    cout<<"If you get a fast vehicle, you will arrive to Oregon Quicker, facing less dangers; however, you will have less\n";
    cout<<"money to spend on HP(Health), Weapons and Merchants to keep your family alive!\n"; 
    cout<<"Use your money wisely. You only have 1000 Cash.\n";
    cout<<"Press any key to continue \n";
    cin>>dummy;

    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
       
            default:;
        };
    }while(inN<4);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"You Have Three Choices for vehicles. Remember, you only have 1000 Dollars!\n" 
    <<"Your fastest choice is a Bentley Flying Spur W12\n" 
    <<"This baby will take you home in just 4 events! However it comes at a cost of 750 Dollars.\n"
    <<"Your confort choice is the a good old Honda Accord.\nIt's obvously not nearly as fast as the Bentley "
    <<"But the price is far more affortable at just 400 Dollars. This baby will take you home in 8 Events.\n"
    <<"If you're feeling cheep and want to enjoy the ride, you can purchase a Nissan Vanette.\nA nice little van that the kids will love "
    <<"at a dirt cheep price of 200 Dollars; however this baby will take 12 events to take you home\n"
    <<"     Press '1' to purchase the Bentley(750 Dollars)\n"
    <<"     Press '2' to purchase the Accord(400 Dollars)\n"
    <<"     Press '3' to purchase the Nissan Vanette(200 Dollars)\n"
    <<"     Press '4' to quit the game\n";
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    int cash;
     
    cash=750;
    
    cout<<"Congratulations on your purchase of a used(come on, we all know you can't afford a new one) Bentlwy Flyiing Spur!\n"
    "Now your have a total of " <<cash<<" Dollars.\n";
}

//Solution to problem 2
void problem2(){
    
}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
}


//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}