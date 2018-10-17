#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * TestThread(void *arg)
{
	int start = (int)arg;
	int end = start + chunk;
        for(int i=start;i<end;i++)
        sum=sum+arr[i];
	return ((void*)sum);
}

int main ()
{       
        int arr[1000];
        for(int i=0;i<1000;i++){
        arr[i]=i;
        }
	int status_t1;
        int status_t2;
        int status_t3;
        int status_t4;
        int status_t5;
        int status_t6;
        int status_t7;
        int status_t8;
        int status_t9;
        int status_t10;
	pthread_t thread_t1;
        pthread_t thread_t2;
        pthread_t thread_t3;
        pthread_t thread_t4;
        pthread_t thread_t5;
        pthread_t thread_t6;
        pthread_t thread_t7;
        pthread_t thread_t8;
        pthread_t thread_t9;
        pthread_t thread_t10;
        int chunk=100;
	pthread_create(&thread_t1,NULL,TestThread,(void*)(0*chunk));
        pthread_create(&thread_t2,NULL,TestThread,(void*)(1*chunk)); 
        pthread_create(&thread_t3,NULL,TestThread,(void*)(2*chunk));
        pthread_create(&thread_t4,NULL,TestThread,(void*)(3*chunk));       
        pthread_create(&thread_t5,NULL,TestThread,(void*)(4*chunk));
        pthread_create(&thread_t6,NULL,TestThread,(void*)(5*chunk));
        pthread_create(&thread_t7,NULL,TestThread,(void*)(6*chunk));
        pthread_create(&thread_t8,NULL,TestThread,(void*)(7*chunk));
        pthread_create(&thread_t9,NULL,TestThread,(void*)(8*chunk));
        pthread_create(&thread_t10,NULL,TestThread,(void*)(9*chunk));

	pthread_join(thread_t1,(void**) & status_t1);
        pthread_join(thread_t2,(void**) & status_t2);
        pthread_join(thread_t3,(void**) & status_t3);
        pthread_join(thread_t4,(void**) & status_t4);
        pthread_join(thread_t5,(void**) & status_t5);
        pthread_join(thread_t6,(void**) & status_t6);
        pthread_join(thread_t7,(void**) & status_t7);
        pthread_join(thread_t8,(void**) & status_t8);
        pthread_join(thread_t9,(void**) & status_t9);
        pthread_join(thread_t10,(void**) & status_t10);

        int sum = status_t1+status_t2+status_t3+status_t4+status_t5+status_t6+status_t7+status_t8+status_t9+status_t10;

	printf("sum is=", sum);

	return 0;
}
