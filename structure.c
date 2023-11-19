#include<stdio.h>
int i;
struct Person
{
    char name[50];
    int age;
    float salary;
};
void display(struct Person p)
{
    printf("name: %s\n",p.name);
    printf("age: %d\n",p.age);
    printf("salary: %f\n",p.salary);
}
int main()
{
  struct Person person[3];

  for(i=0;i<3;i++)
  {
      printf("enter the info of person %d\n",i+1);
      printf("enter the name:\n");
      fflush(stdin);
      gets(person[i].name);
      printf("enter the age:\n");
      scanf("%d",&person[i].age);
      printf("enter the salary:\n");
      scanf("%f",&person[i].salary);
      display(person[i]);

      getch();

}
}
