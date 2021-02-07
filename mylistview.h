#ifndef MYLISTVIEW_H
#define MYLISTVIEW_H

#include <QObject>
#include <QWidget>
#include <QStringListModel>
#include <QListView>
#include <QDialog>
class MyListView : public QDialog
{
   Q_OBJECT
public:

    MyListView();
   // ~MyListView();

    private:
    QStringListModel * model;
    QListView* listView;
 signals:

 public slots:
    void insertData();
    void deleteData();
    void showData();
};

#endif // MYLISTVIEW_H
