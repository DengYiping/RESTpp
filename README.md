Google code-in: REST and JSON: Make an executable program (html, java, c, c++ etc)
-------------
-------------
[![Build Status](https://travis-ci.org/DengYiping/RESTpp.svg?branch=master)](https://travis-ci.org/DengYiping/RESTpp)
This is a Google code-in project. It is written in C++.

Dependency:
----------
* libcurl
* libjsoncpp
* C++11

How to install and run:
---------------------------
###Install and run using Docker
```
docker run -it dengyiping/restpp /bin/bash

./RESTpp
```
###MAC OS X:
First, install homebrew and Xcode
```
brew install jsoncpp
```
Then open the xcodeproject file.

Click run.

### Ubuntu
```
sudo apt-get update

sudo apt-get install libjsoncpp-dev libcurl3

sudo add-apt-repository ppa:ubuntu-toolchain-r/test

sudo apt-get update

sudo apt-get install g++-4.9

git clone https://github.com/DengYiping/RESTpp.git

cd RESTpp

cd RESTpp

make

./RESTpp
```
