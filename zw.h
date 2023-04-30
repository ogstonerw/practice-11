#ifndef ZW_H
#define ZW_H

#include <QDialog>

namespace Ui {
class ZW;
}

class ZW : public QDialog
{
    Q_OBJECT

public:
    explicit ZW(QWidget *parent = nullptr);
    ~ZW();

private:
    Ui::ZW *ui;
};

#endif // ZW_H
