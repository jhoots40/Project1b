// Jacob Houts
// The ansers are different as expected. We call fork which returns a PID
// that is not zero if it is successful. After calling fork we have added
// one more active process which is why the process count increases by 1.

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  printf("Process count: %d\n", pcount());
  if(fork() > 0)
  {
    sleep(5);  // Let child exit before parent.
    printf("Process count: %d\n", pcount());
  }
  exit(0);
}
