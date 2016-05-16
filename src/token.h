typedef enum token_type {
    PRINT,
    STRING_LITERAL,
} token_type;

typedef struct {
    enum token_type type;
} Token;
