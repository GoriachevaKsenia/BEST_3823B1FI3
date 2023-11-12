#include <math.h>

char robot_move(int xs[], int ys[], int num_points, int area_radius, int xt, int yt){
    for(int i = 0; i < num_points; i++){
        for(int j = 0; j < num_points; j++){
            if(i != j){
                double k = (ys[i] - ys[j]) / (xs[i] - xs[j]);
                double b = ys[i] - k * xs[i];
                double d = pow((k * b - xt -yt * k), 2) - (k * k + 1) *(xt * xt + b * b - 2 * yt * b + yt * yt - area_radius * area_radius);
                if (d >= 0)
                return 1;
            }
        }
        return 0;
    }
}