
/* Void <CreateSet>b__0(Object, Object) */

void Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     LateBoundReflectionDelegateFactory+<>c__DisplayClass7_0`1[System::Object]::
     LateBoundReflectionDelegateFactory_c_DisplayClass7_0_1_System_Object___CreateSet_b__0
               (LateBoundReflectionDelegateFactory_c_DisplayClass7_0_1_System_Object_ *this,
               Object *o,Object *v,MethodInfo *method)

{
  pFVar1 = (this->fields).fieldInfo;
  if (pFVar1 != (FieldInfo_1 *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pBStack_2 = mscorlib.dll::System::Type::Type_get_DefaultBinder((MethodInfo *)0x0);
    puStack_3 = (undefined *)0x0;
    (*(pFVar1->klass->vtable).__unknown_10.methodPtr)(pFVar1,o,v,0);
    return;
  }
  uVar4 = func_?(&pBStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

