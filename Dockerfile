FROM ubuntu:latest
MAINTAINER Scott Deng <scottdeng@live.cn>
ENV DEBIAN_FRONTEND noninteractive

#update
RUN apt-get update
RUN apt-get install python-software-properties
RUN add-apt-repository ppa:ubuntu-toolchain-r/test
RUN apt-get update
RUN apt-get upgrade -y

RUN apt-get -y install g++-4.9

WORKDIR RESTpp/RESTpp
#compile
RUN make
#we don't have entrypoint because it only have interactive mode.
