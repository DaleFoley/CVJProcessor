#ifndef HELPER_H
#define HELPER_H

#include <QString>
#include <QDebug>
#include <QFile>
#include <QTime>

class helper
{
public:
    void static output_message(QString msg);
    void static write_to_information_log(QString msg);
    void static write_to_error_log(QString msg);

    bool static copy_over_existing_file(QString pathSource, QString pathTarget);

    QString static get_current_time();

private:
    void static write_to_file(QString msg, QString fileName);
};

#endif // HELPER_H
