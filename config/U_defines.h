// OS設定を日本語キーボードのまま使用するための変換定義

#define DEFAULT 0
#define MOUSE 1
#define NUM 2
#define FUNCTION 3
#define SCROLL 4

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

#define KEYS_L 13 14 15 16 17 25 26 27 28 29 39 40 41 42 43 44 53 54 55 56 57 58
#define KEYS_R 18 19 20 21 22 32 33 34 35 36 45 46 47 48 49 50 59 60 61 62 63 64
