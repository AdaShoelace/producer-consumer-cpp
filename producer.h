#pragma once
#include <string>
#include "buffer.h"
#include <thread>
#include <fstream>

class Producer
{
    public:
        Producer(Buffer& buffer, const std::string& filePath);
        void produce();
        ~Producer();
    private:
        Buffer& buffer;
        std::ifstream m_file;
        std::thread t1;
};
