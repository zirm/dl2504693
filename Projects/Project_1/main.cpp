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
    cout<<"Press any key to continue";
    cin>>dummy;
    
    cout<<endl<<"You Have Three Choices for vehicles. Remember, you only have 1000 Dollars!\n" 
    <<"Your fastest choice is a Bentley Flying Spur W12\n" 
    <<"This baby will take you home in just 4 events! However it comes at a cost of 750 Dollars.\n"
    <<"Your confort choice is the a good old Honda Accord.\nIt's obvously not nearly as fast as the Bentley "
    <<"But the price is far more affortable at just 400 Dollars. This baby will take you home in 8 Events.\n"
    <<"If you're feeling cheep and want to enjoy the ride, you can purchase a Nissan Vanette.\nA nice little van that the kids will love "
    <<"at a dirt cheep price of 200 Dollars; however this baby will take 12 events to take you home\n"
    <<"Press any key to continue";
    cin>>dummy;
    cout<<endl<<"You will also have two choices of weapons. A handgun or a shotgun.The handgun is the cheeper choice at 50 dollars.\n"
    <<"The shotgun is a little more expensive at a price of 100 dollars; however you're 50% more likely to win in an encounter. The handgun give you points in style though\n"
    <<"Press any key to continue ";
    cin>>dummy;
 
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem3();break;
        case 5: problem3();break;
        case 6: problem3();break;
        
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){

    cout<<endl<<"     Press '1' to purchase the Bentley and Handgun (800 Dollars)\n"
    <<"     Press '2' to purchase the Accord and Handgun(450 Dollars)\n"
    <<"     Press '3' to purchase the Nissan Vanette and Handgun(250 Dollars)\n";
   cout<<"     Press 4' to purchase the Bentley and Shotgun (850 Dollars)\n"
    <<"     Press '5' to purchase the Accord and Shotgun(500 Dollars)\n"
    <<"     Press '6' to purchase the Nissan Vanette and Shotgun(300 Dollars)\n"
    <<"     Press '7' to quit the game\n";
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
     
    cash=200;
    
    cout<<"Congratulations on your purchase of a used(come on, we all know you can't afford a new one) Bentlwy Flyiing Spur and a handgun!\n"
    "Now your have a total of " <<cash<<" Dollars.\n";
}

//Solution to problem 2
void problem2(){
    
}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
}

//Solution to problem 5
void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
}

//Solution to problem 3
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}