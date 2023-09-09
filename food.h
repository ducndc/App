#ifndef FOOD_H
#define FOOD_H

#include <QWidget>

namespace Ui {
class Food;
}

class Food : public QWidget
{
    Q_OBJECT

public:
    explicit Food(QWidget *parent = nullptr);
    ~Food();

private:
    Ui::Food *ui;
};

#endif // FOOD_H
