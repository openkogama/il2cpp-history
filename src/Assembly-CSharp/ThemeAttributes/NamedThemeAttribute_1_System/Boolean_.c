
/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Boolean]) */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[System::Boolean]::
     NamedThemeAttribute_1_System_Boolean__Initialize
               (NamedThemeAttribute_1_System_Boolean_ *this,SettingsWrapper *settings,String *key,
               int32_t groups,Action_1_Boolean_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  if (this != (NamedThemeAttribute_1_System_Boolean_ *)0x0) {
    ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single__Initialize
              ((ThemeAttribute_1_System_Single_ *)this,settings,key,groups,
               (Action_1_Single_ *)onChange,method->klass->rgctx_data[2].method);
    pSVar1 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
    (this->fields).name = pSVar1;
    func_?(&(this->fields).name,pSVar1);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,method->klass->rgctx_data[3].rgctxDataDummy,(MethodInfo *)0x0)
    ;
    TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[System::Boolean]::
     NamedThemeAttribute_1_System_Boolean__OnValidate
               (NamedThemeAttribute_1_System_Boolean_ *this,MethodInfo *method)

{
  this_00 = (this->fields).name;
  if (cRam_? == '\0') {
    func_?(&::StringLiteral___);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  if ((this_00 == (String *)0x0) || (::StringLiteral____ == (String *)0x0)) goto code_?;
  if ((this_00->fields)._stringLength < (::StringLiteral____->fields)._stringLength) {
code_?:
    this_00 = mscorlib.dll::System::String::String_Concat_3
                        (::StringLiteral____,this_00,(MethodInfo *)0x0);
    if (this_00 == (String *)0x0) goto code_?;
  }
  else {
    pSVar1 = mscorlib.dll::System::String::String_Substring_1
                       (this_00,0,(::StringLiteral____->fields)._stringLength,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar1,::StringLiteral____,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
  }
  if (::StringLiteral___ == (String *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (this_00->fields)._stringLength;
  if ((::StringLiteral___->fields)._stringLength <= iVar4) {
    pSVar1 = mscorlib.dll::System::String::String_Substring_1
                       (this_00,iVar4 - (::StringLiteral___->fields)._stringLength,
                        (::StringLiteral___->fields)._stringLength,(MethodInfo *)0x0);
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar1,::StringLiteral___,(MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
  }
  this_00 = mscorlib.dll::System::String::String_Concat_3
                      (this_00,::StringLiteral___,(MethodInfo *)0x0);
code_?:
  (this->fields).name = this_00;
  func_?(&(this->fields).name,this_00);
  return;
}


/* String Validate(String) */

String * Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[System::Boolean]::
         NamedThemeAttribute_1_System_Boolean__Validate
                   (NamedThemeAttribute_1_System_Boolean_ *this,String *str,MethodInfo *method)

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

