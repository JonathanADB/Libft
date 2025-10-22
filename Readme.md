## Este para los que comprueban caracteres.

int main() {
    char letra = 'a'; 

    if (ft_isalpha(letra))
        printf("'%c' es una letra.\n", letra);
    else
        printf("'%c' NO es una letra .\n", letra);

    return 0;
} 


## ft_strlen
int main() {
    char *texto = "Hola mundo";  

    printf("La longitud de \"%s\" es: %d\n", texto, ft_strlen(texto));

    return 0;
}

## ft_upper y lower
int main() {
    char letra = 'M';
    printf("Minúscula de '%c' es '%c'\n", letra, ft_tolower(letra));
    return 0;
}


## 📊 Tabla de formatos de `printf` en C

| Formato | Tipo de dato         | Ejemplo de uso                  | Resultado en pantalla         |
|---------|----------------------|----------------------------------|-------------------------------|
| `%d`    | Entero decimal       | `printf("%d", 42);`              | `42`                          |
| `%i`    | Entero decimal       | `printf("%i", -7);`              | `-7`                          |
| `%u`    | Entero sin signo     | `printf("%u", 3000000000);`      | `3000000000`                  |
| `%f`    | Número decimal (float/double) | `printf("%.2f", 3.14159);`     | `3.14`                        |
| `%c`    | Carácter             | `printf("%c", 'A');`             | `A`                           |
| `%s`    | Cadena de texto      | `printf("%s", "Hola");`          | `Hola`                        |
| `%x`    | Entero hexadecimal   | `printf("%x", 255);`             | `ff`                          |
| `%X`    | Hexadecimal (mayúsculas) | `printf("%X", 255);`          | `FF`                          |
| `%o`    | Entero octal         | `printf("%o", 10);`              | `12`                          |
| `%%`    | Porcentaje literal   | `printf("%%");`                  | `%`                           |
| `%p`    | Dirección de memoria | `printf("%p", ptr);`             | `0x7ffee3b4` (ejemplo)        |


