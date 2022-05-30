#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sstudentId,char sname[20]) {
  studentId=sstudentId;
  strcpy(name,sname);  
}

// Display StudentId and Name
void Student::display(){

  cout<< name<< endl;
  cout<< studentId;
  
}
