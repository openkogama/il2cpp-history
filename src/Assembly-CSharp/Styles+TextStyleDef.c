
/* Void Set(Text) */

void Assembly-CSharp.dll::Styles+TextStyleDef::Styles_TextStyleDef_Set
               (Styles_TextStyleDef *this,Text *text,MethodInfo *method)

{
  if (text != (Text *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_font
              (text,(this->fields).font,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
              (text,(this->fields).fontSize,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontStyle
              (text,(this->fields).fontStyle,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

