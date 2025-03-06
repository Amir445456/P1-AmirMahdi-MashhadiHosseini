#include <iostream>

using namespace std;

struct person
{
    string name;
    int age;
};

double calculateAgeAvg(person peaple[],int size)
{
    int tAge = 0;
    for (int i=0;i<size;i++)
    {
        tAge += peaple[i].age;

    }
    return (double)tAge/size;
}
int main()
{
    int numberOfPeaple = 10;
    person peaple[numberOfPeaple];

    for(int i=0;i<=9;i++)
    {
        cout << "Enter name of person " << (i + 1) << ": ";
        cin>>peaple[i].name;
        cout << "Enter age of person " << (i + 1) << ": ";
        cin>>peaple[i].age;

        cout<<"------------------------------------------"<<endl;

    }

    double averageAge = calculateAgeAvg(peaple, numberOfPeaple);
    cout << "The AVG of the ages is: " << averageAge <<endl;



}




