#include "producer.h"
#include <iostream>

Producer::Producer(Buffer& buffer, const std::string& filePath) : buffer(buffer), m_file(filePath), t1(&Producer::produce, this) {};

void Producer::produce()
{
    if(m_file.is_open())
    {
        std::string str;
        while(std::getline(m_file, str))
        {
            buffer.add(str); 
        }
    } 
    else
    {
        std::cout << "No such file: " << std::endl; 
    }
}

Producer::~Producer()
{
    t1.join();
    m_file.close();
}

