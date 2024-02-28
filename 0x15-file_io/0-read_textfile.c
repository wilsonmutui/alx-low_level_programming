#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>  // Include the necessary header for open
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letters to be read
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fileA;
    ssize_t lenb, lena;
    char *buffer;

    if (filename == NULL)  // Fix: Use == for equality comparison
        return (0);
    
    fileA = open(filename, O_RDONLY);
    if (fileA == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fileA);
        return (0);
    }

    lenb = read(fileA, buffer, letters);
    close(fileA);

    if (lenb == -1)  // Fix: Use == for equality comparison
    {
        free(buffer);
        return (0);
    }

    lena = write(STDOUT_FILENO, buffer, lenb);
    free(buffer);

    if (lenb != lena)
        return (0);

    return (lena);
}

