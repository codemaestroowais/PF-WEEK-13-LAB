#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int a=0;
    string input; 
    fstream file;
    file.open("Task1.txt", ios::in);
    cout<<input;
    while(!file.eof())
    {
        getline(file, input);
        a++;
    }
    file.close();
    cout<<"Total number of lines: "<<a;
}