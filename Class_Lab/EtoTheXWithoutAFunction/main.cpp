/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 21, 2015, 9:05 AM
 * Purpose: Factorial No Function
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float approxEx=1,exactEx,x;
    //prompt user for power of e^x
    cout<<"What x in e^x would you like to use?"<<endl;
    cin>>x;
    //calculate e^x
    for(int n=1;n<=13;n++){
        int nFactrl=1;
        //Do the calculation
        for(int i=1;i<=n;i++){
                nFactrl*=i;
    }
    approxEx+=(pow(x,n)/nFactrl);
    
    }
    //Calculate the exact e^x
    exactEx=exp(x);
    //Compare results
    cout<<"Approximate e^x = "<<approxEx<<endl;
    cout<<"Exact       e^x = "<<exactEx<<endl;
    return 0;
}

