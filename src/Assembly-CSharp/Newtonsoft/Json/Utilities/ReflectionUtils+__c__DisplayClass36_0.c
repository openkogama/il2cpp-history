
/* Boolean <GetFieldsAndProperties>b__2(MemberInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::ReflectionUtils+<>c__DisplayClass36_0::
     ReflectionUtils_c_DisplayClass36_0__GetFieldsAndProperties_b__2
               (ReflectionUtils_c_DisplayClass36_0 *this,MemberInfo_1 *m,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Item);
    cRam_? = '\x01';
  }
  bVar1 = ReflectionUtils::ReflectionUtils_IsOverridenGenericMember
                    (m,(this->fields).bindingAttr,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 1;
  }
  if (m != (MemberInfo_1 *)0x0) {
    a = (String *)(*(m->klass->vtable).__unknown_1.methodPtr)(m);
    bVar1 = mscorlib.dll::System::String::String_op_Equality(a,StringLiteral_Item,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

