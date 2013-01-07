#include <iostream>
#include <cstdlib>
#include "problems.h"
using namespace std;
int problem5()
{
    long long k=20;
    int flag=0;
    while(1)
    {
        flag=0;
        for(int i=1;i<=20;i++)
        {
            if(k%i!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
        k++;
    }
    cout<<"Answer :"<<k<<endl;
}
