#include "../include/Project.h"
#include <string>
#include <vector>
#include <iostream>


Project::Project(){

};
  Project::~Project(){

};
  void Project::setProjectID(int){

};
  int Project::getProjectID(){
    return this->projectID;
};
  void Project::setProjectName(std::string projectName){
    this->projectName = projectName;
};
  std::string Project::getProjectName(){
    return this->projectName;
};
bool Project::addComponent(Component component){
  int size = componentList.size();
  componentList.emplace_back(component);
  if(size != componentList.size()){
    return true;
  }
  return false;
};
  void Project::listComponents(){
    for(int i = 0;i<componentList.size();i++){
      std::cout<<componentList[i].getName()<<std::endl;
  }
};
  bool removeComponent(Component);
  int projectID;
  std::string projectName;
  std::vector<Component> componentList;

