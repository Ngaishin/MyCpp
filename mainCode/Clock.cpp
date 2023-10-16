#if 0
#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;

class _clock{
public:
    _clock(){
        time_t t=time(NULL);
        struct tm ti = *localtime(&t);
        hour=ti.tm_hour;
        min=ti.tm_min;
        sec=ti.tm_sec;
    }
    void run(){
        while(1){
            show();
            tick();
        }
    }
    

private:
    void show(){
        cout<<endl<<endl;
        //system("cls");
        cout<<setfill('0')<<setw(2)<<hour<<":";
        cout<<setfill('0')<<setw(2)<<min<<":";
        cout<<setfill('0')<<setw(2)<<sec<<endl;
    }
    void tick(){
        Sleep(1000);
        if(++sec==60){
            sec=0;
            if(++min==60){
                min=0;
                if(++hour==24){
                    hour=0;
                }
            }
        }

    }
    short hour;
    short min;
    short sec;
};

int main(){
   _clock c;
   c.run();

    return 0;

}
#endif