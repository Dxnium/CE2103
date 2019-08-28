#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream myFile;
    myFile.open("/home/danium/Documents/GitHub/CE2103/Projecto-1-DatosII/database.csv");
    string line;

    if (!myFile.is_open()) {
        cout << "error opening the file" << endl;
        return 0;
    }

    while (myFile.good()) {
        for(int i=1;i<27;i++){
            getline(myFile,line,',');
            cout<<line<<"-";
        }getline(myFile,line,'\n');
        cout<<line<<endl;
    }


    return 0;
}