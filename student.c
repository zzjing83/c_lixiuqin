#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE	32


struct st
{
	int id;
	char name[NAMESIZE];
	int math;
	int English;

};

void showMenu()
{
	char *Menu[]={"1 set ","2 changeName","3 showMenu"};
	int i;


//	Menu[0] = "showMenu";
//	Menu[1] = "changeName";
//	Menu[2] = "showMenu"  ;


	for (i =0;i<3;i++)
	{
		printf( "%s\n",Menu[i]);



	};
	printf("please enter the num:\n");

}




void stu_set(struct st *p, const struct st *q)
{
	*p = *q;
}

void stu_show(struct st *p)
{
	printf("%d  %s  %d %d\n", p->id,p->name,p->math,p->English);


}

void stu_changename(struct st *p,const char *newname)
{
	strcpy(p->name,newname);
}

int main()
{
	struct st stu,tmp;
	char newname[NAMESIZE];
	int choice;
	int ret;
	do
	{

	showMenu();
	ret = scanf("%d",&choice);
	if (ret !=1)
		break;

	switch(choice)
	{
		case 1:
			printf("Please enter [id name math English]\n");
			scanf("%d%s%d%d", &tmp.id,tmp.name,&tmp.math,&tmp.English);
			stu_set(&stu,&tmp);
			break;
		case 2:
			stu_show(&stu);
			printf("please change name:\n");
			scanf("%s",newname);
			stu_changename(&stu,newname);
			stu_show(&stu);
			break;

		case 3:
			stu_show(&stu);
//			showMenu();
			break;
		default:
			exit(1);
	}
//	sleep(1);
	}while(1);
//	typeSt()
//	showSt()
	exit(0);
}
