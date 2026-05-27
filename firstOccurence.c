#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle) {
  int size1 = strlen(haystack);
  int size2 = strlen(needle);

  int a = 0;
  while (size2 == 1 && a < size1) {
    if (needle[0] == haystack[a]) {
      return a;
    }
    a++;
  }

  if (size2 > size1) {
    return -1;
  }

  for (int i = 0; i <= size1 - size2; i++) {
    int count = 0;
    int k = 0;
    for (int j = i; j < i + size2; j++) {
      if (haystack[j] == needle[k++]) {
        count = count + 1;
      }
    }
    if (count == size2) {
      return i;
    }
  }

  return -1;
}

int main() {

  char h[] = "aaa";
  char n[] = "aaa";

  printf("%d\n", strStr(h, n));
  return 0;
}
