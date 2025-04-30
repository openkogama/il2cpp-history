
/* Void ApplyValue() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ApplyValue
               (ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass->rgctx_data;
  uVar3 = (pIVar2[1].klass)->actualSize;
  func_?();
  method = (MethodInfo *)&stack0xfffffff0;
  uVar4 = func_?(this,pIVar2->klass->fields);
  pMVar5 = method;
  func_?(method,uVar4,uVar3);
  if (-1 < (int)(pMVar1->klass->rgctx_data[1].method)->return_type) {
    pMVar5 = (MethodInfo *)pMVar5->methodPointer;
  }
  pIVar6 = this->klass[1]._0.image;
  method = pMVar5;
  (*(code *)pIVar6->assembly)(pIVar6->nameNoExt,pIVar6,this,&method,pMVar5);
  return;
}


/* Void Initialize(SettingsWrapper, String, Int32,
   Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Initialize
               (ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *onChange,
               MethodInfo *method)

{
  if (this != (ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    ThemeAttribute::ThemeAttribute_Initialize
              ((ThemeAttribute *)this,settings,key,groups,(MethodInfo *)0x0);
    pFVar1 = method->klass->rgctx_data->klass->fields;
    pFVar2 = pFVar1 + 1;
    _guard_check_icall(pFVar2,4);
    puVar3 = (undefined4 *)func_?(this,pFVar2);
    *puVar3 = onChange;
    func_?(pFVar1[1].type,puVar3,0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ThemeAttribute`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]() */

void Assembly-CSharp.dll::ThemeAttributes::ThemeAttribute`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (ThemeAttribute_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               MethodInfo *method)

{
  return;
}

