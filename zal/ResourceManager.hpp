#pragma once

#include "Resource.hpp"

class ResourceManager
{
  public:
    Resource* re;
    ResourceManager() {};
    ResourceManager (const Resource& re) {};
    double get() {return re.get();}
    ~ResourceManager() {};
};
