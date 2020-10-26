#include "Dialog1.h"
#include <QRegExpValidator>
DlgFirst::DlgFirst(QWidget* parent) {
	ui = new Dialog1();
	ui->setupUi(this);
	QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
	ui->lineEdit->setValidator(new QRegExpValidator(regExp, this));
}

DlgFirst::~DlgFirst()
{
	if (ui) delete ui;
}
