#pragma once
#include <QObject>

namespace Ps {

class ControlTab;
class Instrument;

class ControlTabViewManager : public QObject
{
    Q_OBJECT
public:
    explicit ControlTabViewManager(QObject *parent, ControlTab& ctrlTab, Instrument& inst);
    ~ControlTabViewManager();
public slots:
    void onConnected();
    void onDisconnected();
private:
    ControlTab& m_controlTab;
    Instrument& m_instrument;

    void WireControls();
    void WireConnected();
    explicit ControlTabViewManager(const ControlTabViewManager &rhs) = delete;
    ControlTabViewManager &operator=(const ControlTabViewManager &rhs) = delete;
};
} // namespace Ps
