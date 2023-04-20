#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
class Component{
  public:
    Component();
    ~Component();
    std::string getName();
  private:
    int componentType;
    std::string componentName;
};

#endif
