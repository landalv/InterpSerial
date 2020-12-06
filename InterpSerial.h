#include <Arduino.h>

class InterpSerial {
  private:
    bool _debug = true;
    String serialValue = "";
    String plot[100];
  public:
    InterpSerial();
    InterpSerial(bool debug, int n_plot);
    String serial_read();
    String serial_read_plot();
    void wait_read(int n_plot);
    String getPlot(int i);
};
