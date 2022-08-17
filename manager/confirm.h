#ifndef CONFIRM_H
#define CONFIRM_H

#include <QDialog>

namespace Ui {
class confirm;
}

class confirm : public QDialog
{
    Q_OBJECT

public:
    explicit confirm(QWidget *parent = nullptr);
    ~confirm();
    bool ok;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::confirm *ui;
};

#endif // CONFIRM_H
