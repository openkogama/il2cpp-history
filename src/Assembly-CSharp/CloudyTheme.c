
/* String Validate(String) */

String * Assembly-CSharp.dll::CloudyTheme::CloudyTheme_Validate
                   (CloudyTheme *this,String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral___);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  if ((str == (String *)0x0) || (::StringLiteral____ == (String *)0x0)) goto code_?;
  if ((str->fields)._stringLength < (::StringLiteral____->fields)._stringLength) {
code_?:
    str = mscorlib.dll::System::String::String_Concat_3(::StringLiteral____,str,(MethodInfo *)0x0);
    if (str == (String *)0x0) goto code_?;
  }
  else {
    pSVar1 = mscorlib.dll::System::String::String_Substring_1
                       (str,0,(::StringLiteral____->fields)._stringLength,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar1,::StringLiteral____,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
  }
  if (::StringLiteral___ != (String *)0x0) {
    iVar3 = (str->fields)._stringLength;
    if ((::StringLiteral___->fields)._stringLength <= iVar3) {
      pSVar1 = mscorlib.dll::System::String::String_Substring_1
                         (str,iVar3 - (::StringLiteral___->fields)._stringLength,
                          (::StringLiteral___->fields)._stringLength,(MethodInfo *)0x0);
      bVar2 = mscorlib.dll::System::String::String_op_Inequality
                        (pSVar1,::StringLiteral___,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return str;
      }
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(str,::StringLiteral___,(MethodInfo *)0x0)
    ;
    return pSVar1;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* CloudyTheme() */

void Assembly-CSharp.dll::CloudyTheme::CloudyTheme__ctor(CloudyTheme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_No_name);
    func_?(&StringLiteral_UID);
    func_?(&StringLiteral_Description_missing_);
    cRam_? = '\x01';
  }
  (this->fields).identifier = StringLiteral_UID;
  func_?(&(this->fields).identifier,StringLiteral_UID);
  (this->fields).displayName = StringLiteral_No_name;
  func_?(&(this->fields).displayName,StringLiteral_No_name);
  (this->fields).description = StringLiteral_Description_missing_;
  func_?(&(this->fields).description,StringLiteral_Description_missing_);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ThemeComponent>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ThemeComponent_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ThemeComponent>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
  (this->fields)._._.components = this_00;
  func_?(&(this->fields)._._.components,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

