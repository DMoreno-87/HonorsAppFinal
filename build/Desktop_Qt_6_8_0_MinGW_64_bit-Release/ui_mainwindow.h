/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SetCaloricMacroGoals;
    QPushButton *ViewFoodExerciseDay;
    QPushButton *LogFood;
    QPushButton *LogExercise;
    QPushButton *ViewProfile;
    QPushButton *EditProfile;
    QPushButton *Exit;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *viewTutorials;
    QLabel *label_8;
    QLabel *gifLabel;
    QLabel *descriptionLabel;
    QPushButton *closeButton;
    QComboBox *comboBox;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(309, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setIconSize(QSize(21, 21));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SetCaloricMacroGoals = new QPushButton(centralwidget);
        SetCaloricMacroGoals->setObjectName("SetCaloricMacroGoals");
        SetCaloricMacroGoals->setGeometry(QRect(40, 10, 101, 101));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/pie-chart-icon.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SetCaloricMacroGoals->setIcon(icon);
        SetCaloricMacroGoals->setIconSize(QSize(100, 100));
        ViewFoodExerciseDay = new QPushButton(centralwidget);
        ViewFoodExerciseDay->setObjectName("ViewFoodExerciseDay");
        ViewFoodExerciseDay->setGeometry(QRect(170, 10, 100, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(127, 127, 127, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        ViewFoodExerciseDay->setPalette(palette);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/Calendar.JPG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ViewFoodExerciseDay->setIcon(icon1);
        ViewFoodExerciseDay->setIconSize(QSize(100, 100));
        LogFood = new QPushButton(centralwidget);
        LogFood->setObjectName("LogFood");
        LogFood->setGeometry(QRect(41, 130, 100, 100));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons/fork-and-knife-in-circle-icon-vector-14409094.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogFood->setIcon(icon2);
        LogFood->setIconSize(QSize(100, 100));
        LogExercise = new QPushButton(centralwidget);
        LogExercise->setObjectName("LogExercise");
        LogExercise->setGeometry(QRect(170, 130, 100, 100));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons/body-building-muscle-icon-vector-47093237.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LogExercise->setIcon(icon3);
        LogExercise->setIconSize(QSize(171, 150));
        ViewProfile = new QPushButton(centralwidget);
        ViewProfile->setObjectName("ViewProfile");
        ViewProfile->setGeometry(QRect(41, 250, 100, 100));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons/default-profile-picture-avatar-user-avatar-icon-person-icon-head-icon-profile-picture-icons-default-anonymous-user-male-and-female-businessman-photo-placeholder-social-n.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ViewProfile->setIcon(icon4);
        ViewProfile->setIconSize(QSize(100, 100));
        EditProfile = new QPushButton(centralwidget);
        EditProfile->setObjectName("EditProfile");
        EditProfile->setGeometry(QRect(172, 251, 100, 100));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("icons/Pencil.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditProfile->setIcon(icon5);
        EditProfile->setIconSize(QSize(100, 100));
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName("Exit");
        Exit->setGeometry(QRect(172, 370, 100, 100));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("icons/9-97279_door-vector-png-transparent-background-door-icon-png.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Exit->setIcon(icon6);
        Exit->setIconSize(QSize(100, 100));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 500, 271, 61));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(42, 102, 101, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setKerning(true);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(193, 103, 61, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(67, 222, 61, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(185, 227, 81, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(59, 350, 71, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(190, 350, 71, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 470, 21, 16));
        viewTutorials = new QPushButton(centralwidget);
        viewTutorials->setObjectName("viewTutorials");
        viewTutorials->setGeometry(QRect(41, 370, 100, 100));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("icons/vector-dumbbell-icon2.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        viewTutorials->setIcon(icon7);
        viewTutorials->setIconSize(QSize(100, 100));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(43, 470, 101, 20));
        gifLabel = new QLabel(centralwidget);
        gifLabel->setObjectName("gifLabel");
        gifLabel->setGeometry(QRect(40, 10, 231, 231));
        descriptionLabel = new QLabel(centralwidget);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(40, 250, 231, 241));
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(250, 10, 21, 22));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 500, 271, 61));
        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SetCaloricMacroGoals->setText(QString());
        ViewFoodExerciseDay->setText(QString());
        LogFood->setText(QString());
        Exit->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Set Nutrition Goal", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "View Logs", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Log Food", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Log Exercises", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "View Profile", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Edit Profile", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        viewTutorials->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Exercise Tutorials", nullptr));
        gifLabel->setText(QString());
        descriptionLabel->setText(QString());
        closeButton->setText(QCoreApplication::translate("MainWindow", "[X]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
