#include<stdio.h>
#include<stdlib.h>
struct vaccination{
    char Name[50];
    int Age;
    char A_No[20];
    int v_name;
    }
    p[20];
  void main(){
    int ch;
    while(1){
        printf("\n1.Add\n2.Display\n3.Exit\n Enter choice:");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(3);
            break;
        default:
            printf("Invalid Option\n");
            getch();
            break;}}}
int i=0,a;
    void add(){
    printf("Enter Details\n");
    printf("First Name:");
    scanf("%s",&p[i].Name);
    printf("Age:");
    scanf("%d",&p[i].Age);
    printf("Aadhar Number:");
    scanf("%s",p[i].A_No);
    printf("Enter 1 for Covishield, 2 for Covaxin\n");
    scanf("%d",&p[i].v_name);
    while(p[i].v_name!=1&&p[i].v_name!=2)
    {
        scanf("%d",&p[i].v_name);
        if((p[i].v_name!=1)&&(p[i].v_name!=2))
           printf("Invalid,please enter again,Enter 1 for Covishield, 2 for Covaxin");
    }
    printf("Details have been added.Thank you!\n");
    i++;}

    void display(){
        char vaccine[20];
    printf("---------------------------------------------------\n");
    printf("Name\tAge\t Aadhar\t\tVaccination\n");
    printf("---------------------------------------------------\n");
    for(int j=0;j<i;j++){
            if(p[j].v_name==1)
                strcpy(vaccine,"Covishield");
            else
                strcpy(vaccine,"Covaxin");
    printf("%s\t%d\t%s\t%s\n",p[j].Name,p[j].Age,p[j].A_No,vaccine);}
    printf("----------------------------------------------------\n");
    getch();}
