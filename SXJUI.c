#include "SXJUI.h"
void FillGraphics(double x, double y, double width, double height, int R, int G, int B, string colorName, string shape)
{
	string icolor = GetPenColor();
	int isize = GetPenSize();
	
	DefineColor(colorName, R / 255.0, G / 255.0, B / 255.0);
	SetPenColor(colorName);
	SetPenSize(1);
	
	double i;
	double delta = 0.001;
	
	if (shape == "RECT")
	{
		for (i = 0; i <= height; i += delta)
		{
			MovePen(x, y + i);
			DrawLine(width, 0); 	
		}
	}	
	
	SetPenColor(icolor);
	SetPenSize(isize);
}
void DrawTableTop(double windowWidth, double windowHeight)
{
	FillGraphics(windowWidth * 0.1, windowHeight * 0.1, windowWidth * 0.8, windowHeight * 0.8, 61, 86, 39, "Tabletop", "RECT");
}

void DrawTableEdge(double windowWidth, double windowHeight)
{
	
}

void DrawTable(double windowWidth, double windowHeight)
{
	DrawTableTop(windowWidth, windowHeight);
	DrawTableEdge(windowWidth, windowHeight); 
}

void DrawMenu(double windowWidth, double windowHeight)
{
	// 菜单内部的按钮之后修改 
	static char * menuListFile[] = {"File",  
		"Restart", 
		"Exit"};
	static char * menuListTool[] = {"Tool",
		"ChangeMode"};
	static char * menuListHelp[] = {"Help",
		"About"};
	
	double fH = GetFontHeight();
	double x = 0;
	double y = windowHeight;
	double h = fH * 1.5; // 控件高度： 字体高度的1.5倍 
	double w = TextStringWidth(menuListTool[1]) * 1.2; // 控件宽度：最长字符串的1.2倍 
	int selection;
	
	// menu bar
	drawMenuBar(0, y - h, windowWidth, h);
	
	// File 菜单
	selection = menuList(GenUIID(0), x, y - h, w, w, h, 
						menuListFile, sizeof(menuListFile)/sizeof(menuListFile[0]));
	if (selection == 2)	
		exit(-1);
	
	// Tool 工具 
	selection = menuList(GenUIID(0), x + w, y - h, w, w, h, 
						menuListTool, sizeof(menuListTool)/sizeof(menuListTool[0]));
	if (selection == 1) 
	{

	}
	
	// Help 帮助 
	selection = menuList(GenUIID(0), x + 2 * w, y - h, w, w, h, 
						menuListHelp, sizeof(menuListHelp)/sizeof(menuListHelp[0]));
	if (selection == 1)
	{

	}
}
