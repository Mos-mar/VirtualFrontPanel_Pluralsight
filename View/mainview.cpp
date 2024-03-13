#include "mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "View/controltab.h"
#include "View/aboutbox.h"

namespace Ps{


MainView::MainView(QWidget *parent,SetupTab& setup,ControlTab& controlTab) :
    QMainWindow(parent),m_setupTab (setup), ui(new Ui::MainView)
{
    ui->setupUi(this);
    m_setupTab.setParent(this);
    controlTab.setParent(this);
    ui->loSetupTab->addWidget(&m_setupTab);
    ui->loControlTab->addWidget(&controlTab);

}

MainView::~MainView()
{
    delete ui;
}


void MainView::on_action_Exit_triggered()
{
    QApplication::quit();
}


void MainView::on_action_About_triggered()
{
    AboutBox about_box;
    about_box.show();
    about_box.exec();
}

}
