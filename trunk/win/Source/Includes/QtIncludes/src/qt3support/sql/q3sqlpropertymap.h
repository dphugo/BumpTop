/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt3Support module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef Q3SQLPROPERTYMAP_H
#define Q3SQLPROPERTYMAP_H

#include <QtCore/qvariant.h>
#include <QtCore/qstring.h>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Qt3Support)

#ifndef QT_NO_SQL_FORM

class QWidget;
class Q3SqlPropertyMapPrivate;

class Q_COMPAT_EXPORT Q3SqlPropertyMap
{
public:
    Q3SqlPropertyMap();
    virtual ~Q3SqlPropertyMap();

    QVariant      property(QWidget * widget);
    virtual void  setProperty(QWidget * widget, const QVariant & value);

    void insert(const QString & classname, const QString & property);
    void remove(const QString & classname);

    static Q3SqlPropertyMap * defaultMap();
    static void installDefaultMap(Q3SqlPropertyMap * map);

private:
    Q_DISABLE_COPY(Q3SqlPropertyMap)

    Q3SqlPropertyMapPrivate* d;
};

#endif // QT_NO_SQL_FORM

QT_END_NAMESPACE

QT_END_HEADER

#endif // Q3SQLPROPERTYMAP_H