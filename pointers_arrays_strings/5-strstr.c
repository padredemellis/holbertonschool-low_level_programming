char *_strstr(char *haystack, char *needle) {
    // Caso especial: needle vacío
    if (*needle == '\0') {
        return (haystack);
    }

    // Bucle principal para recorrer haystack
    while (*haystack != '\0') {
        // Inicializar punteros temporales para comparar
        char *h = haystack;
        char *n = needle;

        // Bucle de comparación
        while (*h == *n && *n != '\0') {
            h++;
            n++;
        }

        // Si se llegó al final de needle, retorna haystack
        if (*n == '\0') {
            return (haystack);
        }

        // Avanzar en haystack
        haystack++;
    }

    return (NULL); // No se encontró
}
