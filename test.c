#include <stdio.h>
#include <stdlib.h>

// Définition de la structure s_list
typedef struct s_list
{
    void *content;
    struct s_list *next;
} s_list;

// Fonction pour créer un nouvel élément de la liste
s_list *create_node(void *data) {
    s_list *new_node = (s_list *)malloc(sizeof(s_list));
    if (new_node == NULL) {
        perror("Erreur d'allocation de mémoire");
        exit(EXIT_FAILURE);
    }
    new_node->content = data;
    new_node->next = NULL;
    return new_node;
}

// Fonction pour afficher les éléments de la liste
void print_list(s_list *head) {
    while (head != NULL) {
        printf("%d -> ", *(int *)head->content);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Création de la liste avec quelques entiers
    int num1 = 10, num2 = 20, num3 = 30;

    s_list *head = create_node(&num1);
    head->next = create_node(&num2);
    head->next->next = create_node(&num3);

    // Affichage de la liste
    printf("Liste chaînée : ");
    print_list(head);

    // Libération de la mémoire allouée
    while (head != NULL) {
        s_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
