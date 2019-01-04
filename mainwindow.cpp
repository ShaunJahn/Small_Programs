#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "staffwriter.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->typeCombo->addItem("Permanent");
    ui->typeCombo->addItem("Part-time");
    ui->typeCombo->addItem("Contract");

    connect(ui->processButton, SIGNAL(clicked()), this, SLOT(process()));
}

void MainWindow::process()
{
    QString name = ui->name->text();
    QDate date = ui->date->date();
    QString type = ui->typeCombo->currentText();

    Staff staff(name, date, type);
    list.addStaff(staff);

    StaffWriter writer(staff);
    if (writer.writeToFile())
        QMessageBox::information(this, "Output", "Staff detail saved and written to file");
    else
        QMessageBox::information(this, "Output", "Staff detail saved and not written to file");

    ui->name->clear();
    ui->name->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}
