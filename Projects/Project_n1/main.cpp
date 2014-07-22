//David Leanos
//July 10th, 2014
//Project #1

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <climits>
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
    srand(time(0));
    int inN;
    char dummy;
      

    cout<<"Welcome to the Dakota Trail: The Modern Edition!\nYou will be challenged with the task of getting your family";
    cout<<" across America and into the great State of Dakota.\nDo you accept the challenge?\nPress any key to continue (If you don't continue your family will die...)"; 
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
    <<"This baby will take you home in just 8 events! However it comes at a cost of 750 Dollars.\n"
    <<"Your confort choice is the a good old Honda Accord.\nIt's obvously not nearly as fast as the Bentley "
    <<"But the price is far more affortable at just 400 Dollars. This baby will take you home in 12 Events.\n"
    <<"If you're feeling cheep and want to enjoy the ride, you can purchase a Nissan Vanette.\nA nice little van that the kids will love "
    <<"at a dirt cheep price of 200 Dollars; however this baby will take 15 events to take you home\n"
    <<"Press any key to continue";
    cin>>dummy;
    cout<<endl<<"You will also have two choices of weapons. A handgun or a shotgun.The handgun is the cheeper choice at 50 dollars.\n"
    <<"The shotgun is a little more expensive at a price of 100 dollars;\n however you're 50% more likely to win in an encounter. The handgun give you points in style though\n"
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
   cout<<"     Press '4' to purchase the Bentley and Shotgun (850 Dollars)\n"
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

//Bentley with handgun
void problem1(){
    int cash, hp,random, gun_random, random_2, sta;
    char hp_purchase, dummy;//, choice;
    
    hp=70;
    cash=200;
    
    cout<<"Congratulations on your purchase of a used(come on, we all know you can't afford a new one) Bentley Flying Spur and a handgun!\n"
    "Now your have a total of " <<cash<<" Dollars.\n";
    cout<<"Before we embark on our journey you must purchase HP. You have 70HP by default.\n";
    cout<<"Don't use up all your money though! You could find shops with much cheeper prices in your journey or you could need your money to get out of a hairy situation!\n";
    cout<<"You can purchase more for the price of:\n";
    cout<<"     10HP for 40 dollars (Press A to purchase)\n";
    cout<<"     25HP for 80 dollars (Press B to purchase)\n";
    cout<<"     60HP for 120 dollars (Press C to purchase)\n";
    //cout<<"     90HP for 290 dollars (Press D to purchase)\n";
    //cout<<"     200HP for 500 dollars (Press E to purchase)\n";
    cout<<"     Press F if you would like not purchase HP\n";	
    cin>>hp_purchase;
    
    //loop for purchasing HP
    switch(hp_purchase)
    {
        case'A':
	case'a':
        {
	hp=hp+10;
	cash=cash-40;

    cout<<"You've Chosen to buy 10HP. Your new HP value is: "<<hp<<" and you now have "<<cash<< "dollars!\n"; 
        
    break;
        }
    case'B':
        case'b':
        {
	hp=hp+25;
	cash=cash-80;

    cout<<"You've Chosen to buy 25HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
    case'C':
    case'c':
    {
	hp=hp+60;
	cash=cash-120;

    cout<<"You've Chosen to buy 60HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 
    
    break;
    }
    case'D':
    case'd':
    {
	hp=hp+90;
	cash=cash-290;

    cout<<"You've Chosen to buy 90HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
    }
        case'E':
	case'e':
        {
	hp=hp+200;
	cash=cash-500;

    cout<<"You've Chosen to buy 200HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
        case'F':
	case'f':
        {
	hp=hp;
	cash=cash;

    cout<<"You've Chosen to buy 0HP. Your HP value is:"<<hp<<" and you have"<<cash<< "dollars!\n"; 

    break;
        }   

    }
    
//Start of game  
 
    cout<<endl<<"Now you're ready to start your journey!\n"
    <<"Press any key to start\n";
    cin>>dummy;
char choice;    
//Loop for the game possibilities    
for (sta = 0; sta < 7 || hp < 0 || hp>1000; sta++)
{
    
    random = rand()%100+1;
    // First possible Event
    if(random>=1 && random<=8)
    {
        cout<<endl<<"Your family is Starving! You can go out hunting or you could let your family starve and lose HP!\n";
        cout<<"If you would like to go hunting 'Y'. If you don't want to press 'N'\n";
        //cin.ignore(INT_MAX);
        //cin.get();
        //cout<<"\nTEST\n";
        cin>>choice;
        //cout<<"\nTEST\n";
        //choice = 'y';
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
    
        // Second possible Event
    if(random>8 && random<=16)
    {
        cout<<endl<<"You're being ransacked!\n";
        cout<<"If you would like to fight press'Y'. If you want to pretend to sleep and let them pillage you press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
           random_2= rand()%10+1;
           
            if(random_2<5)
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"Your were outnumbered and out gunned! You lost he fight and got wounded in the process ";
                cout<<"you also lost 30 dollars!\n";
                cout<<" you've lost 40HP, your new HP is" <<hp <<"you lost 30 dollars now you have: " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+50;
                hp=hp-10;
                cout<<endl<<"You've won the fight but you were mildly wounded. The ransackers dropped money while escaping!\n"
                        <<"You've lost 10HP, your new HP is:"<<hp<<"and you gained 50 dollars, now you have have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-30;
            cash=cash-30;
            cout<<endl<<"You were a coward and had much of your supplies and money stolen!!\n"
            <<"You lost 30 HP,your new HP is " <<hp<< "you lost 30 dollars now you have" <<cash<< "dollars!\n";
        }
    }
    
    
        // Third possible Event
    if(random>16 && random <=24)
    {
        
        cout<<endl<<"Your family is Starving! You find road kill, you can take a chance and eat it or you could let your family starve and lose HP!\n";
        cout<<"If you would like to eat road kill press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            //random again function 
            if(random_2<5)
            {
                hp=hp+15;
                cout<<endl<<"You're one crazy bastard! But you've got a gut of metal! The road kill was delicious and you feel better\n"
                <<" you've gained 15HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+45;
                cout<<endl<<"You're disgusting! You've gotten incredibly ill! You've lost HP\n"
                        <<"You've lost 45 HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        //start of no event
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
        //end of no event
    }
    // Fourth possible Event
    if(random>24 && random<=32)
    {
        cout<<endl<<"A man driving by challenges you to a race! He bets 30 dollars and 40 HP!\n";
        cout<<"If you would like to race press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            //Random function again
            random_2= rand()%10+1; 
            if(random_2<5)
            {
                cash=cash-30;
                hp=hp-40;
                cout<<endl<<"You lost the race and the bet! Your Driving skill needs work!\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and you also lost 30 dollars, now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+30;
                hp=hp+40;
                cout<<endl<<"You've won! That was surprising..\n"
                        <<"You've gained 40HP, your new HP is:"<<hp<<"and you gained 30 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            
            cout<<endl<<"Your family loses respect for you..\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
//Fifth possible event 
if(random>40 && random<=48)
    {
        cout<<endl<<"You see an innocent looking man on he road who is asking for help!\n";
        cout<<"If you would like to help, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='N' || choice=='n' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-30;
                cout<<endl<<"The man hold a grudge against you. He find you at the next camp and attacks you!\n"
                <<" you've lost 30HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp;
                cout<<endl<<"You continue your journey with he lingering though that the man you saw could be dead all because you did no help.\n"
                        <<"You've gained 0 HP, your HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
                if (choice=='Y'||choice=='y')
        {
            //random formula #2
                    hp=hp+25;
                cout<<endl<<"He was actually just stretching but is so impressed by your good will that he rewards you with food!\n"
                <<"Your HP increases by 25 your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
      
        }
// Sixth possible Event
   // if(random>48 && random<=56)
    {
        cout<<endl<<"You must once again hunt!\n";
        cout<<"If you would like to hunt click 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }

// Seventh possible Event
    if(random>56 && random<=62)
    {
        cout<<endl<<"You've found a sketchy looking man selling HP at 60HP for 20 dollars!!\n";
        cout<<"If you would like to go buy press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<8)
            {
                cash=cash-20;
                hp=hp-40;
                cout<<endl<<"It was an rotten food! You get sick and loose your money..\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and lost 20 dollars, you now have :" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+60;
                cash=cash-20;
                cout<<endl<<"You've made a great deal! What a sucker!\n"
                        <<"You've gained 60HP, your new HP is:"<<hp<<"and you lost 20 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp;
            cout<<endl<<"Life is good!\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 8th possible Event
    if(random>62 && random<=70)
    {
        cout<<endl<<"You got bitten by a poisonous snake! You could lose less HP if you have your wife suck he poison out!\n";
        cout<<"If you would like to try it, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-60;
                cout<<endl<<"Your wife did it incorrectly and go herself poisoned too!!\n"
                <<" you've lost 60HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-10;
                cout<<endl<<"Your wife succeeded at sucking out the poison!! You only have mild swelling \n"
                        <<"You've lost only 10HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-40;
            cout<<endl<<"You take the pain and pay for it! You can't move your foot for a week\n"
            <<"You lose 40 HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 9th possible Event **LOOOOOOOOOOOOOOOOOOW Prov
    if(random>110 && random<=104)
    {
        cout<<endl<<"Crashed and died..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-10000;
        
    }
// 10th possible event ** LOOOOOOOOOW
  if(random>104 && random<=108)
    {
        cout<<endl<<"You decide that Oregon is bullshit and move to socialist Norway and life you life living of the government! !\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp+10000;
        
    }
// 11th Possible Event
    if(random>70 && random<=78)
    {
        cout<<endl<<"You've been feeling stressed out stress can decrease your HP. A lady of the night(hooker) says she can help you relieve stress for only 20 dollars !\n";
        cout<<"If you would like to go engage press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+30;
                cash=cash-30;
                cout<<endl<<"What a good night!\n";
                cout<<" You've gained 30 HP, your new HP is" <<hp <<"and you have lost 30 dollars. Now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"You got sick! Wrap it up next time!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you lost 30 cash, now you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+10;
                cash=cash;
                cout<<endl<<"After the encounter with the hooker you start to laugh. All you needed was a good laugh!!\n";
                cout<<" You've gained 10 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
            else 
            {
                hp=hp-15;
                cash=cash;
                cout<<endl<<"You still feel stressed.. You head starts hurting..\n"
                        <<"You've lost 15HP, your new HP is:"<<hp<<"and you have "<<cash<<"dollars!\n";
            }
        }
    }
//12th Event
if(random>86 && random<=94)
    {
        cout<<endl<<"Your Radiator busted from the high heat! You find a family camping about 2 miles from your own camp with a similar one\n";
        cout<<"You need it or you will have to drive without the A/C and risk getting a heatstroke..You think about maybe stealing it\n";
        cout<<"If you would like steal then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp;
                
                cout<<endl<<"You got a radiator and can continue on your journey! Poor family though\n";
                cout<<" Your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You failed at stealing it and their guard dog attacks you!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"You have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            
                hp=hp-30;
                cash=cash;
                cout<<endl<<"You end up driving without the A/C to try to prevent overheating but you get sick in the process\n";
                cout<<" You've lost 30 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
           
        
    }
//13th possible event
if(random>94 && random<=102)
    {
        cout<<endl<<"Your family is starving. You find some wild berries\n";
        cout<<"If you would like to go pick them then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+20;
                cash=cash;
                cout<<endl<<"The Berries were amazing!!\n";
                cout<<" You've gained 20 HP, your new HP is" <<hp <<"and you have " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You got sick! Those berries were very bad..\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            hp=hp-30;
            cout<<"Your Family starves for a day..\n"
            <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        }
    }
// 14th possible Event 
    if(random>102 && random<=110)
    {
        cout<<endl<<"Your wife is pregnant! It adds to you stress..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-30;
        cout<<"Too much stress man..\n"
        <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        
    }
//last of loop    
}
    
     if (hp>0)
    {
        
        
         cout<<endl;
         cout<<"Congratulations! You have made it to Oregon!!! Play again?";
         cout<<endl;
         cout<<endl;
                }
    else
    {
       
        cout<<endl;
        cout<<"Game over.. You suck!!\n";
        cout<<"Try again?\n"<<endl;
        cout<<endl;
        cout<<endl;
       
    }   
    
//end    
}

//Accord with Handgun
void problem2(){
       int cash, hp,random, gun_random, random_2, sta;
    char hp_purchase, dummy;//, choice;
    
    hp=70;
    cash=550;
    
    cout<<"Congratulations on your purchase of a used(come on, we all know you can't afford a new one) Bentley Flying Spur and a handgun!\n"
    "Now your have a total of " <<cash<<" Dollars.\n";
    cout<<"Before we embark on our journey you must purchase HP. You have 70HP by default.\n";
    cout<<"Don't use up all your money though! You could find shops with much cheeper prices in your journey or you could need your money to get out of a hairy situation!\n";
    cout<<"You can purchase more for the price of:\n";
    cout<<"     10HP for 40 dollars (Press A to purchase)\n";
    cout<<"     25HP for 80 dollars (Press B to purchase)\n";
    cout<<"     60HP for 120 dollars (Press C to purchase)\n";
    cout<<"     90HP for 290 dollars (Press D to purchase)\n";
    //cout<<"     200HP for 500 dollars (Press E to purchase)\n";
    cout<<"     Press F if you would like not purchase HP\n";	
    cin>>hp_purchase;
    
    //loop for purchasing HP
    switch(hp_purchase)
    {
        case'A':
	case'a':
        {
	hp=hp+10;
	cash=cash-40;

    cout<<"You've Chosen to buy 10HP. Your new HP value is: "<<hp<<" and you now have "<<cash<< "dollars!\n"; 
        
    break;
        }
    case'B':
        case'b':
        {
	hp=hp+25;
	cash=cash-80;

    cout<<"You've Chosen to buy 25HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
    case'C':
    case'c':
    {
	hp=hp+60;
	cash=cash-120;

    cout<<"You've Chosen to buy 60HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 
    
    break;
    }
    case'D':
    case'd':
    {
	hp=hp+90;
	cash=cash-290;

    cout<<"You've Chosen to buy 90HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
    }
        case'E':
	case'e':
        {
	hp=hp+200;
	cash=cash-500;

    cout<<"You've Chosen to buy 200HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
        case'F':
	case'f':
        {
	hp=hp;
	cash=cash;

    cout<<"You've Chosen to buy 0HP. Your HP value is:"<<hp<<" and you have"<<cash<< "dollars!\n"; 

    break;
        }   

    }
    
//Start of game  
 
    cout<<endl<<"Now you're ready to start your journey!\n"
    <<"Press any key to start\n";
    cin>>dummy;
char choice;    
//Loop for the game possibilities    
for (sta = 0; sta < 12 || hp < 0 || hp>1000; sta++)
{
    
    random = rand()%100+1;
    // First possible Event
    if(random>=1 && random<=8)
    {
        cout<<endl<<"Your family is Starving! You can go out hunting or you could let your family starve and lose HP!\n";
        cout<<"If you would like to go hunting 'Y'. If you don't want to press 'N'\n";
        //cin.ignore(INT_MAX);
        //cin.get();
        //cout<<"\nTEST\n";
        cin>>choice;
        //cout<<"\nTEST\n";
        //choice = 'y';
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
    
        // Second possible Event
    if(random>8 && random<=16)
    {
        cout<<endl<<"You're being ransacked!\n";
        cout<<"If you would like to fight press'Y'. If you want to pretend to sleep and let them pillage you press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
           random_2= rand()%10+1;
           
            if(random_2<5)
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"Your were outnumbered and out gunned! You lost he fight and got wounded in the process ";
                cout<<"you also lost 30 dollars!\n";
                cout<<" you've lost 40HP, your new HP is" <<hp <<"you lost 30 dollars now you have: " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+50;
                hp=hp-10;
                cout<<endl<<"You've won the fight but you were mildly wounded. The ransackers dropped money while escaping!\n"
                        <<"You've lost 10HP, your new HP is:"<<hp<<"and you gained 50 dollars, now you have have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-30;
            cash=cash-30;
            cout<<endl<<"You were a coward and had much of your supplies and money stolen!!\n"
            <<"You lost 30 HP,your new HP is " <<hp<< "you lost 30 dollars now you have" <<cash<< "dollars!\n";
        }
    }
    
    
        // Third possible Event
    if(random>16 && random <=24)
    {
        
        cout<<endl<<"Your family is Starving! You find road kill, you can take a chance and eat it or you could let your family starve and lose HP!\n";
        cout<<"If you would like to eat road kill press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            //random again function 
            if(random_2<5)
            {
                hp=hp+15;
                cout<<endl<<"You're one crazy bastard! But you've got a gut of metal! The road kill was delicious and you feel better\n"
                <<" you've gained 15HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+45;
                cout<<endl<<"You're disgusting! You've gotten incredibly ill! You've lost HP\n"
                        <<"You've lost 45 HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        //start of no event
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
        //end of no event
    }
    // Fourth possible Event
    if(random>24 && random<=32)
    {
        cout<<endl<<"A man driving by challenges you to a race! He bets 30 dollars and 40 HP!\n";
        cout<<"If you would like to race press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            //Random function again
            random_2= rand()%10+1; 
            if(random_2<5)
            {
                cash=cash-30;
                hp=hp-40;
                cout<<endl<<"You lost the race and the bet! Your Driving skill needs work!\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and you also lost 30 dollars, now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+30;
                hp=hp+40;
                cout<<endl<<"You've won! That was surprising..\n"
                        <<"You've gained 40HP, your new HP is:"<<hp<<"and you gained 30 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            
            cout<<endl<<"Your family loses respect for you..\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
//Fifth possible event 
if(random>40 && random<=48)
    {
        cout<<endl<<"You see an innocent looking man on he road who is asking for help!\n";
        cout<<"If you would like to help, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='N' || choice=='n' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-30;
                cout<<endl<<"The man hold a grudge against you. He find you at the next camp and attacks you!\n"
                <<" you've lost 30HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp;
                cout<<endl<<"You continue your journey with he lingering though that the man you saw could be dead all because you did no help.\n"
                        <<"You've gained 0 HP, your HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
                if (choice=='Y'||choice=='y')
        {
            //random formula #2
                    hp=hp+25;
                cout<<endl<<"He was actually just stretching but is so impressed by your good will that he rewards you with food!\n"
                <<"Your HP increases by 25 your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
      
        }
// Sixth possible Event
    if(random>48 && random<=56)
    {
        cout<<endl<<"You must hunt to feed your family!!\n";
        cout<<"If you would like to hunt click 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }

// Seventh possible Event
    if(random>56 && random<=62)
    {
        cout<<endl<<"You've found a sketchy looking man selling HP at 60HP for 20 dollars!!\n";
        cout<<"If you would like to go buy press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<8)
            {
                cash=cash-20;
                hp=hp-40;
                cout<<endl<<"It was an rotten food! You get sick and loose your money..\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and lost 20 dollars, you now have :" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+60;
                cash=cash-20;
                cout<<endl<<"You've made a great deal! What a sucker!\n"
                        <<"You've gained 60HP, your new HP is:"<<hp<<"and you lost 20 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp;
            cout<<endl<<"Life is good!\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 8th possible Event
    if(random>62 && random<=70)
    {
        cout<<endl<<"You got bitten by a poisonous snake! You could lose less HP if you have your wife suck he poison out!\n";
        cout<<"If you would like to try it, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-60;
                cout<<endl<<"Your wife did it incorrectly and go herself poisoned too!!\n"
                <<" you've lost 60HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-10;
                cout<<endl<<"Your wife succeeded at sucking out the poison!! You only have mild swelling \n"
                        <<"You've lost only 10HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-40;
            cout<<endl<<"You take the pain and pay for it! You can't move your foot for a week\n"
            <<"You lose 40 HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 9th possible Event **LOOOOOOOOOOOOOOOOOOW Prov
    if(random>110 && random<=104)
    {
        cout<<endl<<"Crashed and died..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-10000;
        
    }
// 10th possible event ** LOOOOOOOOOW
  if(random>104 && random<=108)
    {
        cout<<endl<<"You decide that Oregon is bullshit and move to socialist Norway and life you life living of the government! !\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp+10000;
        
    }
// 11th Possible Event
    if(random>70 && random<=78)
    {
        cout<<endl<<"You've been feeling stressed out stress can decrease your HP. A lady of the night(hooker) says she can help you relieve stress for only 20 dollars !\n";
        cout<<"If you would like to go engage press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+30;
                cash=cash-30;
                cout<<endl<<"What a good night!\n";
                cout<<" You've gained 30 HP, your new HP is" <<hp <<"and you have lost 30 dollars. Now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"You got sick! Wrap it up next time!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you lost 30 cash, now you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+10;
                cash=cash;
                cout<<endl<<"After the encounter with the hooker you start to laugh. All you needed was a good laugh!!\n";
                cout<<" You've gained 10 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
            else 
            {
                hp=hp-15;
                cash=cash;
                cout<<endl<<"You still feel stressed.. You head starts hurting..\n"
                        <<"You've lost 15HP, your new HP is:"<<hp<<"and you have "<<cash<<"dollars!\n";
            }
        }
    }
//12th Event
if(random>86 && random<=94)
    {
        cout<<endl<<"Your Radiator busted from the high heat! You find a family camping about 2 miles from your own camp with a similar one\n";
        cout<<"You need it or you will have to drive without the A/C and risk getting a heatstroke..You think about maybe stealing it\n";
        cout<<"If you would like steal then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp;
                
                cout<<endl<<"You got a radiator and can continue on your journey! Poor family though\n";
                cout<<" Your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You failed at stealing it and their guard dog attacks you!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"You have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            
                hp=hp-30;
                cash=cash;
                cout<<endl<<"You end up driving without the A/C to try to prevent overheating but you get sick in the process\n";
                cout<<" You've lost 30 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
           
        
    }
//13th possible event
if(random>94 && random<=102)
    {
        cout<<endl<<"Your family is starving. You find some wild berries\n";
        cout<<"If you would like to go pick them then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+20;
                cash=cash;
                cout<<endl<<"The Berries were amazing!!\n";
                cout<<" You've gained 20 HP, your new HP is" <<hp <<"and you have " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You got sick! Those berries were very bad..\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            hp=hp-30;
            cout<<"Your Family starves for a day..\n"
            <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        }
    }
// 14th possible Event 
    if(random>102 && random<=110)
    {
        cout<<endl<<"Your wife is pregnant! It adds to you stress..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-30;
        cout<<"Too much stress man..\n"
        <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        
    }
//last of loop    
}
    
     if (hp>0)
    {
        
        
         cout<<endl;
         cout<<"Congratulations! You have made it to Oregon!!! Play again?";
         cout<<endl;
         cout<<endl;
                }
    else
    {
       
        cout<<endl;
        cout<<"Game over.. You suck!!\n";
        cout<<"Try again?\n"<<endl;
        cout<<endl;
        cout<<endl;
       
    }   
}

//van with handgun
void problem3(){
       int cash, hp,random, gun_random, random_2, sta;
    char hp_purchase, dummy;//, choice;
    
    hp=70;
    cash=750;
    
    cout<<"Congratulations on your purchase of a used(come on, we all know you can't afford a new one) Bentley Flying Spur and a handgun!\n"
    "Now your have a total of " <<cash<<" Dollars.\n";
    cout<<"Before we embark on our journey you must purchase HP. You have 70HP by default.\n";
    cout<<"Don't use up all your money though! You could find shops with much cheeper prices in your journey or you could need your money to get out of a hairy situation!\n";
    cout<<"You can purchase more for the price of:\n";
    cout<<"     10HP for 40 dollars (Press A to purchase)\n";
    cout<<"     25HP for 80 dollars (Press B to purchase)\n";
    cout<<"     60HP for 120 dollars (Press C to purchase)\n";
    cout<<"     90HP for 290 dollars (Press D to purchase)\n";
    cout<<"     200HP for 500 dollars (Press E to purchase)\n";
    cout<<"     Press F if you would like not purchase HP\n";	
    cin>>hp_purchase;
    
    //loop for purchasing HP
    switch(hp_purchase)
    {
        case'A':
	case'a':
        {
	hp=hp+10;
	cash=cash-40;

    cout<<"You've Chosen to buy 10HP. Your new HP value is: "<<hp<<" and you now have "<<cash<< "dollars!\n"; 
        
    break;
        }
    case'B':
        case'b':
        {
	hp=hp+25;
	cash=cash-80;

    cout<<"You've Chosen to buy 25HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
    case'C':
    case'c':
    {
	hp=hp+60;
	cash=cash-120;

    cout<<"You've Chosen to buy 60HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 
    
    break;
    }
    case'D':
    case'd':
    {
	hp=hp+90;
	cash=cash-290;

    cout<<"You've Chosen to buy 90HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
    }
        case'E':
	case'e':
        {
	hp=hp+200;
	cash=cash-500;

    cout<<"You've Chosen to buy 200HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
        case'F':
	case'f':
        {
	hp=hp;
	cash=cash;

    cout<<"You've Chosen to buy 0HP. Your HP value is:"<<hp<<" and you have"<<cash<< "dollars!\n"; 

    break;
        }   

    }
    
//Start of game  
 
    cout<<endl<<"Now you're ready to start your journey!\n"
    <<"Press any key to start\n";
    cin>>dummy;
char choice;    
//Loop for the game possibilities    
for (sta = 0; sta < 16 || hp < 0 || hp>1000; sta++)
{
    
    random = rand()%100+1;
    // First possible Event
    if(random>=1 && random<=8)
    {
        cout<<endl<<"Your family is Starving! You can go out hunting or you could let your family starve and lose HP!\n";
        cout<<"If you would like to go hunting 'Y'. If you don't want to press 'N'\n";
        //cin.ignore(INT_MAX);
        //cin.get();
        //cout<<"\nTEST\n";
        cin>>choice;
        //cout<<"\nTEST\n";
        //choice = 'y';
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
    
        // Second possible Event
    if(random>8 && random<=16)
    {
        cout<<endl<<"You're being ransacked!\n";
        cout<<"If you would like to fight press'Y'. If you want to pretend to sleep and let them pillage you press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
           random_2= rand()%10+1;
           
            if(random_2<5)
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"Your were outnumbered and out gunned! You lost he fight and got wounded in the process ";
                cout<<"you also lost 30 dollars!\n";
                cout<<" you've lost 40HP, your new HP is" <<hp <<"you lost 30 dollars now you have: " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+50;
                hp=hp-10;
                cout<<endl<<"You've won the fight but you were mildly wounded. The ransackers dropped money while escaping!\n"
                        <<"You've lost 10HP, your new HP is:"<<hp<<"and you gained 50 dollars, now you have have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-30;
            cash=cash-30;
            cout<<endl<<"You were a coward and had much of your supplies and money stolen!!\n"
            <<"You lost 30 HP,your new HP is " <<hp<< "you lost 30 dollars now you have" <<cash<< "dollars!\n";
        }
    }
    
    
        // Third possible Event
    if(random>16 && random <=24)
    {
        
        cout<<endl<<"Your family is Starving! You find road kill, you can take a chance and eat it or you could let your family starve and lose HP!\n";
        cout<<"If you would like to eat road kill press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            //random again function 
            if(random_2<5)
            {
                hp=hp+15;
                cout<<endl<<"You're one crazy bastard! But you've got a gut of metal! The road kill was delicious and you feel better\n"
                <<" you've gained 15HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+45;
                cout<<endl<<"You're disgusting! You've gotten incredibly ill! You've lost HP\n"
                        <<"You've lost 45 HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        //start of no event
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
        //end of no event
    }
    // Fourth possible Event
    if(random>24 && random<=32)
    {
        cout<<endl<<"A man driving by challenges you to a race! He bets 30 dollars and 40 HP!\n";
        cout<<"If you would like to race press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            //Random function again
            random_2= rand()%10+1; 
            if(random_2<5)
            {
                cash=cash-30;
                hp=hp-40;
                cout<<endl<<"You lost the race and the bet! Your Driving skill needs work!\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and you also lost 30 dollars, now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+30;
                hp=hp+40;
                cout<<endl<<"You've won! That was surprising..\n"
                        <<"You've gained 40HP, your new HP is:"<<hp<<"and you gained 30 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            
            cout<<endl<<"Your family loses respect for you..\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
//Fifth possible event 
if(random>40 && random<=48)
    {
        cout<<endl<<"You see an innocent looking man on he road who is asking for help!\n";
        cout<<"If you would like to help, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='N' || choice=='n' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-30;
                cout<<endl<<"The man hold a grudge against you. He find you at the next camp and attacks you!\n"
                <<" you've lost 30HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp;
                cout<<endl<<"You continue your journey with he lingering though that the man you saw could be dead all because you did no help.\n"
                        <<"You've gained 0 HP, your HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
                if (choice=='Y'||choice=='y')
        {
            //random formula #2
                    hp=hp+25;
                cout<<endl<<"He was actually just stretching but is so impressed by your good will that he rewards you with food!\n"
                <<"Your HP increases by 25 your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
      
        }
// Sixth possible Event
    if(random>48 && random<=56)
    {
        cout<<endl<<"You must hunt to feed your family!\n";
        cout<<"If you would like to hunt click 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }

// Seventh possible Event
    if(random>56 && random<=62)
    {
        cout<<endl<<"You've found a sketchy looking man selling HP at 60HP for 20 dollars!!\n";
        cout<<"If you would like to go buy press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<8)
            {
                cash=cash-20;
                hp=hp-40;
                cout<<endl<<"It was an rotten food! You get sick and loose your money..\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and lost 20 dollars, you now have :" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+60;
                cash=cash-20;
                cout<<endl<<"You've made a great deal! What a sucker!\n"
                        <<"You've gained 60HP, your new HP is:"<<hp<<"and you lost 20 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp;
            cout<<endl<<"Life is good!\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 8th possible Event
    if(random>62 && random<=70)
    {
        cout<<endl<<"You got bitten by a poisonous snake! You could lose less HP if you have your wife suck he poison out!\n";
        cout<<"If you would like to try it, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-60;
                cout<<endl<<"Your wife did it incorrectly and go herself poisoned too!!\n"
                <<" you've lost 60HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-10;
                cout<<endl<<"Your wife succeeded at sucking out the poison!! You only have mild swelling \n"
                        <<"You've lost only 10HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-40;
            cout<<endl<<"You take the pain and pay for it! You can't move your foot for a week\n"
            <<"You lose 40 HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 9th possible Event **LOOOOOOOOOOOOOOOOOOW Prov
    if(random>110 && random<=104)
    {
        cout<<endl<<"Crashed and died..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-10000;
        
    }
// 10th possible event ** LOOOOOOOOOW
  if(random>104 && random<=108)
    {
        cout<<endl<<"You decide that Oregon is bullshit and move to socialist Norway and life you life living of the government! !\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp+10000;
        
    }
// 11th Possible Event
    if(random>70 && random<=78)
    {
        cout<<endl<<"You've been feeling stressed out stress can decrease your HP. A lady of the night(hooker) says she can help you relieve stress for only 20 dollars !\n";
        cout<<"If you would like to go engage press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+30;
                cash=cash-30;
                cout<<endl<<"What a good night!\n";
                cout<<" You've gained 30 HP, your new HP is" <<hp <<"and you have lost 30 dollars. Now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"You got sick! Wrap it up next time!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you lost 30 cash, now you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+10;
                cash=cash;
                cout<<endl<<"After the encounter with the hooker you start to laugh. All you needed was a good laugh!!\n";
                cout<<" You've gained 10 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
            else 
            {
                hp=hp-15;
                cash=cash;
                cout<<endl<<"You still feel stressed.. You head starts hurting..\n"
                        <<"You've lost 15HP, your new HP is:"<<hp<<"and you have "<<cash<<"dollars!\n";
            }
        }
    }
//12th Event
if(random>86 && random<=94)
    {
        cout<<endl<<"Your Radiator busted from the high heat! You find a family camping about 2 miles from your own camp with a similar one\n";
        cout<<"You need it or you will have to drive without the A/C and risk getting a heatstroke..You think about maybe stealing it\n";
        cout<<"If you would like steal then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp;
                
                cout<<endl<<"You got a radiator and can continue on your journey! Poor family though\n";
                cout<<" Your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You failed at stealing it and their guard dog attacks you!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"You have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            
                hp=hp-30;
                cash=cash;
                cout<<endl<<"You end up driving without the A/C to try to prevent overheating but you get sick in the process\n";
                cout<<" You've lost 30 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
           
        
    }
//13th possible event
if(random>94 && random<=102)
    {
        cout<<endl<<"Your family is starving. You find some wild berries\n";
        cout<<"If you would like to go pick them then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+20;
                cash=cash;
                cout<<endl<<"The Berries were amazing!!\n";
                cout<<" You've gained 20 HP, your new HP is" <<hp <<"and you have " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You got sick! Those berries were very bad..\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            hp=hp-30;
            cout<<"Your Family starves for a day..\n"
            <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        }
    }
// 14th possible Event 
    if(random>102 && random<=110)
    {
        cout<<endl<<"Your wife is pregnant! It adds to you stress..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-30;
        cout<<"Too much stress man..\n"
        <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        
    }
//last of loop    
}
    
     if (hp>0)
    {
        
        
         cout<<endl;
         cout<<"Congratulations! You have made it to Oregon!!! Play again?";
         cout<<endl;
         cout<<endl;
                }
    else
    {
       
        cout<<endl;
        cout<<"Game over.. You suck!!\n";
        cout<<"Try again?\n"<<endl;
        cout<<endl;
        cout<<endl;
       
    }   
}

//Bentley wit shotgun
void problem4(){
    //Van with handgun.
       int cash, hp,random, gun_random, random_2, sta;
    char hp_purchase, dummy;//, choice;
    
    hp=70;
    cash=150;
    
    cout<<"Congratulations on your purchase of a used(come on, we all know you can't afford a new one) Bentley Flying Spur and a handgun!\n"
    "Now your have a total of " <<cash<<" Dollars.\n";
    cout<<"Before we embark on our journey you must purchase HP. You have 70HP by default.\n";
    cout<<"Don't use up all your money though! You could find shops with much cheeper prices in your journey or you could need your money to get out of a hairy situation!\n";
    cout<<"You can purchase more for the price of:\n";
    cout<<"     10HP for 40 dollars (Press A to purchase)\n";
    cout<<"     25HP for 80 dollars (Press B to purchase)\n";
    cout<<"     60HP for 120 dollars (Press C to purchase)\n";
    //cout<<"     90HP for 290 dollars (Press D to purchase)\n";
    //cout<<"     200HP for 500 dollars (Press E to purchase)\n";
    cout<<"     Press F if you would like not purchase HP\n";	
    cin>>hp_purchase;
    
    //loop for purchasing HP
    switch(hp_purchase)
    {
        case'A':
	case'a':
        {
	hp=hp+10;
	cash=cash-40;

    cout<<"You've Chosen to buy 10HP. Your new HP value is: "<<hp<<" and you now have "<<cash<< "dollars!\n"; 
        
    break;
        }
    case'B':
        case'b':
        {
	hp=hp+25;
	cash=cash-80;

    cout<<"You've Chosen to buy 25HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
    case'C':
    case'c':
    {
	hp=hp+60;
	cash=cash-120;

    cout<<"You've Chosen to buy 60HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 
    
    break;
    }
    case'D':
    case'd':
    {
	hp=hp+90;
	cash=cash-290;

    cout<<"You've Chosen to buy 90HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
    }
        case'E':
	case'e':
        {
	hp=hp+200;
	cash=cash-500;

    cout<<"You've Chosen to buy 200HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
        case'F':
	case'f':
        {
	hp=hp;
	cash=cash;

    cout<<"You've Chosen to buy 0HP. Your HP value is:"<<hp<<" and you have"<<cash<< "dollars!\n"; 

    break;
        }   

    }
    
//Start of game  
 
    cout<<endl<<"Now you're ready to start your journey!\n"
    <<"Press any key to start\n";
    cin>>dummy;
char choice;    
//Loop for the game possibilities    
for (sta = 0; sta < 7 || hp < 0 || hp>1000; sta++)
{
    
    random = rand()%100+1;
    // First possible Event
    if(random>=1 && random<=8)
    {
        cout<<endl<<"Your family is Starving! You can go out hunting or you could let your family starve and lose HP!\n";
        cout<<"If you would like to go hunting 'Y'. If you don't want to press 'N'\n";
        //cin.ignore(INT_MAX);
        //cin.get();
        //cout<<"\nTEST\n";
        cin>>choice;
        //cout<<"\nTEST\n";
        //choice = 'y';
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
    
        // Second possible Event
    if(random>8 && random<=16)
    {
        cout<<endl<<"You're being ransacked!\n";
        cout<<"If you would like to fight press'Y'. If you want to pretend to sleep and let them pillage you press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
           random_2= rand()%10+1;
           
            if(random_2<2)
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"Your were outnumbered and out gunned! You lost he fight and got wounded in the process ";
                cout<<"you also lost 30 dollars!\n";
                cout<<" you've lost 40HP, your new HP is" <<hp <<"you lost 30 dollars now you have: " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+50;
                hp=hp-10;
                cout<<endl<<"You've won the fight but you were mildly wounded. The ransackers dropped money while escaping!\n"
                        <<"You've lost 10HP, your new HP is:"<<hp<<"and you gained 50 dollars, now you have have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-30;
            cash=cash-30;
            cout<<endl<<"You were a coward and had much of your supplies and money stolen!!\n"
            <<"You lost 30 HP,your new HP is " <<hp<< "you lost 30 dollars now you have" <<cash<< "dollars!\n";
        }
    }
    
    
        // Third possible Event
    if(random>16 && random <=24)
    {
        
        cout<<endl<<"Your family is Starving! You find road kill, you can take a chance and eat it or you could let your family starve and lose HP!\n";
        cout<<"If you would like to eat road kill press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            //random again function 
            if(random_2<5)
            {
                hp=hp+15;
                cout<<endl<<"You're one crazy bastard! But you've got a gut of metal! The road kill was delicious and you feel better\n"
                <<" you've gained 15HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+45;
                cout<<endl<<"You're disgusting! You've gotten incredibly ill! You've lost HP\n"
                        <<"You've lost 45 HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        //start of no event
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
        //end of no event
    }
    // Fourth possible Event
    if(random>24 && random<=32)
    {
        cout<<endl<<"A man driving by challenges you to a race! He bets 30 dollars and 40 HP!\n";
        cout<<"If you would like to race press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            //Random function again
            random_2= rand()%10+1; 
            if(random_2<5)
            {
                cash=cash-30;
                hp=hp-40;
                cout<<endl<<"You lost the race and the bet! Your Driving skill needs work!\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and you also lost 30 dollars, now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+30;
                hp=hp+40;
                cout<<endl<<"You've won! That was surprising..\n"
                        <<"You've gained 40HP, your new HP is:"<<hp<<"and you gained 30 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            
            cout<<endl<<"Your family loses respect for you..\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
//Fifth possible event 
if(random>40 && random<=48)
    {
        cout<<endl<<"You see an innocent looking man on he road who is asking for help!\n";
        cout<<"If you would like to help, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='N' || choice=='n' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-30;
                cout<<endl<<"The man hold a grudge against you. He find you at the next camp and attacks you!\n"
                <<" you've lost 30HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp;
                cout<<endl<<"You continue your journey with he lingering though that the man you saw could be dead all because you did no help.\n"
                        <<"You've gained 0 HP, your HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
                if (choice=='Y'||choice=='y')
        {
            //random formula #2
                    hp=hp+25;
                cout<<endl<<"He was actually just stretching but is so impressed by your good will that he rewards you with food!\n"
                <<"Your HP increases by 25 your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
      
        }
// Sixth possible Event
    if(random>48 && random<=56)
    {
        cout<<endl<<"Youmust hunt to feed your family!\n";
        cout<<"If you would like to hunt click 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }

// Seventh possible Event
    if(random>56 && random<=62)
    {
        cout<<endl<<"You've found a sketchy looking man selling HP at 60HP for 20 dollars!!\n";
        cout<<"If you would like to go buy press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<8)
            {
                cash=cash-20;
                hp=hp-40;
                cout<<endl<<"It was an rotten food! You get sick and loose your money..\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and lost 20 dollars, you now have :" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+60;
                cash=cash-20;
                cout<<endl<<"You've made a great deal! What a sucker!\n"
                        <<"You've gained 60HP, your new HP is:"<<hp<<"and you lost 20 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp;
            cout<<endl<<"Life is good!\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 8th possible Event
    if(random>62 && random<=70)
    {
        cout<<endl<<"You got bitten by a poisonous snake! You could lose less HP if you have your wife suck he poison out!\n";
        cout<<"If you would like to try it, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-60;
                cout<<endl<<"Your wife did it incorrectly and go herself poisoned too!!\n"
                <<" you've lost 60HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-10;
                cout<<endl<<"Your wife succeeded at sucking out the poison!! You only have mild swelling \n"
                        <<"You've lost only 10HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-40;
            cout<<endl<<"You take the pain and pay for it! You can't move your foot for a week\n"
            <<"You lose 40 HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 9th possible Event **LOOOOOOOOOOOOOOOOOOW Prov
    if(random>110 && random<=104)
    {
        cout<<endl<<"Crashed and died..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-10000;
        
    }
// 10th possible event ** LOOOOOOOOOW
  if(random>104 && random<=108)
    {
        cout<<endl<<"You decide that Oregon is bullshit and move to socialist Norway and life you life living of the government! !\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp+10000;
        
    }
// 11th Possible Event
    if(random>70 && random<=78)
    {
        cout<<endl<<"You've been feeling stressed out stress can decrease your HP. A lady of the night(hooker) says she can help you relieve stress for only 20 dollars !\n";
        cout<<"If you would like to go engage press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+30;
                cash=cash-30;
                cout<<endl<<"What a good night!\n";
                cout<<" You've gained 30 HP, your new HP is" <<hp <<"and you have lost 30 dollars. Now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"You got sick! Wrap it up next time!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you lost 30 cash, now you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+10;
                cash=cash;
                cout<<endl<<"After the encounter with the hooker you start to laugh. All you needed was a good laugh!!\n";
                cout<<" You've gained 10 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
            else 
            {
                hp=hp-15;
                cash=cash;
                cout<<endl<<"You still feel stressed.. You head starts hurting..\n"
                        <<"You've lost 15HP, your new HP is:"<<hp<<"and you have "<<cash<<"dollars!\n";
            }
        }
    }
//12th Event
if(random>86 && random<=94)
    {
        cout<<endl<<"Your Radiator busted from the high heat! You find a family camping about 2 miles from your own camp with a similar one\n";
        cout<<"You need it or you will have to drive without the A/C and risk getting a heatstroke..You think about maybe stealing it\n";
        cout<<"If you would like steal then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp;
                
                cout<<endl<<"You got a radiator and can continue on your journey! Poor family though\n";
                cout<<" Your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You failed at stealing it and their guard dog attacks you!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"You have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            
                hp=hp-30;
                cash=cash;
                cout<<endl<<"You end up driving without the A/C to try to prevent overheating but you get sick in the process\n";
                cout<<" You've lost 30 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
           
        
    }
//13th possible event
if(random>94 && random<=102)
    {
        cout<<endl<<"Your family is starving. You find some wild berries\n";
        cout<<"If you would like to go pick them then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+20;
                cash=cash;
                cout<<endl<<"The Berries were amazing!!\n";
                cout<<" You've gained 20 HP, your new HP is" <<hp <<"and you have " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You got sick! Those berries were very bad..\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            hp=hp-30;
            cout<<"Your Family starves for a day..\n"
            <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        }
    }
// 14th possible Event 
    if(random>102 && random<=110)
    {
        cout<<endl<<"Your wife is pregnant! It adds to you stress..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-30;
        cout<<"Too much stress man..\n"
        <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        
    }
//last of loop    
}
    
     if (hp>0)
    {
        
        
         cout<<endl;
         cout<<"Congratulations! You have made it to Oregon!!! Play again?";
         cout<<endl;
         cout<<endl;
                }
    else
    {
       
        cout<<endl;
        cout<<"Game over.. You suck!!\n";
        cout<<"Try again?\n"<<endl;
        cout<<endl;
        cout<<endl;
       
    }   
}

//Accord with shotgun
void problem5(){
    
       int cash, hp,random, gun_random, random_2, sta;
    char hp_purchase, dummy;//, choice;
    
    hp=70;
    cash=500;
    
    cout<<"Congratulations on your purchase of a used(come on, we all know you can't afford a new one) Bentley Flying Spur and a handgun!\n"
    "Now your have a total of " <<cash<<" Dollars.\n";
    cout<<"Before we embark on our journey you must purchase HP. You have 70HP by default.\n";
    cout<<"Don't use up all your money though! You could find shops with much cheeper prices in your journey or you could need your money to get out of a hairy situation!\n";
    cout<<"You can purchase more for the price of:\n";
    cout<<"     10HP for 40 dollars (Press A to purchase)\n";
    cout<<"     25HP for 80 dollars (Press B to purchase)\n";
    cout<<"     60HP for 120 dollars (Press C to purchase)\n";
    cout<<"     90HP for 290 dollars (Press D to purchase)\n";
    cout<<"     200HP for 500 dollars (Press E to purchase)\n";
    cout<<"     Press F if you would like not purchase HP\n";	
    cin>>hp_purchase;
    
    //loop for purchasing HP
    switch(hp_purchase)
    {
        case'A':
	case'a':
        {
	hp=hp+10;
	cash=cash-40;

    cout<<"You've Chosen to buy 10HP. Your new HP value is: "<<hp<<" and you now have "<<cash<< "dollars!\n"; 
        
    break;
        }
    case'B':
        case'b':
        {
	hp=hp+25;
	cash=cash-80;

    cout<<"You've Chosen to buy 25HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
    case'C':
    case'c':
    {
	hp=hp+60;
	cash=cash-120;

    cout<<"You've Chosen to buy 60HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 
    
    break;
    }
    case'D':
    case'd':
    {
	hp=hp+90;
	cash=cash-290;

    cout<<"You've Chosen to buy 90HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
    }
        case'E':
	case'e':
        {
	hp=hp+200;
	cash=cash-500;

    cout<<"You've Chosen to buy 200HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
        case'F':
	case'f':
        {
	hp=hp;
	cash=cash;

    cout<<"You've Chosen to buy 0HP. Your HP value is:"<<hp<<" and you have"<<cash<< "dollars!\n"; 

    break;
        }   

    }
    
//Start of game  
 
    cout<<endl<<"Now you're ready to start your journey!\n"
    <<"Press any key to start\n";
    cin>>dummy;
char choice;    
//Loop for the game possibilities    
for (sta = 0; sta < 12 || hp < 0 || hp>1000; sta++)
{
    
    random = rand()%100+1;
    // First possible Event
    if(random>=1 && random<=8)
    {
        cout<<endl<<"Your family is Starving! You can go out hunting or you could let your family starve and lose HP!\n";
        cout<<"If you would like to go hunting 'Y'. If you don't want to press 'N'\n";
        //cin.ignore(INT_MAX);
        //cin.get();
        //cout<<"\nTEST\n";
        cin>>choice;
        //cout<<"\nTEST\n";
        //choice = 'y';
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
    
        // Second possible Event
    if(random>8 && random<=16)
    {
        cout<<endl<<"You're being ransacked!\n";
        cout<<"If you would like to fight press'Y'. If you want to pretend to sleep and let them pillage you press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
           random_2= rand()%10+1;
           
            if(random_2<5)
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"Your were outnumbered and out gunned! You lost he fight and got wounded in the process ";
                cout<<"you also lost 30 dollars!\n";
                cout<<" you've lost 40HP, your new HP is" <<hp <<"you lost 30 dollars now you have: " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+50;
                hp=hp-10;
                cout<<endl<<"You've won the fight but you were mildly wounded. The ransackers dropped money while escaping!\n"
                        <<"You've lost 10HP, your new HP is:"<<hp<<"and you gained 50 dollars, now you have have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-30;
            cash=cash-30;
            cout<<endl<<"You were a coward and had much of your supplies and money stolen!!\n"
            <<"You lost 30 HP,your new HP is " <<hp<< "you lost 30 dollars now you have" <<cash<< "dollars!\n";
        }
    }
    
    
        // Third possible Event
    if(random>16 && random <=24)
    {
        
        cout<<endl<<"Your family is Starving! You find road kill, you can take a chance and eat it or you could let your family starve and lose HP!\n";
        cout<<"If you would like to eat road kill press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            //random again function 
            if(random_2<5)
            {
                hp=hp+15;
                cout<<endl<<"You're one crazy bastard! But you've got a gut of metal! The road kill was delicious and you feel better\n"
                <<" you've gained 15HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+45;
                cout<<endl<<"You're disgusting! You've gotten incredibly ill! You've lost HP\n"
                        <<"You've lost 45 HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        //start of no event
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
        //end of no event
    }
    // Fourth possible Event
    if(random>24 && random<=32)
    {
        cout<<endl<<"A man driving by challenges you to a race! He bets 30 dollars and 40 HP!\n";
        cout<<"If you would like to race press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            //Random function again
            random_2= rand()%10+1; 
            if(random_2<5)
            {
                cash=cash-30;
                hp=hp-40;
                cout<<endl<<"You lost the race and the bet! Your Driving skill needs work!\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and you also lost 30 dollars, now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+30;
                hp=hp+40;
                cout<<endl<<"You've won! That was surprising..\n"
                        <<"You've gained 40HP, your new HP is:"<<hp<<"and you gained 30 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            
            cout<<endl<<"Your family loses respect for you..\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
//Fifth possible event 
if(random>40 && random<=48)
    {
        cout<<endl<<"You see an innocent looking man on he road who is asking for help!\n";
        cout<<"If you would like to help, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='N' || choice=='n' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-30;
                cout<<endl<<"The man hold a grudge against you. He find you at the next camp and attacks you!\n"
                <<" you've lost 30HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp;
                cout<<endl<<"You continue your journey with he lingering though that the man you saw could be dead all because you did no help.\n"
                        <<"You've gained 0 HP, your HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
                if (choice=='Y'||choice=='y')
        {
            //random formula #2
                    hp=hp+25;
                cout<<endl<<"He was actually just stretching but is so impressed by your good will that he rewards you with food!\n"
                <<"Your HP increases by 25 your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
      
        }
// Sixth possible Event
    if(random>48 && random<=56)
    {
        cout<<endl<<"You must hunt to feed your family!!\n";
        cout<<"If you would like to hunt click 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }

// Seventh possible Event
    if(random>56 && random<=62)
    {
        cout<<endl<<"You've found a sketchy looking man selling HP at 60HP for 20 dollars!!\n";
        cout<<"If you would like to go buy press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<8)
            {
                cash=cash-20;
                hp=hp-40;
                cout<<endl<<"It was an rotten food! You get sick and loose your money..\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and lost 20 dollars, you now have :" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+60;
                cash=cash-20;
                cout<<endl<<"You've made a great deal! What a sucker!\n"
                        <<"You've gained 60HP, your new HP is:"<<hp<<"and you lost 20 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp;
            cout<<endl<<"Life is good!\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 8th possible Event
    if(random>62 && random<=70)
    {
        cout<<endl<<"You got bitten by a poisonous snake! You could lose less HP if you have your wife suck he poison out!\n";
        cout<<"If you would like to try it, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-60;
                cout<<endl<<"Your wife did it incorrectly and go herself poisoned too!!\n"
                <<" you've lost 60HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-10;
                cout<<endl<<"Your wife succeeded at sucking out the poison!! You only have mild swelling \n"
                        <<"You've lost only 10HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-40;
            cout<<endl<<"You take the pain and pay for it! You can't move your foot for a week\n"
            <<"You lose 40 HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 9th possible Event **LOOOOOOOOOOOOOOOOOOW Prov
    if(random>110 && random<=104)
    {
        cout<<endl<<"Crashed and died..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-10000;
        
    }
// 10th possible event ** LOOOOOOOOOW
  if(random>104 && random<=108)
    {
        cout<<endl<<"You decide that Oregon is bullshit and move to socialist Norway and life you life living of the government! !\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp+10000;
        
    }
// 11th Possible Event
    if(random>70 && random<=78)
    {
        cout<<endl<<"You've been feeling stressed out stress can decrease your HP. A lady of the night(hooker) says she can help you relieve stress for only 20 dollars !\n";
        cout<<"If you would like to go engage press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+30;
                cash=cash-30;
                cout<<endl<<"What a good night!\n";
                cout<<" You've gained 30 HP, your new HP is" <<hp <<"and you have lost 30 dollars. Now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"You got sick! Wrap it up next time!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you lost 30 cash, now you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+10;
                cash=cash;
                cout<<endl<<"After the encounter with the hooker you start to laugh. All you needed was a good laugh!!\n";
                cout<<" You've gained 10 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
            else 
            {
                hp=hp-15;
                cash=cash;
                cout<<endl<<"You still feel stressed.. You head starts hurting..\n"
                        <<"You've lost 15HP, your new HP is:"<<hp<<"and you have "<<cash<<"dollars!\n";
            }
        }
    }
//12th Event
if(random>86 && random<=94)
    {
        cout<<endl<<"Your Radiator busted from the high heat! You find a family camping about 2 miles from your own camp with a similar one\n";
        cout<<"You need it or you will have to drive without the A/C and risk getting a heatstroke..You think about maybe stealing it\n";
        cout<<"If you would like steal then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp;
                
                cout<<endl<<"You got a radiator and can continue on your journey! Poor family though\n";
                cout<<" Your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You failed at stealing it and their guard dog attacks you!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"You have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            
                hp=hp-30;
                cash=cash;
                cout<<endl<<"You end up driving without the A/C to try to prevent overheating but you get sick in the process\n";
                cout<<" You've lost 30 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
           
        
    }
//13th possible event
if(random>94 && random<=102)
    {
        cout<<endl<<"Your family is starving. You find some wild berries\n";
        cout<<"If you would like to go pick them then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+20;
                cash=cash;
                cout<<endl<<"The Berries were amazing!!\n";
                cout<<" You've gained 20 HP, your new HP is" <<hp <<"and you have " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You got sick! Those berries were very bad..\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            hp=hp-30;
            cout<<"Your Family starves for a day..\n"
            <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        }
    }
// 14th possible Event 
    if(random>102 && random<=110)
    {
        cout<<endl<<"Your wife is pregnant! It adds to you stress..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-30;
        cout<<"Too much stress man..\n"
        <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        
    }
//last of loop    
}
    
     if (hp>0)
    {
        
        
         cout<<endl;
         cout<<"Congratulations! You have made it to Oregon!!! Play again?";
         cout<<endl;
         cout<<endl;
                }
    else
    {
       
        cout<<endl;
        cout<<"Game over.. You suck!!\n";
        cout<<"Try again?\n"<<endl;
        cout<<endl;
        cout<<endl;
       
    }   
}

//van with shotgun
void problem6(){
       int cash, hp,random, gun_random, random_2, sta;
    char hp_purchase, dummy;//, choice;
    
    hp=70;
    cash=700;
    
    cout<<"Congratulations on your purchase of a used(come on, we all know you can't afford a new one) Bentley Flying Spur and a handgun!\n"
    "Now your have a total of " <<cash<<" Dollars.\n";
    cout<<"Before we embark on our journey you must purchase HP. You have 70HP by default.\n";
    cout<<"Don't use up all your money though! You could find shops with much cheeper prices in your journey or you could need your money to get out of a hairy situation!\n";
    cout<<"You can purchase more for the price of:\n";
    cout<<"     10HP for 40 dollars (Press A to purchase)\n";
    cout<<"     25HP for 80 dollars (Press B to purchase)\n";
    cout<<"     60HP for 120 dollars (Press C to purchase)\n";
    cout<<"     90HP for 290 dollars (Press D to purchase)\n";
    cout<<"     200HP for 500 dollars (Press E to purchase)\n";
    cout<<"     Press F if you would like not purchase HP\n";	
    cin>>hp_purchase;
    
    //loop for purchasing HP
    switch(hp_purchase)
    {
        case'A':
	case'a':
        {
	hp=hp+10;
	cash=cash-40;

    cout<<"You've Chosen to buy 10HP. Your new HP value is: "<<hp<<" and you now have "<<cash<< "dollars!\n"; 
        
    break;
        }
    case'B':
        case'b':
        {
	hp=hp+25;
	cash=cash-80;

    cout<<"You've Chosen to buy 25HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
    case'C':
    case'c':
    {
	hp=hp+60;
	cash=cash-120;

    cout<<"You've Chosen to buy 60HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 
    
    break;
    }
    case'D':
    case'd':
    {
	hp=hp+90;
	cash=cash-290;

    cout<<"You've Chosen to buy 90HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
    }
        case'E':
	case'e':
        {
	hp=hp+200;
	cash=cash-500;

    cout<<"You've Chosen to buy 200HP. Your new HP value is:"<<hp<<" and you now have"<<cash<< "dollars!\n"; 

    break;
        }
        case'F':
	case'f':
        {
	hp=hp;
	cash=cash;

    cout<<"You've Chosen to buy 0HP. Your HP value is:"<<hp<<" and you have"<<cash<< "dollars!\n"; 

    break;
        }   

    }
    
//Start of game  
 
    cout<<endl<<"Now you're ready to start your journey!\n"
    <<"Press any key to start\n";
    cin>>dummy;
char choice;    
//Loop for the game possibilities    
for (sta = 0; sta < 16 || hp < 0 || hp>1000; sta++)
{
    
    random = rand()%100+1;
    // First possible Event
    if(random>=1 && random<=8)
    {
        cout<<endl<<"Your family is Starving! You can go out hunting or you could let your family starve and lose HP!\n";
        cout<<"If you would like to go hunting 'Y'. If you don't want to press 'N'\n";
        //cin.ignore(INT_MAX);
        //cin.get();
        //cout<<"\nTEST\n";
        cin>>choice;
        //cout<<"\nTEST\n";
        //choice = 'y';
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
    
        // Second possible Event
    if(random>8 && random<=16)
    {
        cout<<endl<<"You're being ransacked!\n";
        cout<<"If you would like to fight press'Y'. If you want to pretend to sleep and let them pillage you press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
           random_2= rand()%10+1;
           
            if(random_2<5)
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"Your were outnumbered and out gunned! You lost he fight and got wounded in the process ";
                cout<<"you also lost 30 dollars!\n";
                cout<<" you've lost 40HP, your new HP is" <<hp <<"you lost 30 dollars now you have: " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+50;
                hp=hp-10;
                cout<<endl<<"You've won the fight but you were mildly wounded. The ransackers dropped money while escaping!\n"
                        <<"You've lost 10HP, your new HP is:"<<hp<<"and you gained 50 dollars, now you have have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-30;
            cash=cash-30;
            cout<<endl<<"You were a coward and had much of your supplies and money stolen!!\n"
            <<"You lost 30 HP,your new HP is " <<hp<< "you lost 30 dollars now you have" <<cash<< "dollars!\n";
        }
    }
    
    
        // Third possible Event
    if(random>16 && random <=24)
    {
        
        cout<<endl<<"Your family is Starving! You find road kill, you can take a chance and eat it or you could let your family starve and lose HP!\n";
        cout<<"If you would like to eat road kill press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            //random again function 
            if(random_2<5)
            {
                hp=hp+15;
                cout<<endl<<"You're one crazy bastard! But you've got a gut of metal! The road kill was delicious and you feel better\n"
                <<" you've gained 15HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+45;
                cout<<endl<<"You're disgusting! You've gotten incredibly ill! You've lost HP\n"
                        <<"You've lost 45 HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        //start of no event
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
        //end of no event
    }
    // Fourth possible Event
    if(random>24 && random<=32)
    {
        cout<<endl<<"A man driving by challenges you to a race! He bets 30 dollars and 40 HP!\n";
        cout<<"If you would like to race press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            //Random function again
            random_2= rand()%10+1; 
            if(random_2<5)
            {
                cash=cash-30;
                hp=hp-40;
                cout<<endl<<"You lost the race and the bet! Your Driving skill needs work!\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and you also lost 30 dollars, now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                cash=cash+30;
                hp=hp+40;
                cout<<endl<<"You've won! That was surprising..\n"
                        <<"You've gained 40HP, your new HP is:"<<hp<<"and you gained 30 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            
            cout<<endl<<"Your family loses respect for you..\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
//Fifth possible event 
if(random>40 && random<=48)
    {
        cout<<endl<<"You see an innocent looking man on he road who is asking for help!\n";
        cout<<"If you would like to help, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='N' || choice=='n' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-30;
                cout<<endl<<"The man hold a grudge against you. He find you at the next camp and attacks you!\n"
                <<" you've lost 30HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp;
                cout<<endl<<"You continue your journey with he lingering though that the man you saw could be dead all because you did no help.\n"
                        <<"You've gained 0 HP, your HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
                if (choice=='Y'||choice=='y')
        {
            //random formula #2
                    hp=hp+25;
                cout<<endl<<"He was actually just stretching but is so impressed by your good will that he rewards you with food!\n"
                <<"Your HP increases by 25 your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
      
        }
// Sixth possible Event
    if(random>48 && random<=56)
    {
        cout<<endl<<"You must once again hunt to feed your family!\n";
        cout<<"If you would like to hunt click 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp-20;
                cout<<endl<<"Your pathetic attempt at hunting failed! You have tried to hunt a bear and the bear hunted you!\n"
                <<" you've lost 25HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+20;
                cout<<endl<<"You've succeeded at hunting! You Murdered a bear with your bare hands! You're a badass!\n"
                        <<"You've gained 20HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-20;
            cout<<endl<<"Your family starved for a day. You've lost 20HP!\n"
            <<"Your new HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }

// Seventh possible Event
    if(random>56 && random<=62)
    {
        cout<<endl<<"You've found a sketchy looking man selling HP at 60HP for 20 dollars!!\n";
        cout<<"If you would like to go buy press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<8)
            {
                cash=cash-20;
                hp=hp-40;
                cout<<endl<<"It was an rotten food! You get sick and loose your money..\n"
                <<" you've lost 40HP, your new HP is" <<hp <<"and lost 20 dollars, you now have :" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp+60;
                cash=cash-20;
                cout<<endl<<"You've made a great deal! What a sucker!\n"
                        <<"You've gained 60HP, your new HP is:"<<hp<<"and you lost 20 dollars, now you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp;
            cout<<endl<<"Life is good!\n"
            <<"Your HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 8th possible Event
    if(random>62 && random<=70)
    {
        cout<<endl<<"You got bitten by a poisonous snake! You could lose less HP if you have your wife suck he poison out!\n";
        cout<<"If you would like to try it, press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp-60;
                cout<<endl<<"Your wife did it incorrectly and go herself poisoned too!!\n"
                <<" you've lost 60HP, your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-10;
                cout<<endl<<"Your wife succeeded at sucking out the poison!! You only have mild swelling \n"
                        <<"You've lost only 10HP, your new HP is:"<<hp<<"and you have"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            //random formula #2
            hp=hp-40;
            cout<<endl<<"You take the pain and pay for it! You can't move your foot for a week\n"
            <<"You lose 40 HP is " <<hp<< "and you have" <<cash<< "dollars!\n";
        }
    }
// 9th possible Event **LOOOOOOOOOOOOOOOOOOW Prov
    if(random>110 && random<=104)
    {
        cout<<endl<<"Crashed and died..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-10000;
        
    }
// 10th possible event ** LOOOOOOOOOW
  if(random>104 && random<=108)
    {
        cout<<endl<<"You decide that Oregon is bullshit and move to socialist Norway and life you life living of the government! !\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp+10000;
        
    }
// 11th Possible Event
    if(random>70 && random<=78)
    {
        cout<<endl<<"You've been feeling stressed out stress can decrease your HP. A lady of the night(hooker) says she can help you relieve stress for only 20 dollars !\n";
        cout<<"If you would like to go engage press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+30;
                cash=cash-30;
                cout<<endl<<"What a good night!\n";
                cout<<" You've gained 30 HP, your new HP is" <<hp <<"and you have lost 30 dollars. Now you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                cash=cash-30;
                cout<<endl<<"You got sick! Wrap it up next time!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you lost 30 cash, now you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+10;
                cash=cash;
                cout<<endl<<"After the encounter with the hooker you start to laugh. All you needed was a good laugh!!\n";
                cout<<" You've gained 10 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
            else 
            {
                hp=hp-15;
                cash=cash;
                cout<<endl<<"You still feel stressed.. You head starts hurting..\n"
                        <<"You've lost 15HP, your new HP is:"<<hp<<"and you have "<<cash<<"dollars!\n";
            }
        }
    }
//12th Event
if(random>86 && random<=94)
    {
        cout<<endl<<"Your Radiator busted from the high heat! You find a family camping about 2 miles from your own camp with a similar one\n";
        cout<<"You need it or you will have to drive without the A/C and risk getting a heatstroke..You think about maybe stealing it\n";
        cout<<"If you would like steal then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<3)
            {
                hp=hp;
                
                cout<<endl<<"You got a radiator and can continue on your journey! Poor family though\n";
                cout<<" Your new HP is" <<hp <<"and you have" <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You failed at stealing it and their guard dog attacks you!\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"You have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            
                hp=hp-30;
                cash=cash;
                cout<<endl<<"You end up driving without the A/C to try to prevent overheating but you get sick in the process\n";
                cout<<" You've lost 30 HP, your new HP is" <<hp <<"and you have:" <<cash<< " dollars!\n";                
            
            }
           
        
    }
//13th possible event
if(random>94 && random<=102)
    {
        cout<<endl<<"Your family is starving. You find some wild berries\n";
        cout<<"If you would like to go pick them then press 'Y'. If you don't want to press 'N'\n";
        cin>>choice;
        
        //start of yes event
        if (choice=='Y' || choice=='y' )
        {
            random_2= rand()%10+1;
            
            if(random_2<5)
            {
                hp=hp+20;
                cash=cash;
                cout<<endl<<"The Berries were amazing!!\n";
                cout<<" You've gained 20 HP, your new HP is" <<hp <<"and you have " <<cash<< "dollars!\n";                
            
            }
            else 
            {
                hp=hp-40;
                
                cout<<endl<<"You got sick! Those berries were very bad..\n"
                        <<"You've lost 40HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
            }
        //end random yes event
        }
        
        if (choice=='N'||choice=='n')
        {
            hp=hp-30;
            cout<<"Your Family starves for a day..\n"
            <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        }
    }
// 14th possible Event 
    if(random>102 && random<=110)
    {
        cout<<endl<<"Your wife is pregnant! It adds to you stress..!\n";
        cout<<"Press any key to continue.\n";
        cin>>dummy;
        hp=hp-30;
        cout<<"Too much stress man..\n"
        <<"You've lost 30HP, your new HP is:"<<hp<<"and you have:"<<cash<<"dollars!\n";
        
    }
//last of loop    
}
    
     if (hp>0)
    {
        
        
         cout<<endl;
         cout<<"Congratulations! You have made it to Oregon!!! Play again?";
         cout<<endl;
         cout<<endl;
                }
    else
    {
       
        cout<<endl;
        cout<<"Game over.. You suck!!\n";
        cout<<"Try again?\n"<<endl;
        cout<<endl;
        cout<<endl;
       
    }   
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}