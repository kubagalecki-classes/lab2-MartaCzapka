#pragma once

#include "Resource.hpp"
#include<iostream>
using namespace std;
class ResourceManager
{
  public:
    Resource* wsk;
    ResourceManager() { wsk = new Resource;
      wsk=NULL;
      }
    ResourceManager ( const ResourceManager& re):wsk(re.wsk) {
      wsk=re.wsk;
      cout<<"konstruktor \n";
      return *this;
      }
    double get() {return wsk->get();}
    ~ResourceManager() {delete wsk; cout<<"destruktor \n";}
};
