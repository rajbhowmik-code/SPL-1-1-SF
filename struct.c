#include<stdio.h>
struct circle{
    double x;
    double y;
    double r;

};

void check_relation(struct circle c1,struct circle c2){
    double dx = c1.x - c2.x;
    double dy = c1.y - c2.y;
    double distance_sq = (dx*dx)+(dy*dy);
    double radius_sq = (c1.r+c2.r)*(c1.r+c2.r);

    if (distance_sq == radius_sq) {
        printf("Touch\n");
    } else if (distance_sq < radius_sq) {
        printf("Intersect\n");
    } else {
        printf("Do Not Touch\n");
    }
}
int main() {
    struct circle c1, c2;

    scanf("%lf %lf %lf", &c1.x, &c1.y, &c1.r);
    scanf("%lf %lf %lf", &c2.x, &c2.y, &c2.r);

    check_relation(c1, c2);

    return 0;
}
