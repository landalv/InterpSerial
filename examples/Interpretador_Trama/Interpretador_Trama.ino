#include <InterpSerial.h>

bool debug = true;
int n_plot = 6; 

InterpSerial port (debug,n_plot);

void setup() 
{
   Serial.begin(115200);
   Serial.print("\n");
   for(int i=0; i < (n_plot - 1); i++){Serial.print(port.getPlot(i));Serial.print("\n");};
   port.wait_read(n_plot);
   Serial.print("Interpretado: ");Serial.print("\n");for(int i=0; i < (n_plot - 1); i++){Serial.print(port.getPlot(i));Serial.print("\n");}
   
}
 
void loop()
{
}
