
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
    this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar2->fields).spawnRoleMode;
    value = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                           );
    if ((value != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
                   MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_,
                   (MethodInfo *)0x0), this_00 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0))
    {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
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
      (*(avatarInteractable->klass->vtable).__unknown_2.methodPtr)(avatarInteractable);
      pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0);
      if (pWVar2 == (WaterPlaneManager *)0x0) goto code_?;
      bVar4 = WaterPlaneManager::WaterPlaneManager_get_IsLethal(pWVar2,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        (*(avatarInteractable->klass->vtable).__unknown_2.methodPtr)
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
  cVar6 = (*(avatarInteractable->klass->vtable).__unknown_3.methodPtr)
                    (avatarInteractable,9,(avatarInteractable->klass->vtable).__unknown_3.method);
  if (cVar6 != '\0') {
    (*(avatarInteractable->klass->vtable).__unknown_4.methodPtr)(avatarInteractable,9);
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
    if (0.0 <= 3.179573e-29 - fVar3) {
      fVar1 = 3.179573e-29 - fVar3;
    }
    (this->fields).oxygen = fVar1;
    if (fVar1 <= 0.0) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      pMStack7 = (avatarInteractable->klass->vtable).__unknown.method;
      (*(avatarInteractable->klass->vtable).__unknown.methodPtr)();
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
    if (0.0 <= 3.179348e-29 - fVar2) {
      fVar1 = 3.179348e-29 - fVar2;
    }
    (this->fields).oxygen = fVar1;
    if (fVar1 <= 0.0) {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      uStack3 = *(undefined4 *)(_UNK_? + 0xe8);
      (**(code **)(_UNK_? + 0xe4))();
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
        (*(avatarInteractable->klass->vtable).__unknown_2.methodPtr)
                  (avatarInteractable,9,0xffffffff);
        pWVar2 = MVGameControllerBase::MVGameControllerBase_get_WaterPlaneManager((MethodInfo *)0x0)
        ;
        if (pWVar2 != (WaterPlaneManager *)0x0) {
          bVar4 = WaterPlaneManager::WaterPlaneManager_get_IsLethal(pWVar2,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return;
          }
          (*(avatarInteractable->klass->vtable).__unknown_2.methodPtr)
                    (avatarInteractable,0x14,0xffffffff);
          return;
        }
      }
      goto code_?;
    }
  }
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar5 = (*(avatarInteractable->klass->vtable).__unknown_3.methodPtr)
                      (avatarInteractable,9,(avatarInteractable->klass->vtable).__unknown_3.method);
    if (cVar5 == '\0') {
      return;
    }
    (*(avatarInteractable->klass->vtable).__unknown_4.methodPtr)
              (avatarInteractable,9,0xffffffff,
               (avatarInteractable->klass->vtable).__unknown_4.method);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBX);
  pAVar4 = (AvatarModifierPackage_AvatarModifier__Array *)
           func_?(TypeInfo__AvatarModifierPackage__AvatarModifier,2);
  pFVar5 = (Func_1_Single_ *)func_?(TypeInfo__System__Func<float>);
  if (pFVar5 != (Func_1_Single_ *)0x0) {
    mscorlib.dll::System::Func`1[Single]::Func_1_Single___ctor
              (pFVar5,(Object *)this,MethodInfo__WaterState__UnderwaterModifierCallback__,
               (MethodInfo *)0x0);
    pFVar6 = (Func_1_Single_ *)0x0;
    mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
              ((MemoryHandle *)&stack0xfffffff0,(Void *)0x0,(GCHandle)0x3,(IPinnable *)pFVar5,
               (MethodInfo *)0x0);
    if (pAVar4 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
      if (pAVar4->max_length == 0) goto code_?;
      pAVar4->vector[0].avatarModifierType = 0;
      pAVar4->vector[0].avatarModifierEffect = 0;
      pAVar4->vector[0].value = pFVar6;
      func_?();
      pFVar5 = (Func_1_Single_ *)func_?();
      if (pFVar5 != (Func_1_Single_ *)0x0) {
        mscorlib.dll::System::Func`1[Single]::Func_1_Single___ctor
                  (pFVar5,(Object *)this,
                   MethodInfo__WaterState__UnderwaterJumpPowerModifierCallback__,(MethodInfo *)0x0);
        pFVar6 = (Func_1_Single_ *)0x0;
        pVStack_7 = (Void *)0x0;
        stack0xffffffe8 = (void *)0x0;
        mscorlib.dll::System::Buffers::MemoryHandle::MemoryHandle__ctor
                  ((MemoryHandle *)&pVStack_7,(Void *)0x0,(GCHandle)0x2,(IPinnable *)pFVar5,
                   (MethodInfo *)0x0);
        if (pAVar4->max_length < 2) goto code_?;
        pAVar4->vector[1].avatarModifierType = (int32_t)pVStack_7;
        pAVar4->vector[1].avatarModifierEffect = (int32_t)stack0xffffffe8;
        pAVar4->vector[1].value = pFVar6;
        func_?();
        (this->fields).additionalUnderWaterModifiers = pAVar4;
        func_?();
        stack0xffffffe8 = &UNK_?;
        pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                           ((MethodInfo *)0x0);
        if (pSVar8 != (SpawnRoleDataMediator *)0x0) {
          this_00.handle = (pSVar8->fields).spawnRoleMode;
          value = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?();
          if ((value != (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        ((UnityAction_1_System_Int32Enum_ *)value,(Object *)this,
                         MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_,
                         (MethodInfo *)0x0),
             this_00.handle != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) {
            stack0xffffffe8 = this_00.handle;
            Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
            SpawnRoleVariable`1[UnityEngine::Vector3]::
            SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                      (this_00.handle,value,
                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                      );
            if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
              bVar9 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                (skillDataManager,StringLiteral_OxygenSupply,(MethodInfo *)0x0);
              fVar3 = _UNK_?;
              if (bVar9 != 0) {
                fVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillFloatValue
                                  (skillDataManager,StringLiteral_OxygenSupply,(MethodInfo *)0x0);
              }
              (this->fields).oxygenMax = fVar3;
              (this->fields).oxygen = (this->fields).oxygenMax;
              bVar9 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                (skillDataManager,StringLiteral_BreathesWater,(MethodInfo *)0x0);
              (this->fields).hasGillsNoLungs = bVar9;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

