#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    friend class Resource;
    ResourceManager() {};
    ResourceManager (const Resource&) {};
    
    ~ResourceManager() {};
};
