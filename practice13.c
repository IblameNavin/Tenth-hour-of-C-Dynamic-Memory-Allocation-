//WTAP to store and display the information of the students using structure:
#include<stdio.h>
struct stu{
    char name[50];
    int rollno;
    float cgpa;
    char address[50];

};
int main(){
    struct stu s1={"Navin",34,56.6,"Pipaladi"};
    printf("Name is %s\n",s1.name);
    printf("Roll no is %d\n",s1.rollno);
    printf("GPA is %f\n",s1.cgpa);
    printf("Address is %s\n",s1.address);

    struct stu s2={"Ram",53,45.6,"Jhalari"};
    printf("Name is %s\n",s2.name);
    printf("Rol no is %d\n",s2.rollno);
    printf("GPA is %f\n",s2.cgpa);
    printf("Address is %s\n",s2.address);
   

   struct stu s3={"Harish",33,56.78,"Ashaina"};
    printf("Name is %s\n",s3.name);
    printf("Roll no is %d\n",s3.rollno);
    printf("GPA is %f\n",s3.cgpa);
    printf("Address is %s\n",s3.address);

    struct stu s4={"Nabin",12,78.6,"Dhangadi"};
     printf("Name is %s\n",s4.name);
    printf("Roll no is %d\n",s4.rollno);
    printf("GPA is %f\n",s4.cgpa);
    printf("Address is %s\n",s4.address);
   

   return 0;

}