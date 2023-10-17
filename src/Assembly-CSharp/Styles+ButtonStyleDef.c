
/* Void Set(Button) */

void Assembly-CSharp.dll::Styles+ButtonStyleDef::Styles_ButtonStyleDef_Set
               (Styles_ButtonStyleDef *this,Button *button,MethodInfo *method)

{
  if (button != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
              ((Selectable *)button,(this->fields).colorBlock,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

