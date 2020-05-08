#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
  int fd0;
  char buffer[1000];
  if (argc == 2){
    if ((fd0 = open(argv[1], O_RDWR)) < 0){
    printf(1, "Tidak bisa membuka file\n");
    exit();
  }
  read(fd0, buffer, sizeof(buffer));
  close(fd0);
}else{
  read(0, buffer,sizeof(buffer));
}
write(1, buffer, strlen(buffer));
exit();
}
