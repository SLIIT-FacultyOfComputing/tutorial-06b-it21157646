#include "Box.h"

void Box::setValues(int slength,int swidth,int sheight){
  length=slength;
  width=swidth;
  height=sheight;
}
int Box::getLength(){
  return length;
}
int Box::getHeight(){
  return height;
}
int Box::getWidth(){
  return width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int vol= length*height*width;
  return vol;
}
