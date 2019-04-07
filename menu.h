#ifndef STDIOH
  #include <stdio.h>
  #define STDIOH
#endif
#ifndef STRINGH
  #include <string.h>
  #define STRINGH
#endif
#ifndef STDLIBH
  #include <stdlib.h>
  #define STDLIBH
#endif

#define EXIT_0 0
#define JOIN_1 1
#define LOGIN_2 2
#define LOGOUT_3 3
#define LIST_4 4


int ask_menu(int is_login);
