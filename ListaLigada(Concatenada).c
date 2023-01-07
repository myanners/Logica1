#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct node { //a lista é gerada pela struct node
           int value; //será um campo (int) de elemento de lista
           struct node *next; //será um campo (ponteiro) de elemento de lista
    };

    struct node node1, node2, node3; //cria os elementos da lista, que neste caso são 3 elementos

    struct node *current = &node1; //cria um ponteiro para percorrer a lista

    node1.value = 10;
    node2.value = 20;
    node3.value = 30;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    //apontamentos da lista
    // *current = &node1
    // node1.next = &node2;
    // node2.next = &node3;
    // node3.next = NULL

    while(current != NULL){
        printf("%i\n", current->value);
        current = current->next;
    }
    getchar();
    return 0;
}
