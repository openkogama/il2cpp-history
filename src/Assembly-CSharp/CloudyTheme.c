
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
  iVar1 = (::StringLiteral____->fields)._stringLength;
  if ((str->fields)._stringLength < iVar1) {
code_?:
    str = mscorlib.dll::System::String::String_Concat_3(::StringLiteral____,str,(MethodInfo *)0x0);
    if (str == (String *)0x0) goto code_?;
  }
  else {
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(str,0,iVar1,(MethodInfo *)0x0);
    bVar3 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar2,::StringLiteral____,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
  }
  if (::StringLiteral___ != (String *)0x0) {
    iVar1 = (str->fields)._stringLength;
    length = (::StringLiteral___->fields)._stringLength;
    if (length <= iVar1) {
      pSVar2 = mscorlib.dll::System::String::String_Substring_1
                         (str,iVar1 - length,length,(MethodInfo *)0x0);
      bVar3 = mscorlib.dll::System::String::String_op_Inequality
                        (pSVar2,::StringLiteral___,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return str;
      }
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(str,::StringLiteral___,(MethodInfo *)0x0)
    ;
    return pSVar2;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar4)();
  return pSVar2;
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
  ppSVar1 = &(this->fields).identifier;
  *ppSVar1 = StringLiteral_UID;
  func_?(ppSVar1,StringLiteral_UID);
  ppSVar1 = &(this->fields).displayName;
  *ppSVar1 = StringLiteral_No_name;
  func_?(ppSVar1,StringLiteral_No_name);
  ppSVar1 = &(this->fields).description;
  *ppSVar1 = StringLiteral_Description_missing_;
  func_?(ppSVar1,StringLiteral_Description_missing_);
  Theme::Theme__ctor((Theme *)this,(MethodInfo *)0x0);
  return;
}

