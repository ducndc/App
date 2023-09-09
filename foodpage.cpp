#include "foodpage.h"
#include "ui_foodpage.h"

FoodPage::FoodPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FoodPage)
{
    ui->setupUi(this);
}

FoodPage::~FoodPage()
{
    delete ui;
}
