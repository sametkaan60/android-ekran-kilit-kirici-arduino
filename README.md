# 🔓 Android Screen Lock Cracker | Ekran Kilit Şifre Kırıcı (Digispark ATtiny85)

[Türkçe](#türkçe) | [English](#english)

---

## Türkçe

Bu proje, bir **Digispark ATtiny85** (Arduino tabanlı) modülünü kullanarak Android telefonlardaki 4 haneli ekran kilidi şifrelerini denemek için tasarlanmış bir HID (Klavye Emülasyonu) uygulamasıdır. Cihaz, bir klavye gibi davranarak telefona şifreleri otomatik olarak gönderir.

### 🚀 Özellikler

- **HID Emülasyonu**: Telefonu bilgisayara bağlı bir klavye gibi algılatır.
- **Otomatik Deneme**: Sık kullanılan şifreleri ve özel kombinasyonları dener.
- **Akıllı Bekleme**: Android'in "tekrar dene" uyarılarına karşı her 5 denemede bir 32 saniye bekler.
- **Evrensel Uyumluluk**: OTG desteği olan çoğu Android cihazla çalışır.

### 🛠️ Kurulum

1. **Arduino IDE'yi Hazırlayın**:
   - Digispark sürücülerini ve kart paketini yükleyin.
   - Kart olarak "Digispark (Default - 16.5mhz)" seçin.

2. **Kütüphane**:
   - `DigiKeyboard.h` kütüphanesinin yüklü olduğundan emin olun.

3. **Yükleme**:
   - `lockscreen.ino` dosyasını açın.
   - "Upload" butonuna basın ve istendiğinde Digispark'ı USB portuna takın.

### 📋 Kullanım

1. Digispark'ı bir OTG adaptörü aracılığıyla Android telefana bağlayın.
2. Telefonun şifre ekranında olduğundan emin olun.
3. Cihaz 2 saniye sonra otomatik olarak şifreleri girmeye başlayacaktır.

---

## English

This project is an HID (Keyboard Emulation) application designed to brute-force 4-digit screen lock passwords on Android phones using a **Digispark ATtiny85** (Arduino-based) module. The device acts as a keyboard and automatically sends passcodes to the phone.

### 🚀 Features

- **HID Emulation**: Makes the phone recognize the device as a connected keyboard.
- **Automatic Brute-force**: Tries common passcodes and specific combinations.
- **Smart Delay**: Waits 32 seconds every 5 attempts to bypass Android's "try again" cooldown.
- **Universal Compatibility**: Works with most Android devices that support OTG.

### 🛠️ Setup

1. **Prepare Arduino IDE**:
   - Install Digispark drivers and the board manager package.
   - Select "Digispark (Default - 16.5mhz)" as the board.

2. **Library**:
   - Ensure the `DigiKeyboard.h` library is installed.

3. **Uploading**:
   - Open the `lockscreen.ino` file.
   - Click "Upload" and plug in the Digispark when prompted.

### 📋 Usage

1. Connect the Digispark to the Android phone via an OTG adapter.
2. Ensure the phone is on the passcode screen.
3. The device will start entering passcodes automatically after a 2-second initial delay.

---
*Geliştirici / Developer: **Samet Kaan Bayram***
