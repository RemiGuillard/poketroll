/********************************************************************************
** Form generated from reading ui file 'pokedex.ui'
**
** Created: Sat 13. Nov 17:50:48 2010
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
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
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
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *pushButton;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *pokeImg;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QGroupBox *pokeIdNom;
    QListWidget *pokeList;
    QGroupBox *pokeStats;
    QGroupBox *pokeDescription;
    QTabWidget *pokeEvoAttack;
    QWidget *pokeEvo;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listEvo;
    QWidget *pokeAttack;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listAttack;
    QWidget *Team;
    QGridLayout *gridLayout_2;
    QGroupBox *Image;
    QLabel *image;
    QGroupBox *Equipe;
    QLabel *nomEquipe;
    QTextBrowser *pokemonList;
    QGroupBox *pokeData;
    QGroupBox *teamManagement;
    QTextBrowser *pokeTeamList;
    QListWidget *teamList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pokedex)
    {
        if (Pokedex->objectName().isEmpty())
            Pokedex->setObjectName(QString::fromUtf8("Pokedex"));
        Pokedex->resize(795, 704);
        Pokedex->setMinimumSize(QSize(795, 704));
        centralwidget = new QWidget(Pokedex);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(777, 643));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        tabWidget->setPalette(palette);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 350, 161, 51));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pokeImg = new QGroupBox(tab);
        pokeImg->setObjectName(QString::fromUtf8("pokeImg"));
        pokeImg->setMinimumSize(QSize(151, 141));
        horizontalLayout = new QHBoxLayout(pokeImg);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(pokeImg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        gridLayout->addWidget(pokeImg, 0, 0, 1, 1);

        pokeIdNom = new QGroupBox(tab);
        pokeIdNom->setObjectName(QString::fromUtf8("pokeIdNom"));
        pokeIdNom->setMinimumSize(QSize(351, 141));

        gridLayout->addWidget(pokeIdNom, 0, 1, 1, 2);

        pokeList = new QListWidget(tab);
        pokeList->setObjectName(QString::fromUtf8("pokeList"));
        pokeList->setMinimumSize(QSize(241, 571));

        gridLayout->addWidget(pokeList, 0, 3, 3, 1);

        pokeStats = new QGroupBox(tab);
        pokeStats->setObjectName(QString::fromUtf8("pokeStats"));
        pokeStats->setMinimumSize(QSize(211, 411));

        gridLayout->addWidget(pokeStats, 1, 0, 2, 2);

        pokeDescription = new QGroupBox(tab);
        pokeDescription->setObjectName(QString::fromUtf8("pokeDescription"));
        pokeDescription->setMinimumSize(QSize(281, 131));

        gridLayout->addWidget(pokeDescription, 1, 2, 1, 1);

        pokeEvoAttack = new QTabWidget(tab);
        pokeEvoAttack->setObjectName(QString::fromUtf8("pokeEvoAttack"));
        pokeEvoAttack->setMinimumSize(QSize(281, 261));
        pokeEvo = new QWidget();
        pokeEvo->setObjectName(QString::fromUtf8("pokeEvo"));
        horizontalLayout_2 = new QHBoxLayout(pokeEvo);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listEvo = new QListWidget(pokeEvo);
        listEvo->setObjectName(QString::fromUtf8("listEvo"));

        horizontalLayout_2->addWidget(listEvo);

        pokeEvoAttack->addTab(pokeEvo, QString());
        pokeAttack = new QWidget();
        pokeAttack->setObjectName(QString::fromUtf8("pokeAttack"));
        horizontalLayout_3 = new QHBoxLayout(pokeAttack);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listAttack = new QListWidget(pokeAttack);
        listAttack->setObjectName(QString::fromUtf8("listAttack"));

        horizontalLayout_3->addWidget(listAttack);

        pokeEvoAttack->addTab(pokeAttack, QString());

        gridLayout->addWidget(pokeEvoAttack, 2, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        Team = new QWidget();
        Team->setObjectName(QString::fromUtf8("Team"));
        gridLayout_2 = new QGridLayout(Team);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Image = new QGroupBox(Team);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setMinimumSize(QSize(131, 121));
        image = new QLabel(Image);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(30, 20, 81, 81));

        gridLayout_2->addWidget(Image, 0, 0, 1, 1);

        Equipe = new QGroupBox(Team);
        Equipe->setObjectName(QString::fromUtf8("Equipe"));
        Equipe->setMinimumSize(QSize(351, 121));
        nomEquipe = new QLabel(Equipe);
        nomEquipe->setObjectName(QString::fromUtf8("nomEquipe"));
        nomEquipe->setGeometry(QRect(10, 20, 321, 91));

        gridLayout_2->addWidget(Equipe, 0, 1, 1, 2);

        pokemonList = new QTextBrowser(Team);
        pokemonList->setObjectName(QString::fromUtf8("pokemonList"));
        pokemonList->setEnabled(false);
        pokemonList->setMinimumSize(QSize(256, 601));

        gridLayout_2->addWidget(pokemonList, 0, 3, 3, 1);

        pokeData = new QGroupBox(Team);
        pokeData->setObjectName(QString::fromUtf8("pokeData"));
        pokeData->setMinimumSize(QSize(231, 231));

        gridLayout_2->addWidget(pokeData, 1, 0, 1, 2);

        teamManagement = new QGroupBox(Team);
        teamManagement->setObjectName(QString::fromUtf8("teamManagement"));
        teamManagement->setMinimumSize(QSize(251, 231));

        gridLayout_2->addWidget(teamManagement, 1, 2, 1, 1);

        pokeTeamList = new QTextBrowser(Team);
        pokeTeamList->setObjectName(QString::fromUtf8("pokeTeamList"));
        pokeTeamList->setEnabled(false);
        pokeTeamList->setMinimumSize(QSize(231, 231));

        gridLayout_2->addWidget(pokeTeamList, 2, 0, 1, 2);

        teamList = new QListWidget(Team);
        teamList->setObjectName(QString::fromUtf8("teamList"));
        teamList->setMinimumSize(QSize(251, 231));

        gridLayout_2->addWidget(teamList, 2, 2, 1, 1);

        tabWidget->addTab(Team, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        Pokedex->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Pokedex);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 795, 22));
        Pokedex->setMenuBar(menubar);
        statusbar = new QStatusBar(Pokedex);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Pokedex->setStatusBar(statusbar);

        retranslateUi(Pokedex);

        tabWidget->setCurrentIndex(2);
        pokeEvoAttack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Pokedex);
    } // setupUi

    void retranslateUi(QMainWindow *Pokedex)
    {
        Pokedex->setWindowTitle(QApplication::translate("Pokedex", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Pokedex", "PushButton", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Pokedex", "Dresseur", 0, QApplication::UnicodeUTF8));
        pokeImg->setTitle(QApplication::translate("Pokedex", "PokeImg", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Pokedex", "image", 0, QApplication::UnicodeUTF8));
        pokeIdNom->setTitle(QApplication::translate("Pokedex", "Infos", 0, QApplication::UnicodeUTF8));
        pokeStats->setTitle(QApplication::translate("Pokedex", "Stats", 0, QApplication::UnicodeUTF8));
        pokeDescription->setTitle(QApplication::translate("Pokedex", "Description", 0, QApplication::UnicodeUTF8));
        pokeEvoAttack->setTabText(pokeEvoAttack->indexOf(pokeEvo), QApplication::translate("Pokedex", "Evolution", 0, QApplication::UnicodeUTF8));
        pokeEvoAttack->setTabText(pokeEvoAttack->indexOf(pokeAttack), QApplication::translate("Pokedex", "attaques", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Pokedex", "Pokemon", 0, QApplication::UnicodeUTF8));
        Image->setTitle(QApplication::translate("Pokedex", "GroupBox", 0, QApplication::UnicodeUTF8));
        image->setText(QApplication::translate("Pokedex", "TextLabel", 0, QApplication::UnicodeUTF8));
        Equipe->setTitle(QApplication::translate("Pokedex", "GroupBox", 0, QApplication::UnicodeUTF8));
        nomEquipe->setText(QApplication::translate("Pokedex", "TextLabel", 0, QApplication::UnicodeUTF8));
        pokeData->setTitle(QApplication::translate("Pokedex", "GroupBox", 0, QApplication::UnicodeUTF8));
        teamManagement->setTitle(QApplication::translate("Pokedex", "GroupBox", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Team), QApplication::translate("Pokedex", "Team", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Pokedex);
    } // retranslateUi

};

namespace Ui {
    class Pokedex: public Ui_Pokedex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKEDEX_H
