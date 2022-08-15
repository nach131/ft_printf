<h1 align="center">
  <img  width="120" alt="42logo"  src="https://user-images.githubusercontent.com/19689770/129336866-169b0dc7-ea41-47d4-b50a-d466508031af.png">
  
	printf
</h1>

 <p align="center">
<img alt="total-views" src="https://img.shields.io/badge/views-368-blue">
<img alt="total-clone" src="https://img.shields.io/badge/clone-166-blue">
<img alt="GitHub repo size" src="https://img.shields.io/github/repo-size/nach131/ft_printf">
<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/nach131/ft_printf">
<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/nach131/ft_printf">
<img alt="license-MIT" src="https://img.shields.io/badge/license-MIT-blue">
</p>

<!-- ![libft](https://github.com/nach131/42Barcelona/blob/main/images/125.png) -->

<h3 align="center">Write protected</h3>

## Synopsis

	int printf(const char *format, ...);

La forma más fácil de mirar la cadena de formato es que imprimirá todo en la cadena tal como está, a menos que un carácter tenga un signo de porcentaje **(%)** delante de él.

Ahí es cuando ocurre la magia: el siguiente argumento en la lista de argumentos de printf() se imprime de la manera descrita por el código de porcentaje. Estos códigos de porcentaje se denominan especificadores de formato.

<div align="center">

%  | type |
---|------|
%c | character				|
%s | string					|
%p | pointer				|
%d | decimal signed integer	|
%i | integer				|
%u | unsigned integer		|
%x | hex integer (lowercase)|
%X | hex integer (uppercase)|
%% | just the %				|
</div>

![](Mapa%20conceptual.png)