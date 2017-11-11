#include <iostream>
#include "CEpollServer.h"

using namespace std;

int main()
{
    CEpollServer  theApp;
    theApp.InitServer("127.0.0.1", 8000);
    theApp.Run();

    return 0;
}