void setup() {
  Serial.begin(9600);       // 初始化串口通信，波特率9600
  while (!Serial);          // 等待串口连接（仅需在部分开发板启用）
  Serial.println("www.sparkleiot.com");  // 打印目标内容并换行
  Serial.println("github:https://github.com/Sparkleiot/arduino_sdk.git");
  Serial.println("Arduino:https://github.com/tuya/arduino-tuyaopen/releases/download/global/package_tuya_open_index.json");
}

void loop() {
  // 空循环（不需要重复执行）
}
