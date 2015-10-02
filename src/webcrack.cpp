/*
** webcrack.cpp for Webcrack in /home/vasseu_g/github/Webcrack/src
** 
** Made by Adrien Vasseur
** Login   <vasseu_g@epitech.net>
** 
** Started on  Fri Oct  2 10:26:10 2015 Adrien Vasseur
** Last update Fri Oct  2 10:52:11 2015 Adrien Vasseur
*/

#include	<QApplication>

#include	"mainwindow.h"

int		main(int argc, char **argv)
{
  QApplication	app(argc, argv);
  MainWindow	win;

  win.show();
  return (app.exec());
}
