/* 
 * File:   Trajectory.h
 * Author: jwloughb
 *
 * Created on Dec 4, 2017, 4:53 PM
 */

#ifndef TRAJECTORY_H
#define TRAJECTORY_H

#include <stdint.h>
#include <string.h>

typedef struct motion {
    int16_t v;
    int16_t vDot;
    int16_t w;
    int16_t wDot;
} MotionState;

typedef struct traj {
    uint16_t length;
    MotionState motionState[30];
} Trajectory;


Trajectory pivot135Degrees = {
	20,
	{{0, 0, 0, 0},
	{0, 0, 729, 26511},
	{0, 0, 2386, 26511},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2983, 0},
	{0, 0, 2943, -5302},
	{0, 0, 1949, -31814},
	{0, 0, 371, -21209},
	{0, 0, 0, 0}}
};

Trajectory pivot90Degrees = {
	15,
	{{0, 0, 0, 0},
	{0, 0, 724, 26345},
	{0, 0, 2371, 26345},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2832, -10538},
	{0, 0, 1581, -36882},
	{0, 0, 198, -15807},
	{0, 0, 0, 0}}
};

Trajectory pivot45Degrees = {
	10,
	{{0, 0, 0, 0},
	{0, 0, 724, 26345},
	{0, 0, 2371, 26345},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2964, 0},
	{0, 0, 2595, -18441},
	{0, 0, 1027, -34248},
	{0, 0, 40, -7903},
	{0, 0, 0, 0}}
};

Trajectory pivot5Degrees = {
	5,
	{{0, 0, 0, 0},
	{0, 0, 634, 19153},
	{0, 0, 934, -4788},
	{0, 0, 180, -14365},
	{0, 0, 0, 0}}
};



Trajectory step10Inches = {
	20,
	{{0, 0, 0, 0},
	{1214, 44158, 0, 0},
	{4637, 88316, 0, 0},
	{9825, 97147, 0, 0},
	{13468, 52989, 0, 0},
	{14903, 8832, 0, 0},
	{14925, 0, 0, 0},
	{14925, 0, 0, 0},
	{14925, 0, 0, 0},
	{14925, 0, 0, 0},
	{14925, 0, 0, 0},
	{14925, 0, 0, 0},
	{14925, 0, 0, 0},
	{14925, 0, 0, 0},
	{14462, -26495, 0, 0},
	{11923, -70653, 0, 0},
	{7176, -114811, 0, 0},
	{2649, -70653, 0, 0},
	{331, -26495, 0, 0},
	{0, 0, 0, 0}}
};

Trajectory step8Inches = {
	18,
	{{0, 0, 0, 0},
	{1205, 43831, 0, 0},
	{4602, 87662, 0, 0},
	{9752, 96428, 0, 0},
	{13368, 52597, 0, 0},
	{14793, 8766, 0, 0},
	{14815, 0, 0, 0},
	{14815, 0, 0, 0},
	{14815, 0, 0, 0},
	{14815, 0, 0, 0},
	{14815, 0, 0, 0},
	{14749, -8766, 0, 0},
	{13105, -52597, 0, 0},
	{9270, -96428, 0, 0},
	{4164, -87662, 0, 0},
	{986, -43831, 0, 0},
	{0, 0, 0, 0}}
};

Trajectory step5Inches = {
	14,
	{{0, 0, 0, 0},
	{1196, 43509, 0, 0},
	{4568, 87017, 0, 0},
	{9681, 95719, 0, 0},
	{13270, 52210, 0, 0},
	{14684, 8702, 0, 0},
	{14706, 0, 0, 0},
	{14641, -8702, 0, 0},
	{13009, -52210, 0, 0},
	{9202, -95719, 0, 0},
	{4133, -87017, 0, 0},
	{979, -43509, 0, 0},
	{0, 0, 0, 0}}
};

Trajectory step2Inches = {
	10,
	{{0, 0, 0, 0},
	{1188, 43192, 0, 0},
	{4535, 86384, 0, 0},
	{8098, 51830, 0, 0},
	{9502, 8638, 0, 0},
	{8746, -34554, 0, 0},
	{5831, -77745, 0, 0},
	{1965, -60469, 0, 0},
	{130, -17277, 0, 0},
	{0, 0, 0, 0}}
};



#endif
