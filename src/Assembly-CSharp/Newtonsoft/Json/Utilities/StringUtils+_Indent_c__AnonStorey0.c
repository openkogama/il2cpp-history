
/* Void <>m__0(TextWriter, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+<Indent>c__AnonStorey0::
     StringUtils_Indent_c_AnonStorey0___m__0
               (StringUtils_Indent_c_AnonStorey0 *this,TextWriter *tw,String *line,
               MethodInfo *method)

{
  mscorlib.dll::System::String::String_CreateString_7
            ((String *)0x0,(this->fields).indentChar,(this->fields).indentation,(MethodInfo *)0x0);
  if (tw != (TextWriter *)0x0) {
    (*(code *)(tw->klass->vtable).Write_4.method)(tw);
    (*(code *)(tw->klass->vtable).Write_4.method)(tw,line,(tw->klass->vtable).Write_5.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

