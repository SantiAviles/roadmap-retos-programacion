/*
 * ¿Preparad@ para aprender o repasar el lenguaje de programación que tú quieras?
 * - Recuerda que todas las instrucciones de participación están en el
 *   repositorio de GitHub.
 *
 * Lo primero... ¿Ya has elegido un lenguaje?
 * - No todos son iguales, pero sus fundamentos suelen ser comunes.
 * - Este primer reto te servirá para familiarizarte con la forma de participar
 *   enviando tus propias soluciones.
 *
 * EJERCICIO:
 * - Crea un comentario en el código y coloca la URL del sitio web oficial del
 *   lenguaje de programación que has seleccionado.
 * - Representa las diferentes sintaxis que existen de crear comentarios
 *   en el lenguaje (en una línea, varias...).
 * - Crea una variable (y una constante si el lenguaje lo soporta).
 * - Crea variables representando todos los tipos de datos primitivos
 *   del lenguaje (cadenas de texto, enteros, booleanos...).
 * - Imprime por terminal el texto: "¡Hola, [y el nombre de tu lenguaje]!"
 *
 * ¿Fácil? No te preocupes, recuerda que esta es una ruta de estudio y
 * debemos comenzar por el principio.
 */
#include <iostream>

#define MY_CONSTANT_DEFINE 10 // una forma de crear una constante de forma rapida, ojo que tiene que ser despues de los #include y antes de las funciones que nosotros creamos, pero ojo que podemos usar esto como constante no llega a ser como tal una constante, ya que hay operaciones como << que no ser nos permitira usar, asi que no es la mejor forma de crear constantes.


using namespace std;

int main(){


    // https://isocpp.org/

    // Esto es un comentario en una linea

    /* 
    Esto es un 
    comentario en varias lineas
    */

    int my_variable;
    const int MY_CONSTANT_CONST = 10; // esta es una manera igual sencilla para crear constantes, de una forma creo yo mas intuitiva, y esta nos permite usar << si quisieramos hacer un salto de linea con endl.

    bool my_bool = true;
    my_bool = false;

    int my_int = 10; // Dentro de los int hay mas posibilidades como short int, long int que se usarian para un entero mas pequeño o un entero mas largo.

    float my_float = 1.12;

    double my_double = 0.0000000002; // Usados cuanto los numeros decimales son muchos

    char my_char = 'C';

    cout << "¡Hola, C++!" << endl;

    return 0;
}