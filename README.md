# 🤖 Belajar-Arduino-1: Lampu Delay ON-OFF

[![GitHub issues](https://img.shields.io/github/issues/username/Belajar-Arduino-1-Lampu-Delay-ON-OFF)](https://github.com/username/Belajar-Arduino-1-Lampu-Delay-ON-OFF/issues)
[![GitHub stars](https://img.shields.io/github/stars/username/Belajar-Arduino-1-Lampu-Delay-ON-OFF)](https://github.com/username/Belajar-Arduino-1-Lampu-Delay-ON-OFF/stargazers)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

Selamat datang ke projek **"Hello World"** versi elektronik! Projek ini adalah langkah pertama anda untuk menguasai dunia automasi menggunakan Arduino. Di sini, kita akan belajar cara mengawal dunia fizikal (lampu) hanya dengan beberapa baris kod.

> "Teknologi itu bukan sihir, tapi rasanya mirip." — **Mr. Duino** 🧠✨

---

## 📺 Rujukan Video
Projek ini adalah rakan pendamping untuk tutorial TikTok kami. Sila tonton untuk penjelasan visual yang lebih mendalam!
👉 [**Tonton Tutorial di TikTok @MrDuino**](https://www.tiktok.com/@mrduino_)

---

## 🛠️ Persediaan Alat & Bahan

Untuk memulakan eksperimen ini, anda memerlukan "Starter Kit" asas berikut:

| Komponen | Jumlah | Fungsi |
| :--- | :---: | :--- |
| **Arduino Uno** | 1 | Otak utama rangkaian |
| **LED (Warna Bebas)** | 1 | Output visual (Cahaya) |
| **Resistor 220 Ohm** | 1 | Pelindung LED agar tidak terbakar |
| **Breadboard** | 1 | Papan untuk merakit tanpa perlu pematerian (solder) |
| **Kabel Jumper** | 2 | Penghubung aliran elektrik |

---

## 📐 Skema Rangkaian

Pastikan kaki LED tidak tertukar! LED mempunyai kaki panjang (**Anod/+**) dan kaki pendek (**Katod/-**).

1.  **Kaki Panjang LED** ➡️ Sambungkan ke **Pin Digital 13** Arduino.
2.  **Kaki Pendek LED** ➡️ Sambungkan ke salah satu kaki **Resistor**.
3.  **Kaki Resistor satu lagi** ➡️ Sambungkan ke pin **GND (Ground)** Arduino.

![Skema Arduino](<img width="1740" height="1381" alt="SCH_LED" src="https://github.com/user-attachments/assets/bbf566e1-075d-4548-8d3e-c09ad6ea99b8" />)

---

## 💻 Kod Program (Sketch)

Salin kod di bawah ke dalam Arduino IDE anda. Perhatikan fungsi `delay()`, di situlah "keajaiban" masa berlaku!

```cpp
// Projek: Lampu Delay ON-OFF
// Penulis: Mr. Duino

void setup() {
  // Menetapkan pin 13 sebagai OUTPUT
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // Nyalakan LED (Hantar elektrik 5V)
  delay(1000);              // Tunggu selama 1 saat (1000 ms)
  
  digitalWrite(13, LOW);    // Matikan LED (Putus aliran elektrik)
  delay(1000);              // Tunggu selama 1 saat
}
