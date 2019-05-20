#include "Seminar6.h"
#include "Repository.h"
#include "CSVPlaylist.h"
#include "Controller.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository repo{ "Songs.txt" };
	CSVPlaylist playlist{};
	SongValidator valid{};
	Controller ctr{ repo, playlist, valid };
	Seminar6 w{ ctr };
	w.show();
	return a.exec();
}
