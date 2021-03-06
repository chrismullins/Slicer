/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerModulesListViewPlugin_h
#define __qSlicerModulesListViewPlugin_h

#include "qSlicerQTGUIAbstractPlugin.h"

class Q_SLICER_BASE_QTGUI_PLUGINS_EXPORT qSlicerModulesListViewPlugin
  : public qSlicerQTGUIAbstractPlugin
{
  Q_OBJECT
public:
  qSlicerModulesListViewPlugin(QObject* parent = 0);

  QWidget *createWidget(QWidget *_parent);
  QString domXml() const;
  QString includeFile() const;
  bool isContainer() const;
  QString name() const;
};

#endif
