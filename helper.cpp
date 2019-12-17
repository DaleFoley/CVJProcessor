#include "helper.h"

void helper::output_message(QString msg)
{
    QString timeStamp = helper::get_current_time();
    msg = timeStamp + msg;

    QTextStream out(stdout);
    out << msg << endl;
}

void helper::write_to_information_log(QString msg)
{
    QString timeStamp = helper::get_current_time();
    write_to_file(timeStamp + msg, "information.log");
}

void helper::write_to_error_log(QString msg)
{
    QString timeStamp = helper::get_current_time();
    write_to_file(timeStamp + msg, "error.log");
}

bool helper::copy_over_existing_file(QString pathSource, QString pathTarget)
{
    if(QFile::exists(pathTarget))
    {
        QFile::remove(pathTarget);
    }

    return QFile::copy(pathSource, pathTarget);
}

QString helper::get_current_time()
{
    QTime ts = QTime::currentTime();
    std::string timeStamp = "[" + std::to_string(ts.hour()) + ":" + std::to_string(ts.minute()) + ":" +
            std::to_string(ts.second()) + "." + std::to_string(ts.msec()) + "] ";

    return QString::fromStdString(timeStamp);
}

void helper::write_to_file(QString msg, QString fileName)
{
    msg = msg + "\n";

    QByteArray dataToWrite = msg.toUtf8();

    QFile file(fileName);
    file.open(QFile::OpenModeFlag::Append);
    file.write(dataToWrite, qstrlen(dataToWrite));

    file.close();
}

