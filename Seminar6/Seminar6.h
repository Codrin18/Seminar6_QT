#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Seminar6.h"
#include "Controller.h"
#include <QListWidget>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Seminar6 : public QWidget
{
	Q_OBJECT

public:
	Seminar6(Controller& ctrl, QWidget *parent = 0);
	~Seminar6();

private:
	Controller& ctrl;
	std::vector<Song> currentSongsInRepoList;
	//Ui::Seminar6Class ui;

	QListWidget* repoList;
	QLineEdit* titleEdit;
	QLineEdit* artistEdit;
	QLineEdit* durationEdit;
	QLineEdit* linkEdit;
	QPushButton* addButton;
	QPushButton* deleteButton;
	QPushButton* filterButton;
	QPushButton* moveOneSongButton;

	QListWidget* playList;

	void initGUI();
	void populateRepoList();
	int getRepoListSelectedIndex();

	void connectSignalsAndSlots();

private slots:
	// When an item in the list is clicked, the text boxes get filled with the item's information
	void listItemChanged();

	void addNewSong();
};
