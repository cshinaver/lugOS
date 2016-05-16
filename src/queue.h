#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

#include "token.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TokenNode {
    Token token;
    struct TokenNode *next;
} TokenNode;

typedef struct {
    TokenNode *head;
    TokenNode *tail;
    int size;
} TokenQueue;

TokenQueue token_queue_create();
void token_queue_insert(TokenQueue *queue, Token new_token);
Token token_queue_pop(TokenQueue *queue);

#ifdef __cplusplus
}
#endif

#endif
