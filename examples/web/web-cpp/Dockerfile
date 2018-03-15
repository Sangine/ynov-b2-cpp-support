FROM        ubuntu:xenial
MAINTAINER  mike

# update and install dependencies
RUN         apt-get update \
                && apt-get install -y \
                    software-properties-common \
                    wget \
                && add-apt-repository -y ppa:ubuntu-toolchain-r/test \
                && apt-get update \
                && apt-get install -y \
                    make \
                    git \
                    curl \
                    vim \
                    vim-gnome \
                && apt-get install -y cmake \
                && apt-get install -y \
                    gcc-4.6 g++-4.6 gcc-4.6-base \
                && update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-4.6 100 \
                && update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-4.6 100


RUN apt-get install -y libfcgi-dev
RUN apt-get install -y spawn-fcgi
RUN apt-get install -y nginx
RUN apt-get install -y curl
RUN apt-get install -y vim

# Create app directory
WORKDIR /usr/src/app

COPY src /usr/src/app

EXPOSE 8088
