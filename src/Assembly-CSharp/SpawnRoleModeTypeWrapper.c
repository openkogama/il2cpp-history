
/* Boolean IsInMode(SpawnRoleModeType) */

bool Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
               (SpawnRoleModeTypeWrapper *this,SpawnRoleModeType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleType;
  if (this_00 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
    SVar1 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                        *)this_00,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                      );
    return 0 < (int)(t & SVar1);
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnChangeInternal(SpawnRoleModeType) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_OnChangeInternal
               (SpawnRoleModeTypeWrapper *this,SpawnRoleModeType__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnChange;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,obj,
               MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Invoke_MV__Common__SpawnRoleModeType_
              );
  }
  return;
}


/* SpawnRoleModeTypeWrapper(SpawnRoleVariable`1[MV.Common.SpawnRoleModeType]) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper__ctor
               (SpawnRoleModeTypeWrapper *this,
               SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *spawnRoleType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).spawnRoleType = spawnRoleType;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__SpawnRoleModeTypeWrapper__OnChangeInternal_MV__Common__SpawnRoleModeType_,
             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
            );
  if (spawnRoleType != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[UnityEngine::Vector3]::SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
              ((SpawnRoleVariable_1_UnityEngine_Vector3_ *)spawnRoleType,
               (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_00,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChange;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_MV_Common_SpawnRoleModeType___Class *)pDVar2->klass ==
          TypeInfo__System__Action<MV::Common::SpawnRoleModeType>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_Common_SpawnRoleModeType_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnChange(Action`1[MV.Common.SpawnRoleModeType]) */

void Assembly-CSharp.dll::SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
               (SpawnRoleModeTypeWrapper *this,Action_1_MV_Common_SpawnRoleModeType_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChange;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_MV_Common_SpawnRoleModeType___Class *)pDVar2->klass ==
          TypeInfo__System__Action<MV::Common::SpawnRoleModeType>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_Common_SpawnRoleModeType_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

