#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: file name.
 * @text_content: content of file.
 * Return: status.
 */
int create_file(const char *filename, char *text_content)
{

int o, w, len;
if (filename == NULL)
return (-1);


o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (o < 0)
return (-1);

if (text_content == NULL)
text_content = "";
while (text_content[len])
len++;

w = write(o, text_content, len);
if (w < 0)
return (-1);

close(o);
return (1);
}
