#ifndef GoogleMapsApi_h
#define GoogleMapsApi_h

#include <Arduino.h>
#include <ArduinoJson.h>

#include "JsonListener.h"
#include "JsonStreamingParser.h" 

#define GMAPI_HOST "maps.googleapis.com"
#define GMAPI_SSL_PORT 443

class GoogleMapsApi {
 public:
  GoogleMapsApi(String apiKey);　//delete( Client &client)
  String sendGetToGoogleMaps(String command);
  String distanceMatrix(String origin, String destination,
                        String departureTime = "", String trafficModel = "");

 private:
  // JsonObject * parseUpdates(String response);
  String _apiKey;
  //Client *client; <- comment out
  const int maxMessageLength = 1500;
  bool checkForOkResponse(String response);
};

#endif
