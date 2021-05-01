#ifndef _UI_H
#define _UI_H

#include "graphics.h"
#include "extgraph.h"
#include "genlib.h"
#include "simpio.h"
#include <math.h>
#include <stddef.h>
#include <windows.h>
#include <olectl.h>
#include <mmsystem.h>
#include <wingdi.h>
#include <ole2.h>
#include <ocidl.h>
#include <winuser.h>

#include "imgui.h"

void DrawTable(double windowWidth, double windowHeight);

void DrawMenu(double windowWidth, double windowHeight);

void FillGraphics(double x, double y, double width, double height, int R, int G, int B, string colorName, string shape);

// Part Name: ZKYUI
// *******************************************************************
// 张柯尧同学负责的UI部分

/*
* Function: FillCircle
* Usage: FillCircle(x, y, radius, color);
* Return: void
* ----------------------------------------------------
* 用来在（x, y）为圆心处画一个填充了color颜色的半径为radius的圆
*/
void FillCircle(double x, double y, double radius, string color);

#endif
