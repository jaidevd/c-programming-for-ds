#include <stdio.h>
#include "math.h"

typedef struct {
  float x;
  float y;
} Point;

typedef struct {
  int n_points;
  Point* points;
} Polygon;


float distance(Point p, Point q) {
  float x = (p.x - q.x);
  float y = (p.y - q.y);
  return sqrt(x * x + y * y);
}

float perimeter(Polygon* polygon) {
  float peri = 0;
  for (int i = 0; i < polygon->n_points - 1; i++) {
    Point p = polygon->points[i];
    Point q = polygon->points[i + 1];
    peri += distance(p, q);
  }
  peri += distance(
    polygon->points[polygon->n_points - 1],
    polygon->points[0]
  );
  return peri;
}

int main() {
  Polygon polygon;
  scanf("%d", &polygon.n_points);
  Point points[polygon.n_points];
  for (int i = 0; i < polygon.n_points; i++) {
    scanf("%f %f", &points[i].x, &points[i].y);
  }
  polygon.points = points;
  printf("%f\n", perimeter(&polygon));
}
