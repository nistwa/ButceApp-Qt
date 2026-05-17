#ifndef TRANSACTIONMANAGER_H
#define TRANSACTIONMANAGER_H

#include <QList>
#include "Transaction.h"
#include "Income.h"
#include "Expense.h"

// =====================================================
//  TRANSACTIONMANAGER  —  Is mantigi sinifi
//
//  Encapsulation : Tum liste private'ta
//  Polymorphism  : QList<Transaction*> hem Income hem
//                  Expense nesnelerini tasir
// =====================================================
class TransactionManager {
private:
    QList<Transaction*> transactions;  // polimorfik liste

public:
    TransactionManager();
    ~TransactionManager();

    // Ekleme
    void addIncome(double amount, const QString& category, const QDate& date);
    void addExpense(double amount, const QString& category, const QDate& date);

    // Silme
    bool removeTransaction(int id);

    // Sorgular
    double totalIncome()  const;
    double totalExpense() const;
    double netBalance()   const;

    // Listeleme
    QList<Transaction*> getAll()      const;
    QList<Transaction*> getByType(const QString& type) const;   // "Income" / "Expense"
    QList<Transaction*> getByCategory(const QString& cat) const;

    // Ozet
    QString getMonthlySummary(int month, int year) const;
};

#endif // TRANSACTIONMANAGER_H
