#pragma once
#include "Transaction.h"
#include <vector>
#include <string>
using namespace std;

// =============================================
// VERİTABANI SINIFI: DatabaseManager
// Ne: SQLite dosyasına okur/yazar
// Dosya: butce.db (program yanında oluşur)
// =============================================

class DatabaseManager {

private:
    string dbPath;   // Veritabanı dosyasının yolu

    // Tablo yoksa oluşturur (program ilk açılışta çalışır)
    void createTableIfNotExists();

public:

    // Constructor: dosya yolunu alır, tabloyu hazırlar
    DatabaseManager(string dbPath = "butce.db");

    // --- VERİTABANI İŞLEMLERİ ---

    // Yeni kayıt ekle (Income veya Expense)
    bool save(Transaction* t);

    // id'ye göre kaydı sil
    bool deleteById(int id);

    // id'ye göre kaydı güncelle
    bool updateById(int id, double newAmount, string newDesc);

    // Tüm kayıtları yükle (program açılışında çağrılır)
    // type "Gelir" ise Income, "Gider" ise Expense nesnesi oluşturur
    vector<Transaction*> loadAll();
};
