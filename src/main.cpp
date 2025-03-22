// SPDX-FileCopyrightText: 2025 Daniil Markevich
// SPDX-License-Identifier: BSD-3-Clause

#include <auroraapp.h>
#include <QtQuick>

int main(int argc, char *argv[])
{
    QScopedPointer<QGuiApplication> application(Aurora::Application::application(argc, argv));
    application->setOrganizationName(QStringLiteral("ru.kotdath"));
    application->setApplicationName(QStringLiteral("AuroraRaylibObjViewer"));

    QScopedPointer<QQuickView> view(Aurora::Application::createView());
    view->setSource(Aurora::Application::pathTo(QStringLiteral("qml/AuroraRaylibObjViewer.qml")));
    view->show();

    return application->exec();
}
