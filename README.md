# You need to learn C

C es un lenguaje de programación de nivel medion que se originó la década de de 1970. Es uno de los lenguajes más antiguos y aún usados hasta el día de hoy. Creado por Dennis Ritchie en 1972. C tiene es multi-paradigma, estructurado y compilado.

Cuandos nos referimos que C es un lenguaje de nivel medio significa que está muy cerca a trabajar con el lenguaje máquina, esto siginifica que C puede trabajar en estrecha colaboración con la arquitectura de la máquina.

Para continuar hay que saber que existen 3 clasificaciones de lenguajes de programación según la colaboración que tengan con la arquitectura de la máquina:

1. Lenguajes de bajo nivel:

Aquí tenemos el lenguaje binario que es el principal lenguaje con el que las máquinas se comunicany el lenguaje ensamblador que nos permite programar la máquina por medio de patrones o instrucciones.

Algunas de las características de estos lenguajes son: son muy eficientes, trabajan con la arquitectura de la máquina, consumen menos memoria y son muy rápidos. Pero esto también tiene sus desventajas como: son difíciles de entender y consumen tiempo aprender a escribir en ellos.

2. Leguajes de nivel medio:

Como lenguajes de nivel medio podemos encontrar a C, C++ o Fortran. Los lenguajes de nivel medio pueden actuar como un puente entre los lenguajes de bajo nivel y los lenguajes de alto nivel.

La mayoría de kernerls, sistemas y compiladores están escritos en C. "Nearly every language uses or is influenced by C".

C se podría considerar como el padre de los demás lenguajes de programación. C es literalmente usado en todos lados: bases de datos, sistemas de auto conducción de autos, sistemas operativos y sistemas embebidos.

3. Lenguajes de alto nivel:

Dentro de los lenguajes de alto nivel tenemos prácticamente los otros lenguajes más conocidos como Python, Java, PHP, Javascript o C#. Este tipo de lenguajes son más fáciles de trabajar, más fáciles de aprender y permiten más abstracción, pero son lenguajes que son más lentos, consumen más memoria y tienen dificultad para trabajar con el bajo nivel (arquitectura de las máquinas).

**Notas importantes**

- C no es orientado a objetos. C es un lenguaje de procedimiento no abstracto.
- C++ es una extensión de C. C++ si es orientado a objetos.
- C es difícil.

## Programar en C

Para comenzar a programar en C se necesita:

- IDE o editor de código. Visual Studio Code, Vim, Sublime Text, etc.
- GCC (GNU Compiler Collection) Compiler. El compilador GCC convierte código C a código máquina.
- Todos los archivos de C llevan la extensión .c
- Cada vez que cambiamos algo en C tenemos que volver a compialr el código.

## GCC

### Historia

El autor original del Compilador de C de GNU (GCC) es Richard Stallman, el fundador del Proyecto GNU.

El Proyecto GNU fué iniciado en 1984 para crear un sistema operativo basado en software libre similar a UNIX y, así promover la libertad y la cooperación entre usarios de ordenadores y programadores. Cualquier sistema operativo basado en UNIX necesita un compilador de C, y no había compiladores libres en ese momento, el Proyecto GNU debía desarrollar uno desde cero. Este trabajo fué financiado por donaciones de individuos y compañias a través de la Free Software Foundation, una organización sin ánimo de lucro destinada a dar soporte al trabajo del Proyecto GNU.

La primera entrega de GCC fué hecha en 1987. Esto fué un significativo progreso, siendo el primer compilador portable para optimizar ANSI C liberado como software libre. Desde este momento GCC ha llegado a ser uno de las más importantes herramientas en el desarrollo de software libre.

A través del tiempo GCC ha sido extendido para dar soporte a muchos lenguajes adicionales, incluyendo Fortran, ADA, Java y Objective-C. El acrónimo GCC es ahora usado para referir al “GNU Compiler Collection” (Colección de Compiladores de GNU). Su desarrollo está guiado por el GCC Steering Committee, un grupo compuesto de representantes de las comunidades de usuarios/as de GCC en la industria, la investigación y la academia.

### Características

Lo primero de todo, GCC es un compilador portable —se ejecuta en la mayoría de las plataformas disponibles hoy, y puede producir salidas para muchos tipos de procesadores. Además de procesadores usados en ordenadores personales, también soporta microcontroladores, DSPs y CPUs de 64 bits.

GCC no es solo un compilador nativo —también puede compilar cruzado cualquier programa, produciendo ficheros ejecutables para un sistema diferente desde el que GCC está siendo usado. Esto permite compilar software para sistemas embebidos que no son capaces de ejecutar un compilador. GCC está escrito en C con un fuerte enfoque hacia la portabilidad, y puede compilarse a sí mismo, así puede ser adaptado a nuevos sistemas fácilmente.

GCC tiene múltiples frontends, para parsear diferentes lenguajes. Los programas en cada lenguaje pueden ser compilados, o compilados de manera cruzada, para cualquier arquitectura. Por ejemplo, un programa en ADA puede ser compilado para un microcontrolador, o un programa en C para un supercomputador.

GCC tiene un diseño modular, permitiendo que el soporte para nuevos lenguajes y arquitecturas sea añadido. Añadir un nuevo front-end a GCC habilita el uso de este lenguaje en cualquier arquitectura y proporciona que estén disponibles facilidades (tales como librerías) en tiempo de ejecución. De manera similar, si se añade soporte para una nueva arquitectura éste se vuelve disponible para todos los lenguajes.

Finalmente, y de manera más importante, GCC es software libre, distribuido bajo la GNU General Public License (GNU GPL).(1) Esto significa que se tiene la libertad para usar y modificar GCC, como con todo el software de GNU. Si se necesita soporte para un nuevo tipo de CPU, un nuevo lenguaje, o una nueva funcionalidad es posible añadirla uno mismo o contratar a alguien para mejorar GCC de manera personalizada. Se puede contratar a alguien para arreglar un error si esto es importante en el trabajo cotidiano.
