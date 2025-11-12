
/* Void Set(Graphic) */

void Assembly-CSharp.dll::Styles+ColorStyleDef::Styles_ColorStyleDef_Set
               (Styles_ColorStyleDef *this,Graphic *graphic,MethodInfo *method)

{
  if (graphic != (Graphic *)0x0) {
    fStack_1 = (this->fields).color.r;
    fStack_2 = (this->fields).color.g;
    fStack_3 = (this->fields).color.b;
    fStack_4 = (this->fields).color.a;
    (*(graphic->klass->vtable).set_color.methodPtr)
              (graphic,&fStack_1,(graphic->klass->vtable).set_color.method);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

