#include <iostream>
using namespace std;

int randomnumber(int min, int max)
{
    int random = min + (rand() % max);
    return random;
}

int main()
{

    int r;
    r = randomnumber(10, 20);
    cout << "Il numero random e': " << r << "\n";

    cout<<"jjjj";

    return 0;
}