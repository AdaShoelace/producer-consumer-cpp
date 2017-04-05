#ifndef CONSUMER_H
#define CONSUMER_H

#include "buffer.h"
#include <thread>

class Consumer
{
    public:
        Consumer(Buffer& buffer);
        void fetchAndPrint();
        ~Consumer();
    private:
        Buffer& buffer;
        std::thread inner_thread;

};

#endif
