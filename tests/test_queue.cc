#include <gtest/gtest.h>

#include "token.h"
#include "queue.h"

TEST(TokenQueueTestCase, TokenQueueInsertTest) {
    Token t1, t2;
    TokenQueue q = token_queue_create();
    t1.type = STRING_LITERAL;
    token_queue_insert(q, t1);
    t2 = token_queue_pop(q);
    ASSERT_EQ(t1.type, t2.type);
}
