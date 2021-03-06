/*Copyright (C) 2014  별님

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#ifndef TRAYICON_HPP
#define TRAYICON_HPP

#include <QSystemTrayIcon>

class QAction;
class DecompressProgressWidget;

class TrayIcon :
        public QSystemTrayIcon
{
public:
    explicit TrayIcon(QObject *parent = 0);
    virtual ~TrayIcon();

public:
    QMenu *menu;                 ///< 메뉴
    QAction *actionShow;         ///< 보기/숨김 버튼
    QAction *actionPauseToggle;  ///< 일시정지/재개 버튼
    QAction *actionClose;        ///< 닫기 버튼

private:
    DecompressProgressWidget *decompressProgressWidget;

};

#endif // TRAYICON_HPP
