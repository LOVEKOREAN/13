#include <stdio.h>
#include <stdlib.h>

struct student{
 int ID;
 char name[100];
 float score;       
}; 

int main(int argc, char *argv[])
{
  struct student s1={123,"jiwon",4.3};
  
  s1.ID =2315483;
  s1.name[0]='C';
  s1.score=4.3;
  
  printf("학번:%i\n",s1.ID);
  printf("이름:%s\n",s1.name);
  printf("성적:%f\n",s1.score);
  strcpy(s1.name,"binggy");
  printf("name2:%s\n");
  
  
  system("PAUSE");	
  return 0;
}
 
  
