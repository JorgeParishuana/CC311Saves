#include "Error in " Util.relativeFilePath('D:/LEARIN/uni/githubClones/CC311Saves/demo.h', 'D:/LEARIN/uni/githubClones/CC311Saves' + '/' + Util.path('demo.cpp'))": SyntaxError: Expected token `)'"
#include "ui_demo.h"

demo::demo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::demo)
{
    ui->setupUi(this);
}

demo::~demo()
{
    delete ui;
}

