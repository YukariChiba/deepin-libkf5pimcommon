/*
   SPDX-FileCopyrightText: 2017-2021 Laurent Montel <montel@kde.org>

   SPDX-License-Identifier: LGPL-2.0-or-later
*/

#pragma once

#include <QWidget>

class LogActivitiesMainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit LogActivitiesMainWidget(QWidget *parent = nullptr);
    ~LogActivitiesMainWidget() override = default;

private:
    void slotOpenDialog();
    void slotClearLog();
    void slotEnableLogActivities(bool enable);
    void slotAddLog();
};

