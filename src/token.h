#ifndef TOKEN_H
#define TOKEN_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PRINT,
    STRING_LITERAL,
} token_type;

typedef struct {
    token_type type;
} Token;

#ifdef __cplusplus
}
#endif

#endif
