#include <stdio.h>
#include <string.h>
enum {
    EXIT,
    INSERT,
    SEARCH,
    DELETE,
    UPDATE 
};

typedef struct contact{
    char name[30];
    char num[20];
}contact;
contact arr[20] ={
    {"김이박", "010-1234-5678"}
};
int idx = 1;
void InsertContact(){
    if(idx == 20){
        printf("더이상 저장할 공간이 없습니다\n");
        return;
    }
    printf("이름 입력 : ");
    scanf(" %s",arr[idx].name);
    printf("번호 입력 : ");
    scanf(" %s",arr[idx].num);
    idx++;
    printf("회원정보 등록 완료\n");
}


int main(void){
    int no = -1;

    while(no != EXIT){
        puts(" 연락처 프로그램 ");
        puts("1. 연락처 등록");
        puts("2. 연락처 검색");
        puts("3. 연락처 삭제");
        puts("4. 연락처 수정");
        puts("0. 프로그램 종료");
        puts("메뉴 번호 입력 : ");
        scanf("%d",&no);

        switch(no){
            case INSERT:
                InsertContact();
                break;
            case SEARCH:
                SearchContact();
                break;
            case DELETE:
                DeleteContact();
                break;
            case UPDATE:
                UpdateContact();
                break;
        }
    }

    return 0;
}