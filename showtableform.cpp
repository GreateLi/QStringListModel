#include "showtableform.h"
#include "ui_showtableform.h"

ShowTableForm::ShowTableForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowTableForm), mModel(new QStandardItemModel())
{
    ui->setupUi(this);
    mModel->setHorizontalHeaderItem(0, new QStandardItem(QObject::tr("Name")));
    mModel->setHorizontalHeaderItem(1, new QStandardItem(QObject::tr("Type")));
    mModel->setHorizontalHeaderItem(2, new QStandardItem(QObject::tr("Size")));
    mModel->setHorizontalHeaderItem(3, new QStandardItem(QObject::tr("Time")));

    for(int i =0;i<5;i++)
    {

        QList<QStandardItem *> item;
        item.append(new QStandardItem(QObject::tr("Qt.css")));
        item.append(new QStandardItem(QObject::tr("css")));
        item.append(new QStandardItem(QObject::tr("100KB")));
        item.append(new QStandardItem(QObject::tr("2016-1-10")));
        mModel->appendRow(item);
    }


    ui->mtableView->setModel(mModel);
}

ShowTableForm::~ShowTableForm()
{
    delete ui;
}
