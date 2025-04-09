
/* Void Initialize(SettingsWrapper, String, Int32,
   Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Initialize
               (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  if (this != (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar1 = method->klass->rgctx_data[2].method;
    (*pMVar1->methodPointer)(this,settings,key,groups,onChange,pMVar1);
    puVar2 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields);
    pSVar3 = TM::TM__((String *)*puVar2,(MethodInfo *)0x0);
    pFVar4 = method->klass->rgctx_data->klass->fields;
    _guard_check_icall(pFVar4,4);
    puVar2 = (undefined4 *)func_?(this,pFVar4);
    *puVar2 = pSVar3;
    func_?(pFVar4->type,puVar2,0);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,method->klass->rgctx_data[3].rgctxDataDummy,(MethodInfo *)0x0)
    ;
    TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void LanguageLoadedCallback() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__LanguageLoadedCallback
               (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  puVar1 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields);
  pSVar2 = TM::TM__((String *)*puVar1,(MethodInfo *)0x0);
  pFVar3 = method->klass->rgctx_data->klass->fields;
  _guard_check_icall(pFVar3,4);
  puVar1 = (undefined4 *)func_?(this,pFVar3);
  *puVar1 = pSVar2;
  func_?(pFVar3->type,puVar1,0);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnValidate
               (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  puVar1 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields);
  pMVar2 = method->klass->rgctx_data[4].method;
  uVar3 = (*pMVar2->methodPointer)(this,*puVar1,pMVar2);
  pFVar4 = method->klass->rgctx_data->klass->fields;
  _guard_check_icall(pFVar4,4);
  puVar1 = (undefined4 *)func_?(this,pFVar4);
  *puVar1 = uVar3;
  func_?(pFVar4->type,puVar1,0);
  return;
}


/* String Validate(String) */

String * Assembly-CSharp.dll::ThemeAttributes::NamedThemeAttribute`1[Unity::IL2CPP::Metadata::
         __Il2CppFullySharedGenericType]::
         NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Validate
                   (NamedThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                   String *str,MethodInfo *method)

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

