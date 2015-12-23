//
//  main.cpp
//  RESTpp
//
//  Created by Scott Deng on 12/22/15.
//  Copyright © 2015 Scott Deng. All rights reserved.
//

#include <iostream>
#include "curl.hpp"
#include <json/json.h>
int main(int argc, const char * argv[]) {
  curl::init();
  printf("Greetings. This is a simple REST client for C++, simply enter the id number, and I will parse json for you. When you want to exit, enter -1 instead.\n\n");
  int id;
  curl::Curl curl_agent;
  const std::string base_url = "http://jsonplaceholder.typicode.com/posts/";
  
  Json::Value root;
  Json::Reader reader;
  
  while(1){
    printf("Please enter the id number, or enter -1 to exit.\n");
    std::cin>>id;
    if(id == -1)
      break;
    if(id == 0){
      printf("error input\n");
      break;
    }
    if(id < 1 or id > 100)//error range, start again
    {
      printf("error range, please enter again.\n");
      continue;
    }
    auto url = base_url + std::to_string(id);
    printf("URL: %s\n",url.c_str());
    std::unique_ptr<std::string> raw_json = curl_agent.get(url);
    bool isSuccess = reader.parse(*raw_json,root);
    if(!isSuccess){
      std::cerr<<"error in parsing the json: "<<reader.getFormattedErrorMessages()<<std::endl;
      break;
    }
    std::string formatted_json = root.toStyledString();
    printf("JSON:\n%s\n",formatted_json.c_str());
  }
  printf("Bye");
  curl::cleanup();
}
