#include <stdio.h>

int main() {
  FILE *fp = fopen("Info.txt", "r+");

  if (fp == NULL) {
    printf("File Open for Write failed");
    return 1;
  }

  fprintf(fp, "Saiful Islam Sojib\n");

  rewind(fp);

  char line[50];
  while (fgets(line, sizeof(line), fp) != NULL) {
    printf("%s", line);
  }

  fclose(fp);

  return 0;
}