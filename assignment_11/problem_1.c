#include <stdio.h>

int main() {
  FILE *fp = fopen("MyFile.txt", "r");

  if (fp == NULL) {
    printf("MyFile.txt file not found");
    return 1;
  }

  char line[50];
  while (fgets(line, sizeof(line), fp) != NULL) {
    printf("%s", line);
  }

  fclose(fp);

  return 0;
}