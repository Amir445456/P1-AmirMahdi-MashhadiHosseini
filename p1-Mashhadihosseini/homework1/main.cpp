#include <iostream>

using namespace std;

double calculateAvg(int num[], int numsc)
{
    int sum = 0;
    double Avg;

    for(int i=0;i < numsc;i++)
    {
        sum += num[i];

    }
    Avg = (double)sum / numsc;
    return Avg;
}

int main()
{
    int numscount = 6;
    int num[numscount] = {12,25,30,46,8,222};
    cout<<"avg is : "<<calculateAvg(num,numscount);

}
