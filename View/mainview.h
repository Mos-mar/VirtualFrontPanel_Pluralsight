#ifndef MAINVIEW_H
#define MAINVIEW_H

//#include "View/setuptab.h"

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainView;
}
QT_END_NAMESPACE

namespace Ps {
class SetupTab;
class ControlTab;


class MainView : public QMainWindow
{
    Q_OBJECT

public:
    MainView(QWidget *parent , Ps::SetupTab &setup, ControlTab &controlTab);
    ~MainView();

private slots:
    void on_action_Exit_triggered();

    void on_action_About_triggered();

private:
    SetupTab& m_setupTab;

    Ui::MainView *ui;
};
} // end of namespace Ps
#endif // MAINVIEW_H
