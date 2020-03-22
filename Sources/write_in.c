#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char write[] = "Hope this works\n";
    char line_2[] = "this is a new line\n";
    char in[1000];

    FILE *read_in;
    FILE *write_out;
    //read_in = fopen ("energy", "r");
    write_out = fopen ("write_test", "w");
    for (int i = 0; write[i] != '\n'; i++) {
        fputc(write[i], write_out);
    }
    fprintf(write_out, "\n");
    fputs("this is a ultra new line\n", write_out);
    fputs("need to learn too\n", write_out);
    fputs("read\n", write_out);

    //fclose(read_in);
    fclose(write_out);
    printf("write to file complete");

    return 0;
}
