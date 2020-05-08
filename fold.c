#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
  int fd0, columnwidth, counter=0;
  char buffer[1000];

  if (argc == 2){
    if ((fd0 = open(argv[1], O_RDWR)) < 0){
    printf(1, "Tidak bisa membuka file\n");
    exit();
  }
  columnwidth = 80; //defaultnya fold column 80
}
  else if(argc == 3){
    if ((fd0 = open(argv[2], O_RDWR)) < 0){
    printf(1, "Tidak bisa membuka file\n");
    exit();
  }
  columnwidth = atoi(argv[1]+2);
}
  else{
  printf(1, "Argumen salah\n");
  exit();
}
read(fd0, buffer, sizeof(buffer));
for(int i=0; i<strlen(buffer);i++){
  if(counter == columnwidth){
    printf(1, "\n");
    counter = 0;
  }
  printf(1,"%c",buffer[i]);
  counter++;
}


close(fd0);
exit();
}
