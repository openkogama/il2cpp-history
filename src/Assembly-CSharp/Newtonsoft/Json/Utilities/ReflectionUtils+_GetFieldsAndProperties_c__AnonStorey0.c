
/* Boolean <>m__0(MemberInfo) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::
     ReflectionUtils+<GetFieldsAndProperties>c__AnonStorey0::
     ReflectionUtils_GetFieldsAndProperties_c_AnonStorey0___m__0
               (ReflectionUtils_GetFieldsAndProperties_c_AnonStorey0 *this,MemberInfo_1 *m,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = ReflectionUtils::ReflectionUtils_IsOverridenGenericMember
                    (m,(this->fields).bindingAttr,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 1;
  }
  if (m != (MemberInfo_1 *)0x0) {
    a = (String *)(*(code *)(m->klass->vtable).__unknown_2.method)(m);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality(a,StringLiteral_Item,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

