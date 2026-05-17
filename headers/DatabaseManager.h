#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QList>
#include "Transaction.h"
#include "Income.h"
#include "Expense.h"

// =====================================================
//  DATABASEMANAGER  —  SQLite islemleri
//  Encapsulation: SQL detaylari disaridan gizli
// =====================================================
class DatabaseManager {
private:
    QSqlDatabase db;

    bool createTables();  // ilk acilista tablolari olustur

public:
    DatabaseManager();
    ~DatabaseManager();

    bool connect(const QString& dbPath = "butce.db");

    // Kaydetme
    bool saveTransaction(Transaction* t);

    // Silme
    bool deleteTransaction(int id);

    // Yukleme — veritabanindan butun kayitlari getir
    QList<Transaction*> loadAll();
};

#endif // DATABASEMANAGER_H
