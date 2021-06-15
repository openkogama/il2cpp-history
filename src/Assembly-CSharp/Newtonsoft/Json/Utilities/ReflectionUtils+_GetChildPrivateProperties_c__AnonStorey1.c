
/* Boolean <>m__0(PropertyInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     ReflectionUtils+<GetChildPrivateProperties>c__AnonStorey1::
     ReflectionUtils_GetChildPrivateProperties_c_AnonStorey1___m__0
               (ReflectionUtils_GetChildPrivateProperties_c_AnonStorey1 *this,PropertyInfo_1 *p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (p != (PropertyInfo_1 *)0x0) {
    a = (String *)
        (*(code *)(p->klass->vtable).__unknown_1.method)(p,(p->klass->vtable).__unknown_2.methodPtr)
    ;
    pPVar1 = (this->fields).nonPublicProperty;
    if (pPVar1 != (PropertyInfo_1 *)0x0) {
      b = (String *)
          (*(code *)(pPVar1->klass->vtable).__unknown_1.method)
                    (pPVar1,(pPVar1->klass->vtable).__unknown_2.methodPtr);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}

