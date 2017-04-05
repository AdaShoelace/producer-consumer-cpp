#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include "buffer.h"
#include "producer.h"
#include "consumer.h"

int main(int argc, char* argv[])
{
    Buffer buffer;
    Producer prod(buffer, argv[1]);
    Consumer consumer(buffer);
    return 0;
}
