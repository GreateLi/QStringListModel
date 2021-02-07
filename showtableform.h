#ifndef SHOWTABLEFORM_H
#define SHOWTABLEFORM_H

#include <QWidget>
#include <QStandardItemModel>
namespace Ui {
class ShowTableForm;
}

class ShowTableForm : public QWidget
{
    Q_OBJECT

public:
    explicit ShowTableForm(QWidget *parent = 0);
    ~ShowTableForm();

private:
    Ui::ShowTableForm *ui;
    QStandardItemModel* mModel;
};

#endif // SHOWTABLEFORM_H
