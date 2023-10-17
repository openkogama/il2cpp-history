
/* Boolean <ForgivingCaseSensitiveFind>b__0(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+<>c__DisplayClass25_0`1[System::
     Collections::Generic::KeyValuePair`2[System::Object,System::Object]]::
     StringUtils_c_DisplayClass25_0_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object___ForgivingCaseSensitiveFind_b__0
               (StringUtils_c_DisplayClass25_0_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_
                *this,KeyValuePair_2_System_Object_System_Object_ s,MethodInfo *method)

{
  if ((this->fields).valueSelector !=
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_ *)0x0) {
    strA = (String *)
           (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                     ((this->fields).valueSelector,s.key,s.value,
                      method->klass->rgctx_data[1].rgctxDataDummy);
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


/* Boolean <ForgivingCaseSensitiveFind>b__1(KeyValuePair`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::Newtonsoft::Json::Utilities::StringUtils+<>c__DisplayClass25_0`1[System::
     Collections::Generic::KeyValuePair`2[System::Object,System::Object]]::
     StringUtils_c_DisplayClass25_0_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object___ForgivingCaseSensitiveFind_b__1
               (StringUtils_c_DisplayClass25_0_1_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_
                *this,KeyValuePair_2_System_Object_System_Object_ s,MethodInfo *method)

{
  if ((this->fields).valueSelector !=
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_String_ *)0x0) {
    strA = (String *)
           (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                     ((this->fields).valueSelector,s.key,s.value,
                      method->klass->rgctx_data[1].rgctxDataDummy);
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

