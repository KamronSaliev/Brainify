#define MAX_DATA_SIZE 65000


typedef enum {
	//User
	SIGNUP,
	LOGIN,
	LOGOUT,
	//Game
	CREATE,
	JOIN,
	MY_GAMES,
	RUN,
	EDIT,
	DELETE,
	FINISH,
	//In game
	ANSWER
} mtd_type_t;

typedef struct
{
	int type;
	char data[MAX_DATA_SIZE];
} method_t;

typedef struct
{
	char username[16];
	char password[128];
} auth_t;

typedef struct
{
	char title[256];
	char option1[32];
	char option2[32];
	char option3[32];
	char option4[32];
	int answer;
} question_t;

typedef struct
{
	question_t questions[128];
	int size;
} create_t;

typedef struct
{
	int pin;
} join_t;