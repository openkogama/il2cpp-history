
/* Void Set(Button) */

void Assembly-CSharp.dll::Styles+ButtonStyleDef::Styles_ButtonStyleDef_Set
               (Styles_ButtonStyleDef *this,Button *button,MethodInfo *method)

{
  if (button != (Button *)0x0) {
    CStack_1.m_NormalColor.r = (this->fields).colorBlock.m_NormalColor.r;
    CStack_1.m_NormalColor.g = (this->fields).colorBlock.m_NormalColor.g;
    CStack_1.m_NormalColor.b = (this->fields).colorBlock.m_NormalColor.b;
    CStack_1.m_NormalColor.a = (this->fields).colorBlock.m_NormalColor.a;
    CStack_1.m_HighlightedColor.r = (this->fields).colorBlock.m_HighlightedColor.r;
    CStack_1.m_HighlightedColor.g = (this->fields).colorBlock.m_HighlightedColor.g;
    CStack_1.m_HighlightedColor.b = (this->fields).colorBlock.m_HighlightedColor.b;
    CStack_1.m_HighlightedColor.a = (this->fields).colorBlock.m_HighlightedColor.a;
    CStack_1.m_PressedColor.r = (this->fields).colorBlock.m_PressedColor.r;
    CStack_1.m_PressedColor.g = (this->fields).colorBlock.m_PressedColor.g;
    CStack_1.m_PressedColor.b = (this->fields).colorBlock.m_PressedColor.b;
    CStack_1.m_PressedColor.a = (this->fields).colorBlock.m_PressedColor.a;
    CStack_1.m_SelectedColor.r = (this->fields).colorBlock.m_SelectedColor.r;
    CStack_1.m_SelectedColor.g = (this->fields).colorBlock.m_SelectedColor.g;
    CStack_1.m_SelectedColor.b = (this->fields).colorBlock.m_SelectedColor.b;
    CStack_1.m_SelectedColor.a = (this->fields).colorBlock.m_SelectedColor.a;
    CStack_1.m_DisabledColor.r = (this->fields).colorBlock.m_DisabledColor.r;
    CStack_1.m_DisabledColor.g = (this->fields).colorBlock.m_DisabledColor.g;
    CStack_1.m_DisabledColor.b = (this->fields).colorBlock.m_DisabledColor.b;
    CStack_1.m_DisabledColor.a = (this->fields).colorBlock.m_DisabledColor.a;
    CStack_1.m_ColorMultiplier = (this->fields).colorBlock.m_ColorMultiplier;
    CStack_1.m_FadeDuration = (this->fields).colorBlock.m_FadeDuration;
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
              ((Selectable *)button,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

