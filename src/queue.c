#include "queue.h"
#include <stdlib.h>

int DEFAULT_QUEUE_SIZE = 20;

TokenQueue token_queue_create() {
    TokenQueue new_queue;
    new_queue.tokens = malloc(sizeof(TokenQueue) * DEFAULT_QUEUE_SIZE);
    return new_queue;
}

void token_queue_insert(TokenQueue queue, Token new_token) {
    queue.tokens[0] = new_token;
}

Token token_queue_pop(TokenQueue queue) {
    return queue.tokens[0];
}
