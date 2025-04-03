
/* Single ComputeAvatarWaterProximity(Vector3) */

float Assembly-CSharp.dll::WaterState::WaterState_ComputeAvatarWaterProximity
                (WaterState *this,Vector3 position,MethodInfo *method)

{
  pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (pWVar1 != (WaterPlaneManager *)0x0) {
    bVar2 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0.0;
    }
    pWVar1 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (pWVar1 != (WaterPlaneManager *)0x0) {
      fVar3 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar1,(MethodInfo *)0x0);
      fVar3 = (fVar3 - position.y) / _UNK_?;
      if (fVar3 < 0.0) {
        return 0.0;
      }
      if (fVar3 <= _UNK_?) {
        return fVar3;
      }
      return 1.0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WaterState::WaterState_Destroy(WaterState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    func_?(&MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              (pSVar2->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *
            )func_?(
                            TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
               MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_,
               (MethodInfo *)0x0);
    if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__remove_OnChange
                (this_00,value,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAvatarModeChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::WaterState::WaterState_OnAvatarModeChange
               (WaterState *this,SpawnRoleModeType__Enum newSpawnRoleMode,MethodInfo *method)

{
  (this->fields).oxygen = (this->fields).oxygenMax;
  return;
}


/* Single UnderwaterJumpPowerModifierCallback() */

float Assembly-CSharp.dll::WaterState::WaterState_UnderwaterJumpPowerModifierCallback
                (WaterState *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (this_00 == (WaterPlaneManager *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float10)(*pcVar1)();
    return (float)fVar2;
  }
  fVar3 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                    (this_00,(this->fields).worldPosition,(MethodInfo *)0x0);
  if (_UNK_? < (double)fVar3) {
    return _UNK_?;
  }
  return 1.0;
}


/* Single UnderwaterModifierCallback() */

float Assembly-CSharp.dll::WaterState::WaterState_UnderwaterModifierCallback
                (WaterState *this,MethodInfo *method)

{
  fVar1 = WaterState_ComputeAvatarWaterProximity
                    (this,(this->fields).worldPosition,(MethodInfo *)0x0);
  return (_UNK_? - fVar1) * _UNK_? + _UNK_?;
}


/* Void Update(Vector3, MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_Update
               (WaterState *this,Vector3 worldPosition,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  (this->fields).worldPosition.x = (float)(int)worldPosition._0_8_;
  (this->fields).worldPosition.y = (float)(int)((ulonglong)worldPosition._0_8_ >> 0x20);
  (this->fields).worldPosition.z = worldPosition.z;
  fVar1 = (this->fields).worldPosition.y;
  pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
  fVar3 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar2,(MethodInfo *)0x0);
  if (fVar1 < fVar3) {
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
    bVar4 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar2,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (avatarInteractable == (MVInteractableBase *)0x0) goto code_?;
      (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)(avatarInteractable);
      pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
      bVar4 = WaterPlaneManager::WaterPlaneManager_get_IsLethal(pWVar2,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)
                  (avatarInteractable,0x14,0xffffffff);
      }
      goto code_?;
    }
  }
  if (avatarInteractable == (MVInteractableBase *)0x0) {
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar6 = (*(code *)(avatarInteractable->klass->vtable).__unknown_5.method)
                    (avatarInteractable,9,(avatarInteractable->klass->vtable).__unknown_6.methodPtr)
  ;
  if (cVar6 != '\0') {
    (*(code *)(avatarInteractable->klass->vtable).__unknown_6.method)(avatarInteractable,9);
  }
code_?:
  fVar1 = WaterState_ComputeAvatarWaterProximity
                    (this,(this->fields).worldPosition,(MethodInfo *)0x0);
  if (_UNK_? <= fVar1 == (bool)(this->fields).hasGillsNoLungs) {
    (this->fields).oxygen = (this->fields).oxygenMax;
  }
  else {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = 0.0;
    if (0.0 <= 3.3367964e-29 - fVar3) {
      fVar1 = 3.3367964e-29 - fVar3;
    }
    (this->fields).oxygen = fVar1;
    if (fVar1 <= 0.0) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      pIStack7 = (avatarInteractable->klass->vtable).__unknown_1.methodPtr;
      (*(code *)(avatarInteractable->klass->vtable).__unknown.method)();
      return;
    }
  }
  return;
}


/* Void UpdateLocalAvatarOxygen(MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_UpdateLocalAvatarOxygen
               (WaterState *this,MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  fVar1 = WaterState_ComputeAvatarWaterProximity
                    (this,(this->fields).worldPosition,(MethodInfo *)0x0);
  if (_UNK_? <= fVar1 == (bool)(this->fields).hasGillsNoLungs) {
    (this->fields).oxygen = (this->fields).oxygenMax;
  }
  else {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = 0.0;
    if (0.0 <= 3.3365713e-29 - fVar2) {
      fVar1 = 3.3365713e-29 - fVar2;
    }
    (this->fields).oxygen = fVar1;
    if (fVar1 <= 0.0) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      uStack3 = *(undefined4 *)(_UNK_? + 0xec);
      (**(code **)(_UNK_? + 0xe8))();
      return;
    }
  }
  return;
}


/* Void UpdateModifiers(MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_UpdateModifiers
               (WaterState *this,MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  fVar1 = (this->fields).worldPosition.y;
  pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
  if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
  fVar3 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar2,(MethodInfo *)0x0);
  if (fVar1 < fVar3) {
    pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
    if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
    bVar4 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar2,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if (avatarInteractable != (MVInteractableBase *)0x0) {
        (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)
                  (avatarInteractable,9,0xffffffff);
        pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0)
        ;
        if (pWVar2 != (WaterPlaneManager *)0x0) {
          bVar4 = WaterPlaneManager::WaterPlaneManager_get_IsLethal(pWVar2,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return;
          }
          (*(code *)(avatarInteractable->klass->vtable).__unknown_4.method)
                    (avatarInteractable,0x14,0xffffffff);
          return;
        }
      }
      goto code_?;
    }
  }
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar5 = (*(code *)(avatarInteractable->klass->vtable).__unknown_5.method)
                      (avatarInteractable,9,
                       (avatarInteractable->klass->vtable).__unknown_6.methodPtr);
    if (cVar5 == '\0') {
      return;
    }
    (*(code *)(avatarInteractable->klass->vtable).__unknown_6.method)
              (avatarInteractable,9,0xffffffff,
               (avatarInteractable->klass->vtable).__unknown_7.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* WaterState(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::WaterState::WaterState__ctor
               (WaterState *this,WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage__AvatarModifier);
    func_?(&TypeInfo__System__Func<float>);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                   );
    func_?(&MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_);
    func_?(&MethodInfo__WaterState__UnderwaterJumpPowerModifierCallback__);
    func_?(&MethodInfo__WaterState__UnderwaterModifierCallback__);
    func_?(&StringLiteral_OxygenSupply);
    func_?(&StringLiteral_BreathesWater);
    cRam_? = '\x01';
  }
  (this->fields).oxygenMax = 20.0;
  (this->fields).oxygen = 20.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).worldPosition.x = (pVVar1->zeroVector).x;
  (this->fields).worldPosition.y = fVar2;
  (this->fields).worldPosition.z = fVar3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pAVar4 = (AvatarModifierPackage_AvatarModifier__Array *)
           func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,2);
  pFVar5 = (Func_1_Single_ *)func_?(TypeInfo__System__Func<float>);
  mscorlib.dll::System::Func`1[Single]::Func_1_Single___ctor
            (pFVar5,(Object *)this,MethodInfo__WaterState__UnderwaterModifierCallback__,
             (MethodInfo *)0x0);
  pFVar6 = (Func_1_Single_ *)0x0;
  uVar7._0_4_ = 0;
  uVar7._4_4_ = 0;
  mscorlib.dll::System::ValueTuple`3[Int32Enum,Int32Enum,Object]::
  ValueTuple_3_Int32Enum_Int32Enum_Object___ctor
            ((ValueTuple_3_Int32Enum_Int32Enum_Object_ *)&stack0xfffffff0,0,3,(Object *)pFVar5,
             (MethodInfo *)0x0);
  if (pAVar4 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
    if (pAVar4->max_length == 0) goto code_?;
    pAVar4->vector[0].avatarModifierType = (int32_t)uVar7;
    pAVar4->vector[0].avatarModifierEffect = SUB84(uVar7,4);
    pAVar4->vector[0].value = pFVar6;
    func_?();
    pFVar5 = (Func_1_Single_ *)func_?();
    mscorlib.dll::System::Func`1[Single]::Func_1_Single___ctor
              (pFVar5,(Object *)this,MethodInfo__WaterState__UnderwaterJumpPowerModifierCallback__,
               (MethodInfo *)0x0);
    pFVar6 = (Func_1_Single_ *)0x0;
    uStack_8._0_4_ = 0;
    uStack_8._4_4_ = 0;
    mscorlib.dll::System::ValueTuple`3[Int32Enum,Int32Enum,Object]::
    ValueTuple_3_Int32Enum_Int32Enum_Object___ctor
              ((ValueTuple_3_Int32Enum_Int32Enum_Object_ *)&uStack_8,0,2,(Object *)pFVar5,
               (MethodInfo *)0x0);
    if (pAVar4->max_length < 2) goto code_?;
    pAVar4->vector[1].avatarModifierType = (int32_t)uStack_8;
    pAVar4->vector[1].avatarModifierEffect = uStack_8._4_4_;
    pAVar4->vector[1].value = pFVar6;
    func_?();
    (this->fields).additionalUnderWaterModifiers = pAVar4;
    func_?();
    uStack_8._4_4_ = (int32_t)&UNK_?;
    pSVar9 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar9 != (SpawnRoleDataMediator *)0x0) {
      this_00 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                (pSVar9->fields).spawnRoleMode;
      value = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
                 MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_,
                 (MethodInfo *)0x0);
      if (this_00 != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
      {
        uStack_8._4_4_ = (int32_t)&UNK_?;
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
                  (this_00,value,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                  );
        if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
          bVar10 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                            (skillDataManager,StringLiteral_OxygenSupply,(MethodInfo *)0x0);
          fVar3 = _UNK_?;
          if (bVar10 != 0) {
            fVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillFloatValue
                              (skillDataManager,StringLiteral_OxygenSupply,(MethodInfo *)0x0);
          }
          (this->fields).oxygenMax = fVar3;
          (this->fields).oxygen = fVar3;
          bVar10 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                            (skillDataManager,StringLiteral_BreathesWater,(MethodInfo *)0x0);
          (this->fields).hasGillsNoLungs = bVar10;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

