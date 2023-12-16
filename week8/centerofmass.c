#include <stdio.h>

typedef struct {
  float x;
  float y;
} Point;

typedef struct {
  float mass;
  Point pos;
} Particle;

Point center_of_mass(Particle* arr, int n) {
  float numx = 0, numy = 0;
  float totalMass = 0;
  for (int i = 0; i < n; i++) {
    float mass = arr[i].mass;
    numx += mass * arr[i].pos.x;
    numy += mass * arr[i].pos.y;
    totalMass += mass;
  }
  return (Point){numx / totalMass, numy / totalMass};
}

int main(){
  int n;
  scanf("%d",&n);
  Particle particles[n];
  for (int i=0; i<n; i++){
      scanf(
          "%f %f %f",
          &particles[i].mass,
          &particles[i].pos.x,
          &particles[i].pos.y
      );
  }
  Point com = center_of_mass(particles,n);
  printf("%.2f %.2f",com.x,com.y);
}
