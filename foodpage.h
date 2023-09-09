#ifndef FOODPAGE_H
#define FOODPAGE_H

#include <QWidget>

namespace Ui {
class FoodPage;
}

class FoodPage : public QWidget
{
    Q_OBJECT

public:
    explicit FoodPage(QWidget *parent = nullptr);
    ~FoodPage();

private:
    Ui::FoodPage *ui;
};

#endif // FOODPAGE_H
