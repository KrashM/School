#include<iostream>
#include<cmath>

using namespace std;

struct Point{

    int x, y;

};

double line(Point A, Point B){

    double distance = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y) * (A.y - B.y));
    return distance;

}

int main(){

    int n;
    cin >> n;

    Point arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i].x >> arr[i].y;

    double area = 0, perimeter = 0;

    for(int i = 0; i < n - 1; i++){

        area += arr[i].x * arr[i + 1].y - arr[i].y * arr[i + 1].x;
        perimeter += line(arr[i], arr[i + 1]);

    }

    area += arr[n - 1].x * arr[0].y - arr[n - 1].y * arr[0].x;
    perimeter += line(arr[n - 1], arr[0]);
    area /= 2;

    cout << area << ' ' << perimeter << '\n';

}

/*
4
0 0
3 0
3 10
0 6
*/
