#include <iostream>

using namespace std;

class People
{
    private:
        double calculateAge()
        {
            int size = 10;

            string names[size] = {"amirmahdi","alireza","mahan","sasan","ashkan","amirali","siavash","kianoosh","mohsen","ali"};
            int ages[size] = {18,12,15,26,10,30,56,78,19,44};
            int totalAge = 0;
            for(int i=0;i<size;i++)
            {
                totalAge += ages[i];

            }
            return (double)totalAge/size;
        }
    public:
        double avg = calculateAge();

};


int main()
{
    People pea;
    cout<<"The Avrage of the ages is: "<<pea.avg;
}
