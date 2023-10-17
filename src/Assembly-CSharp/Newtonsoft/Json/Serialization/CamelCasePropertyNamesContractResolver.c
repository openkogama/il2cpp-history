
/* String ResolvePropertyName(String) */

String * Assembly-CSharp.dll::Newtonsoft::Json::Serialization::
         CamelCasePropertyNamesContractResolver::
         CamelCasePropertyNamesContractResolver_ResolvePropertyName
                   (CamelCasePropertyNamesContractResolver *this,String *propertyName,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Char);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(propertyName,(MethodInfo *)0x0);
  pSVar2 = propertyName;
  if (bVar1 == 0) {
    if (propertyName == (String *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pSVar2 = (String *)(*pcVar3)();
      return pSVar2;
    }
    uVar4 = mscorlib.dll::System::String::String_get_Chars(propertyName,0,(MethodInfo *)0x0);
    if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = mscorlib.dll::System::Char::Char_IsUpper(uVar4,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      uVar4 = mscorlib.dll::System::String::String_get_Chars(propertyName,0,(MethodInfo *)0x0);
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Char->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      uVar4 = mscorlib.dll::System::Char::Char_ToLower(uVar4,pCVar5,(MethodInfo *)0x0);
      puStack_6 = (undefined *)(uint)uVar4;
      pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::Char::Char_ToString_1
                         ((Char *)&puStack_6,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
      if (1 < (propertyName->fields)._stringLength) {
        str1 = mscorlib.dll::System::String::String_Substring(propertyName,1,(MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,str1,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return pSVar2;
}


/* CamelCasePropertyNamesContractResolver() */

void Assembly-CSharp.dll::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::
     CamelCasePropertyNamesContractResolver__ctor
               (CamelCasePropertyNamesContractResolver *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__Serialization__DefaultContractResolver);
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._._DefaultMembersSearchFlags_k__BackingField = 0x14;
  (this->fields)._._sharedCache = 1;
  return;
}

