objects=main.o CEpollServer.o

main:$(objects)
	g++ -Wall -g -o main $(objects) -lpthread
main.o:main.cpp
	g++ -c -g -Wall -std=c++0x main.cpp
CEpollServer.o:CEpollServer.cpp CEpollServer.h
	g++ -c -g -Wall -std=c++0x CEpollServer.cpp
.PHONY:clean

clean:
	rm -f *.o main
