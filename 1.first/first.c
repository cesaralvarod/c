#include <stdio.h> // stdio -> standard input/output, con #include le decimos a ensamblador que incluya la librería stdio,este archivo (stdio.h) contiene algunas funciones relacionadas al input y output que necesitamos

int main() {
    // TODO dentro de esta función main se ejecutará en primer lugar. No puede ir
    // código fuera de esta función que no sean otras funciones.

    printf("hello world"); // imprimir en consola

    return 0; // exit status of our program
}

// gcc -S first.c => convertir en lenguaje ensamblador
// gcc -o first.c => convertir en lenguaje máquina
// gcc first.c -o first => crea un ejecutable compilado, en linux es shell y en
// windows es .exe
