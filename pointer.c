#include <stdio.h>

int main(void){
    char str[] = "hello";
    printf("%s\n", str);
    char c1 = str[0];
    printf("%c\n", c1);

    char* ptr = str;
    printf("%p\n", ptr);

    printf("str     %p\n", str);
    printf("&str[0] %p\n", &str[0]);
    printf("&str    %p\n", &str);

    printf("*ptr        %c, %p\n", *ptr, ptr);
    printf("*(ptr+1)    %c, %p\n\n", *(ptr+1), ptr+1);


    int64_t nums[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%lld, %p\n", *nums, nums);
    printf("%lld, %p\n", *(nums+1), nums+1);
    printf("%lld, %p\n", *(nums+2), nums+2);
    printf("%lld, %p\n", *(nums+3), nums+3);
    printf("%lld, %p\n", *(nums+8), nums+8);
    printf("%lld, %p\n\n", *(nums+9), nums+9);

    int32_t numss[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d, %p\n", *numss, numss);
    printf("%d, %p\n", *(numss+1), numss+1);
    printf("%d, %p\n", *(numss+2), numss+2);
    printf("%d, %p\n", *(numss+3), numss+3);
    printf("%d, %p\n", *(numss+8), numss+8);
    printf("%d, %p\n", *(numss+9), numss+9);

    return 0;
}