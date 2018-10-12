#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
int main(){
       int arr[1000];
	   int sum;
	   int fd1[2];
	   int fd2[2];
	   int fd3[2];
	   int fd4[2];
	   int fd5[2];
	   int fd6[2];
	   int fd7[2];
	   int fd8[2]; 
	   int fd9[2];
	   int fd10[2];
	   srand(time(NULL));
	   for(int 1=0; i<1000; i++)
	   {
		   arr[i]=rand()%100;
	   }
	   if(pipe(fd1)==-1){
		printf("Pipe Failed");
		return 1;
	   }
	   if(pipe(fd2)==-1){
		printf("Pipe Failed");
		return 1;
	   }
	   if(pipe(fd3)==-1){
		printf("Pipe Failed ");
		return 0;
	   }
	   if(pipe(fd4)==-1){
		printf("Pipe Failed 4");
		return ;
	   }
	   if(pipe(fd5)==-1){
		printf("Pipe Failed ");
		return 1;
	    }
	    if(pipe(fd6)==-1){
		printf("Pipe Failed ");
		return 1;
	   }
	   if(pipe(fd7)==-1){
		printf("Pipe Failed");
		return 1;
	   }
	   if(pipe(fd8)==-1){
		printf("Pipe Failed");
		return 1;
	   }
	   if(pipe(fd9)==-1){
		printf("Pipe failed");
		return 1;
	    }
	    if(pipe(fd10)==-1){
		printf("Pipe Failed");
		return 1;
	   }
	   int cpid = fork();
  
       if (cpid ==0 )
	   {
		   for(int i=0; i<100; i++){
			sum=sum+arr[i];
		}
		close(fd1[1]);
		exit(0);
	   }
	   else
	   {
		int cpid1 = fork();
       if (cpid1 ==0 )
	      {
		   for(int i=1100; i<200; i++){
			sum=sum+arr[i];
		  }
		close(fd1[1]);
		exit(0);
		else
		{
			  int cpid2 = fork();
       if (cpid2 ==0 )
	      {
		   for(int i=200; i<300; i++){
			sum=sum+arr[i];
		  }
		close(fd2[1]);
		exit(0);
		}
		else{
			 int cpid3 = fork();
       if (cpid3 ==0 )
	      {
		   for(int i=300; i<400; i++){
			sum=sum+arr[i];
		  }
		close(fd3[1]);
		exit(0);
		}
		else{
			 int cpid4 = fork();
       if (cpid4 ==0 )
	      {
		   for(int i=400; i<500; i++){
			sum=sum+arr[i];
		  }
		close(fd4[1]);
		exit(0);
		}
		else{
		 int cpid5 = fork();
       if (cpid5==0 )
	      {
		   for(int i=500; i<600; i++){
			sum=sum+arr[i];
		  }
		close(fd5[1]);
		exit(0);
	   }
	   else{
		   int cpid6 = fork();
       if (cpid6 ==0 )
	      {
		   for(int i=600; i<700; i++){
			sum=sum+arr[i];
		  }
		close(fd6[1]);
		exit(0); 
	   }
	   else{
		    int cpid7 = fork();
       if (cpid7 ==0 )
	      {
		   for(int i=700; i<800; i++){
			sum=sum+arr[i];
		  }
		close(fd7[1]);
		exit(0);
	   }
	   else{
		    int cpid8 = fork();
       if (cpid8==0 )
	      {
		   for(int i=800; i<900; i++){
			sum=sum+arr[i];
		  }
		close(fd8[1]);
		exit(0);
	   }
	   else{
		    int cpid9 = fork();
       if (cpid9 ==0 )
	      {
		   for(int i=900; i<1000; i++){
			sum=sum+arr[i];
		  }
		close(fd9[1]);
		exit(0);
	   }
		}
}





