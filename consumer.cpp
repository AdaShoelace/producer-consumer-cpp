#include "consumer.h"
#include <iostream>

Consumer::Consumer(Buffer& buffer) : buffer(buffer), inner_thread(&Consumer::fetchAndPrint, this) {}

void Consumer::fetchAndPrint()
{
    while(buffer.size() != 0)
    {
        std::cout << "Fetching: " << buffer.getfirst() << std::endl;
    }
}

Consumer::~Consumer()
{
    inner_thread.join();
}
