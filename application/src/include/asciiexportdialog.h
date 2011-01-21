/***************************************************************************
 *   Copyright (C) 2006-2008 by Ian Reinhart Geiser                        *
 *   geiseri@yahoo.com                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef ASCIIEXPORTDIALOG_H
#define ASCIIEXPORTDIALOG_H

#include <QDialog>
namespace Ui
{
	class ASCIIExportDialog;
}

class MindMap;
class ASCIIReporter;

/**
ASCII document exporter dialog.

	@author Ian Reinhart Geiser <geiseri@yahoo.com>
*/
class ASCIIExportDialog : public QDialog
{
	Q_OBJECT

public:
	ASCIIExportDialog(QWidget *parent = 0);
	~ASCIIExportDialog();

	static void exportMindmap( MindMap *map );
	void setMindMap(MindMap* theValue);
	MindMap* mindMap() const;

public slots:
	void on_filePath_editingFinished();
	void on_selectFile_clicked();
	void on_tabSize_valueChanged( int value );
	void on_pgCols_valueChanged( int value );

	void updateReport();

private:
	Ui::ASCIIExportDialog *m_ui;
	QString m_filePath;
	ASCIIReporter *m_reporter;
	MindMap *m_mindMap;
};

#endif
