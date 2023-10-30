#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL)
        return 0;

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    char buffer[letters];
    ssize_t bytes_read = read(fd, buffer, letters);

    if (bytes_read == -1) {
        close(fd);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    if (bytes_written == -1 || bytes_written != bytes_read) {
        close(fd);
        return 0;
    }

    close(fd);
    return bytes_written;
}

int main(int ac, char **av) {
    ssize_t n;

    if (ac != 2) {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }

    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);

    return 0;
}
