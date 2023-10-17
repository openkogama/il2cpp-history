
/* Void <Indent>b__0(TextWriter, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+<>c__DisplayClass13_0::
     StringUtils_c_DisplayClass13_0__Indent_b__0
               (StringUtils_c_DisplayClass13_0 *this,TextWriter *tw,String *line,MethodInfo *method)

{
  mscorlib.dll::System::String::String_CreateString_5
            ((String *)0x0,(this->fields).indentChar,(this->fields).indentation,(MethodInfo *)0x0);
  if (tw != (TextWriter *)0x0) {
    (*(tw->klass->vtable).Write_5.methodPtr)(tw);
    (*(tw->klass->vtable).Write_5.methodPtr)(tw,line,(tw->klass->vtable).Write_5.method);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

