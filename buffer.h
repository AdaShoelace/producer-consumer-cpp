#pragma once
#include <string>
#include <vector>
#include <mutex>

class Buffer
{
    public:
        void add(const std::string& to_add);
        std::string getfirst();
        int size();

    private:
        std::vector<std::string> storageQueue;
        std::mutex m_mutex; 

};
