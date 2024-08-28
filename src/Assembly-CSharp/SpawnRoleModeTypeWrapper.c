
/* Boolean IsInMode(SpawnRoleModeType) */

bool Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
               (SpawnRoleModeTypeWrapper *this,SpawnRoleModeType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (WebCompletionSource_1_System_Object_ *)(this->fields).spawnRoleType;
  if (this_00 != (WebCompletionSource_1_System_Object_ *)0x0) {
    pTVar1 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
             WebCompletionSource_1_System_Object__get_Task
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    return 0 < (int)(t & (uint)pTVar1);
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* SpawnRoleModeTypeWrapper(SpawnRoleVariable`1[MV.Common.SpawnRoleModeType]) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper__ctor
               (SpawnRoleModeTypeWrapper *this,
               SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *spawnRoleType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__SpawnRoleModeTypeWrapper__OnChangeInternal_MV__Common__SpawnRoleModeType_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).spawnRoleType = spawnRoleType;
  func_?(&this->fields,spawnRoleType);
  value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
          func_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
             MethodInfo__SpawnRoleModeTypeWrapper__OnChangeInternal_MV__Common__SpawnRoleModeType_,
             (MethodInfo *)0x0);
  if (spawnRoleType != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
              ((SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               spawnRoleType,value,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void add_OnChange(Action`1[MV.Common.SpawnRoleModeType]) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
               (SpawnRoleModeTypeWrapper *this,Action_1_MV_Common_SpawnRoleModeType_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChange;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_MV_Common_SpawnRoleModeType_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Void remove_OnChange(Action`1[MV.Common.SpawnRoleModeType]) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
               (SpawnRoleModeTypeWrapper *this,Action_1_MV_Common_SpawnRoleModeType_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChange;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_MV_Common_SpawnRoleModeType_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}

