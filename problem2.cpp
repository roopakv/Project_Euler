#include <iostream>
#include <cstdlib>
#include "problems.h"
using namespace std;
int problem2()
{
    long t1=0,t2=1,t3;
    long sum=0;
    t3=t1+t2;
    while(t3<4000000)
    {
        if(t3%2==0)
            sum=sum+t3;
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    if(t3%2==0 && t3<4000000)
        sum=sum+t3;
    cout<<"Answer :"<<sum<<endl;
}
