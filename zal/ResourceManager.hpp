#pragma once

#include "Resource.hpp"

class ResourceManager
{
    Resource& re;
    ResourceManager() {};
    ResourceManager (const Resource& re) {};
    double get() {return re.get();}
    ~ResourceManager() {};
};
