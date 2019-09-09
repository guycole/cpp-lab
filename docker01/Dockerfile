#
FROM ubuntu:18.04
LABEL build_date="2019-09-9"
LABEL description="unix development"
LABEL maintainer="guycole@gmail.com"
#
RUN apt-get update && apt-get -y upgrade
RUN apt-get install -y python3 
RUN apt-get install -y python3-pip 
RUN apt-get install -y virtualenv
RUN apt-get install -y libboost-system-dev
RUN apt-get install -y less
RUN apt-get install -y vim
RUN apt-get install -y netcat
RUN apt-get install -y postgresql-client
#
#WORKDIR /home/jaded
COPY ./bash_aliases /root/.bash_aliases
#
RUN pip3 install --upgrade pip
#RUN pip3 install -r /home/jaded/requirements.txt
#
#ENTRYPOINT ["./docker_entrypoint.sh"]
#
