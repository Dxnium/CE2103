#include <iostream>
#include <fstream>
#include "Pelicula.cpp"
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    int index = 0;
    ifstream myFile;
    myFile.open("/home/danium/Documents/GitHub/CE2103/Projecto-1-DatosII/database.csv");
    string line;
    string line2;
    if (!myFile.is_open()) {
        cout << "error opening the file" << endl;
        return 0;
    }
    while (myFile.good() and index<=9) {
        Pelicula *p = new Pelicula;
        getline(myFile,line,'\n');
        stringstream ss(line);
        while(index>0){
            for(int i=0;i<27;i++){
                getline(ss,line2,',');
                cout<<line2<<" ";
            }cout<<endl;
            break;
        }

        index++;
    }
    return 0;
}