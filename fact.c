#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
int fact(long n, long n2, long n3) {

    kill(getpid(), SIGTRAP);
       printf("stop now %ld \n", n2);
    while (n < 100){
      n++;
      n2++;
    kill(getpid(), SIGTRAP);
    printf("%ld\n", n);
    }

  return 0;
}
int main() {
  //int k = 7;
  int fk = fact(8, 3, 6);
  printf("fact(%d) = %d\n", 7, fk);
  return 0;
}
