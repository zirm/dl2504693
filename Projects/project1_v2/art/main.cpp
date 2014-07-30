/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 30, 2014, 1:36 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

void readFromFile(string, string[],const int);
void printArray(string[], const int);

/*
 * 
 */
int main(int argc, char** argv) {

    string filename = "art.txt";
    const int SIZE = 11;
    string art[SIZE];
    
    readFromFile(filename,art,SIZE);
    printArray(art,SIZE);
    
    readFromFile(filename,art,SIZE);
    printArray(art,SIZE);
    
    return 0;
}
void readFromFile(string name, string art[], const int SIZE){
    fstream artfile;
    artfile.open(name.c_str());
    
    for(int i=0;i<SIZE;i++)
        getline(artfile,art[i]);
  
    artfile.close();
    
}
void printArray(string art[], const int SIZE){
    for(int i=0;i<SIZE;i++)
        cout<<art[i]<<endl;
}
