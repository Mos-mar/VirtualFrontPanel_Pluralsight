#pragma once
#include <QObject>
#include "Model/instsocket.h"


namespace Ps{
class InstSocket;

class Instrument : public QObject
{
    Q_OBJECT
public:
    explicit Instrument(QObject *parent, InstSocket& sock);
    virtual ~Instrument();
    void Connect() const;
    void Disconnect() const;
    bool IsConnected() const;
    QString GetHostName() const;
    quint16 GetPort() const;
    void SetLongWaitMs(int value);
    void SetShortWaitMs(int value);

signals:
    void NotifyConnected() const;
    void NotifyDisconnected() const;
    void NotifyDataSent(const QString& dataSent) const;
    void NotifyDataReceived(const QString& dataReceived) const;
    void NotifyErrorDectected(const QString& errorMsg) const;
    void NotifyStatusUpdated(const QString& statusMsg) const;

public slots:
    void onHostNameChanged(const QString& hostName);
    void onPortChanged(quint16 port);
    void onConnected();
    void onDisconnected();
    void onSendRequest(const QString& dataToSend);
    void onReceiveRequest();
    void onPulseWidthChanged(double value);


private:
    InstSocket& m_instSocket;
    QString m_lastCommandSent;

    void WireConnections();

    explicit Instrument(const Instrument& rhs) = delete;
    Instrument& operator= (const Instrument& rhs) = delete;
};
}


