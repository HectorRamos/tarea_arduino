#include <CapacitiveSensor.h>
	// * Hector Javier Paiz Ramos
	// * Jose Melvin Flores Majano
	// * Edwin Alexander Cortes Orantes
	// * Carlos de Jesus Machuca Esperanza
 // Sensor Capacitivo con Arduino
 

// declaramos nuestras variables las cuales van a ser procesadas por la libreria
CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        // uzando una resistencia de 10 M conectada entre los pines 2 y 3 
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);        // uzando una resistencia de 10 M conectada entre los pines 2 y 4 
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);        // uzando una resistencia de 10 M conectada entre los pines 2 y 5 
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);        // uzando una resistencia de 10 M conectada entre los pines 2 y 6 
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);        // uzando una resistencia de 10 M conectada entre los pines 2 y 7 
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);        //uzando una resistencia de 10 M conectada entre los pines 2 y 8 
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);        // uzando una resistencia de 10 M conectada entre los pines 2 y 9 
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);        // uzando una resistencia de 10 M conectada entre los pines 2 y 10 



void setup()                    
{

   cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF);     // este es solo un ejemplo de como se actocalibra en el sensor 1 solo a manera de ejemplo
   Serial.begin(9600);//para poder leer el serial
   pinMode(13,OUTPUT);//declaramos el pin de la bosina como salida

}

void loop()                    
{
    long start = millis();//variable
    long total1 =  cs_2_3.capacitiveSensor(30); //capturando los valores y definiendo la sensiblidad con que se va a trabajar
    long total2 =  cs_2_4.capacitiveSensor(30);//en nuestro caso usamos 30
    long total3 =  cs_2_5.capacitiveSensor(30);
    long total4 =  cs_2_6.capacitiveSensor(30);
    long total5 =  cs_2_7.capacitiveSensor(30);
    long total6 =  cs_2_8.capacitiveSensor(30);
    long total7 =  cs_2_9.capacitiveSensor(30);
    long total8 =  cs_2_10.capacitiveSensor(30);

    Serial.print(millis() - start);        // checando el funcionamiento
    Serial.print("\t");                    // tabaludaor para los resultados mostrados en el serial

    Serial.print(total1);                  // salida del sensor 1
    Serial.print("\t");
    Serial.print(total2);                  // salida del sensor 2
    Serial.print("\t");
    Serial.println(total3);     // salida del sensor 3
    Serial.print(total4);                  // salida del sensor 4
    Serial.print("\t");
    Serial.print(total5);                  // salida del sensor 5
    Serial.print("\t");
    Serial.print(total6);                  // salida del sensor 6
    Serial.print("\t");
    Serial.print(total7);                  // salida del sensor 7
    Serial.print("\t");
    Serial.print(total8);                  // salida del sensor 8
    Serial.print("\t");

    //vamos a definir los sonidos segun sea cada sensor
    //sensor 1
   if(total1>100)
   {
      tone(13,242); //tono Do
      delay(300);//tiempo de ratardo
      noTone(13);//quitamos el sonido
   
   } 
   //sensor 2
   if(total2>100)
   {
      tone(13,294);//tono Re
      delay(500);//tiempo de durcion
      noTone(13);//quitamos el tono
   //todos estos pasos se repiten en los demas if solo cambia el tono
   }
   //sensor 3
   if(total3>100)
   {
      tone(13,330);//Mi
      delay(500);
      noTone(13);
   
   }
   //sensor 4
    if(total4>100)
   {
      tone(13,349);//Fa
      delay(500);
      noTone(13);
   
   }
   //sensor 5
    if(total5>100)//Sol
   {
      tone(13,392);
      delay(500);
      noTone(13);
   
   }
   //sensor 6
    if(total6>100)
   {
      tone(13,440);//La
      delay(500);
      noTone(13);
   
   }
   //sensor 7
     if(total7>100) //Si
   {
      tone(13,494);
      delay(500);
      noTone(13);
   
   }
   //sensor 8
     if(total8>100)
   {
      tone(13,434);//Do
      delay(500);
      noTone(13);
   
   }
      
}


