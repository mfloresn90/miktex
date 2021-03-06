/* PackageProxyModel.h:                                 -*- C++ -*-

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

#pragma once

#if !defined(E7AF14B9D04F41D48C47DDB1A55839A8)
#define E7AF14B9D04F41D48C47DDB1A55839A8

#include <QSortFilterProxyModel>

class PackageProxyModel :
  public QSortFilterProxyModel
{
private:
  Q_OBJECT;

public:
  PackageProxyModel(QObject* parent = nullptr);

public:
  void SetFilter(const std::string& filter);

protected:
  bool filterAcceptsRow(int sourceRow, const QModelIndex& sourceParent) const override;

private:
  std::string filterText;
};

#endif
