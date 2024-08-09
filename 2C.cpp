// NAME - Swayam Patel
// PRN - 23070123165
// EXPERIMENT - 2(C) 

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
