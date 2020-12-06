# InterpSerial #

Libreria de Arduino creada para la interpretación de tramas de datos, separados por "," en el puerto Serial de Arduino. Esta libreria aún en desarrollo esta concevida como una forma de facilitar la comunicación por puerto Serial entre arduino y otros dispositivos como ESP8866, ESP32, o Raspberry Pi.

### Versión ###

* Version 0.0

### ¿Como utilizar la libreria? ###

* Incluir la libreria en nuestro proyecto.
* Crear objeto de clase InterpSerial
* Utilizar sus funciones:
    * String serial_read(); //lectura del puerto serial hasta encontrar salto de linea.
    * String serial_read_plot(); //lectura del puerto serial hasta encontrar ",".
    * void wait_read(int n_plot); //función para testeo, espera un mensaje en el puerto serial, y cuando es introducido lo almacena en el array Strings declarado en la clase.
    * String getPlot(int i); // devuelve el correspondiente valor String del array creado con nuestra trama por separado.
* He dejado un ejemplo para entender el funcionamiento, el cual se ejecua en el puerto Serie.
