#include<stdio.h>
#define size 5

void Insert(int s[], int *top, int item) {
    if (*top == size - 1) {
        printf("Queue is Full");
        return;
    }
    s[++(*top)] = item;
    return;
}

void Delete(int s[], int *top) {
    int s1[size];
    int top1 = -1;

    if (*top == -1) {
        printf("Queue is empty");
        return;
    }
    while (*top >= 0) {
        s1[++top1] = s[(*top)--];
    }
    printf("The element to be deleted is %d\n", s1[top1--]);

    while (top1 >= 0) {
        s[++(*top)] = s1[top1--];
    }
    return;
}

int main() {
    int s[5], top = -1;

    Insert(s, &top, 10);
    Insert(s, &top, 20);
    Insert(s, &top, 30);
    Insert(s, &top, 40);
    Delete(s, &top);
    Delete(s, &top);
    Delete(s, &top);

    return 0;
}
