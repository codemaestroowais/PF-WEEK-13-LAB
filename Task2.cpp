#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string input;     fstream file;
    file.open("Task1.txt", ios::app);
    cin>>input;
    file<<input;
    file.close();
    cout<<"The name in file: "<<input;
}