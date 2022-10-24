#ifndef NewClient_h
#define NewClient_h

#include <ArduinoJson.h>
#include <Arduino.h>

class Client {
    private:

    public:

    bool connect(String HOST, int PORT);
    
    void println(String command);

    bool available();

    char read();

};



/*
this client source need these function

boolean client->connect(HOST, SSL_PORT) 
>> when connect the host return true

void client->println(string);
>> send GET command to server

client->available()
>>from sending get request to getting the response

client->read();
>>client read to char c(maybe json to char)->


*/


#endif