#ifndef PROJECT_H
#define PROJECT_H

#include "Component.h"
#include <iostream>
#include <string>
#include <vector>


class Project {
public:
  Project();
  ~Project();

private:
  int projectID;
  std::string projectName;
  std::vector<Component> componentList;
};



#endif
