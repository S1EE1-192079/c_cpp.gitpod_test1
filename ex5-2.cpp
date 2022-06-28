#include<iostream>
using namespace std;

int main()
{
    int x,y,z;

    cout << "Please enter a number: ";
    cin >> x;

    for( y=1 ; y<=x ; y=y+1 )
    {
        for( z=1 ; z<=y ; z=z+1 )
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
