 #include <stdio.h>
 #include <unistd.h>

#include <pthread.h>  //包线程要包含

void *mythread1(void)

{

	while(1)
	{
      printf("this is the 1st pthread,created by zieckey.\n");
      sleep(1);
	}

} 

void *mythread2(void)

{

	while(1)
	{

		printf("this is the 2st pthread,created by zieckey.\n");
		sleep(1);
	}

}

int main()

{

    int ret=0;

    pthread_t id1,id2;

	 ret=pthread_create(&id1,NULL,(void*)mythread1,NULL);

    if(ret)

    {

        printf("create pthread error!\n");

         return -1; 

    }

   ret=pthread_create(&id2,NULL,(void*)mythread2,NULL);

    if(ret)

    {

        printf("create pthread error!\n");

         return  -1; 

    }

   pthread_join(id1,NULL);

   pthread_join(id2,NULL);

    return 0;

} 
