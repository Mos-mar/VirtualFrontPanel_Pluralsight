#pragma once
#include <QObject>


namespace Ps {
class MainView;
class SetupTab;
class Instrument;
class SetupViewManager;
class ControlTab;
class ControlTabViewManager;

class Startup final : public QObject
{
    Q_OBJECT
public:
    explicit Startup();
    void show() const;
    ~Startup();



private:
    Instrument* m_instrument;
    SetupTab& m_setupTab;
    ControlTab& m_controlTab;
    MainView& m_mainView;
    SetupViewManager* m_setupVm;
    ControlTabViewManager* m_controlTabVm;


    explicit Startup(const Startup &rhs) = delete;
    Startup &operator=(const Startup &rhs) = delete;
};
} // namespace Ps
