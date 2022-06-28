#include <iostream>
using namespace std;

int main() {

  int first_num, second_num, sum;
    
  printf ("Enter two integers: ");
  cin >> first_num >> second_num;

  sum = first_num * first_num + second_num*second_num;

  cout << first_num <<"^2"<< " + " <<  second_num <<"^2" << " = " << sum;     
    
  return 0;
}
