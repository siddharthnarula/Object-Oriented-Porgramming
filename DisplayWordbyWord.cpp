#include <fstream>
#include<iostream>
using namespace std;
int main()
{
    fstream file;
    string word, t, q, filename;
    filename = "file.txt";
    file.open(filename.c_str());
    while (file >> word)
    {
        cout << word<<" ";
    }

    return 0;
}

