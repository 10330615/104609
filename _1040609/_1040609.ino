void setup() {
	// 初始化
	pinMode(13, OUTPUT); // 設定 13 腳為輸出
}

void loop() {

	// 控制 LED 閃爍
	digitalWrite(13, HIGH); // 讓 LED 亮
	delay(1000); // 延遲 1 秒
	digitalWrite(13, LOW); // 讓 LED 暗
	delay(1000); // 延遲 1 秒
}
