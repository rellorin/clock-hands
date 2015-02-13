//******************************************************************
//Name: Ryan Ellorin
//Project: Project 1 - Clock Hands
//******************************************************************
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int H;
    int M;
    double degrees;
    
    //User Prompt
    cout<<"Enter the Hour.";
    cin>>H;
    cout<<"Enter the minutes.";
    cin>>M;
    
    //Jason Arnaldo made this edit right here.
    degrees = 360 - (((30*H)+(M/2))-6*M);
    cout<<degrees;
    cout<<endl;
    system("PAUSE");
}//end program
