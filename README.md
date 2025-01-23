# ft_printf: Mi implementación de printf en C

Este repositorio contiene mi implementación de la función `ft_printf` en C, realizada como parte del proyecto `ft_printf` en 42 Urduliz.

**Objetivo del proyecto**

El objetivo de este proyecto es desarrollar mi propia versión de la función `printf`  de la librería estándar de C. Esta función, que se llamará `ft_printf` ,  debe ser capaz de replicar las funcionalidades básicas de `printf`. 

**Funcionalidades:**

*   Replica las funcionalidades básicas de la función `printf` de la librería estándar de C.
*   Maneja los siguientes especificadores de formato:
    *   `%c`: Imprime un solo carácter.
    *   `%s`: Imprime una cadena de caracteres.
    *   `%p`: Imprime un puntero en formato hexadecimal.
    *   `%d`: Imprime un número entero con signo en base decimal.
    *   `%i`: Imprime un número entero con signo en base decimal (similar a `%d`).
    *   `%u`: Imprime un número entero sin signo en base decimal.
    *   `%x`: Imprime un número entero sin signo en base hexadecimal (minúsculas).
    *   `%X`: Imprime un número entero sin signo en base hexadecimal (mayúsculas).
    *   `%%`: Imprime el símbolo de porcentaje.
*   Utiliza las macros `va_start`, `va_arg` y `va_end` para manejar argumentos variables.
*   Cumple con las normas de 42 Urduliz (25 líneas por función).

**Contenido del repositorio:**

*   `libftprintf.h`: Archivo de cabecera con las declaraciones de las funciones.
*   `ft_printf.c`: Archivo fuente con la implementación de la función `ft_printf`.
*   `ft_*.c`: Archivos fuente con las funciones auxiliares para cada conversión.
*   `libft/`: Carpeta con la librería `libft` (solo los archivos necesarios).
*   `Makefile`: Archivo para compilar la librería y el programa de prueba.
*   `test.c`: Programa de prueba con ejemplos de uso de `ft_printf`.

**Cómo compilar:**

1.  Clona el repositorio: `git clone [https://github.com/Jhonjairo03s/ft_printf.git]`
2.  Ve a la carpeta del proyecto: `cd ft_printf`
3.  Ejecuta `make` para compilar la librería y el programa de prueba.
4.  Ejecuta `./test` para ejecutar las pruebas.

**Contribuciones:**

Si encuentras algún error o quieres mejorar el proyecto, ¡no dudes en enviar un pull request!

**Autor:**

Jhon Valencia
