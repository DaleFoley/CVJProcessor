//TODO: Test file copy security, i.e what to do when we don't have permission to copy to specific path.

#include <QCoreApplication>
#include <QCommandLineParser>
#include <QDebug>

#include "helper.h"
#include "strings.h"

int main(int argc, char *argv[])
{
    try
    {
        QCoreApplication app(argc, argv);
        QCoreApplication::setApplicationVersion(strings::version);

        QCommandLineParser parser;
        parser.setApplicationDescription("CVJProcessor allows you to perform automation against a specific CVJ file.");
        parser.addHelpOption();
        parser.addVersionOption();

        //Start of setting up command line parameters
        QString sourceFileOptionDescription = QCoreApplication::translate("main", "The source file you want to copy to the target file.");
        QCommandLineOption sourceFileOption(strings::source, sourceFileOptionDescription, strings::source);
        parser.addOption(sourceFileOption);

        QString targetFileOptionDescription = QCoreApplication::translate("main", "The end-result file with all the specified modifications.");
        QCommandLineOption targetFileOption(strings::target, targetFileOptionDescription, strings::target);
        parser.addOption(targetFileOption);

        QString joineryOptionDescription = QCoreApplication::translate("main", "The joinery number to add to the target file.");
        QCommandLineOption joineryOption(strings::joinery, joineryOptionDescription, strings::joinery);
        parser.addOption(joineryOption);

        QString descriptionOptionDescription = QCoreApplication::translate("main", "The description to add to the target file.");
        QCommandLineOption descriptionOption(strings::description, joineryOptionDescription, strings::description);
        parser.addOption(descriptionOption);

        QString poOptionDescription = QCoreApplication::translate("main", "The PO number to add to the target file.");
        QCommandLineOption poOption(strings::po, poOptionDescription, strings::po);
        parser.addOption(poOption);

        QString customerNameOptionDescription = QCoreApplication::translate("main", "The customer name to add to the target file.");
        QCommandLineOption customerNameOption(strings::customerName, customerNameOptionDescription, strings::customerName);
        parser.addOption(customerNameOption);

        QString customerAddressOneOptionDescription = QCoreApplication::translate("main", "The customer address 1 to add to the target file.");
        QCommandLineOption customerAddressOneOption(strings::customerAddressOne, customerAddressOneOptionDescription,
                                                    strings::customerAddressOne);
        parser.addOption(customerAddressOneOption);

        QString customerAddressTwoOptionDescription = QCoreApplication::translate("main", "The customer address 2 to add to the target file.");
        QCommandLineOption customerAddressTwoOption(strings::customerAddressTwo, customerAddressTwoOptionDescription,
                                                    strings::customerAddressTwo);
        parser.addOption(customerAddressTwoOption);

        QString customerCityOptionDescription = QCoreApplication::translate("main", "The customer city to add to the target file.");
        QCommandLineOption customerCityOption(strings::customerCity, customerCityOptionDescription, strings::customerCity);
        parser.addOption(customerCityOption);

        QString customerEmailOptionDescription = QCoreApplication::translate("main", "The customer email to add to the target file.");
        QCommandLineOption customerEmailOption(strings::customerEmail, customerEmailOptionDescription, strings::customerEmail);
        parser.addOption(customerEmailOption);

        QString customerStateOptionDescription = QCoreApplication::translate("main", "The customer state to add to the target file.");
        QCommandLineOption customerStateOption(strings::customerState, customerStateOptionDescription, strings::customerState);
        parser.addOption(customerStateOption);

        QString customerZipOptionDescription = QCoreApplication::translate("main", "The customer ZIP to add to the target file.");
        QCommandLineOption customerZipOption(strings::customerZip, customerZipOptionDescription, strings::customerZip);
        parser.addOption(customerZipOption);

        QString customerPhoneOptionDescription = QCoreApplication::translate("main", "The customer phone to add to the target file.");
        QCommandLineOption customerPhoneOption(strings::customerPhone, customerPhoneOptionDescription, strings::customerPhone);
        parser.addOption(customerPhoneOption);

        QString customerMobileOptionDescription = QCoreApplication::translate("main", "The customer mobile to add to the target file.");
        QCommandLineOption customerMobileOption(strings::customerMobile, customerMobileOptionDescription, strings::customerMobile);
        parser.addOption(customerMobileOption);

        QString customerFaxOptionDescription = QCoreApplication::translate("main", "The customer fax to add to the target file.");
        QCommandLineOption customerFaxOption(strings::customerFax, customerFaxOptionDescription, strings::customerFax);
        parser.addOption(customerFaxOption);

        QString customerCommentOptionDescription = QCoreApplication::translate("main", "The customer comment to add to the target file.");
        QCommandLineOption customerCommentOption(strings::customerComment, customerCommentOptionDescription, strings::customerComment);
        parser.addOption(customerCommentOption);

        QString shipToNameOptionDescription = QCoreApplication::translate("main", "The shipTo name to add to the target file.");
        QCommandLineOption shipToNameOption(strings::shipToName, shipToNameOptionDescription, strings::shipToName);
        parser.addOption(shipToNameOption);

        QString shipToAddressOneOptionDescription = QCoreApplication::translate("main", "The shipTo address 1 to add to the target file.");
        QCommandLineOption shipToAddressOneOption(strings::shipToAddressOne, shipToAddressOneOptionDescription, strings::shipToAddressOne);
        parser.addOption(shipToAddressOneOption);

        QString shipToAddressTwoOptionDescription = QCoreApplication::translate("main", "The shipTo address 2 to add to the target file.");
        QCommandLineOption shipToAddressTwoOption(strings::shipToAddressTwo, shipToAddressTwoOptionDescription, strings::shipToAddressTwo);
        parser.addOption(shipToAddressTwoOption);

        QString shipToCityOptionDescription = QCoreApplication::translate("main", "The shipTo city to add to the target file.");
        QCommandLineOption shipToCityOption(strings::shipToCity, shipToCityOptionDescription, strings::shipToCity);
        parser.addOption(shipToCityOption);

        QString shipToEmailOptionDescription = QCoreApplication::translate("main", "The shipTo email to add to the target file.");
        QCommandLineOption shipToEmailOption(strings::shipToEmail, shipToEmailOptionDescription, strings::shipToEmail);
        parser.addOption(shipToEmailOption);

        QString shipToStateOptionDescription = QCoreApplication::translate("main", "The shipTo state to add to the target file.");
        QCommandLineOption shipToStateOption(strings::shipToState, shipToStateOptionDescription, strings::shipToState);
        parser.addOption(shipToStateOption);

        QString shipToZipOptionDescription = QCoreApplication::translate("main", "The shipTo ZIP to add to the target file.");
        QCommandLineOption shipToZipOption(strings::shipToZip, shipToZipOptionDescription, strings::shipToZip);
        parser.addOption(shipToZipOption);

        QString shipToPhoneOptionDescription = QCoreApplication::translate("main", "The shipTo phone to add to the target file.");
        QCommandLineOption shipToPhoneOption(strings::shipToPhone, shipToPhoneOptionDescription, strings::shipToPhone);
        parser.addOption(shipToPhoneOption);

        QString shipToMobileOptionDescription = QCoreApplication::translate("main", "The shipTo mobile to add to the target file.");
        QCommandLineOption shipToMobileOption(strings::shipToMobile, shipToMobileOptionDescription, strings::shipToMobile);
        parser.addOption(shipToMobileOption);

        QString shipToFaxOptionDescription = QCoreApplication::translate("main", "The shipTo fax to add to the target file.");
        QCommandLineOption shipToFaxOption(strings::shipToFax, shipToFaxOptionDescription, strings::shipToFax);
        parser.addOption(shipToFaxOption);

        QString shipToCommentOptionDescription = QCoreApplication::translate("main", "The shipTo comment to add to the target file.");
        QCommandLineOption shipToCommentOption(strings::shipToComment, shipToCommentOptionDescription, strings::shipToComment);
        parser.addOption(shipToCommentOption);
        //End of command line parameters

        parser.process(app);

        const QStringList args = parser.optionNames();

        QString logMsg = "";

        QString sourceFileValue = parser.value(sourceFileOption);
        QString targetFileValue = parser.value(targetFileOption);

        if (args.size() < 1 || (sourceFileValue == "" || targetFileValue == ""))
        {
            QString msg = QCoreApplication::translate("main", "Error: Must specify at least <" + strings::source.toUtf8() +
                                                      "> and <" + strings::target.toUtf8() + "> arguments.");

            helper::output_message(msg);
            parser.showHelp(1);
        }

        if(sourceFileValue == "")
        {
            logMsg = "Require a value for option <" + strings::source + ">";

            helper::output_message(logMsg);
            helper::write_to_information_log(logMsg);

            return -1;
        }

        if(targetFileValue == "")
        {
            logMsg = "Require a value for option <" + strings::target + ">";

            helper::output_message(logMsg);
            helper::write_to_information_log(logMsg);

            return -2;
        }

        if(!QFile::exists(sourceFileValue))
        {
            logMsg = "The source file [" + sourceFileValue + "] doesn't exist.";

            helper::output_message(logMsg);
            helper::write_to_information_log(logMsg);

            return -3;
        }

        QString joineryValue = parser.value(joineryOption);
        QString descriptionValue = parser.value(descriptionOption);
        QString poValue = parser.value(poOption);
        QString customerNameValue = parser.value(customerNameOption);
        QString customerAddressOneValue = parser.value(customerAddressOneOption);
        QString customerAddressTwoValue = parser.value(customerAddressTwoOption);
        QString customerCityOptionValue = parser.value(customerCityOption);
        QString customerEmailValue = parser.value(customerEmailOption);
        QString customerStateValue = parser.value(customerStateOption);
        QString customerZipValue = parser.value(customerZipOption);
        QString customerPhoneValue = parser.value(customerPhoneOption);
        QString customerMobileValue = parser.value(customerMobileOption);
        QString customerFaxValue = parser.value(customerFaxOption);
        QString customerCommentValue = parser.value(customerCommentOption);
        QString shipToNameValue = parser.value(shipToNameOption);
        QString shipToAddressOneValue = parser.value(shipToAddressOneOption);
        QString shipToAddressTwoValue = parser.value(shipToAddressTwoOption);
        QString shipToCityValue = parser.value(shipToCityOption);
        QString shipToEmailValue = parser.value(shipToEmailOption);
        QString shipToStateValue = parser.value(shipToStateOption);
        QString shipToZipValue = parser.value(shipToZipOption);
        QString shipToPhoneValue = parser.value(shipToPhoneOption);
        QString shipToMobileValue = parser.value(shipToMobileOption);
        QString shipToFaxValue = parser.value(shipToFaxOption);
        QString shipToCommentValue = parser.value(shipToCommentOption);

        return app.exec();
    }
    catch(std::exception & e)
    {
        helper::write_to_error_log(e.what());
    }
    catch(...)
    {
        //Anything else would be unexpected, at least log these occurrences..
        helper::write_to_error_log("Unexpected error.");
    }
}
