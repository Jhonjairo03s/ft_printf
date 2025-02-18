/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:49:44 by jhvalenc          #+#    #+#             */
/*   Updated: 2025/02/12 13:49:15 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <float.h>
#include <math.h>

int	main(void)
{
/*
	int	b;
	int	*ptr1;

	b = 10;
	ptr1 = &b;
	printf("printf: %c\n", 'A');
	ft_printf("ft_printf: %c\n", 'A');
	ft_printf("\n");
	printf("printf: %c\n", '\t');
	ft_printf("ft_printf: %c\n", '\t');
	ft_printf("\n");
	printf("printf: %s\n", "Hola, mundo!");
	ft_printf("ft_printf: %s\n", "Hola, mundo!");
	ft_printf("\n");
	printf("printf: %s\n", "");
	ft_printf("ft_printf: %s\n", "");
	ft_printf("\n");
	printf("printf: %d\n", 42);
	ft_printf("ft_printf: %d\n", 42);
	ft_printf("\n");
	printf("printf: %d\n", INT_MAX);
	ft_printf("ft_printf: %d\n", INT_MAX);
	ft_printf("\n");
	printf("printf: %d\n", INT_MIN);
	ft_printf("ft_printf: %d\n", INT_MIN);
	ft_printf("\n");
	printf("printf: %x\n", 0xabcdef);
	ft_printf("ft_printf: %x\n", 0xabcdef);
	ft_printf("\n");
	printf("printf: %X\n", 0xABCDEF);
	ft_printf("ft_printf: %X\n", 0xABCDEF);
	ft_printf("\n");
	printf("printf: %p\n", ptr);
	ft_printf("ft_printf: %p\n", ptr);
	ft_printf("\n");
	printf("printf: %p\n", NULL);
	ft_printf("ft_printf: %p\n", NULL);
	ft_printf("\n");
	printf("printf: %d - %s - %c\n", 42, "Hola, mundo!", 'A');
	ft_printf("ft_printf: %d - %s - %c\n", 42, "Hola, mundo!", 'A');
	ft_printf("\n");
	printf("printf: %u\n", -42);
	ft_printf("ft_printf: %u\n", -42);
	ft_printf("\n");
	printf("-----------------------------------------------------\n");
*/
	printf("Caracteres:\n");
	int count1 = printf("printf: %c\n", 'A');
	ft_printf("Cantidad de caracteres de printf: %d\n", count1);
        int ft_count1 = ft_printf("ft_printf: %c\n", 'A');
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count1);
        ft_printf("\n");
	int count2 = printf("printf: %c\n", '\n');
	ft_printf("Cantidad de caracteres de printf: %d\n", count2);
        int ft_count2 = ft_printf("ft_printf: %c\n", '\n');
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count2);
        ft_printf("\n");
	int count3 = printf("printf: %c\n", '\0');
	ft_printf("Cantidad de caracteres de printf: %d\n", count3);
        int ft_count3 = ft_printf("ft_printf: %c\n", '\0');
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count3);
        ft_printf("\n");
	printf("-----------------------------------------------------\n");
		
	printf("Cadenas:\n");
	int count4 = printf("printf: %s\n", "Hola, mundo!");
	ft_printf("Cantidad de caracteres de printf: %d\n", count4);
        int ft_count4 = ft_printf("ft_printf: %s\n", "Hola, mundo!");
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count4);
	ft_printf("\n");
	int count5 = printf("printf: %s\n", "");
	ft_printf("Cantidad de caracteres de printf: %d\n", count5);
        int ft_count5 = ft_printf("ft_printf: %s\n", "");
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count5);
	ft_printf("\n");
	int count6 = printf("printf: %s\n", "Esto es una prueba\tcon tabulación.");
	ft_printf("Cantidad de caracteres de printf: %d\n", count6);
        int ft_count6 = ft_printf("ft_printf: %s\n", "Esto es una prueba\tcon tabulación.");
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count6);
	ft_printf("\n");
	printf("-----------------------------------------------------\n");
		
	printf("Enteros decimal:\n");
	int count7 = printf("printf: %d\n", 42);
	ft_printf("Cantidad de caracteres de printf: %d\n", count7);
        int ft_count7 = ft_printf("ft_printf: %d\n", 42);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count7);
        ft_printf("\n");
        int count8 = printf("printf: %d\n", 0);
	ft_printf("Cantidad de caracteres de printf: %d\n", count8);
        int ft_count8 = ft_printf("ft_printf: %d\n", 0);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count8);
        ft_printf("\n");
        int count9 = printf("printf: %d\n", -42);
	ft_printf("Cantidad de caracteres de printf: %d\n", count9);
        int ft_count9 = ft_printf("ft_printf: %d\n", -42);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count9);
	ft_printf("\n");
	int count10 = printf("printf: %d\n", INT_MIN);
	ft_printf("Cantidad de caracteres de printf: %d\n", count10);
        int ft_count10 = ft_printf("ft_printf: %d\n", INT_MIN);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count10);
        ft_printf("\n");
        int count11 = printf("printf: %d\n", INT_MAX);
	ft_printf("Cantidad de caracteres de printf: %d\n", count11);
        int ft_count11 = ft_printf("ft_printf: %d\n", INT_MAX);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count11);
	ft_printf("\n");
	printf("-----------------------------------------------------\n");
	
	printf("Enteros integer:\n");
	int count12 = printf("printf: %i\n", 42);
	ft_printf("Cantidad de caracteres de printf: %d\n", count12);
        int ft_count12 = ft_printf("ft_printf: %i\n", 42);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count12);
        ft_printf("\n");
        int count13 = printf("printf: %i\n", 0);
	ft_printf("Cantidad de caracteres de printf: %d\n", count13);
        int ft_count13 = ft_printf("ft_printf: %i\n", 0);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count13);
        ft_printf("\n");
        int count14 = printf("printf: %i\n", -42);
	ft_printf("Cantidad de caracteres de printf: %d\n", count14);
        int ft_count14 = ft_printf("ft_printf: %i\n", -42);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count14);
	ft_printf("\n");
	int count15 = printf("printf: %i\n", INT_MIN);
	ft_printf("Cantidad de caracteres de printf: %d\n", count15);
        int ft_count15 = ft_printf("ft_printf: %i\n", INT_MIN);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count15);
        ft_printf("\n");
        int count16 = printf("printf: %i\n", INT_MAX);
	ft_printf("Cantidad de caracteres de printf: %d\n", count16);
        int ft_count16 = ft_printf("ft_printf: %i\n", INT_MAX);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count16);
	ft_printf("\n");
	printf("-----------------------------------------------------\n");
	
	printf("Enteros sin signo:\n");
	int count17 = printf("printf: %u\n", 4294967295u);
	ft_printf("Cantidad de caracteres de printf: %d\n", count17);
        int ft_count17 = ft_printf("ft_printf: %u\n", 4294967295u);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count17);
        ft_printf("\n");
        int count18 = printf("printf: %u\n", 0u);
	ft_printf("Cantidad de caracteres de printf: %d\n", count18);
        int ft_count18 = ft_printf("ft_printf: %u\n", 0u);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count18);
	ft_printf("\n");
	printf("-----------------------------------------------------\n");
	
	printf("Hexadecimales:\n");
	int count19 = printf("printf: %x\n", 0xabcdef);
	ft_printf("Cantidad de caracteres de printf: %d\n", count19);
        int ft_count19 = ft_printf("ft_printf: %x\n", 0xabcdef);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count19);
        ft_printf("\n");
        int count20 = printf("printf: %x\n", 0xABCDEF);
	ft_printf("Cantidad de caracteres de printf: %d\n", count20);
        int ft_count20 = ft_printf("ft_printf: %x\n", 0xABCDEF);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count20);
	ft_printf("\n");
	int count21 = printf("printf: %x\n", 0);
	ft_printf("Cantidad de caracteres de printf: %d\n", count21);
        int ft_count21 = ft_printf("ft_printf: %x\n", 0);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count21);
	ft_printf("\n");
	printf("-----------------------------------------------------\n");
	
	printf("Punteros:\n");
	int a = 10;
	int *ptr = &a;
	
	int count22 = printf("printf: %p\n", ptr);
	ft_printf("Cantidad de caracteres de printf: %d\n", count22);
	int ft_count22 = ft_printf("ft_printf: %p\n", ptr);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count22);
	ft_printf("\n");
	int count23 = printf("printf: %p\n", NULL);
	ft_printf("Cantidad de caracteres de printf: %d\n", count23);
        int ft_count23 = ft_printf("ft_printf: %p\n", NULL);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count23);
        ft_printf("\n");
        printf("-----------------------------------------------------\n");
        
        printf("Simbolo de porcentaje:\n");
        int count24 = printf("printf: %%\n");
	ft_printf("Cantidad de caracteres de printf: %d\n", count24);
        int ft_count24 = ft_printf("ft_printf: %%\n");
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count24);
        ft_printf("\n");
        printf("-----------------------------------------------------\n");
        
        printf("Múltiples argumentos:\n");
        int count25 = printf("printf: Número: %d, Cadena: %s, Carácter: %c\n", 42, "Hola", 'A');
	ft_printf("Cantidad de caracteres de printf: %d\n", count25);
        int ft_count25 = ft_printf("ft_printf: Número: %d, Cadena: %s, Carácter: %c\n", 42, "Hola", 'A');
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count25);
        ft_printf("\n");
        printf("-----------------------------------------------------\n");
        
        printf("Conversiones en medio de una frase:\n");
        int count26 = printf("printf: Esto es una prueba con un número: %d y una cadena: %s.", 42, "Hola\n");
	ft_printf("Cantidad de caracteres de printf: %d\n", count26);
        int ft_count26 = ft_printf("ft_printf: Esto es una prueba con un número: %d y una cadena: %s.", 42, "Hola\n");
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count26);
        ft_printf("\n");
        printf("-----------------------------------------------------\n");
        
        printf("Combinaciones de conversiones:\n");
        int count27 = printf("printf: %d %s %c %x %%\n", 42, "Hola", 'A', 0xabcdef);
	ft_printf("Cantidad de caracteres de printf: %d\n", count27);
        int ft_count27 = ft_printf("ft_printf: %d %s %c %x %%\n", 42, "Hola", 'A', 0xabcdef);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count27);
        ft_printf("\n");
        printf("-----------------------------------------------------\n");
        
        printf("Conversiones del mismo tipo seguidas:\n");
        int count28 = printf("printf: %d %d %d\n", 1, 2, 3);
	ft_printf("Cantidad de caracteres de printf: %d\n", count28);
        int ft_count28 = ft_printf("ft_printf: %d %d %d\n", 1, 2, 3);
        printf("Cantidad de caracteres de ft_printf: %d\n", ft_count28);
        ft_printf("\n");
        printf("-----------------------------------------------------\n");
        
        printf("Cadenas muy largas:\n");
  	char *cadena_larga = "Esta es una cadena muy larga que se usa para probar printf con cadenas que superan el límite normal. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas sed diam eget risus varius blandit sit amet non magna.";
  	int count29 = printf("printf: Cadena larga: %s\n", cadena_larga);
	ft_printf("Cantidad de caracteres de printf: %d\n", count29);
	int ft_count29 = ft_printf("ft_printf: Cadena larga: %s\n", cadena_larga);
	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count29);
	ft_printf("\n");
	printf("-----------------------------------------------------\n");
	
  	printf("Números muy grandes o muy pequeños:\n");
  	int numero_grande = INT_MAX;
  	int numero_pequeno = INT_MIN;
  	long long numero_muy_grande = LLONG_MAX;
  	long long numero_muy_pequeno = LLONG_MIN;
  	int count30 = printf("printf: Número grande (int): %d\n", numero_grande);
	ft_printf("Cantidad de caracteres de printf: %d\n", count30);
  	int ft_count30 = ft_printf("ft_printf: Número grande (int): %d\n", numero_grande);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count30);
  	ft_printf("\n");
  	int count31 = printf("printf: Número pequeño (int): %d\n", numero_pequeno);
	ft_printf("Cantidad de caracteres de printf: %d\n", count31);
  	int ft_count31 = ft_printf("ft_printf: Número pequeño (int): %d\n", numero_pequeno);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count31);
  	ft_printf("\n");
  	int count32 = printf("printf: Número muy grande (long long): %lld\n", numero_muy_grande);
	ft_printf("Cantidad de caracteres de printf: %d\n", count32);
  	int ft_count32 = ft_printf("ft_printf: Número muy grande (long long): %lld\n", numero_muy_grande);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count32);
  	ft_printf("\n");
  	int count33 = printf("printf: Número muy pequeño (long long): %lld\n", numero_muy_pequeno);
	ft_printf("Cantidad de caracteres de printf: %d\n", count33);
  	int ft_count33 = ft_printf("ft_printf: Número muy pequeño (long long): %lld\n", numero_muy_pequeno);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count33);
  	ft_printf("\n");
  	int count34 = printf("printf: Número muy grande (double): %e\n", DBL_MAX);
	ft_printf("Cantidad de caracteres de printf: %d\n", count34);
  	int ft_count34 = ft_printf("ft_printf: Número muy grande (double): %e\n", DBL_MAX);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count34);
  	ft_printf("\n");
  	int count35 = printf("printf: Número muy pequeño (double): %e\n", DBL_MIN);
	ft_printf("Cantidad de caracteres de printf: %d\n", count35);
  	int ft_count35 = ft_printf("ft_printf: Número muy pequeño (double): %e\n", DBL_MIN);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count35);
  	ft_printf("\n");
  	printf("-----------------------------------------------------\n");

  	printf("Punteros a diferentes tipos de datos:\n");
  	int entero = 123;
 	char caracter = 'A';
  	float flotante = 3.14f;
  	double doble = 3.141592653589793;
  	int *ptr_entero = &entero;
  	char *ptr_caracter = &caracter;
  	float *ptr_flotante = &flotante;
  	double *ptr_doble = &doble;
  	int count36 = printf("printf: Puntero a entero: %p\n", ptr_entero);
	ft_printf("Cantidad de caracteres de printf: %d\n", count36);
  	int ft_count36 = ft_printf("ft_printf: Puntero a entero: %p\n", ptr_entero);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count36);
  	ft_printf("\n");
  	int count37 = printf("printf: Puntero a caracter: %p\n", ptr_caracter);
	ft_printf("Cantidad de caracteres de printf: %d\n", count37);
  	int ft_count37 = ft_printf("ft_printf: Puntero a caracter: %p\n", ptr_caracter);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count37);
  	ft_printf("\n");
  	int count38 = printf("printf: Puntero a flotante: %p\n", ptr_flotante);
	ft_printf("Cantidad de caracteres de printf: %d\n", count38);
  	int ft_count38 = ft_printf("ft_printf: Puntero a flotante: %p\n", ptr_flotante);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count38);
  	ft_printf("\n");
  	int count39 = printf("printf: Puntero a doble: %p\n", ptr_doble);
	ft_printf("Cantidad de caracteres de printf: %d\n", count39);
  	int ft_count39 = ft_printf("ft_printf: Puntero a doble: %p\n", ptr_doble);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count39);
  	ft_printf("\n");
  	printf("-----------------------------------------------------\n");
  	
  	printf("Combinaciones inusuales de conversiones:\n");
  	int count40 = printf("printf: Entero como hexadecimal: %x\n", entero);
	ft_printf("Cantidad de caracteres de printf: %d\n", count40);
  	int ft_count40 = ft_printf("ft_printf: Entero como hexadecimal: %x\n", entero);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count40);
  	ft_printf("\n");
  	int count41 = printf("printf: Caracter como entero: %d\n", caracter);
	ft_printf("Cantidad de caracteres de printf: %d\n", count41);
  	int ft_count41 = ft_printf("ft_printf: Caracter como entero: %d\n", caracter);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count41);
  	ft_printf("\n");
  	int count42 = printf("printf: Flotante como entero: %d\n", (int)flotante);
	ft_printf("Cantidad de caracteres de printf: %d\n", count42);
  	int ft_count42 = ft_printf("ft_printf: Flotante como entero: %d\n", (int)flotante);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count42);
  	ft_printf("\n");
  	int count43 = printf("printf: Doble como flotante: %f\n", (float)doble);
	ft_printf("Cantidad de caracteres de printf: %d\n", count43);
  	int ft_count43 = ft_printf("ft_printf: Doble como flotante: %f\n", (float)doble);
  	printf("Cantidad de caracteres de ft_printf: %d\n", ft_count43);
  	ft_printf("\n");
  	printf("-----------------------------------------------------\n");
	return (0);
}
