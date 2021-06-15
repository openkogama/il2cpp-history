
/* Void Set(Button) */

void Assembly-CSharp.dll::Styles+ButtonStyleDef::Styles_ButtonStyleDef_Set
               (Styles_ButtonStyleDef *this,Button *button,MethodInfo *method)

{
  if (button != (Button *)0x0) {
    uVar1 = (this->fields).colorBlock.m_FadeDuration;
    uVar2 = (this->fields).colorBlock.m_NormalColor.r;
    uVar3 = (this->fields).colorBlock.m_NormalColor.g;
    uVar4 = (this->fields).colorBlock.m_NormalColor.b;
    uVar5 = (this->fields).colorBlock.m_NormalColor.a;
    value.m_NormalColor.a = (float)uVar5;
    value.m_NormalColor.b = (float)uVar4;
    value.m_NormalColor.g = (float)uVar3;
    value.m_NormalColor.r = (float)uVar2;
    uVar6 = (this->fields).colorBlock.m_HighlightedColor.r;
    uVar7 = (this->fields).colorBlock.m_HighlightedColor.g;
    uVar8 = (this->fields).colorBlock.m_HighlightedColor.b;
    uVar9 = (this->fields).colorBlock.m_HighlightedColor.a;
    value.m_HighlightedColor.a = (float)uVar9;
    value.m_HighlightedColor.b = (float)uVar8;
    value.m_HighlightedColor.g = (float)uVar7;
    value.m_HighlightedColor.r = (float)uVar6;
    uVar10 = (this->fields).colorBlock.m_PressedColor.r;
    uVar11 = (this->fields).colorBlock.m_PressedColor.g;
    uVar12 = (this->fields).colorBlock.m_PressedColor.b;
    uVar13 = (this->fields).colorBlock.m_PressedColor.a;
    value.m_PressedColor.a = (float)uVar13;
    value.m_PressedColor.b = (float)uVar12;
    value.m_PressedColor.g = (float)uVar11;
    value.m_PressedColor.r = (float)uVar10;
    uVar14 = (this->fields).colorBlock.m_DisabledColor.r;
    uVar15 = (this->fields).colorBlock.m_DisabledColor.g;
    uVar16 = (this->fields).colorBlock.m_DisabledColor.b;
    uVar17 = (this->fields).colorBlock.m_DisabledColor.a;
    value.m_DisabledColor.a = (float)uVar17;
    value.m_DisabledColor.b = (float)uVar16;
    value.m_DisabledColor.g = (float)uVar15;
    value.m_DisabledColor.r = (float)uVar14;
    uVar18 = (this->fields).colorBlock.m_ColorMultiplier;
    value.m_ColorMultiplier = (float)uVar18;
    value.m_FadeDuration = (float)uVar1;
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_colors
              ((Selectable *)button,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

