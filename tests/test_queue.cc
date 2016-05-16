#include <gtest/gtest.h>

#include "token.h"

TEST(TokenQueueTestCase, TokenQueueInsertTest) {
    Token t1, t2;
    TokenQueue q;
    t.type = STRING_LITERAL;
    q.insert(t);
    t2 = q.pop();
    ASSERT_EQ(t1.type, t2.type);
}
