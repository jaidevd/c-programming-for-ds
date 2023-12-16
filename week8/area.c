#include <stdio.h>
typedef enum
{
    SQUARE = 0,
    RECTANGLE = 1,
    CIRCLE = 2,
    TRIANGLE = 3
} ShapeId;

typedef  union
{
    ShapeId id;

    struct {
        ShapeId id;
        float side;
    } square;

    struct {
        ShapeId id;
        float length;
        float breadth;
    } rectangle;

    // Write solution
    // instruction: define structs for circle and triangle also.
    // Hint: refer the previous styles and read_shape function for attributes
    struct {
      ShapeId id;
      float radius;
    } circle;

    struct {
      ShapeId id;
      float base;
      float height;
    } triangle;



    //end of the solution
} Shape;

float compute_area(Shape* shape)
{
    // Write solution
    // Hint: use switch...case like the one used in the read_shapes.
    float area;
    switch(shape->id){
      case SQUARE:
        area = shape->square.side * shape->square.side;
        printf("%f\n", area);
        return area;
      case RECTANGLE:
        area = shape->rectangle.length * shape->rectangle.breadth;
        printf("%f\n", area);
        return area;
      case CIRCLE:
        area = 3.14 * shape->circle.radius * shape->circle.radius;
        printf("%f\n", area);
        return area;
      case TRIANGLE:
        area = 0.5 * shape->triangle.base * shape->triangle.height;
        printf("%f\n", area);
        return area;
    }


    // end of solution
}
float combined_area(Shape shapes[],int n)
{
    // Write solution
    float area = 0;
    for (int i = 0; i < n; i++) {
      area += compute_area(&shapes[i]);
    }
    return area;


    // end of solution
}
void read_shape(Shape *shape){
    scanf( "%u", &shape->id);
    switch(shape->id){
        case SQUARE:
            scanf( "%f", &shape->square.side);
            return;
        case RECTANGLE:
            scanf("%f %f", &shape->rectangle.length, &shape->rectangle.breadth);
            return;
        case CIRCLE:
            scanf("%f", &shape->circle.radius);
            return;
        case TRIANGLE:
            scanf("%f %f", &shape->triangle.base, &shape->triangle.height);
    }
}
void read_shapes(Shape shapes[], int n) {
    for (int i=0;i<n;i++){
        read_shape(shapes+i);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    Shape shapes[n];
    read_shapes(shapes,n);
    printf("%.2f", combined_area(shapes, n));
    return 0;
}
