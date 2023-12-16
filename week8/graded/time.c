#include <stdio.h>

struct Time {
  int days;
  int hours;
  int minutes;
  int seconds;
};


void Convert(struct Time* time, int seconds) {
  int sec_per_day = 60 * 60 * 24;

  time->days = seconds / sec_per_day;
  seconds -= (time->days * sec_per_day);

  time->hours = seconds / 3600;
  seconds -= (time->hours * 3600);

  time->minutes = seconds / 60;
  seconds -= time->minutes * 60;

  time->seconds = seconds;

}

int main() {
  int seconds;
  struct Time time;
  scanf("%d", &seconds);
  Convert(&time, seconds);
  printf("%d\n", time.days);
  printf("%d\n", time.hours);
  printf("%d\n", time.minutes);
  printf("%d\n", time.seconds);
}
