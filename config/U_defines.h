// OS設定を日本語キーボードのまま使用するための変換定義

#define DEFAULT 0
#define NUM 2
#define FUNCTION 3
#define SCROLL 4
#define MOUSE 1

#define JP_KP_DQUOTE       AT                // "
#define JP_KP_AMPERSAND    CARET             // &
#define JP_KP_QUOTE        AMPERSAND         // '
#define JP_KP_EQUAL        UNDER             // =
#define JP_KP_CARET        EQUAL             // ^
#define JP_KP_YEN          0x89              // ¥
#define JP_KP_PLUS         COLON             // +
#define JP_KP_TILDE        PLUS              // ~
#define JP_KP_PIPE         LS(0x89)          // |
#define JP_KP_AT           LEFT_BRACKET      // @
#define JP_KP_COLON        SINGLE_QUOTE      // :
#define JP_KP_ASTERISK     DOUBLE_QUOTES     // *
#define JP_KP_BACKQUOTE    LEFT_BRACE        // `
#define JP_KP_UNDERSCORE   LS(0x87)          // _
#define JP_KP_LBRACKET     RIGHT_BRACKET     // [
#define JP_KP_RBRACKET     BACKSLASH         // ]
#define JP_KP_LPAREN       ASTERISK          // (
#define JP_KP_RPAREN       LEFT_PARENTHESIS  // )
#define JP_KP_LBRACE       RIGHT_BRACE       // {
#define JP_KP_RBRACE       PIPE              // }
#define JP_KP_KANA         LANGUAGE_1        // かな
#define JP_KP_EISU         LANGUAGE_2        // 英数
#define JP_KP_HANZEN       GRAVE             // 半角/全角
