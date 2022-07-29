#include <string.h>
#include <sys/mman.h>
#include <elf.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    const char *ls = NULL;
    int fd = -1;
    struct stat stat = {0};

    // open the /bin/ls file with read-only permission
    fd = open("/bin/ls", O_RDONLY);
    if (fd < 0) {
        perror("open");
        goto cleanup;
    }

    // find the size of /bin/ls
    if (fstat(fd, &stat) != 0) {
        perror("stat");
        goto cleanup;
    }

    printf("Everything is OK!\n");

    // put the contents of /bin/ls in memory
    ls = mmap(NULL, stat.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (ls == MAP_FAILED) {
        perror("mmap");
        goto cleanup;
    }

    // close file descriptors and free memory before the program exits
    cleanup:
    if (fd != -1) {
        close(fd);
    }
    if (ls != MAP_FAILED) {
        munmap((void *)ls, stat.st_size);
    }

    return 0;
}
