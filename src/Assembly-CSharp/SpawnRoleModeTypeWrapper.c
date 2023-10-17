
/* Boolean IsInMode(SpawnRoleModeType) */

bool Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
               (SpawnRoleModeTypeWrapper *this,SpawnRoleModeType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleVariable_1_System_Object_ *)(this->fields).spawnRoleType;
  if (this_00 != (SpawnRoleVariable_1_System_Object_ *)0x0) {
    pOVar1 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__get_Value
                       (this_00,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
    return 0 < (int)(t & (uint)pOVar1);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).spawnRoleType = spawnRoleType;
  func_?(&this->fields,spawnRoleType);
  value = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
          func_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
  if (value != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
               MethodInfo__SpawnRoleModeTypeWrapper__OnChangeInternal_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (spawnRoleType != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                ((SpawnRoleVariable_1_UnityEngine_Vector3_ *)spawnRoleType,value,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
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
  a = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_Common_SpawnRoleModeType_ *)
             func_?(&(this->fields).OnChange,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
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
  source = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<MV::Common::SpawnRoleModeType>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_Common_SpawnRoleModeType_ *)
             func_?(&(this->fields).OnChange,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

