#include <iostream>
#include <fstream>
#include "Pelicula.cpp"
#include <sstream>
#include <algorithm>

#include <string>
#include <curl/curl.h>



using namespace std;


static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}



int main() {

    CURL *curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://www.imdb.com/title/tt0449088/?ref_=fn_tt_tt_1");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }


    int index = 0;
    ifstream myFile;
    myFile.open("/home/danium/Documents/GitHub/CE2103/Projecto-1-DatosII/database.csv");
    string line;
    string line2;
    if (!myFile.is_open()) {
        cout << "error opening the file" << endl;
        return 0;
    }

    stringstream sss(readBuffer);
    cout<<readBuffer<<endl;
    while (true and index<=1) {
        getline(sss,line,'\n');
        index++;
    }

    cout<<line<<endl;

    return 0;
}