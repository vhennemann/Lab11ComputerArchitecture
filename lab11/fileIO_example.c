
#include <stdio.h>

/* copy file byte by byte */

int main () {

    FILE *src_file, *des_file, *myFptr ;

    char my_str[80];
    float my_float;
    int byte_read ;

    myFptr = fopen("my_file.txt","wa");

    if (myFptr == NULL) {
        return 1;
    }

    src_file = fopen ("file1.txt", "r");

    if (src_file == NULL) {
        fclose (myFptr);
        return 1;
    }

    des_file =fopen ("file2.txt", "w");

    if (des_file == NULL) {
        fclose (myFptr);
        fclose (src_file);
        return 1;
    }

    do {
        byte_read = fgetc (src_file);

        if (byte_read == EOF){
            break;
        }

        fputc (byte_read, des_file);

    }  while (1) ;

    fprintf(des_file, " %s %f", "PI", 3.14);
    fprintf(myFptr, " %s %f", "PI", 3.14);

    fclose (src_file);
    fclose (des_file);
    fclose(myFptr);

    myFptr = fopen("my_file.txt","r");
    fscanf(myFptr, "%s", my_str);
    fscanf(myFptr, "%f", &my_float);
    printf(" %s, %f \n", my_str,my_float);

    fclose(myFptr);
    return 0 ;
}
