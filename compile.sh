#come in current folder
cd `dirname $0`
g++ \
Alloctor.cpp \
main.cpp \
-std=c++11 \
-o memory
