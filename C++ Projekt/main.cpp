#include <iostream>
#include <windows.h>
#include <graphics.h>

using namespace std;

int main()
{
    HWND hwnd_win = GetForegroundWindow();
    ShowWindow(hwnd_win,SW_HIDE);
    
    initwindow(1000,1000,"Test");
    
    int x = 500, y = 500;
        setcolor(2);          
        circle(x,y,10);
    while(true){  
                  
        if(x>=1006)x=0;
        if(y>=1006)y=0;
        if(x<=-6)x=1000;
        if(y<=-6)y=1000;   
        
        
       if(GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_DOWN) ){         
      
       if(GetAsyncKeyState(VK_LEFT)) {
          setcolor(0);          
        circle(x,y,10);                            
          x-= 10;
          setcolor(2);          
        circle(x,y,10);
          
          Sleep(20);
        }
      else if(GetAsyncKeyState(VK_RIGHT)) {
          setcolor(0);          
        circle(x,y,10);
          x+= 10;
          setcolor(2);          
        circle(x,y,10);
          Sleep(20);
        }
        else if(GetAsyncKeyState(VK_UP)) {
             setcolor(0);          
        circle(x,y,10);
          y-= 10;
          setcolor(2);          
        circle(x,y,10);
          Sleep(20);
        }
        else if(GetAsyncKeyState(VK_DOWN)) {
        setcolor(0);          
        circle(x,y,10);
          y+= 10; 
          setcolor(2);          
        circle(x,y,10);  
          Sleep(20);
          }
        }
        
        if((GetAsyncKeyState(VK_LEFT)&&GetAsyncKeyState(VK_UP)) || (GetAsyncKeyState(VK_RIGHT)&&GetAsyncKeyState(VK_UP)) || (GetAsyncKeyState(VK_LEFT)&&GetAsyncKeyState(VK_DOWN))  || (GetAsyncKeyState(VK_RIGHT)&&GetAsyncKeyState(VK_DOWN)) ){
        
        if(GetAsyncKeyState(VK_LEFT)&&GetAsyncKeyState(VK_UP)) {
          setcolor(0);          
        circle(x,y,10);                            
          x-=7;
          y-=7;
          setcolor(2);          
        circle(x,y,10); 
                                }
        if(GetAsyncKeyState(VK_RIGHT)&&GetAsyncKeyState(VK_UP)) {
          setcolor(0);          
        circle(x,y,10);                            
          x+=7;
          y-=7;
          setcolor(2);          
        circle(x,y,10);
                                }
        if(GetAsyncKeyState(VK_LEFT)&&GetAsyncKeyState(VK_DOWN)) {
          setcolor(0);          
        circle(x,y,10);                            
          x-=7;
          y+=7;
          setcolor(2);          
        circle(x,y,10);
                                }
        if(GetAsyncKeyState(VK_RIGHT)&&GetAsyncKeyState(VK_DOWN)) {
          setcolor(0);          
        circle(x,y,10);                            
          x+=7;
          y+=7;
          setcolor(2);          
        circle(x,y,10);        
                               }                            
                 }    
    }
  return 0;
}
