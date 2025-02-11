#include <stdio.h>

struct Student{
    char name[50];
    int roll_num;
    float marks;
};

int main(){
    struct Student s1;
    scanf("%s", s1.name);
    scanf("%d", &s1.roll_num);
    scanf("%f", &s1.marks);

    printf("name: %s\n", s1.name);
    printf("roll number: %d\n", s1.roll_num);
    printf("marks: %.2f\n", s1.marks);
    return 0;
}