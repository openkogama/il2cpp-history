
/* Boolean <GetChildPrivateProperties>b__0(PropertyInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils+<>c__DisplayClass55_0::
     ReflectionUtils_c_DisplayClass55_0__GetChildPrivateProperties_b__0
               (ReflectionUtils_c_DisplayClass55_0 *this,PropertyInfo_1 *p,MethodInfo *method)

{
  if (p != (PropertyInfo_1 *)0x0) {
    a = (String *)(*(p->klass->vtable).__unknown.methodPtr)(p,(p->klass->vtable).__unknown.method);
    pPVar1 = (this->fields).nonPublicProperty;
    if (pPVar1 != (PropertyInfo_1 *)0x0) {
      b = (String *)
          (*(pPVar1->klass->vtable).__unknown.methodPtr)
                    (pPVar1,(pPVar1->klass->vtable).__unknown.method);
      bVar2 = mscorlib.dll::System::String::String_op_Equality(a,b,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}

