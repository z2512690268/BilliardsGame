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

