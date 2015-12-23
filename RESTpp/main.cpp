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
  printf("Greetings. This is a simple REST client for C++, simply enter the id number, and I will parse json for you. When you want to exit, enter -1 instead.");
  
  curl::cleanup();
}
