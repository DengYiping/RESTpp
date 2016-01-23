FROM ubuntu:latest
MAINTAINER Scott Deng <scottdeng@live.cn>
ENV DEBIAN_FRONTEND noninteractive

#update
RUN apt-get update
RUN apt-get -y install software-properties-common
RUN add-apt-repository ppa:ubuntu-toolchain-r/test -y
RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install libjsoncpp-dev libcurl4-openssl-dev g++-4.9 git -y

RUN apt-get -y install make
RUN git clone https://github.com/DengYiping/RESTpp.git
WORKDIR RESTpp
#compile
RUN make
#we don't have entrypoint because it only have interactive mode.
