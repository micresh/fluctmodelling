#ifndef LW1FORM_H
#define LW1FORM_H

#include <QWidget>

namespace Ui {
class LW1Form;
}

class LW1Form : public QWidget
{
    Q_OBJECT

public:
    explicit LW1Form(QWidget *parent = 0);
    ~LW1Form();

private:
    Ui::LW1Form *ui;
};

#endif // LW1FORM_H
