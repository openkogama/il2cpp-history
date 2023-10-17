
/* Boolean <ForgivingCaseSensitiveFind>b__0(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+<>c__DisplayClass25_0`1[System::
     Object]::StringUtils_c_DisplayClass25_0_1_System_Object___ForgivingCaseSensitiveFind_b__0
               (StringUtils_c_DisplayClass25_0_1_System_Object_ *this,Object *s,MethodInfo *method)

{
  if ((this->fields).valueSelector != (Func_2_Object_String_ *)0x0) {
    strA = (String *)
           (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                     ((this->fields).valueSelector,s,method->klass->rgctx_data[1].rgctxDataDummy);
    iVar1 = mscorlib.dll::System::String::String_Compare_1
                      (strA,(this->fields).testValue,StringComparison__Enum_OrdinalIgnoreCase,
                       (MethodInfo *)0x0);
    return iVar1 == 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean <ForgivingCaseSensitiveFind>b__1(Object) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+<>c__DisplayClass25_0`1[System::
     Object]::StringUtils_c_DisplayClass25_0_1_System_Object___ForgivingCaseSensitiveFind_b__1
               (StringUtils_c_DisplayClass25_0_1_System_Object_ *this,Object *s,MethodInfo *method)

{
  if ((this->fields).valueSelector != (Func_2_Object_String_ *)0x0) {
    strA = (String *)
           (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                     ((this->fields).valueSelector,s,method->klass->rgctx_data[1].rgctxDataDummy);
    iVar1 = mscorlib.dll::System::String::String_Compare_1
                      (strA,(this->fields).testValue,StringComparison__Enum_Ordinal,
                       (MethodInfo *)0x0);
    return iVar1 == 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

