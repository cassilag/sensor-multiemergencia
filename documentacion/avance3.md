# Informe de Avance 3: Octubre 2026

## 08/10/2026
-  Realizamos las conexiones nuevamente de todos los sensores, la mayoría funciona sin problemas pero  el sensor de fuego que no funcionaba, Andrés realizo una prueba distinta conecto el positivo del sensor de llama a la entrada de 3.3V del arduino y la señal analógica al Arduino la conexión a tierra si quedo conectada al protoboard con eso se logro activar el sensor.
-Ademas probamos varios códigos para el sensor buzzer donde se utilizaron varias frecuencias dentro del mismo, para identificar una frecuencia de sonido que sea fuerte y adecuada para que se realice la alerta del sensor.
-Se agregaron además carpetas en el gitf para organizar los códigos de cada sensor y usarlos como apoyo en la clase siguiente 15/10 y realizar la documentación de la calibración para cada uno.
-Pasamos la señal que recibíamos del del sensor de tilt  que estaba en digital a analógica.

  - Tareas completadas: Se realizan las conexiones con los sensores, se ajusta el código para ajustar la frecuencia y el sonido para el  buzzer
  - Problemas encontrados y soluciones/alternativas propuestas: encontramos dificultades para probar el sensor de fuego, al cambiar la conexión de entrada del Arduino directamente con esto quedo solucionado
  - Próximos pasos: realizar un test de calibración del sensor de fuego con un metro para analizar el alcance del mismo.
  - Video de prueba de sensor de fuego
    

https://github.com/user-attachments/assets/215cc76a-5bdc-4b92-83a9-aced40b5e807


 
 1. ¿Qué significa calibrar un sensor?
Un sensor es un componente que detecta una magnitud o un cambio en el entorno. Por ejemplo:









Sensor de temperatura y humedad
Se comprueba si la temperatura que indica es razonable al compararla con un termómetro de referencia.












Sensor ultrasónico de distancia
Se compara la distancia que detecta con una distancia real, medida con una regla o cinta métrica.












Sensor de gas o humo
Se comprueba cómo responde ante distintas condiciones y se ajusta el umbral de detección si el proyecto lo requiere.



Importante: calibrar no es solamente conectar el sensor y comprobar que enciende. Es comparar sus lecturas o respuestas con una referencia, o establecer y justificar los valores a partir de los cuales debe activarse.
2. ¿Qué tendrían que documentar en la entrega?
Podrían preparar un pequeño informe con estas secciones:

1. Identificación del sensor
Nombre, modelo, qué mide o detecta y para qué se utiliza en el proyecto.



2. Procedimiento de calibración
Explicar cómo conectaron el sensor, qué materiales utilizaron, qué condiciones probaron y cómo realizaron las comparaciones o ajustes.



3. Tabla de mediciones
Registrar los valores de referencia, los valores obtenidos por el sensor y las diferencias encontradas, cuando corresponda.



4. Ajustes realizados
Indicar si modificaron un umbral, una constante de corrección o algún parámetro del programa. Si no fue necesario ajustar nada, también se registra.



5. Evidencias y conclusión
Agregar fotografías del montaje, capturas del monitor serial o del programa y una conclusión sobre el funcionamiento del sensor.



3. Ejemplo práctico de cómo quedaría
Imaginemos que utilizan un sensor ultrasónico conectado a un Arduino para detectar objetos.
Distancia real	Lectura del sensor	Diferencia
10 cm	10,2 cm	+0,2 cm
20 cm	19,7 cm	−0,3 cm
30 cm	30,5 cm	+0,5 cm
Estos valores son ilustrativos, no mediciones reales.
A partir de esas pruebas, documentarían:
- Objetivo: comprobar la precisión del sensor de distancia.
- Materiales: Arduino, sensor ultrasónico, regla y objeto de prueba.
- Procedimiento: colocar el objeto a distancias conocidas y registrar las lecturas.
- Resultados: comparar las mediciones reales con las indicadas por el sensor.
- Conclusión: determinar si las lecturas son suficientemente consistentes para el propósito del proyecto.
No siempre es necesario modificar el código. Puede bastar con registrar las pruebas, analizar los resultados y explicar si el sensor cumple con lo esperado.

## 15/10/2026
- Andrés y Andrea hablaron y acordaron que la próxima clase toman las medidas para realizar la calibración del sensor de fuego, se analizara la posibilidad de encontrar una caja para proteger todo el dispositivo multi-emergencia.
- También Para la próxima clase se acordó de comprar una pila y un portapila para que la fuente de alimentación del sensor no dependa de la computadora y pueda estar aislado y protegido en una caja 
- El profe nos propuso también que con si tenemos en casa una powerbank podemos usarla y con un cable USB cortarlos y colocar el positivo y el negativo al protoboard como opción de ahorro en la compra de una pila y un portapila
  
 
  - Próximos pasos: En la clase del 15/10/2026 probar con la regla la calibración del sensor de fuego y analizar la protección que va a llevar el sensor completo
  - Confirmar si se realizara la compra de la pila y portapila o si se utilizara una powerbank

## 22/10/2026
- El grupo se puso a indagar sobre cuales serían las medidas del contenedor caja donde iría el sensor.
- Aproximadamente dando unas medidas con cinta métrica. Andrea tomó notas de las medidas para tenerlas en cuenta 15X12cm.
-Hablamos en grupo de que se podría complejizar un poco más el proyecto, porque anteriormente los sensores que teníamos se rompieron. Y conversando con el profesor nos ofreció un LED RGB, que por si solo puede hacer los 3 colores del semáforo, rojo, para alerta critica, amarillo media, y verde baja.
  Tomada esa decisión Andrés se encarga de anexar al código que ya tenemos, un bloque con  esas instrucciones para el sensor LED RGB.
  El material de la caja por ahora en esta clase definimos que el material podría ser MDF, y que además entre las adaptaciones que tiene la caja tendrà un circulo que es la forma o diametro del buzer, para que pueda quedar a la vista.
- [Incluir:]
  - [Tareas completadas]
  - [Problemas encontrados y soluciones/alternativas propuestas]
  - [Próximos pasos]
  - [Imágenes o videos ilustrativos del avance]

## [x]/10/202x
- [Realizar una descripción de los avances en el proyecto en la fecha en uno o dos párrafos]
- [Incluir:]
  - [Tareas completadas]
  - [Problemas encontrados y soluciones/alternativas propuestas]
  - [Próximos pasos]
  - [Imágenes o videos ilustrativos del avance]

## Nota
En este enlace encontrarás un [ejemplo como debe completarse el informe de avance](avance_ejemplo.md).
