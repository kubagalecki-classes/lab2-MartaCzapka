#pragma once

#include "Resource.hpp"

class ResourceManager
{
  public:
    Resource* wsk;
    ResourceManager() {wsk=NULL;}
    ResourceManager (const Resource& re) {wsk=re;}
    double get() {return wsk->get();}
    ~ResourceManager() {delete wsk;}
};
