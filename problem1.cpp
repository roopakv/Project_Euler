#include <iostream>
#include <cstdlib>
#include "problems.h"
using namespace std;
int problem1()
{
    int i,sum=0;
    for(i=1;i<1000;i++)
    {
        if(i%3==0 || i%5==0 || i%15==0)
        {
            sum=sum+i;
        }
    }
    cout<<"Answer :"<<sum<<endl;
}
