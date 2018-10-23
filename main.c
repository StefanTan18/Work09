#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main() {

  int fd = open("test.txt", O_CREAT | O_RDWR);

  write(fd, "hello world", 7);   

  char * c;
  read(fd, c, 5);
  printf("%s",c);

  return close(fd);

}
