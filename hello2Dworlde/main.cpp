#include <iostream>
#include <windows.h>
#include <graphics.h>

using namespace std;
void movement();
void point();
void prntp();
int x = 500, y = 500;
int x2=300, y2 = 300;
int k=0;
int main()
{
    HWND hwnd_win = GetForegroundWindow();
    ShowWindow(hwnd_win,SW_HIDE);
    
    initwindow(600,600,"Green dot's revenge and the furious red dot of doom!");
    settextstyle( TRIPLEX_FONT, HORIZ_DIR, 2);

    setcolor(2);          
    circle(x,y,9);
    
    while(true){
       Sleep(20);         
       setcolor(2);
       prntp();
       point();  
       movement();     
    }
  return 0;
}

void movement(){          
        if(x>=610)x=0;
        if(y>=610)y=0;
        if(x<=-10)x=600;
        if(y<=-10)y=600; 
       
       if((GetAsyncKeyState(VK_LEFT)&&GetAsyncKeyState(VK_UP)) || (GetAsyncKeyState(VK_RIGHT)&&GetAsyncKeyState(VK_UP))
        || (GetAsyncKeyState(VK_LEFT)&&GetAsyncKeyState(VK_DOWN))  || (GetAsyncKeyState(VK_RIGHT)&&GetAsyncKeyState(VK_DOWN)) ){
                                                                   
        if(GetAsyncKeyState(VK_LEFT)&&GetAsyncKeyState(VK_UP)) {
          setcolor(0);          
        circle(x,y,9);                            
          x-=7;
          y-=7;
                                }
        else if(GetAsyncKeyState(VK_RIGHT)&&GetAsyncKeyState(VK_UP)) {
          setcolor(0);          
        circle(x,y,9);                            
          x+=7;
          y-=7;
                                }
        else if(GetAsyncKeyState(VK_LEFT)&&GetAsyncKeyState(VK_DOWN)) {
          setcolor(0);          
        circle(x,y,9);                            
          x-=7;
          y+=7;
                                }
        else if(GetAsyncKeyState(VK_RIGHT)&&GetAsyncKeyState(VK_DOWN)) {
          setcolor(0);          
        circle(x,y,9);                            
          x+=7;
          y+=7;
                               } 
        setcolor(2);          
        circle(x,y,9); 
                                                         
                 } 
       else if(GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_DOWN) ){         
       if(GetAsyncKeyState(VK_LEFT)) {
          setcolor(0);          
        circle(x,y,9);                            
          x-= 10;
        }
        else if(GetAsyncKeyState(VK_RIGHT)) {
          setcolor(0);          
        circle(x,y,9);
          x+= 10;
        }
        else if(GetAsyncKeyState(VK_UP)) {
          setcolor(0);          
        circle(x,y,9);
          y-= 10;
        }
        else if(GetAsyncKeyState(VK_DOWN)) {
        setcolor(0);          
        circle(x,y,9);
          y+= 10; 
          }
        setcolor(2);          
        circle(x,y,9);
        }
     }
     
void point(){
    
      if( x<=x2+10 && x>=x2-10 && y<=y2+10 && y>=y2-10){
        setcolor(0);
        circle(x2,y2,5);
        
        y2=((y2*y2+k*4541)%585)+10;
        x2=((x2*x2+k*1341)%585)+10;
         
         k++;
         
        }
        setcolor(4);
        circle(x2,y2,5);
     }
     
void prntp(){
       char* text[10]={"0", "1", "2", "3", "4", "5", "6", "7","8", "9"};
       
       if(k<=9){
            /*pos1*/outtextxy(110,15, text[k]);   
               }
       else if(k>9&&k<=99){
            /*pos1*/outtextxy(110,15, text[int(k/10)]);
            /*pos2*/outtextxy(140,15, text[k%10]);
            }
       else if(k>99&&k<=999){
            /*pos1*/outtextxy(110,15, text[int(k/100)]);
            /*pos2*/outtextxy(140,15, text[int((k%100)/10)]);
            /*pos3*/outtextxy(170,15, text[k%10]);
            }
            
       else if(k>999)outtextxy(110,15,"Sluta nu, du har vunnit!"); 
              
       outtextxy(10, 15, "points:");
     }     
