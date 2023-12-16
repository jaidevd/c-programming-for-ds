#include <stdio.h>

struct Data {
  int num1;
  int num2;
  int op;
};

typedef enum {
  ADD = 1, SUBTRACT, MULTIPLY, DIVIDE
} OP;


void calculator(struct Data* data) {
  switch(data->op) {
    case ADD:
      printf("%d\n", data->num1 + data->num2);
      return;
    case SUBTRACT:
      printf("%d\n", data->num1 - data->num2);
      return;
    case MULTIPLY:
      printf("%d\n", data->num1 * data->num2);
      return;
    case DIVIDE:
      if (data->num2) {
        printf("%.2f\n", (float)data->num1 / data->num2);
      } else { printf("Zero Division Error");}
  }
}


int main() {
  struct Data data;
  scanf("%d", &data.num1);
  scanf("%d", &data.num2);
  scanf("%d", &data.op);
  calculator(&data);
  return 0;
}
