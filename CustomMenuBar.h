#include<QApplication>

#include<QWidget>
#include<QMenuBar>
#include<QStatusBar>
#include<QMenu>
#include<QAction>

#include<QFileDialog>
#include<QImage>
#include<QPixmap>
#include<QLabel>

class CustomMenuBar : public QWidget
{
	Q_OBJECT
	public:
		CustomMenuBar(QWidget *parent = 0);
		QMenubar* getMenuBar();
		QStatusBar* getStatusBar();
		QLabel* getInImgLabel();
		QLabel* getOutImgLabel();
		
	public slots:
		void openFile();
		void saveFile();
		void quitApp();
		
	private:
		QMenuBar *menubar;
		QStatusBar *statusbar;
		
		QMenu *fileMenu;
		QAction *openAct;
		QAction *saveAct;
		QAction *exitAct;
		
		QMenu *imgMenu;
		QAction *binaryAct;
		QAction *arithAct;
		QAction *edgeAct;
		
		QMenu *cameraMenu;
		QAction *picamAct;
		
		QString filepath;
		QImage inImg;
		QImage outImg;
		QLabel *inImgLabel;
		QLabel *outImgLabel;
		
};
