/*********************************************************************************
*Creación de landa_lv para la interpretacion de tramas pasadas por puerto Serial.*
****************************https://github.com/landalv****************************
**********************************************************************************/

#include <Arduino.h>

class InterpSerial {
  private:
    bool _debug = true;
    String serialValue = "";
    String plot[100];
  public:
    InterpSerial();
    InterpSerial(bool debug, int n_plot);
    String serial_read(); //lectura del puerto serial hasta encontrar salto de linea.
    String serial_read_plot(); //lectura del puerto serial hasta encontrar ",".
    void wait_read(int n_plot); //función para testeo, espera un mensaje en el puerto serial, y cuando es introducido lo almacena en el array Strings declarado en la clase.
    String getPlot(int i); // devuelve el correspondiente valor String del array creado con nuestra trama por separado.
};
