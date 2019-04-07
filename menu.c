#include "menu.h"

int ask_menu(int is_login){
#ifdef DEBUG_MODE
        printf("DEBUG: int ask_menu()\n");
#endif
  char menu[20];
// 파라미터 : 로그인여부 (0 No, 1Yes)
// 리턴값 : 선택한 메뉴번호
// 메뉴번호 : 0 exit, 1 join, 2 login, 3 logout, 4 list
 //int menu;
  while(1){
    if(is_login==0 || is_login==-1){
        printf("> ");
        scanf("%s", menu);

        if(!strcmp("list", menu))
            return LIST_4;
        else if(!strcmp("join", menu))
            return JOIN_1;
        else if(!strcmp("login", menu))
            return LOGIN_2;
        else if(!strcmp("exit", menu))
            return EXIT_0;
        else
            printf("No such command\n");
      }

    else{
        printf("# ");
        scanf("%s", menu);

        if(!strcmp("logout", menu))
            return LOGOUT_3;
        else if(!strcmp("exit", menu))
            return EXIT_0;
        else
            printf("%s\n", menu);
      }
    }
}
