#include <iostream>
#include <cstdlib>
#include <vector>
#include "problems.h"
using namespace std;
int problem10()
{
    vector<bool> parr(2000001,true);
    long i,j,cnt=0;
    long long sum=0;
    /*for(i=0;i<1000000;i++)
    {
        parr[i]=true;
    }*/
    
    for(i=2;i<1415;i++)
    {
        
        if(parr[i]==true)
        {
            cnt++;
            for(j=i;j*i<2000000;j++)
            {
                parr[j*i]=false;
            }
        }
    }
    for(i=2;i<2000000;i++)
    {
        if(parr[i]==true)
        {
            sum=sum+i;
        }
    }
     
    cout<<"Answer :"<<sum<<endl;
}
