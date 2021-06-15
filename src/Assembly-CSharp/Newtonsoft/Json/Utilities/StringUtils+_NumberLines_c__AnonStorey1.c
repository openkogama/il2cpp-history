
/* Void <>m__0(TextWriter, String) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+<NumberLines>c__AnonStorey1::
     StringUtils_NumberLines_c_AnonStorey1___m__0
               (StringUtils_NumberLines_c_AnonStorey1 *this,TextWriter *tw,String *line,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = &this->fields;
  if ((((uint)(TypeInfo__System__Globalization__CultureInfo->vtable).Equals.methodPtr & 0x2000000)
       != 0) && ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Globalization__CultureInfo);
  }
  pCVar2 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                     ((MethodInfo *)0x0);
  pSVar3 = (String *)func_?(pSVar1,pCVar2,0);
  if (pSVar3 != (String *)0x0) {
    pSVar3 = mscorlib.dll::System::String::String_PadLeft(pSVar3,4,(MethodInfo *)0x0);
    if (tw != (TextWriter *)0x0) {
      (*(code *)(tw->klass->vtable).Write_4.method)(tw,pSVar3);
      (*(code *)(tw->klass->vtable).Write_4.method)
                (tw,::StringLiteral___,(tw->klass->vtable).Write_5.methodPtr);
      (*(code *)(tw->klass->vtable).Write_4.method)(tw,line,(tw->klass->vtable).Write_5.methodPtr);
      pSVar1->lineNumber = pSVar1->lineNumber + 1;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

