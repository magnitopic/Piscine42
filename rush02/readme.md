# Rush02

Tres funciones grandes para completar el Rush.

## 1. search_char

-	Leer archivos .dict
-	Acceptar diferentes formatos de archivos .dict
-	Poder recibir parametros int y busccar sus valores en el .dict

##	2. num_split

-	Recibir numero de tres cifras
-	Separar ese numero en decenas centenas y unidades
-	Pasar como paramatro a *search_char* los numero que hay que imprimir en un formato acceptado por la función
-	Tener en cuenta excepciones: numeros de 10-19, no escribir *zero*

## 3. recursive_handling

-	Un contador para saber la longitud del numero introducido
-	Modulo 1000 del numero para sacar valores que pueda recibir *num_split*
-	Dividir por 1000 el numero para quitar valores ya enviados a *num-split*
-	Añadir al string el nombre de millares correspondiente
	-	Ejemlo:
```
Input: 3.092.621	Longitud: 7		7 / 3 = 2	Valor añadido al String: million  thousand
```