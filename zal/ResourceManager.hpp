#pragma once

#include "Resource.hpp"
class ResourceManager
{
  public:
    Resource* wsk;
    ResourceManager() { wsk = new Resource;}
    ResourceManager ( const ResourceManager& re):wsk(re.wsk) { }
    ResourceManager& operator=(const ResourceManager& re){
      if(this == re.wsk) return *this;
      delete wsk;
      wsk=new Resource;
      wsk=re.wsk;
      return *this;
    }
    ResourceManager(const ResourceManager&& re):wsk(std::move(re.wsk)){}
    ResourceManager& operator=(ResourceManager&& re){
      wsk=std::move(re.wsk);
      return *this;
    }
    double get() {return wsk->get();}
    ~ResourceManager() {delete wsk;}
};
