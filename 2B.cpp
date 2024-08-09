// NAME - Swayam Patel
// PRN - 23070123165
// EXPERIMENT - 2 

#include<iostream>
using namespace std;
int main() {
    int a;
    char b;
    signed char c;
    unsigned char d;
    float e;
    double f;
    long double g;
    bool h;
    cout<<"Enter an integer: ";                      // Output - Enter an integer: 3
    cin>>a;
    cout<<"Size of int is:"<<sizeof(a)<<"\n";        // Size of int is:4

    cout<<"Enter a character: ";                    // Enter a character: c
    cin>>b;
    cout<<"Size of char is:"<<sizeof(b)<<"\n";         // Size of char is:1

    cout<<"Enter a character: ";                    // Enter a character: ch
    cin>>c;
    cout<<"Size of signed char is:"<<sizeof(c)<<"\n";    // Size of signed char is:1 

    cout<<"Enter a character: ";                         // Enter a character: e
    cin>>d;
    cout<<"Size of unsigned char is:"<<sizeof(d)<<"\n";  // Size of unsigned char is:1 

    cout<<"Enter a number: ";                             // Enter a number: 78.0
    cin>>e;
    cout<<"Size of float is:"<<sizeof(e)<<"\n";           // Size of float  is:4
    

    cout<<"Enter a number: ";                            // Enter a number: 45.09098
    cin>>f;
    cout<<"Size of double is:"<<sizeof(f)<<"\n";         // Size of double is:8

    cout<<"Enter a number: ";                           // Enter a number: 56.78
    cin>>g;
    cout<<"Size of long double is:"<<sizeof(g)<<"\n";    // Size of long double is:12

    cout<<"Enter a bool value: ";                      // Enter a bool value: t
    cin>>h;
    cout<<"Size of bool is:"<<sizeof(h)<<"\n";            // Size of bool is:1
return 0;
}
