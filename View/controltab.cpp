#include "controltab.h"
#include "ui_controltab.h"
#include "utils.h"


namespace Ps{
ControlTab::ControlTab(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ControlTab)
{
    ui->setupUi(this);
}

ControlTab::~ControlTab()
{
    Utils::DestructorMsg(this);
    delete ui;
}

void ControlTab::EnablePanel(bool isEnabled)
{
    ui->ControlTabPanel->setEnabled(isEnabled);
}


void ControlTab::on_spinPulseWidth_valueChanged(double value)
{
    emit NotifyPulseWidthChanged(value);
}

}
