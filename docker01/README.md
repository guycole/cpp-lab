# cpp-lab
development enviroment in docker
#
docker build . -t cppdev
#
docker run --rm -it -v ~/IdeaProjects:/home/gsc/IdeaProjects cppdev /bin/bash
#
docker run --rm -it -v ~/work:/home/work cppdev /bin/bash
#
