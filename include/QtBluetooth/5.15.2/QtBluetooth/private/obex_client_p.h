/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p obex_client_p.h:obex_client.cpp org.openobex.client.xml org.openobex.Client
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OBEX_CLIENT_P_H
#define OBEX_CLIENT_P_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.openobex.Client
 */
class OrgOpenobexClientInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.openobex.Client"; }

public:
    OrgOpenobexClientInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgOpenobexClientInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath> CreateSession(const QVariantMap &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("CreateSession"), argumentList);
    }

    inline QDBusPendingReply<> ExchangeBusinessCards(const QVariantMap &in0, const QString &in1, const QString &in2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2);
        return asyncCallWithArgumentList(QStringLiteral("ExchangeBusinessCards"), argumentList);
    }

    inline QDBusPendingReply<QString> GetCapabilities(const QVariantMap &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("GetCapabilities"), argumentList);
    }

    inline QDBusPendingReply<> PullBusinessCard(const QVariantMap &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("PullBusinessCard"), argumentList);
    }

    inline QDBusPendingReply<> SendFiles(const QVariantMap &in0, const QStringList &in1, const QDBusObjectPath &in2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2);
        return asyncCallWithArgumentList(QStringLiteral("SendFiles"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace openobex {
    typedef ::OrgOpenobexClientInterface Client;
  }
}
#endif