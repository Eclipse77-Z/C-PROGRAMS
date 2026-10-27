#include <stdio.h>

int main(void) {
    struct book {
        int pages;
        float price;
    };
    struct student {
        char name[50];
        int age;
        float marks;
    };
    struct employee {
        char id[10];
        int salary;
    };

    struct book b1 = {300, 599.99f};
    printf("%d and %.2f\n", b1.pages, b1.price);

    struct student s1[3] = {
        {"Albert Wesker", 19, 89.9f},
        {"Ada Wong", 20, 90.5f},
        {"Leon S Kennedy", 21, 88.7f}
    };
    for (int i = 0; i < 3; i++) {
        printf("%s, %d, %.2f\n", s1[i].name, s1[i].age, s1[i].marks);
    }

    struct employee e1 = {"D1301", 500000};
    struct employee e2 = {"D1302", 600000};
    if (e1.salary > e2.salary) {
        printf("%s has a higher salary than %s\n", e1.id, e2.id);
    } else if (e1.salary < e2.salary) {
        printf("%s has a higher salary than %s\n", e2.id, e1.id);
    } else {
        printf("%s and %s have the same salary\n", e1.id, e2.id);
   }

    return 0;
}