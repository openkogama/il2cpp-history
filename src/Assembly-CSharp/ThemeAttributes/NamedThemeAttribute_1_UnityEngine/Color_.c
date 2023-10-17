
/* Void Initialize(SettingsWrapper, String, Int32, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
     NamedThemeAttribute_1_UnityEngine_Color__Initialize
               (NamedThemeAttribute_1_UnityEngine_Color_ *this,SettingsWrapper *settings,String *key
               ,int32_t groups,Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  if (this != (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) {
    (*method->klass->rgctx_data->method->virtualMethodPointer)
              (this,settings,key,groups,onChange,method->klass->rgctx_data->rgctxDataDummy);
    pSVar1 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
    (this->fields).name = pSVar1;
    func_?(&(this->fields).name,pSVar1);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,method->klass->rgctx_data[1].rgctxDataDummy,
                 (MethodInfo *)0x0);
      TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LanguageLoadedCallback() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
     NamedThemeAttribute_1_UnityEngine_Color__LanguageLoadedCallback
               (NamedThemeAttribute_1_UnityEngine_Color_ *this,MethodInfo *method)

{
  pSVar1 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
  (this->fields).name = pSVar1;
  func_?(&(this->fields).name,pSVar1);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
     NamedThemeAttribute_1_UnityEngine_Color__OnValidate
               (NamedThemeAttribute_1_UnityEngine_Color_ *this,MethodInfo *method)

{
  pSVar1 = (String *)
           (*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
                     (this,(this->fields).name,method->klass->rgctx_data[2].rgctxDataDummy);
  (this->fields).name = pSVar1;
  func_?(&(this->fields).name,pSVar1);
  return;
}


/* String Validate(String) */

String * Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
         NamedThemeAttribute_1_UnityEngine_Color__Validate
                   (NamedThemeAttribute_1_UnityEngine_Color_ *this,String *str,MethodInfo *method)

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

