/* 
* File:   Problem 6 Savage Ch1
* Author: David Leanos
*
* Created on June 25, 2014, 8:49 PM
*/

//System Level Libraries 
#include <iostream>
//ERROR:main.cpp:9:21: fatal error:  iostream: No such file or directory
using namespace std;
//User Defined Libraries 

//Global Constants

//Function Pootypes

//Execution Begins Here 
int main(int argc, char** argv) {
//ERROR FROM MISPELLING MAIN:/usr/lib/gcc/i686-pc-cygwin/4.7.3/../../../libcygwin.a(libcmain.o): In function `main':/usr/src/debug/cygwin-1.7.24-1/winsup/cygwin/lib/libcmain.c:39: undefined reference to `WinMain@16ror: ld returned 1 exit status
//ERROR FROM OMITING '(' :main.cpp:19:10: error: expected initializer before ‘int’
//ERROR FROM OMITIN BOTH '()' :main.cpp:19:10: error: expected initializer before ‘int’
   int number_of_pods, peas_per_pod,total_peas;
//ERROR from misspelling int:main.cpp:23:4: error: ‘it’ was not declared in this scope
//ERROR from misspelling int:main.cpp:23:7: error: expected ‘;’ before ‘number_of_pods’
//ERROR from misspelling int:main.cpp:28:9: error: ‘number_of_pods’ was not declared in this scope
//ERROr from misspelling int:main.cpp:30:9: error: ‘peas_per_pod’ was not declared in this scope
//ERROr from misspelling int:main.cpp:32:4: error: ‘total_peas’ was not declared in this scope   
   cout<<"Hello\n";
   cout<<"Press return after entering a number\n";
   cout<<"Enter the number of pods:\n";
   cin>>number_of_pods;
   cout<<"Ener the number of peas in the pods\n";
   cin>>peas_per_pod;
   //ERROR FROM OMITING > :make[2]: *** [build/Debug/Cygwin_4.x-Windows/main.o] Error 1 make[1]: *** [.build-conf] Error 2 make: *** [.build-impl] Error 2
   total_peas = number_of_pods * peas_per_pod;
   
   cout<<"If you have ";
   cout<<number_of_pods;
   cout<<" pea pods\n";
   cout<<"and ";
   cout<<peas_per_pod;
   cout<<"peas in each pod, then \n";
   cout<<"you have ";
   cout<<total_peas;
   cout<<" peas in all the pods.\n";
   cout<<"Good-Bye\n";
   
   return 0;
   //ERROR: MISSPELLING RETURN
}