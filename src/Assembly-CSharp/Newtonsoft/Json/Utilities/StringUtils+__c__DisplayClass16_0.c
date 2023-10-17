
/* Void <NumberLines>b__0(TextWriter, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+<>c__DisplayClass16_0::
     StringUtils_c_DisplayClass16_0__NumberLines_b__0
               (StringUtils_c_DisplayClass16_0 *this,TextWriter *tw,String *line,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  this_00 = mscorlib.dll::System::Int32::Int32_ToString_2
                      ((Int32 *)&this->fields,(IFormatProvider *)provider,(MethodInfo *)0x0);
  if (this_00 != (String *)0x0) {
    mscorlib.dll::System::String::String_PadLeft(this_00,4,(MethodInfo *)0x0);
    if (tw != (TextWriter *)0x0) {
      pMVar1 = (tw->klass->vtable).Write_5.method;
      (*(tw->klass->vtable).Write_5.methodPtr)();
      (*(tw->klass->vtable).Write_5.methodPtr)(tw,::StringLiteral___);
      (*(tw->klass->vtable).Write_5.methodPtr)(tw,pMVar1,(tw->klass->vtable).Write_5.method);
      (this->fields).lineNumber = (this->fields).lineNumber + 1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

