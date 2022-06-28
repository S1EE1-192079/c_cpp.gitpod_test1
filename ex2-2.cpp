#include <iostream>

using namespace std;
 
int main()
{
    float radius, area, perimeter;
 
    cout << "Enter radius of circle ";
    cin >> radius;
    
    area = 3.14159265359 * radius * radius;
    perimeter = 2 * 3.14159265359 * radius;
    
    cout << "Area of the circle "
              << " is " << area;
              
    cout << "\nPerimeter of the circle "          
            <<"is " << perimeter;
}            
