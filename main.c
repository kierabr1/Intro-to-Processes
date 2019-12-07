#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

#define   MAX_COUNT  200
#define   BUF_SIZE   100

void  main(void)
{
     pid_t  pid;
     int    i;
  //holder to put strings in
     char   buf[BUF_SIZE];
     char whatami[15];

     pid = fork();
     
      }
     pid = getpid();
     for (i = 1; i <= MAX_COUNT; i++) {
       if(pid>0){
         whatami = "parent";
     
       //lowlevel syscall equivalent to printf
          sprintf(buf, "This line is from the parent pid %d, value = %d\n", getpid(), i);
       }else if {
          sprintf(buf, "This line is from the child pid %d, value = %d\n", getpid(), i);
          write(1, buf, strlen(buf));
     } 
}