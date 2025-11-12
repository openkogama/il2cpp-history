
/* Void Set(Text) */

void Assembly-CSharp.dll::Styles+TextStyleDef::Styles_TextStyleDef_Set
               (Styles_TextStyleDef *this,Text *text,MethodInfo *method)

{
  if (text != (Text *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_font
              (text,(this->fields).font,(MethodInfo *)0x0);
    pFVar1 = (text->fields).m_FontData;
    if (pFVar1 != (FontData *)0x0) {
      iVar2 = (this->fields).fontSize;
      if ((pFVar1->fields).m_FontSize != iVar2) {
        (pFVar1->fields).m_FontSize = iVar2;
        (*(text->klass->vtable).SetVerticesDirty.methodPtr)
                  (text,(text->klass->vtable).SetVerticesDirty.method);
        (*(text->klass->vtable).SetLayoutDirty.methodPtr)
                  (text,(text->klass->vtable).SetLayoutDirty.method);
      }
      pFVar1 = (text->fields).m_FontData;
      if (pFVar1 != (FontData *)0x0) {
        iVar2 = (this->fields).fontStyle;
        if ((pFVar1->fields).m_FontStyle != iVar2) {
          (pFVar1->fields).m_FontStyle = iVar2;
          (*(text->klass->vtable).SetVerticesDirty.methodPtr)
                    (text,(text->klass->vtable).SetVerticesDirty.method);
          (*(text->klass->vtable).SetLayoutDirty.methodPtr)
                    (text,(text->klass->vtable).SetLayoutDirty.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

