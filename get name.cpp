#include<stdio.h> 
#include<string.h> 
 main()  
{
	char stored_name[]="Joel";
	char user_name[10];
	printf("enter a name\n");
	scanf("%s", &user_name);
	
	if(strcmp(user_name, stored_name )==0){
		printf("it is Joel");
	}else{
		printf("it is not Joel");
	}
	
	
	return 0;
      
      
}