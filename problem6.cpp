#include <iostream>
#include <cstdlib>
#include "problems.h"
using namespace std;
int problem5()
{
    long long k=10;
    long long sum=0;
    for(int i=1;i<100;i++)
    {
        for(int j=i+1;j<=100;j++)
        {
            k=2 *i*j;
            sum= sum+k;
        }
        
    }
    cout<<"Answer :"<<sum<<endl;
}
