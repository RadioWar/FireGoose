void setup() {                                                 //初始化，这里的代码只执行一次
   delay(5000);                                                   //设置延时，让系统有足够的时间识别烧鹅，防止后续代码执行错乱。
   Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);                  // 按下Win键
   Keyboard.set_key1(KEY_R);                                      // 同时按下R键
   Keyboard.send_now();                                           // 发送Win+R
   delay(100);                                                    // 适当延时，给上面操作一点反应时间
   Keyboard.println("notepad");                                   // 输入notepad字串
   Keyboard.set_key1(KEY_ENTER);                                  // 按下回车
   Keyboard.send_now();                                           // 发送回车
   delay(300);
   Keyboard.println("Hello RadioWar");                            // 打印字符串“RadioWar”
   delay(300);
   Keyboard.set_modifier(MODIFIERKEY_CTRL);                       //按下Ctrl键    
   Keyboard.set_key1(KEY_S);                                      //按下S键
   Keyboard.send_now();                                           //发送Ctrl+S （保存）
   Keyboard.set_modifier(0);                                      //在一瞬间释放所有的按键（Alt+S），会弹出另存的窗口                                      
   Keyboard.set_key1(0);
   Keyboard.send_now();
   delay(300);
   Keyboard.println("hello.txt");                                 //保存文件名为hello.txt
   Keyboard.set_modifier(MODIFIERKEY_ALT);                        //按下Alt键    
   Keyboard.set_key1(KEY_S);                                      //按下S键
   Keyboard.send_now();                                           //发送Alt+S （自动保存）    
   Keyboard.set_modifier(0);                                      //释放 Alt+S                                    
   Keyboard.set_key1(0);
   Keyboard.send_now();                                           //保存了Hello RadioWar到hello.txt
   delay(300);
    }
   void loop()                                                    //循环，这里的代码无限循环
    {
                               //这里的代码为空，就是什么也不执行
                               //当然你可以随便写代码，也可以把上面的代码放到下面，循环执行，也可在上面加循环语句
    }
