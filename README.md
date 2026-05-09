🤖 Belajar-Arduino-1: Lampu Delay ON-OFF
Selamat datang di proyek "Hello World" versi elektronika! Proyek ini adalah langkah pertama kamu untuk menguasai dunia otomasi menggunakan Arduino. Di sini, kita akan belajar cara mengontrol dunia fisik (lampu) hanya dengan beberapa baris kode.

"Teknologi itu nggak sihir, tapi rasanya mirip." — Mr. Duino 🧠✨

📺 Referensi Video
Proyek ini merupakan pendamping untuk tutorial TikTok kami.
Tonton Tutorialnya di TikTok @MrDuino

🛠️ Persiapan Alat & Bahan
Untuk memulai eksperimen ini, kamu butuh "Starter Kit" dasar berikut:

Komponen	Jumlah	Fungsi
Arduino Uno	1	Otak dari rangkaian
LED (Warna bebas)	1	Output visual
Resistor 220 Ohm	1	Pelindung LED agar tidak terbakar
Breadboard	1	Papan untuk merakit tanpa solder
Kabel Jumper	2	Penghubung aliran listrik
📐 Skema Rangkaian
Jangan sampai tertukar kakinya ya! LED punya kaki panjang (Anoda/+) dan kaki pendek (Katoda/-).

Kaki Panjang LED ➡️ Pin Digital 13 Arduino.

Kaki Pendek LED ➡️ Salah satu kaki Resistor.

Kaki Resistor lainnya ➡️ Pin GND (Ground) Arduino.

(Sematkan gambar schematic_arduino.png di sini)

💻 Kode Program (Sketch)
Salin kode di bawah ini ke Arduino IDE kamu. Perhatikan bagian delay(), di situlah "sihir" waktunya terjadi!

C++
// Proyek: Lampu Delay ON-OFF
// Author: Mr. Duino

void setup() {
  // Mengatur pin 13 sebagai OUTPUT
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // Nyalakan LED (Kirim listrik 5V)
  delay(1000);              // Tunggu selama 1 detik (1000 ms)
  
  digitalWrite(13, LOW);    // Matikan LED (Putus listrik)
  delay(1000);              // Tunggu selama 1 detik
}
🚀 Tantangan Eksperimen!
Sudah berhasil? Jangan berhenti di situ! Coba lakukan modifikasi kecil ini untuk melihat apa yang terjadi:

Mode Kilat: Ubah nilai delay(1000) menjadi delay(100). Apa yang terjadi pada kedipan lampunya?

Mode SOS: Buat pola kedipan pendek-pendek-panjang.

Custom Pin: Pindahkan kabel dari Pin 13 ke Pin 8, lalu ubah angka 13 di kode program menjadi 8.

🤝 Kontribusi
Punya ide proyek seru lainnya? Silakan lakukan Fork repositori ini atau ajukan Pull Request. Mari kita bangun komunitas kreator teknologi yang solid!

📜 Lisensi
Proyek ini di bawah lisensi MIT - bebas digunakan untuk belajar dan dikembangkan lebih lanjut.

Dibuat dengan ❤️ oleh Mr. Duino
Engineer rumahan, inovasi tanpa batas.
