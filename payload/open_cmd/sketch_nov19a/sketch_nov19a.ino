#include "DigiKeyboard.h"

void setup() {
  // 等待一秒，确保系统有时间识别设备

  delay(1000);
  // 按下 Windows 键 (GUI 键)
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); // 模拟按下左边的 Windows 键

  // 模拟按下 "R" 键，同时按住 Windows 键
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  delay(2000);

  // 释放所有按键
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.sendKeyStroke(0); // 释放按键

  // 等待一秒，让“运行”窗口有时间打开
  delay(2000);
  
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(0); // 释放按键
  delay(1000);

  // 模拟输入文本：echo hello tcc, give me 100 or i will rm -rf / your computer
  DigiKeyboard.print("echo hello tcc, give me 100 or i will rm -rf / your computer");

  // 模拟按下 "Enter" 键
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.sendKeyStroke(0);
}

void loop() {
  // 空循环，程序运行一次后结束
}
