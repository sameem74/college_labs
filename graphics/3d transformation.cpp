#include <stdio.h>
#include <math.h>

// Define a 3D point structure
typedef struct {
    float x, y, z;
} Point3D;

// Function to perform translation
void translate(Point3D *point, float dx, float dy, float dz) {
    point->x += dx;
    point->y += dy;
    point->z += dz;
}

// Function to perform rotation around the X-axis
void rotateX(Point3D *point, float angle) {
    float cosA = cos(angle);
    float sinA = sin(angle);
    float newY = cosA * point->y - sinA * point->z;
    float newZ = sinA * point->y + cosA * point->z;
    point->y = newY;
    point->z = newZ;
}

// Function to perform rotation around the Y-axis
void rotateY(Point3D *point, float angle) {
    float cosA = cos(angle);
    float sinA = sin(angle);
    float newX = cosA * point->x + sinA * point->z;
    float newZ = -sinA * point->x + cosA * point->z;
    point->x = newX;
    point->z = newZ;
}

// Function to perform rotation around the Z-axis
void rotateZ(Point3D *point, float angle) {
    float cosA = cos(angle);
    float sinA = sin(angle);
    float newX = cosA * point->x - sinA * point->y;
    float newY = sinA * point->x + cosA * point->y;
    point->x = newX;
    point->y = newY;
}

// Function to perform scaling
void scale(Point3D *point, float sx, float sy, float sz) {
    point->x *= sx;
    point->y *= sy;
    point->z *= sz;
}

int main() {
    // Example usage
    Point3D myPoint = {1.0, 2.0, 3.0};
    printf("program written by Ritvik Dwivedi");
    printf("Original Point: (%.2f, %.2f, %.2f)\n", myPoint.x, myPoint.y, myPoint.z);

    translate(&myPoint, 2.0, 3.0, 1.0);
    printf("After Translation: (%.2f, %.2f, %.2f)\n", myPoint.x, myPoint.y, myPoint.z);

    rotateX(&myPoint, M_PI / 2);  // Rotate 90 degrees around X-axis
    printf("After Rotation around X-axis: (%.2f, %.2f, %.2f)\n", myPoint.x, myPoint.y, myPoint.z);

    rotateY(&myPoint, M_PI / 4);  // Rotate 45 degrees around Y-axis
    printf("After Rotation around Y-axis: (%.2f, %.2f, %.2f)\n", myPoint.x, myPoint.y, myPoint.z);

    scale(&myPoint, 2.0, 0.5, 1.5);
    printf("After Scaling: (%.2f, %.2f, %.2f)\n", myPoint.x, myPoint.y, myPoint.z);

    return 0;
}


