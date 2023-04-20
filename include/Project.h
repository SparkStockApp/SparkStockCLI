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
  void setProjectID(int);
  int getProjectID();
  void setProjectName(std::string);
  std::string getProjectName();
  bool addComponent(Component);
  void listComponents();
  bool removeComponent(Component);
private:
  int projectID;
  std::string projectName;
  std::vector<Component> componentList;
};



#endif
