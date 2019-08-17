//
// Created by danium on 15/8/19.
//
#include <json.hpp>
using json = nlohmann::json;

using namespace std;

class Message{
public:


    json j;

    Message(char com[], char message[]){
        j["command"] = com;
        j["message"] = message;
        cout<<j.dump()<<endl;
    }

};

