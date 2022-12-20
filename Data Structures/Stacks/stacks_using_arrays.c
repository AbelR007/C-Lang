/* STACKS Implementation using Arrays */
// =================================================
// Arrays have a limitation of size being fixed overall in C Programming
// =================================================
#include<stdio.h>
#include<stdlib.h>
// #define size 5

int stack[5];
int top = -1;

void line() {
    printf("\n------------------------------");
}

void push() {
    int k;
    if (top == 5 - 1) {
        line();
        printf("\nStack Overflow");
        line();
    } else {
        line();
        printf("\nEnter Element : ");
        scanf("%d", &k);
        top = top + 1;
        stack[top] = k;
    }
}
void popp() {
    int item;
    if (top == -1){
        line();
        printf("\nStack Underflow");
        line();
    } else {
        item = stack[top];
        top = top - 1;
        printf("\nItem deleted : %d",item);
    }
}
void peek() {
    if (top == -1) {
        printf("\n Empty Stack ");
        line();
    } else {
        printf("\nTop of the Stack : %d", stack[top]);
        line();
    }
}
void display() {
    int i;
    line();
    printf("\nStack :");
    if (top < 0) {
        printf("Nothing to display.");
        line();
        return;
    }
    for (i = top; i >= 0; i--) {
        printf(" %d ", stack[i]);
    }
    line();
}

void pop() {
    line();
}

int main() {
    int x = 1, choice;
    while (2>1) {
        printf("\nStack Menu >>>");
        line();
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n\n0. Exit");
        line();

        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        if (choice == 0) {
            printf("\nExited.");
            break;
        } else if (choice == 1) {
            push();
        } else if (choice == 2) {
            popp();
        } else if (choice == 3) {
            peek();
        } else if (choice == 4) {
            display();
        } else {
            continue;
        }
    }

    return 0;
}
// ================================================
/* Code by Abel Roy */
