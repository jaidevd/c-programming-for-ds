#include <stdio.h>

struct Book {
  char title[100];
  char author[100];
  int publication_year;
};

void findBooksPublishedInYear(struct Book books[], int N, int year) {
  int bookFound = 0;
  for (int i = 0; i < N; i++) {
    struct Book book = books[i];
    if (book.publication_year == year) {
      printf("%s: %s\n", book.title, book.author);
      bookFound = 1;
    }
  }
  if (!bookFound) printf("NONE\n");
}

int main() {
  int N, year;
  scanf("%d", &N);
  struct Book books[N];
  for (int i = 0; i < N; i++) {
    struct Book book;
    scanf("%s", (char *)&book.title);
    scanf("%s", (char *)&book.author);
    scanf("%d", &book.publication_year);
    books[i] = book;
  }
  scanf("%d", &year);
  findBooksPublishedInYear(books, N, year);
  return 0;
}
