#include "types.h"
#include "stat.h"
#include "user.h"
//#include "stdio.h"

int main(int argc, char *argv[]){
  //char str[20]
  printf(1, "CS350 proj0 print in user space: ");
  //scanf("%s", str);
  //printf("%s\n", str);
  exit();
}

/*
  I was experiencing an error message when trying to compile due to stdio.h

  It said:
  /usr/include/stdio.h:27:10: fatal error: bits/libc-header-start.h: No such file or directory
*/
