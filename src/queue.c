#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

TokenQueue token_queue_create() {
    TokenQueue new_queue;
    new_queue.head = NULL;
    new_queue.tail = NULL;
    new_queue.size = 0;
    return new_queue;
}

void token_queue_insert(TokenQueue *queue, Token new_token) {
    TokenNode *new_node = malloc(sizeof(TokenNode));
    new_node->token = new_token;
    new_node->next = NULL;
    if (queue->size == 0) {
        queue->head = new_node;
        queue->tail = new_node;
    } else {
        queue->tail->next = new_node;
        queue->tail = new_node;
    }
    queue->size++;
}

Token token_queue_pop(TokenQueue *queue) {
    TokenNode *front = queue->head;
    Token front_token = front->token;
    queue->head = queue->head->next;
    queue->size--;

    free(front);
    return front_token;
}
