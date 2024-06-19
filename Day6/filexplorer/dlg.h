#ifndef DLG_H
#define DLG_H

#include <QDialog>
#include <QFileSystemModel>
#include <QSplitter>
#include <QHBoxLayout>
#include <QTreeView>
#include <QListView>
#include <QString>

class Dlg : public QDialog {
Q_OBJECT
private:
	QSplitter *pSplitter;
	QTreeView *pTreeView;
	QListView *pListView;
	QHBoxLayout *pLayout;

	QFileSystemModel *pDriveModel;
	QFileSystemModel *pFileModel;
private slots:
	void onTreeViewClicked(const QModelIndex &index);
signals:
public:
	Dlg();
	~Dlg();
};

#endif /* DLG_H */
