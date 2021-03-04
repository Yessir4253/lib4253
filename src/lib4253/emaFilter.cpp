#include "main.h"

emaFilter::emaFilter(double a){
  alpha = a;
}

emaFilter::emaFilter(){
  alpha = 1;
}

void emaFilter::setGains(double a){
  alpha = a;
}

double emaFilter::filter(double input){
  if(!run){
    run = true;
    output = prevOutput = input;
  }
  else{
    output = alpha * input + (1 - alpha) * prevOutput;
    prevOutput = output;
  }

  return output;
}

void emaFilter::reset(){
  output = 0, prevOutput = 0;
  run = false;
}