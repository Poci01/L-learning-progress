# 🚀 Cyber Security & Python Fast-Track Roadmap (6 Months)

Repository ini berisi catatan perjalanan, latihan konsep dasar, dan penyelesaian *mini-projects* untuk membangun fondasi **Python Programming**, **System Automation**, dan **Blue Team Security Operations**.

---

## 📅 Bulan 1: Pythonic Transition, File Handling & System Automation

### ✅ Task 1: Porting Konversi Nilai & Kalkulator C ke Python
- [X] **1.1 Mini Task:** Buat fungsi `konversi_grade(nilai)` menggunakan `if-elif-else`.
- [X] **1.2 Mini Task:** Buat fungsi `kalkulator_dasar(a, b, op)` untuk operasi dasar (`+`, `-`, `*`, `/`).
- [X] **1.3 Main Project:** Buat program CLI interaktif yang mengintegrasikan kedua fungsi dengan loop `while True` dan *f-strings*.

### ✅ Task 2: CLI Password Generator
- [X] **2.1 Mini Task:** Eksplorasi modul `random` & `string` untuk generate 8 karakter acak.
- [X] **2.2 Mini Task:** Buat fungsi generator dengan opsi boolean `pakai_angka` dan `pakai_simbol`.
- [X] **2.3 Main Project:** Program *Password Generator CLI* interaktif dengan kustomisasi panjang password (12-32 karakter).

### 🔲 Task 3: CLI Password Strength Checker
- [ ] **3.1 Mini Task:** Buat fungsi penilai panjang string dan penghitung huruf kapital.
- [ ] **3.2 Mini Task:** Gunakan Regex / string method (`.isdigit()`, `.isupper()`) untuk deteksi simbol khusus.
- [ ] **3.3 Main Project:** Program *Password Evaluator* yang memberikan skor (Lemah/Sedang/Kuat) beserta rekomendasi perbaikannya.

### 🔲 Task 4: Text File Log Parser
- [ ] **4.1 Mini Task:** Buat script pembuat file `sample_app.log` dummy berisi pesan `INFO`, `WARNING`, dan `ERROR`.
- [ ] **4.2 Mini Task:** Gunakan `with open()` untuk membaca file baris demi baris dan memfilter baris `ERROR`.
- [ ] **4.3 Main Project:** *Log Parser CLI* yang menghitung statistik log dan menyimpan ringkasannya ke `ringkasan_log.txt`.

### 🔲 Task 5: Bulk File Renamer
- [ ] **5.1 Mini Task:** Eksplorasi modul `os` dan `pathlib` untuk membuat daftar nama file dalam sebuah direktori.
- [ ] **5.2 Mini Task:** Buat fungsi penambahan timestamp `YYYY-MM-DD_` pada string nama file.
- [ ] **5.3 Main Project:** Script *Bulk Renamer* otomatis untuk semua file `.txt` di direktori target dengan format `[TANGGAL]_[INDEX]_[NAMA_ASLI].txt`.

### 🔲 Task 6: Duplicate File Finder (Hashing Intro)
- [ ] **6.1 Mini Task:** Pelajari modul `hashlib` untuk menghitung nilai MD5 & SHA256 dari string.
- [ ] **6.2 Mini Task:** Buat fungsi `get_file_hash(filepath)` yang membaca file secara binary (`rb`).
- [ ] **6.3 Main Project:** *Duplicate File Finder* yang memindai direktori, mencatat hash ke `dictionary`, dan mendeteksi file duplikat.

---

## 📅 Bulan 2: Data Structures, OOP, Error Handling & Advanced Scripting

### 🔲 Task 7: Program Kasir & Inventory Management (OOP)
- [ ] **7.1 Mini Task:** Buat `class Barang` dengan atribut `nama`, `harga`, `stok`, dan method `tampil_info()`.
- [ ] **7.2 Mini Task:** Kelola beberapa objek `Barang` di dalam `dictionary` menggunakan `ID_Barang` sebagai key.
- [ ] **7.3 Main Project:** Aplikasi *Kasir & Inventory OOP* dengan penanganan exception (`try-except`) pada input transaksi.

### 🔲 Task 8: System Resource Monitor
- [ ] **8.1 Mini Task:** Install dan pakai library `psutil` untuk membaca persentase penggunaan CPU dan RAM.
- [ ] **8.2 Mini Task:** Gunakan `time.sleep(5)` dalam loop `while True` untuk melakukan monitoring berkala.
- [ ] **8.3 Main Project:** *System Resource Alert* yang memberikan peringatan jika penggunaan RAM > 80% atau CPU > 90%.

### 🔲 Task 9: JSON Data Storage Manager
- [ ] **9.1 Mini Task:** Pelajari modul `json` (`json.dumps()` dan `json.loads()`) untuk konversi data dictionary.
- [ ] **9.2 Mini Task:** Buat fungsi *read/write* data ke file lokal `database.json`.
- [ ] **9.3 Main Project:** Program *CRUD Contact Manager CLI* dengan penyimpanan permanen pada file `contacts.json`.

### 🔲 Task 10: Automated Email Sender
- [ ] **10.1 Mini Task:** Susun draf struktur email (Subject, Body, Recipient) menggunakan `email.mime`.
- [ ] **10.2 Mini Task:** Gunakan environment variables (`os.environ` / `python-dotenv`) untuk menyimpan kredensial.
- [ ] **10.3 Main Project:** Script *Auto Email Notifier* yang membaca ringkasan log dan mengiriskannya ke email tujuan secara otomatis.

### 🔲 Task 11: Encrypted Notepad CLI
- [ ] **11.1 Mini Task:** Pelajari library `cryptography` dan pembuatan kunci enkripsi `Fernet.generate_key()`.
- [ ] **11.2 Mini Task:** Buat fungsi `enkripsi_teks()` dan `dekripsi_teks()` menggunakan Fernet.
- [ ] **11.3 Main Project:** Aplikasi *Encrypted Vault Notepad* untuk menyimpan dan membaca catatan rahasia terenkripsi.

---

## 📅 Bulan 3: Linux CLI Mastery & Python Networking

### 🔲 Task 12: Linux Setup & Terminal Challenge
- [ ] **12.1 Mini Task:** Setup VirtualBox dan install Ubuntu/Kali Linux.
- [ ] **12.2 Mini Task:** Latihan 30+ perintah dasar CLI Linux (`ls`, `grep`, `chmod`, `chown`, `ps`, `netstat`).
- [ ] **12.3 Main Project:** Konfigurasi lingkungan kerja Linux dan dokumentasikan cheatsheet perintah dasar di Markdown.

### 🔲 Task 13: Bash Shell Scripting Dasar
- [ ] **13.1 Mini Task:** Buat script `.sh` sederhana dengan variabel, kondisi `if`, dan input argumen.
- [ ] **13.2 Mini Task:** Buat script otomatisasi eksekusi update OS (`apt update && apt upgrade`).
- [ ] **13.3 Main Project:** Script *System Maintenance Shell* untuk pembersihan file cache/log sementara secara otomatis.

### 🔲 Task 14: Simple Port Scanner
- [ ] **14.1 Mini Task:** Pelajari modul `socket` untuk membuat koneksi TCP dasar ke IP/hostname.
- [ ] **14.2 Mini Task:** Buat fungsi pengecekan status satu port tertentu (Open/Closed).
- [ ] **14.3 Main Project:** *Port Scanner CLI* untuk memindai port 20-100 pada target `127.0.0.1` atau IP terdeteksi.

### 🔲 Task 15: Multithreaded Port Scanner
- [ ] **15.1 Mini Task:** Pelajari modul `threading` untuk menjalankan fungsi secara berkesinambungan (parallel).
- [ ] **15.2 Mini Task:** Penerapan `Queue` untuk membagi beban daftar port ke beberapa thread.
- [ ] **15.3 Main Project:** Upgrade *Port Scanner* menggunakan multithreading untuk meningkatkan kecepatan pemindaian.

### 🔲 Task 16: Web Security Header Checker
- [ ] **16.1 Mini Task:** Pelajari library `requests` untuk mengirim HTTP GET request dan membaca HTTP Response.
- [ ] **16.2 Mini Task:** Ekstrak dan tampilkan daftar response headers dari URL target.
- [ ] **16.3 Main Project:** *Security Header Auditor* untuk mengecek keberadaan header keamanan (`X-Frame-Options`, `HSTS`, `CSP`).

---

## 📅 Bulan 4: Web Fundamentals, Scraping & Recon Tools

### 🔲 Task 17: TryHackMe: Path Pre-Security
- [ ] **17.1 Mini Task:** Selesaikan modul *Network Fundamentals* di TryHackMe.
- [ ] **17.2 Mini Task:** Selesaikan modul *How The Web Works* di TryHackMe.
- [ ] **17.3 Main Project:** Selesaikan seluruh rute *Pre-Security Learning Path* dan dapatkan sertifikat penyelesaiannya.

### 🔲 Task 18: Simple Web Scraper
- [ ] **18.1 Mini Task:** Pelajari library `BeautifulSoup` untuk parsing struktur HTML dasar.
- [ ] **18.2 Mini Task:** Ekstrak elemen spesifik (seperti tag `<h1>` atau `<a>`) dari dokumen HTML.
- [ ] **18.3 Main Project:** *News Headline Scraper* yang mengambil daftar judul berita utama dari situs berita lokal secara otomatis.

### 🔲 Task 19: Subdomain Enumerator
- [ ] **19.1 Mini Task:** Pelajari mekanisme DNS Lookup menggunakan library `socket` atau `dnspython`.
- [ ] **19.2 Mini Task:** Buat fungsi yang menguji keberadaan subdomain berdasarkan daftar kata (*wordlist*).
- [ ] **19.3 Main Project:** *Subdomain Scanner CLI* yang menerima input domain utama dan mencatat seluruh subdomain aktif.

### 🔲 Task 20: URL Status & Redirection Tracker
- [ ] **20.1 Mini Task:** Pelajari status kode HTTP (200, 301, 302, 404, 500) menggunakan `requests`.
- [ ] **20.2 Mini Task:** Gunakan parameter `allow_redirects=True` untuk mengamati riwayat pengalihan URL.
- [ ] **20.3 Main Project:** *URL Tracker Tool* untuk memeriksa status keaktifan daftar URL serta melacak rantai pengalihannya (*redirect chain*).

### 🔲 Task 21: Hash Cracker Sederhana (Dictionary Attack)
- [ ] **21.1 Mini Task:** Buat file `passwords.txt` berisi daftar kata password umum (wordlist dummy).
- [ ] **21.2 Mini Task:** Buat fungsi komparasi antara hash target dengan hash setiap kata di dalam wordlist.
- [ ] **21.3 Main Project:** *Hash Cracker CLI* sederhana untuk mensimulasikan teknik *Dictionary Attack* pada hash MD5/SHA256.

---

## 📅 Bulan 5: Blue Team Operations & Forensic Log Analysis

### 🔲 Task 22: Wireshark Packet Analysis
- [ ] **22.1 Mini Task:** Pelajari teknik perekaman trafik (*packet capture*) menggunakan Wireshark.
- [ ] **22.2 Mini Task:** Terapkan display filter Wireshark (`http`, `dns`, `tcp.port==80`).
- [ ] **22.3 Main Project:** Lakukan analisis paket data lalu lintas HTTP non-SSL dan temukan informasi credential (username/password) *plaintext*.

### 🔲 Task 23: Log Analyzer untuk Brute Force Detection
- [ ] **23.1 Mini Task:** Pahami struktur log akses web server (Apache/Nginx) dan indikator login gagal (HTTP 401/403).
- [ ] **23.2 Mini Task:** Buat script Regex untuk mengekstrak Alamat IP dan status respons dari file log.
- [ ] **23.3 Main Project:** *Brute Force Detector* yang mengidentifikasi dan mencetak daftar Alamat IP dengan percobaan login gagal > 5 kali.

### 🔲 Task 24: Log Analyzer untuk SQL Injection & XSS
- [ ] **24.1 Mini Task:** Identifikasi pola karakter berbahaya SQLi (`' OR '1'='1`, `UNION SELECT`) dan XSS (`<script>`, `alert()`).
- [ ] **24.2 Mini Task:** Buat pemindai baris log yang mencocokkan URL query string dengan pola serangan.
- [ ] **24.3 Main Project:** *Web Attack Log Analyzer* yang menandai baris log yang mengindikasikan percobaan serangan SQLi atau XSS.

### 🔲 Task 25: Automated Incident Report Generator
- [ ] **25.1 Mini Task:** Format hasil deteksi analisis log ke dalam data terstruktur (Dictionary/JSON).
- [ ] **25.2 Mini Task:** Pelajari pembuatan file ringkasan laporan menggunakan penulisan berkas standar atau library PDF (`ReportLab`).
- [ ] **25.3 Main Project:** *Incident Report Generator* yang mengompilasi temuan dari Task 23 & 24 menjadi laporan insiden ringkas.

### 🔲 Task 26: File Integrity Monitor (FIM)
- [ ] **26.1 Mini Task:** Buat baseline data hash SHA256 untuk seluruh file di dalam sebuah folder target.
- [ ] **26.2 Mini Task:** Buat fungsi pemeriksaan berkala yang membandingkan hash saat ini dengan baseline data.
- [ ] **26.3 Main Project:** *File Integrity Monitor Tool* yang memberikan notifikasi jika ada file yang diubah, ditambah, atau dihapus.

---

## 📅 Bulan 6: Custom Security Tools & GitHub Portfolio

### 🔲 Task 27: Mini SIEM / Security Dashboard CLI
- [ ] **27.1 Mini Task:** Pelajari library `rich` atau `curses` untuk membuat tampilan antarmuka CLI yang terstruktur.
- [ ] **27.2 Mini Task:** Integrasikan modul Log Analyzer dan File Integrity Monitor ke dalam satu script utama.
- [ ] **27.3 Main Project:** *Mini SIEM Dashboard CLI* yang menampilkan status keamanan sistem, statistik log, dan peringatan ancaman secara visual.

### 🔲 Task 28: TryHackMe: Cyber Defense / Jr Penetration Tester
- [ ] **28.1 Mini Task:** Selesaikan 3 *rooms* latihan kategori Network Security di TryHackMe.
- [ ] **28.2 Mini Task:** Selesaikan 3 *rooms* latihan kategori Endpoint Security / Web Inspection.
- [ ] **28.3 Main Project:** Selesaikan minimal 10 *rooms* tantangan praktis di TryHackMe dan dokumentasikan *write-up* penyelesaiannya.

### 🔲 Task 29: Custom Network Packet Sniffer
- [ ] **29.1 Mini Task:** Pelajari modul `scapy` untuk menangkap paket data jaringan melalui script Python.
- [ ] **29.2 Mini Task:** Buat filter paket berdasarkan protokol (TCP/UDP/ICMP).
- [ ] **29.3 Main Project:** *Packet Sniffer CLI* yang mencetak informasi header IP asal, IP tujuan, serta port yang digunakan secara *real-time*.

### 🔲 Task 30: GitHub Portfolio Masterclass
- [ ] **30.1 Mini Task:** Rapikan struktur folder repository seluruh proyek dari Bulan 1 hingga Bulan 6.
- [ ] **30.2 Mini Task:** Tulis dokumen `README.md` individual di setiap folder proyek (berisi penjelasan, cara install, dan tangkapan layar/screenshot).
- [ ] **30.3 Main Project:** Tinjau kembali seluruh isi `ROADMAP.md` utama, pastikan seluruh *checkbox* telah terisi, dan publikasikan profil portofolio GitHub secara profesional.

---

## 🛠️ Catatan Tambahan & Progres Commit
- **Status:** Dalam Pengerjaan (Bulan 1)
- **Aturan Commit:** Lakukan minimal 1 *commit* setiap kali menyelesaikan mini task / main project sebagai bukti absensi harian!