#pragma once
#ifndef DIALOG1_H_
#define DIALOG1_H_
#include "ui_Dialog1.h"
#include <QDialog>
class DlgFirst :public QDialog, public Ui::Dialog1
{
	Q_OBJECT
public:
	DlgFirst(QWidget* parent = 0);
	~DlgFirst();
private:
	Dialog1* ui;
};
#endif // !DIALOG1_H_
