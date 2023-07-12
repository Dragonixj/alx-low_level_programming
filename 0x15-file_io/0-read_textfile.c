#include <stdio.h>
#include "main.h"

/*
 * read_texfile: reads a text file and then prints to POSIX stdout
 * @filename: A pointer to name of the file
 * @letters: This is the number of letters the function
 *           should read and print.
 * Return: If filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, int letters)
{
    if (filename == NULL)
        return 0;

    FILE *file = fopen(filename, "r");
    if(file == NULL)
        return 0;

    char buffer[letters + 1];
    ssize_t bytes_read = fread(buffer, 1, letters, file);

    if(bytes_read == 0){
        fclose(file);
        return 0;
    }

    buffer[bytes_read] = '\0';

    ssize_t bytes_written = fwrite(buffer, 1, bytes_read, stdout);

    fclose(file);

    if(bytes_written != bytes_read){
        return 0;
    }
    
    return bytes_read;
}
