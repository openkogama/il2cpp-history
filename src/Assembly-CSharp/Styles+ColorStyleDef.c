
/* Void Set(Graphic) */

void Assembly-CSharp.dll::Styles+ColorStyleDef::Styles_ColorStyleDef_Set
               (Styles_ColorStyleDef *this,Graphic *graphic,MethodInfo *method)

{
  if (graphic != (Graphic *)0x0) {
    (*(code *)(graphic->klass->vtable).set_color.method)
              (graphic,(this->fields).color.r,(this->fields).color.g,(this->fields).color.b,
               (this->fields).color.a,(graphic->klass->vtable).get_raycastTarget.methodPtr);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

