#include <iostream>
#include "concretecomponents.h"
#include "authenticationdialog.h"

int main()
{
   auto dialog = make_shared<AuthenticationDialog>();
   auto title = make_shared<TextBox>(dialog,"Login Page Title");
   dialog->SetTitle(title);
   auto infoButton = make_shared<Button>(dialog, "Login or Register Button");
   dialog->SetButton(infoButton);
   auto regCheckBox = make_shared<CheckBox>(dialog, "Register/Login Checkbox");
   dialog->SetCheckBox(regCheckBox);
   title->keyPress();
   title->click();
   infoButton->keyPress();
   infoButton->click();
   regCheckBox->keyPress();
   regCheckBox->click();

   return 0;
}