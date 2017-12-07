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
    MotionState motionState[100];
} Trajectory;

__attribute__((space(prog))) Trajectory pivot180Degrees = {
	34,
	{{0, 0, 0, 0},
	{0, 0, 54, 1978},
	{0, 0, 208, 3956},
	{0, 0, 460, 5935},
	{0, 0, 811, 7913},
	{0, 0, 1261, 9891},
	{0, 0, 1780, 9891},
	{0, 0, 2221, 7913},
	{0, 0, 2562, 5935},
	{0, 0, 2804, 3956},
	{0, 0, 2947, 1978},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2992, 0},
	{0, 0, 2938, -1978},
	{0, 0, 2784, -3956},
	{0, 0, 2532, -5935},
	{0, 0, 2181, -7913},
	{0, 0, 1731, -9891},
	{0, 0, 1212, -9891},
	{0, 0, 771, -7913},
	{0, 0, 430, -5935},
	{0, 0, 188, -3956},
	{0, 0, 45, -1978},
	{0, 0, 0, 0}}
};

__attribute__((space(prog))) Trajectory pivot90Degrees = {
	23,
	{{0, 0, 0, 0},
	{0, 0, 54, 1977},
	{0, 0, 208, 3954},
	{0, 0, 460, 5930},
	{0, 0, 810, 7907},
	{0, 0, 1260, 9884},
	{0, 0, 1767, 9489},
	{0, 0, 2187, 7512},
	{0, 0, 2509, 5535},
	{0, 0, 2731, 3558},
	{0, 0, 2855, 1581},
	{0, 0, 2881, -198},
	{0, 0, 2817, -2174},
	{0, 0, 2654, -4151},
	{0, 0, 2392, -6128},
	{0, 0, 2031, -8105},
	{0, 0, 1572, -10082},
	{0, 0, 1068, -9291},
	{0, 0, 658, -7314},
	{0, 0, 347, -5337},
	{0, 0, 134, -3361},
	{0, 0, 21, -1384},
	{0, 0, 0, 0}}
};


__attribute__((space(prog)))Trajectory step10Inches = {
	29,
	{{0, 0, 0, 0},
	{205, 7470, 0, 0},
	{784, 14941, 0, 0},
	{1737, 22411, 0, 0},
	{3063, 29882, 0, 0},
	{4557, 29882, 0, 0},
	{6051, 29882, 0, 0},
	{7545, 29882, 0, 0},
	{9039, 29882, 0, 0},
	{10533, 29882, 0, 0},
	{12005, 27641, 0, 0},
	{13182, 20170, 0, 0},
	{13985, 12700, 0, 0},
	{14414, 5229, 0, 0},
	{14482, -1494, 0, 0},
	{14201, -8965, 0, 0},
	{13548, -16435, 0, 0},
	{12521, -23906, 0, 0},
	{11131, -29882, 0, 0},
	{9637, -29882, 0, 0},
	{8143, -29882, 0, 0},
	{6649, -29882, 0, 0},
	{5155, -29882, 0, 0},
	{3661, -29882, 0, 0},
	{2222, -26147, 0, 0},
	{1121, -18676, 0, 0},
	{392, -11206, 0, 0},
	{37, -3735, 0, 0},
	{0, 0, 0, 0}}
};

__attribute__((space(prog)))Trajectory step5Inches = {
	22,
	{{0, 0, 0, 0},
	{205, 7440, 0, 0},
	{781, 14881, 0, 0},
	{1730, 22321, 0, 0},
	{3051, 29762, 0, 0},
	{4539, 29762, 0, 0},
	{6027, 29762, 0, 0},
	{7437, 25298, 0, 0},
	{8497, 17857, 0, 0},
	{9185, 10417, 0, 0},
	{9501, 2976, 0, 0},
	{9468, -3720, 0, 0},
	{9077, -11161, 0, 0},
	{8315, -18601, 0, 0},
	{7180, -26042, 0, 0},
	{5729, -29762, 0, 0},
	{4241, -29762, 0, 0},
	{2757, -29018, 0, 0},
	{1510, -21577, 0, 0},
	{636, -14137, 0, 0},
	{134, -6696, 0, 0},
	{0, 0, 0, 0}}
};

__attribute__((space(prog)))Trajectory step2Inches = {
	14,
	{{0, 0, 0, 0},
	{546, 19871, 0, 0},
	{1937, 29806, 0, 0},
	{3428, 29806, 0, 0},
	{4918, 29806, 0, 0},
	{6200, 17884, 0, 0},
	{6557, 0, 0, 0},
	{6110, -17884, 0, 0},
	{4769, -29806, 0, 0},
	{3279, -29806, 0, 0},
	{1788, -29806, 0, 0},
	{447, -19871, 0, 0},
	{0, 0, 0, 0}}
};



#endif
