#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QIcon>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString authors = "Łukasz Prokop, Wojciech Tworek";

    QString disclaimer = "This program is open-source and available for everyone under the GNU General Public License";


    a.setApplicationDisplayName("Music Center");
    a.setApplicationName("Music Center");
    a.setApplicationVersion("0.3");
    a.setWindowIcon(QIcon("music.icon"));
    a.setProperty("Authors", authors);
    a.setProperty("Disclaimer", disclaimer);


    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "MusicCenter_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.setWindowTitle("Music Center");

    w.show();
    return a.exec();
}
