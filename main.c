#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int main() {

  int fd = open("test.txt", O_CREAT | O_RDWR);


  return close(fd);

}
