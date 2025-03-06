#include <iostream>

using namespace std;

int Max(int a[] , int length)
{
    int maxA = a[0];
    for(int i=1;i<length;i++)
    {
        if(a[i] > maxA)
        {
            maxA = a[i];
        }
    }
    return maxA;
}

int Min(int a[] , int length)
{
    int minA = a[0];
    for(int i=1;i<length;i++)
    {
        if(a[i] < minA)
        {
            minA = a[i];
        }
    }
    return minA;
}

int main()
{
    int numsCount = 6;
    int num[numsCount] = {78,3,20,102,69,50};

    cout<<Max(num,numsCount)<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<Min(num,numsCount)<<endl;
}




