#include "dlg.h"

Dlg::Dlg() {
	pSplitter = new QSplitter;
	
	QString path = "/";	

	pDriveModel = new QFileSystemModel(this);
	pDriveModel->setFilter( QDir::NoDotAndDotDot | QDir::Dirs );

	pDriveModel->setRootPath(path);

	pFileModel = new QFileSystemModel(this);
	pFileModel->setFilter(QDir::NoDotAndDotDot | QDir::Dirs | QDir::Files);
	pFileModel->setRootPath( path );

	pTreeView = new QTreeView;
	pListView = new QListView;

	pTreeView->setModel( pDriveModel );
	pListView->setModel( pFileModel );

	pSplitter->addWidget( pTreeView );
	pSplitter->addWidget( pListView );

	pLayout = new QHBoxLayout;

	pLayout->addWidget( pSplitter );
	setLayout ( pLayout );

	connect (
		pTreeView,
		SIGNAL ( clicked( const QModelIndex & ) ),
		this,
		SLOT ( onTreeViewClicked( const QModelIndex & ) )
	);

	setWindowTitle ( "File Explorer App" );

	setMinimumHeight( 1000 );
	setMinimumWidth( 1000 );
}

void Dlg::onTreeViewClicked(const QModelIndex &index) {
	QString path = pDriveModel->fileInfo(index).absoluteFilePath(); 
	pListView->setRootIndex( pFileModel->setRootPath(path) );
}

Dlg::~Dlg() {

}
