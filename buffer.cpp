#include "buffer.h"

void Buffer::add(const std::string& to_add)
{
    std::lock_guard<std::mutex> guard(this->m_mutex);
    storageQueue.push_back(to_add);
}

std::string Buffer::getfirst()
{
    std::lock_guard<std::mutex> guard(this->m_mutex);
    std::string ret = storageQueue.front();
    storageQueue.erase(storageQueue.begin());
    return ret;
}

int Buffer::size()
{
    std::lock_guard<std::mutex> guard(m_mutex);
    return storageQueue.size();
}


