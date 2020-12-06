#include "InterpSerial.h"


InterpSerial::InterpSerial(){
  for(int i=0; i < 100; i++){plot[i]="nada";}
  _debug = true;
}
InterpSerial::InterpSerial(bool debug, int n_plot){
  for(int i=0; i < (n_plot - 1); i++){plot[i]="nada";}
  _debug = debug;
}

String InterpSerial::serial_read(){
  String result = "";
  result = Serial.readStringUntil('\n');
  return result;
}


String InterpSerial::serial_read_plot(){
  String result = "";
  result = Serial.readStringUntil(',');
  return result;
}


void InterpSerial::wait_read(int n_plot){
  bool wait = false;
  bool writed = true;
  while(!wait){
    if (Serial.available()>0){
      for(int i=0; i<(n_plot-1); i++){plot[i] = serial_read_plot();}
      plot[(n_plot-1)] = serial_read();
      wait = true;
    }
    else{
      while(writed){
        if(_debug ==true){Serial.println("Write the plot");}
        writed = false;
      }
    }
  }
}
String InterpSerial::getPlot(int i){
  return plot[i];
}
