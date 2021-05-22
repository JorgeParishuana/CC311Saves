#ifndef DEMO_H
#define DEMO_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class demo; }
QT_END_NAMESPACE

class demo : public QWidget
{
    Q_OBJECT

public:
    demo(QWidget *parent = nullptr);
    ~demo();

private:
    Ui::demo *ui;
};
#endif // DEMO_H
