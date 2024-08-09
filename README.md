# Exp_2
Aim -> To study and implement C++ Program Structure (Data Types).

Theory -> Data types tell the variables about the type of data that they can store. C++ supports many data types such as:

1.Primary data types
2.Defined data types
3.User-defined data types

To find the size of data type we use "sizeof" command. It tells about the number of bytes occupied by any variable in the memory of a computer.

Storage class in C++ determines the characteristics of a variable. C++ has 6 types of storage classes:

1.Auto
2.Extern
3.Mutable
4.Register
5.Static Code 1:

```
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
```
CODE 2:
```
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
```
CODE 3:
```
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number: ";                        // OUTPUT - Enter a number: 2
    cin>>a;
    cout<<"\nInteger= "<<a<<" and size is "<<sizeof(a)<<" bytes.";  // Integer= 2 and size is 4 bytes.

    register int b;
    cout<<"\nEnter a number: ";                                     // Enter a number: 56
    cin>>b;
    cout<<"\nRegister= "<<b<<" and size is "<<sizeof(b)<<" bytes.";    // Register= 56 and size is 4 bytes.

    static int d;
    cout<<"\nEnter any number: ";                                      // Enter any number: 90
    cin>>d;
    cout<<"\nStatic= "<<d<<" and size is "<<sizeof(d)<<" bytes.";      // Static= 90 and size is 4 bytes. 

    return 0;
}
```

OUTPUT 1:

<img width="678" alt="Screenshot 2024-08-09 at 12 06 01" src="https://github.com/user-attachments/assets/e02bf09b-54a4-468d-8f66-e1320722c007">

OUTPUT 2:

<img width="820" alt="Screenshot 2024-08-09 at 12 06 47" src="https://github.com/user-attachments/assets/7582b1c6-79c0-4072-b2d5-96fb07d1d842">

OUTPUT 3:

<img width="1010" alt="Screenshot 2024-08-09 at 12 07 17" src="https://github.com/user-attachments/assets/ef3c8d65-cebb-497f-bb4e-080b299b8ca5">

Conclusion -> I learnt about different data types and storage classes of C++.
