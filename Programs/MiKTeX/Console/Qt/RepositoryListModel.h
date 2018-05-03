/* RepositoryListModel.h:                               -*- C++ -*-

   Copyright (C) 2018 Christian Schenk

   This file is part of MiKTeX Console.

   MiKTeX Console is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2, or (at
   your option) any later version.

   MiKTeX Console is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with MiKTeX Console; if not, write to the Free Software
   Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
   USA. */

#if defined(_MSC_VER)
#  pragma once
#endif

#if !defined(F9AC5E01B65041919096F99520C4579E)
#define F9AC5E01B65041919096F99520C4579E

#include <QStringListModel>

#include <memory>

#include <miktex/PackageManager/PackageManager>
#include <miktex/Core/Session>

class RepositoryListModel :
  public QStringListModel
{
private:
  Q_OBJECT;

public:
  RepositoryListModel(std::shared_ptr<MiKTeX::Packages::PackageManager> packageManager, QObject* parent = nullptr);

public:
  void Reload();

public:
  int GetCurrentIndex();

private:
  static QStringList BuildRepositoryStringList(std::shared_ptr<MiKTeX::Packages::PackageManager> packageManager);

private:
  std::shared_ptr<MiKTeX::Packages::PackageManager> packageManager;
};

#endif