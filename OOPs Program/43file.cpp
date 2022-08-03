// file management
// ofstream: stream class to write on files
// ifstream: stream class to read from files
// ffstream: stream class to both read and write from/to files
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<< "Wel-Come to SkillQode";
        filestream<< "\nWe started new lab";
        filestream<< "\nWe started new branch";
        filestream.close();
    }
    else
        cout<< "File opening is fail.";
    return 0;
}