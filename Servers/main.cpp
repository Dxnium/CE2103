// io/read-file-sum.cpp - Read integers from file and print sum.
// Fred Swartz 2003-08-20
#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;
string file = "/home/danium/Documents/GitHub/CE2103/Servers/test.json";


json readJsonFile(string path){
    string line;
    ifstream myfile (path);
    string txt;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            txt+=line;
        }
        myfile.close();
    }else cout << "Unable to open file";

    json j = json::parse(txt);

    return j;
}


int main() {
    json j = readJsonFile(file);
    cout<<j.dump()<<endl;
    return 0;
}

