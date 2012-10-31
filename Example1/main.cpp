/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0.txt

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

// Qt includes
#include <QApplication>
#include <QFormLayout>
#include <QVBoxLayout>

// CTK includes
#include <ctkCollapsibleButton.h>
#include <ctkCheckablePushButton.h>
#include <ctkColorPickerButton.h>
#include <ctkRangeWidget.h>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QWidget topLevel;
  QVBoxLayout* topLevelLayout = new QVBoxLayout;

  ctkCollapsibleButton buttons("Buttons");
  QFormLayout* buttonsLayout = new QFormLayout;
  buttonsLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
  topLevelLayout->addWidget(&buttons);

  ctkCheckablePushButton checkablePushButton;
  checkablePushButton.setText("Checkable");
  buttonsLayout->addRow("ctkCheckablePushButton", &checkablePushButton);

  ctkColorPickerButton colorPickerButton;
  colorPickerButton.setColor(QColor("#9e1414"));
  buttonsLayout->addRow("ctkColorPickerButton", &colorPickerButton);

  buttons.setLayout(buttonsLayout);

  ctkCollapsibleButton sliders("Sliders");
  QFormLayout* slidersLayout = new QFormLayout;
  topLevelLayout->addWidget(&sliders);

  ctkRangeWidget rangeWidget;
  slidersLayout->addRow("ctkRangeWidget", &rangeWidget);

  sliders.setLayout(slidersLayout);

  topLevel.setLayout(topLevelLayout);
  topLevel.show();

  return app.exec();
}
