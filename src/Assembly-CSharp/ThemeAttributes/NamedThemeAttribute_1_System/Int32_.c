
/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[System::Int32]::
     NamedThemeAttribute_1_System_Int32__Initialize
               (NamedThemeAttribute_1_System_Int32_ *this,SettingsWrapper *settings,String *key,
               int32_t groups,Action_1_Int32_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  if (this != (NamedThemeAttribute_1_System_Int32_ *)0x0) {
    ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single__Initialize
              ((ThemeAttribute_1_System_Single_ *)this,settings,key,groups,
               (Action_1_Single_ *)onChange,method->klass->rgctx_data[2].method);
    ppSVar1 = &(this->fields).name;
    pSVar2 = TM::TM__(*ppSVar1,(MethodInfo *)0x0);
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,method->klass->rgctx_data[3].rgctxDataDummy,(MethodInfo *)0x0)
    ;
    TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[System::Int32]::
     NamedThemeAttribute_1_System_Int32__OnValidate
               (NamedThemeAttribute_1_System_Int32_ *this,MethodInfo *method)

{
  ppSVar1 = &(this->fields).name;
  this_00 = *ppSVar1;
  if (cRam_? == '\0') {
    func_?(&::StringLiteral___);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  if ((this_00 == (String *)0x0) || (::StringLiteral____ == (String *)0x0)) goto code_?;
  iVar2 = (::StringLiteral____->fields)._stringLength;
  if ((this_00->fields)._stringLength < iVar2) {
code_?:
    this_00 = mscorlib.dll::System::String::String_Concat_3
                        (::StringLiteral____,this_00,(MethodInfo *)0x0);
    if (this_00 == (String *)0x0) goto code_?;
  }
  else {
    pSVar3 = mscorlib.dll::System::String::String_Substring_1(this_00,0,iVar2,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar3,::StringLiteral____,(MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
  }
  if (::StringLiteral___ == (String *)0x0) {
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar2 = (this_00->fields)._stringLength;
  length = (::StringLiteral___->fields)._stringLength;
  if (length <= iVar2) {
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                       (this_00,iVar2 - length,length,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar3,::StringLiteral___,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
  }
  this_00 = mscorlib.dll::System::String::String_Concat_3
                      (this_00,::StringLiteral___,(MethodInfo *)0x0);
code_?:
  *ppSVar1 = this_00;
  func_?(ppSVar1,this_00);
  return;
}


/* String Validate(String) */

String * Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[System::Int32]::
         NamedThemeAttribute_1_System_Int32__Validate
                   (NamedThemeAttribute_1_System_Int32_ *this,String *str,MethodInfo *method)

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

