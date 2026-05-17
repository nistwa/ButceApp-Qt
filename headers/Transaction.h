#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QString>
#include <QDate>

class Transaction {
protected:
    int id;
    double amount;
    QString category;
    QDate date;

public:
    Transaction(double amt, QString cat, QDate dt) : amount(amt), category(cat), date(dt) {}
    virtual ~Transaction() {}

    // Saf sanal fonksiyon (Pure Virtual) - OOP kavramı!
    virtual QString getType() const = 0; 
    
    // Getterlar
    double getAmount() const { return amount; }
    QString getCategory() const { return category; }
    QDate getDate() const { return date; }
};

#endif
