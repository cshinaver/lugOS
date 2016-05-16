#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

#include "token.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct {
    Token *tokens;
} TokenQueue;

TokenQueue token_queue_create();
void token_queue_insert(TokenQueue queue, Token new_token);
Token token_queue_pop(TokenQueue queue);

#ifdef __cplusplus
}
#endif

#endif
