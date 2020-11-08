#pragma once

#include "Resource.hpp"

class ResourceManager
{
  public:
    Resource* re;
    ResourceManager() {re=NULL;}
    ResourceManager (const Resource& re) {this->re=re;}
    double get() {return re->get();}
    ~ResourceManager() {delete re;}
};
