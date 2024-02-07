#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QIcon>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QString authors = "Łukasz Prokop, Wojciech Tworek";


    a.setApplicationDisplayName("Music Center");
    a.setApplicationName("Music Center");
    a.setApplicationVersion("1.0");
    a.setWindowIcon(QIcon("music.icon"));



    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "MusicCenter_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }


    QString programLicense = "This program is open-source and available for everyone under the GNU General Public License";

    QString lameLicense = "The decoding functions provided in LAME use a version of the mpglib decoding engine which is under the GPL. They may not be used by any program not released under the GPL unless you obtain such permission from the MPG123 project (www.mpg123.de).";

    QString oggencLicense = "This program is distributed under the GNU General Public License, version 2. A copy of this license is included with this source. Copyright 2000-2005, Michael Smith <msmith@xiph.org> Portions from Vorbize, (c) Kenneth Arnold <kcarnold-xiph@arnoldnet.net and libvorbis examples, (c) Monty <monty@xiph.org>";

    QString disclaimer = programLicense + "\n\n" + lameLicense + "\n\n" + oggencLicense;

    a.setProperty("Authors", authors);
    a.setProperty("Disclaimer", disclaimer);

    MainWindow w;
    w.setWindowTitle("Music Center");

    w.show();
    return a.exec();
}
