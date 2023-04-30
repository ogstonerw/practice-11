#ifndef WW_H
#define WW_H

#include <QDialog>

namespace Ui {
class WW;
}

class WW : public QDialog
{
    Q_OBJECT

public:
    explicit WW(QWidget *parent = nullptr);
    ~WW();

private:
    Ui::WW *ui;
};

#endif // WW_H
