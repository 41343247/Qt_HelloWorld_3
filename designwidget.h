#ifndef DESIGNWIDGET_H
#define DESIGNWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class DesignWidget;
}
QT_END_NAMESPACE

class DesignWidget : public QWidget
{
<<<<<<< HEAD
    Q_OBJECT    //macro for qt class only
=======
    Q_OBJECT
>>>>>>> 51c8a3ae7e8caba3f372491fdfbb20b17922e65b

public:
    DesignWidget(QWidget *parent = nullptr);
    ~DesignWidget();

private:
    Ui::DesignWidget *ui;
};
#endif // DESIGNWIDGET_H
