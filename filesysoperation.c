//this is the code of the binary of the project 
//remember this will only work on linux on a x86 system
// if you want to change the code you can do it in the main.c file
// also you can use this file as a backup for the original file

// liscence: GNU GPL v3




#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>   


void nodeFolders(void);
void phpfolders(void);
void pygameFolders(void);
void pybasicFolders(void);
void basicPopFolders(void);
void basicRockFolders(void);
void modelingFolders(void);


int main (int argc, char *argv[] ){
   // Check if the user has entered the correct number of arguments
    if (argc < 3) {
        printf("Wrong usage of command\n");
        printf("./main type subtype specificType\n");
        printf("Please read documentation on the github page\n");
        return 1;
    }

    if (strcmp(argv[1], "dev") == 0) {
        // if the user chooses a development project it will check the subtype else it will print an error message
        if (strcmp(argv[2], "node") == 0) {
            nodeFolders();
        } else if (strcmp(argv[2], "php") == 0) {
            phpfolders();
        } else if (strcmp(argv[2], "pygame") == 0) {
            pygameFolders();
        } else if (strcmp(argv[2], "pybasic") == 0) {
            pybasicFolders();
        } else {
            printf("Please enter a valid subtype\n");
            return 1;
        }
    } else if (strcmp(argv[1], "art") == 0) {
        // if the user chooses an art project it will check the subtype else it will print an error message
        if (strcmp(argv[2], "modeling") == 0) {
            modelingFolders();
        } else if (strcmp(argv[2], "music") == 0) {
            // Handle 'music' case
            if (strcmp(argv[3], "pop") == 0) {
                basicPopFolders();
            } else if (strcmp(argv[3], "rock") == 0) {
                basicRockFolders();
            } else {
                     printf("Please enter a valid subtype\n");
                return 1;
            }

            
        } else {
            printf("Please enter a valid subtype\n");
            return 1;
        }
    }

    return 0;
}
 
void nodeFolders(void){
    mkdir("node_project", 0777);
    chdir("node_project");
    mkdir("src", 0777);
    mkdir("tests", 0777);
    mkdir("private", 0777);
    mkdir("public", 0777);
    chdir("src");
    chdir("..");
    FILE *html;
    html = fopen("index.html", "w");
    fclose(html);
    FILE *css;
    css = fopen("style.css", "w");
    fclose(css);
    FILE *js;
    js = fopen("script.js", "w");
    fclose(js);
    chdir("..");
}

void phpfolders(void){
    mkdir("php_project", 0777);
    chdir("php_project");
    mkdir("src", 0777);
    mkdir("tests", 0777);
    mkdir("private", 0777);
    mkdir("public", 0777);
    FILE *index;
    index = fopen("index.php", "w");
    fclose(index);
    FILE *css;
    css = fopen("style.css", "w");
    fclose(css);
    FILE *js;
    js = fopen("script.js", "w");
    fclose(js);
    chdir("..");
    chdir("..");
}

void pygameFolders(void){
    mkdir("pygame project", 0777);
    chdir("pygame project");
    mkdir("src", 0777);
    chdir("src");
    mkdir("assets", 0777);
    mkdir("scripts", 0777);
    chdir("..");
    chdir("..");
    FILE *main;
    main = fopen("pygame project/main.py", "w");
    fclose(main);

}

void pybasicFolders(void){
    mkdir("pybasic project", 0777);
    chdir("pybasic project");
    mkdir("src", 0777);
    chdir("..");
    chdir("..");
    FILE *main;
    main = fopen("pybasic project/main.py", "w");
    fclose(main);
}

void basicPopFolders(void){
    mkdir("pop project", 0777);
    chdir("pop project");
    mkdir("src", 0777);
    chdir("src");
    mkdir("midi", 0777);
    mkdir("syth", 0777);
    mkdir("samples", 0777);
    mkdir("vocals", 0777);
    mkdir("drums", 0777);
    mkdir("bass", 0777);
    mkdir("chorus", 0777);
    chdir("..");
    chdir("..");

}

void basicRockFolders(void){
    mkdir("rock project", 0777);
    chdir("rock project");
    mkdir("src", 0777);
    chdir("src");
    mkdir("midi", 0777);
    mkdir("syth", 0777);
    mkdir("samples", 0777);
    mkdir("guitar l", 0777);
    mkdir("guitar r", 0777);
    mkdir("vocals", 0777);
    mkdir("drums", 0777);
    mkdir("bass", 0777);
    mkdir("chorus", 0777);
    chdir("..");
    chdir("..");
}

void modelingFolders(void){
    mkdir("modeling project", 0777);
    chdir("modeling project");
    mkdir("src", 0777);
    chdir("src");
    mkdir("assets", 0777);
    mkdir("textures", 0777);
    chdir("..");
    chdir("..");

}
