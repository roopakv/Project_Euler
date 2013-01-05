#include <iostream>
#include <cstdlib>
#include "problems.h"
using namespace std;
int problem3()
{
    long long n=600851475143;
    //n=13195;
    long long i=2;
    //long long last_factor=2;
    while(i*i<=n)
    {
        if(n%i==0)
        {
            n=n/i;
            //last_factor = i;
        }
        else
            i++;
    }
    cout<<"Answer :"<<n<<endl;
}
