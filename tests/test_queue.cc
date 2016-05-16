#include <gtest/gtest.h>

#include "token.h"
#include "queue.h"

TEST(TokenQueueTestCase, TokenQueueSingleInsertTest) {
    Token t1, t2;
    TokenQueue q = token_queue_create();
    t1.type = STRING_LITERAL;
    token_queue_insert(q, t1);
    t2 = token_queue_pop(q);
    ASSERT_EQ(t1.type, t2.type);
}

TEST(TokenQueueTestCase, TokenQueueMultipleInsertTest) {
    Token t1, t2, t_test;
    TokenQueue q = token_queue_create();
    t1.type = STRING_LITERAL;
    t2.type = PRINT;
    token_queue_insert(q, t1);
    token_queue_insert(q, t2);
    t_test = token_queue_pop(q);
    ASSERT_EQ(t1.type, t_test.type);
    t_test = token_queue_pop(q);
    ASSERT_EQ(t2.type, t_test.type);
}
