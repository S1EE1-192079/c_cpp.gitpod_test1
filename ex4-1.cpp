#include <iostream>

using namespace std;

int main(){
    int year,leapyear;
    cout<<"please enter a year:";
    cin>>year;
    
    if (year<0){
        printf("the year you entered is invalid,please try again");
        
    }else{
        if(year % 400 == 0){
            cout<<year<<" year is a leap year";
        }else if(year % 100 ==0){
            cout<<year<<" year is not a leap year";
        }else if(year % 4 ==0){
            cout<<year<<" year is a leap year";
        }
        else 
        cout<<year<<" year is not a leap year";
    }
    
    return 0;
}
