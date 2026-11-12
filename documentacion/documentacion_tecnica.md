# Documentación Técnica

*Fecha: 19 de noviembre de 2026*

Este documento contiene la documentación técnica para el proyecto STEAM del curso **Laboratorio STEAM+** de la tecnicatura **Redes y Software** del **Instituto Tecnológico de Informática** de **UTU** año 2026.

# Proyecto: SAFE: Sensor Multiemergencia

## 1. Integrantes
- Florencia Delgado
- Andrea Puentes
- Andres Silva

## 2. Descripción
- Este proyecto consiste en un dispositivo prototipo basado en Arduino diseñado para la detección temprana de fuego y sismos en un espacio reducido como una maqueta o una habitación.
El proyecto SAFE (Sensor Automático de Fuego y Emergencias) consiste en el desarrollo de un prototipo electrónico basado en Arduino UNO, diseñado para detectar la presencia de llamas y cambios de inclinación que permitan simular situaciones de emergencia, como incendios y temblores.

El dispositivo integra un sensor de llama infrarrojo, encargado de detectar la presencia de llamas, y un sensor de inclinación, utilizado para identificar cambios de posición y simular situaciones de movimiento o temblor. Ambos sensores envían señales al Arduino UNO, que procesa la información y activa las alertas visuales y sonoras correspondientes.

El sistema utiliza un LED RGB para representar diferentes niveles de alerta mediante los colores verde, amarillo y rojo, mientras que un buzzer emite señales sonoras diferenciadas según el evento detectado.

Además, el proyecto contempla la utilización de una caja protectora para alojar los componentes electrónicos, facilitar su organización y reducir su exposición a daños externos.

SAFE se desarrolla como un prototipo educativo que permite aplicar conocimientos de electrónica, programación y funcionamiento de sensores, mediante el diseño, la integración y las pruebas de sus componentes.
- 

## 3. Materiales
- Placa Arduino UNO
- Protoboard y cables dupont
- Sensor de llama (infrarrojo)
- Sensor de inclinación
- LED RGB (Cátodo común)
- Buzzer pasivo
- Pila 9v y porta pilas
- Caja protectora MDF
- Bisagras

## 4. Diseño Mecánico
- [Realizar una descripción de como funciona la solución a nivel mecánico]
- [¿Cómo se arma la solución? Incluir instrucciones de ensamblaje]
  - [Sugerencia: inspirarse en la forma como https://www.instructables.com detalla el armado de un proyecto]
- [Incluir fotografías ilustrativas]

Para el armado del prototipo SAFE se decidió utilizar una caja protectora, con el objetivo de alojar los componentes electrónicos, mantenerlos organizados y protegerlos durante su manipulación.

Durante el desarrollo del proyecto se tomaron medidas aproximadas de 15 × 12 cm para el contenedor, considerando el espacio necesario para colocar el Arduino UNO, la protoboard y los diferentes componentes. También se evaluó la posibilidad de utilizar MDF como material de construcción.

El diseño contempla colocar el Arduino y la protoboard en el interior de la caja, dejando aberturas para que el sensor de llama pueda realizar las detecciones y las alertas del LED RGB y el buzzer sean visibles y audibles desde el exterior.

Proceso de ensamblaje
Para el armado del prototipo se establecieron los siguientes pasos:

1-Preparación de la caja: seleccionar un contenedor con espacio suficiente para alojar los componentes electrónicos.

2-Distribución de los componentes: organizar el Arduino UNO, la protoboard y los sensores dentro de la caja, considerando el espacio necesario para las conexiones.

3-Ubicación de las aberturas: marcar los espacios destinados al sensor de llama, el LED RGB y el buzzer, teniendo en cuenta sus dimensiones.

4-Preparación de las salidas: realizar las aberturas necesarias para permitir el funcionamiento de los sensores y la salida de las alertas visuales y sonoras.

5-Montaje de los componentes: colocar y asegurar los elementos electrónicos en sus posiciones correspondientes, evitando que se desplacen durante el uso.

6-Revisión del montaje: comprobar que los componentes estén correctamente distribuidos y que la caja permita acceder a las conexiones y realizar las pruebas del sistema.

(ACA AGREGAR FOTOGRAFIAS)



## 5. Diseño Electrónico
- [Realizar una descripción de como funciona la solución a nivel electrónico]
- [Incluir diagramas de Tinkercad mostrando los componentes electrónicos y como van conectados]

## 6. Diseño Software
- [Realizar una descripción de como funciona la solución a nivel de software]
- [Explicar los bloques de código más importantes de la solución programada]
- [Incluir código fuente de python (u otro lenguaje)]
  - [El código debe almacenarse en una carpeta dentro del repositorio]
  - [Sugerencia: almacenar el código en diferentes etapas para mostrar su evolución]

## 7. Referencias y recursos
[Listar referencias, fuentes, recursos, etc usados durante el desarrollo del proyecto]

## 8. Otros
[Incluir cualquier otra información que consideren relevante para el proyecto]
