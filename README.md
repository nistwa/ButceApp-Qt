# 💰 Bütçe Takip Uygulaması (BütçeApp)

Masaüstü tabanlı, kullanıcı dostu ve modüler bir kişisel finans yönetim uygulamasıdır. Kullanıcıların gelir/gider dengesini korumasına, finansal hedefler belirlemesine ve harcamalarını detaylı olarak raporlamasına olanak tanır.

---

## 🏛️ Akademik Bilgiler
* **Üniversite:** T.C. Marmara Üniversitesi
* **Fakülte:** Teknoloji Fakültesi
* **Bölüm:** Elektrik-Elektronik Mühendisliği
* **Ders:** BLM1030 Bilgisayar Programlama
* **Dönem:** 2025-2026 Bahar Dönemi Proje Ödevi

---

## 🚀 Proje Hakkında
Bu proje, **C++** ve **Qt Framework** kullanılarak geliştirilmiş bir masaüstü uygulamasıdır. Uygulamanın temel amacı; harcamaları ve gelirleri kategorize etmek, dinamik finansal hedefler koymak ve kullanıcıya geçmişe dönük grafiksel/metinsel raporlar sunmaktır. Verilerin kalıcı olarak saklanması ve yönetilmesi için **SQLite** veritabanı mimarisi kullanılmıştır.

### Temel Özellikler
* **Dinamik Bütçe Yönetimi:** Anlık gelir/gider takibi ve bütçe limit kontrolleri.
* **Gelişmiş Raporlama:** Tarih ve kategori bazlı harcama analizleri.
* **Hedef Takibi:** Finansal hedefler oluşturma ve ilerleme durumunu izleme.
* **Kalıcı Veri Saklama:** SQLite entegrasyonu ile uygulamanın her açılışında verilerin korunması.

---

## 👥 Ekip ve Görev Dağılımı

| İsim | Rol | Sorumluluklar |
| :--- | :--- | :--- |
| **Azra Topal** | Backend Geliştirici | `butceyoneticisi.cpp`, `veritabanı.cpp` kodlaması, mantıksal iş akışı ve veri işleme fonksiyonları. |
| **Şevval Türkan Kafes** | Frontend Geliştirici | Qt Designer form tasarımı (`.ui`), kullanıcı arayüzü bileşenleri ve görsel düzenlemeler. |
| **Nisanur Özpehlivan** | OOP Tasarım & Raporlama | Sınıf mimarisi (Header `.h` dosyaları), SQLite veritabanı şeması, UML diyagramı ve teknik proje raporu. |

---

## 🏗️ Proje Yapısı

Proje, model-görünüm ayrımına ve modüler tasarım ilkelerine uygun olarak yapılandırılmıştır:

```text
butce_takip/
│
├── .qtcreator/                 ← IDE konfigürasyon dosyaları
├── butce_takip-backups/         ← Yedekleme klasörü
│
├── 📁 Kaynak ve Başlık Dosyaları (.cpp / .h)
│   ├── main.cpp                ← Programın giriş noktası
│   ├── mainwindow.h/.cpp       ← Ana pencere yönetim mantığı
│   ├── butceyoneticisi.h/.cpp  ← Bütçe ve finansal lojik katmanı
│   ├── veritabanı.h/.cpp       ← SQLite bağlantısı ve SQL sorguları yönetimi
│   ├── harcamadialog.h/.cpp    ← Harcama ekleme/düzenleme penceresi
│   ├── hedefdialog.h/.cpp      ← Finansal hedef yönetim penceresi
│   └── rapordialog.h/.cpp      ← İstatistik ve analiz raporlama penceresi
│
├── 📁 Arayüz Formları (.ui)
│   ├── mainwindow.ui           ← Ana ekran tasarımı
│   ├── harcamadialog.ui        ← Harcama penceresi tasarımı
│   ├── hedefdialog.ui          ← Hedef belirleme ekranı tasarımı
│   └── rapordialog.ui          ← Raporlama ekranı tasarımı
│
└── 📁 Proje Yapılandırması
    ├── butce_takip.pro         ← Qt Proje yapılandırma dosyası
    └── butce_takip.kicad_pro   ← Proje metadata eşleşmesi
