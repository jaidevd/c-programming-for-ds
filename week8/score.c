#include <stdio.h>
#include <math.h>
typedef enum
{
  THEORY = 1, PROGRAMMING, PROJECT
} CourseType;

typedef union
{
  struct {
      int quiz1;
      int quiz2;
      int assignments;
      int final_exam;
  } theory;
  struct {
    int quiz1;
    int oppe1;
    int oppe2;
    int assignments;
    int programming_assignments;
  } programming;
  struct {
    int viva1;
    int viva2;
    int final_project;
  } project;
} Grading;

typedef struct
{
    char course_id[10];
    CourseType course_type;
    Grading grading;
    int score;
} Course;

void compute_score(Course* course)
{
  float score;
  Grading* c = &course->grading;
  switch(course->course_type) {
    case THEORY:
      score = (0.15 * c->theory.quiz1) + (0.15 * c->theory.quiz2) + (0.1 * c->theory.assignments) + (0.6 * c->theory.final_exam);
      break;
    case PROGRAMMING:
      score = (0.1 * c->programming.quiz1) + (0.3 * c->programming.oppe1) + (0.3 * c->programming.oppe2) + (0.1 * c->programming.assignments) + (0.2 * c->programming.programming_assignments);
      break;
    case PROJECT:
      score = (0.25 * c->project.viva1) + (0.25 * c->project.viva2) + (0.5 * c->project.final_project);
  }
  course->score = (int) round(score);
}

void read_course(Course *c){
    scanf( "%s", c->course_id);
    scanf("%u", &c->course_type);
    Grading* g = &c->grading;
    switch(c->course_type){
        case THEORY:
            scanf(
                "%d %d %d %d",
                &g->theory.quiz1,
                &g->theory.quiz2,
                &g->theory.assignments,
                &g->theory.final_exam
            );
            break;
        case PROGRAMMING:
            scanf(
                "%d %d %d %d %d",
                &g->programming.quiz1,
                &g->programming.oppe1,
                &g->programming.oppe2,
                &g->programming.assignments,
                &g->programming.programming_assignments
            );
            break;
        case PROJECT:
            scanf(
                "%d %d %d",
                &g->project.viva1,
                &g->project.viva2,
                &g->project.final_project
            );
    }
}

int main()
{
    Course course;
    read_course(&course);
    compute_score(&course);
    printf("%s - %d", course.course_id, course.score);
    return 0;
}
