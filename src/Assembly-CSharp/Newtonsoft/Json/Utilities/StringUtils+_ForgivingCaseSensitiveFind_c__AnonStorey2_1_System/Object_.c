
/* Boolean <>m__0(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     StringUtils+<ForgivingCaseSensitiveFind>c__AnonStorey2`1[System::Object]::
     StringUtils_ForgivingCaseSensitiveFind_c_AnonStorey2_1_System_Object____m__0
               (StringUtils_ForgivingCaseSensitiveFind_c_AnonStorey2_1_System_Object_ *this,
               Object *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).valueSelector;
  if (pFVar1 != (Func_2_Object_String_ *)0x0) {
    strA = (String *)
           (**(code **)**(undefined4 **)(method->name + 0x60))
                     (pFVar1,s,(undefined4 *)**(undefined4 **)(method->name + 0x60));
    strB = (this->fields).testValue;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    iVar2 = mscorlib.dll::System::String::String_Compare_5
                      (strA,strB,StringComparison__Enum_OrdinalIgnoreCase,(MethodInfo *)0x0);
    return iVar2 == 0;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean <>m__1(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     StringUtils+<ForgivingCaseSensitiveFind>c__AnonStorey2`1[System::Object]::
     StringUtils_ForgivingCaseSensitiveFind_c_AnonStorey2_1_System_Object____m__1
               (StringUtils_ForgivingCaseSensitiveFind_c_AnonStorey2_1_System_Object_ *this,
               Object *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).valueSelector;
  if (pFVar1 != (Func_2_Object_String_ *)0x0) {
    strA = (String *)
           (**(code **)**(undefined4 **)(method->name + 0x60))
                     (pFVar1,s,(undefined4 *)**(undefined4 **)(method->name + 0x60));
    strB = (this->fields).testValue;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    iVar2 = mscorlib.dll::System::String::String_Compare_5
                      (strA,strB,StringComparison__Enum_Ordinal,(MethodInfo *)0x0);
    return iVar2 == 0;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

