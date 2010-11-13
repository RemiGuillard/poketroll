/********************************************************************************
** Form generated from reading ui file 'pokedex.ui'
**
** Created: Sat Nov 13 12:00:31 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_POKEDEX_H
#define UI_POKEDEX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pokedex
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *tab;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pokedex)
    {
        if (Pokedex->objectName().isEmpty())
            Pokedex->setObjectName(QString::fromUtf8("Pokedex"));
        Pokedex->resize(468, 578);
        Pokedex->setMaximumSize(QSize(468, 578));
        centralwidget = new QWidget(Pokedex);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(450, 517));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(170, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        tabWidget->setPalette(palette);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(false);
        textBrowser->setGeometry(QRect(234, 50, 201, 431));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(255, 170, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        textBrowser->setPalette(palette1);
        textBrowser_2 = new QTextBrowser(tab);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setEnabled(false);
        textBrowser_2->setGeometry(QRect(9, 256, 221, 225));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        textBrowser_2->setPalette(palette2);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 221, 241));
        groupBox->setMinimumSize(QSize(221, 241));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(85, 170, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        groupBox->setPalette(palette3);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 20, 75, 23));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 20, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(221, 231));

        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        textBrowser_3 = new QTextBrowser(tab_2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setEnabled(false);

        gridLayout_2->addWidget(textBrowser_3, 0, 1, 2, 1);

        textBrowser_4 = new QTextBrowser(tab_2);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setEnabled(false);

        gridLayout_2->addWidget(textBrowser_4, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        Pokedex->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Pokedex);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 468, 22));
        Pokedex->setMenuBar(menubar);
        statusbar = new QStatusBar(Pokedex);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Pokedex->setStatusBar(statusbar);

        retranslateUi(Pokedex);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Pokedex);
    } // setupUi

    void retranslateUi(QMainWindow *Pokedex)
    {
        Pokedex->setWindowTitle(QApplication::translate("Pokedex", "MainWindow", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Pokedex", "Page", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Pokedex", "GroupBox", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Pokedex", "create team", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Pokedex", "validate team", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Pokedex", "Tab 1", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Pokedex", "GroupBox", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Pokedex", "Tab 2", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Pokedex);
    } // retranslateUi

};

namespace Ui {
    class Pokedex: public Ui_Pokedex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKEDEX_H
