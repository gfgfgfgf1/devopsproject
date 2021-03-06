// Copyright 2021 Bulatov D.
#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <vector>
#include "Group.h"

class Group;
class Student {
 private:
  int id;
  std::string fio;
  Group* group;
  std::vector<int> marks;

 public:
  Student(std::string fio, int id);
  void addToGroup(Group* group);
  void addMark(int mark);
  double getAverageMark();
  int getId();
  std::string getFio();
  std::string getGroupTitle();
  void removeGroup();
  void setMarks(std::vector<int> marks);
};
#endif  // STUDENT_H_
