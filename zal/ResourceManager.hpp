#pragma once

#include "Resource.hpp"

class ResourceManager
{
  public:
    Resource* wsk;
    ResourceManager() { wsk = new Resource;
      wsk=NULL;
      }
    ResourceManager ( const ResourceManager& re) : wsk(re->wsk) {}
      ResourceManager operator=(const ResourceManager& re){
        wsk=re->wsk;
        return *this;
      }
      ResourceManager (const ResourceManager&& re) : wsk(std::move(re->wsk){}
    double get() {return wsk->get();}
    ~ResourceManager() {delete wsk;}
};
