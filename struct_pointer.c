#include <stdio.h>

struct Person{
    char name[32];
    int age;
};

int main(void){
    struct Person me = {"koichi", 26};
    printf("me.name %8s,   &me      %p\n", me.name, &me);
    printf("me.name %8s,   &me.name %p\n", me.name, &me.name);
    printf("me.age  %8d,   &me.age  %p\n\n", me.age, &me.age);

    struct Person alice;
    struct Person *p = &alice;
    *p = me;
    printf("&me          %8p\n", &me);
    printf("&alice       %8p\n", &alice);
    printf("p            %p\n", p);
    printf("&me.name     %s\n", me.name);
    printf("&me.name     %s\n", me.name);
    printf("&alice       %s\n", alice.name);
    printf("&alice->name <Error>\n");
    printf("p->name      %s\n", p->name);

}