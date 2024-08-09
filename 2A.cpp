// NAME - Swayam Patel
// PRN - 23070123165
// EXPERIMENT - 2(A)

#include<iostream>
using namespace std;
int main() {
    int intType;
    char charType;
    signed char signedcharType;  
    unsigned char unsignedcharType;
    float floatType;
    double doubleType;
    long double longdoubleType;
    bool boolType;
    long int longintType;
    short int shortintType; 
    cout<<"Size of int is:"<<sizeof(intType)<<"\n";          //Output - Size ofint is:4
    cout<<"Size of char is:"<<sizeof(charType)<<"\n";           //Size of char is:1
    cout<<"Size of signed char is:"<<sizeof(signedcharType)<<"\n";  //Size of signed char is:1
    cout<<"Size of unsigned char is:"<<sizeof(unsignedcharType)<<"\n";     //Size ofunsigned char is:1
    cout<<"Size of float is:"<<sizeof(floatType)<<"\n";                 //Size of float is:4
    cout<<"Size of double is:"<<sizeof(doubleType)<<"\n";              //Size of double is:8 
    cout<<"Size of long double is:"<<sizeof(longdoubleType)<<"\n";        //Size of long double is:12
    cout<<"Size of bool is:"<<sizeof(boolType)<<"\n";                    //Size of bool is:1
    cout<<"Size of long int is:"<<sizeof(longintType)<<"\n";                //Size of long int is:4
    cout<<"Size of short int is:"<<sizeof(shortintType)<<"\n";          //Size of short int is:2 
return 0;
}
