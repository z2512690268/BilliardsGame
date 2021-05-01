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

#include "UI.h"

double windowWidth;
double windowHeight;

void MouseEventProcess(int x, int y, int button, int event);

void Main()
{
	// 初始化窗口和图形系统
	SetWindowTitle("Billiards");

    InitGraphics();
	 
	// 获得窗口尺寸
    windowWidth = GetWindowWidth();
    windowHeight = GetWindowHeight();
    
//  registerMouseEvent(MouseEventProcess); 

	ZKY_Debug();
}

void MouseEventProcess(int x, int y, int button, int event)
{
	uiGetMouse(x,y,button,event);

	DisplayClear(); 
	DrawMenu(windowWidth, windowHeight);
	DrawTable(windowWidth, windowHeight); 	
}


