#ifndef V8_PARSING_TOKEN_H_
#define V8_PARSING_TOKEN_H_

#include <stdint.h>

namespace v8
{
namespace internal
{
class Token
{
public:
    enum Value
    {
        TEMPLATE_SPAN,
        TEMPLATE_TAIL,
        PERIOD,
        LBRACK,
        QUESTION_PERIOD,
        LPAREN,
        RPAREN,
        RBRACK,
        LBRACE,
        COLON,
        ELLIPSIS,
        CONDITIONAL,
        SEMICOLON,
        RBRACE,
        EOS,
        ARROW,
        INIT,
        ASSIGN,
        ASSIGN_BIT_OR,
        ASSIGN_BIT_XOR,
        ASSIGN_BIT_AND,
        ASSIGN_SHL,
        ASSIGN_SAR,
        ASSIGN_SHR,
        ASSIGN_MUL,
        ASSIGN_DIV,
        ASSIGN_MOD,
        ASSIGN_EXP,
        ASSIGN_ADD,
        ASSIGN_SUB,
        COMMA,
        NULLISH,
        OR,
        AND,
        BIT_OR,
        BIT_XOR,
        BIT_AND,
        SHL,
        SAR,
        SHR,
        MUL,
        DIV,
        MOD,
        EXP,
        ADD,
        SUB,
        NOT,
        BIT_NOT,
        DELETE,
        TYPEOF,
        VOID,
        INC,
        DEC,
        EQ,
        EQ_STRICT,
        NE,
        NE_STRICT,
        LT,
        GT,
        LTE,
        GTE,
        INSTANCEOF,
        IN,
        BREAK,
        CASE,
        CATCH,
        CONTINUE,
        DEBUGGER,
        DEFAULT,
        DO,
        ELSE,
        FINALLY,
        FOR,
        FUNCTION,
        IF,
        NEW,
        RETURN,
        SWITCH,
        THROW,
        TRY,
        VAR,
        WHILE,
        WITH,
        THIS,
        NULL_LITERAL,
        TRUE_LITERAL,
        FALSE_LITERAL,
        NUMBER,
        SMI,
        BIGINT,
        STRING,
        SUPER,
        IDENTIFIER,
        GET,
        SET,
        ASYNC,
        AWAIT,
        YIELD,
        LET,
        STATIC,
        FUTURE_STRICT_RESERVED_WORD,
        ESCAPED_STRICT_RESERVED_WORD,
        ENUM,
        CLASS,
        CONST,
        EXPORT,
        EXTENDS,
        IMPORT,
        PRIVATE_NAME,
        ILLEGAL,
        ESCAPED_KEYWORD,
        WHITESPACE,
        UNINITIALIZED,
        REGEXP_LITERAL,
        NUM_TOKENS
    };

private:
};

} // namespace internal
} // namespace v8

#endif // V8_PARSING_TOKEN_H_