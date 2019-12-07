#include "helper.h"

void helper::output_message(QString msg)
{
    QTextStream out(stdout);
    out << msg << endl;
}

void helper::write_to_information_log(QString msg)
{
    write_to_file(msg, "information.log");
}

void helper::write_to_error_log(QString msg)
{
    write_to_file(msg, "error.log");
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

