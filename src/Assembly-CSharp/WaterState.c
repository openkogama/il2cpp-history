
/* Single ComputeAvatarWaterProximity(Vector3) */

float Assembly-CSharp.dll::WaterState::WaterState_ComputeAvatarWaterProximity
                (WaterState *this,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 != (WaterPlaneManager *)0x0)) {
    bVar3 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pWVar2 = (pMVar1->fields).waterPlaneManager, pWVar2 == (WaterPlaneManager *)0x0))
      goto code_?;
      fVar4 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar2,(MethodInfo *)0x0);
      fVar4 = (fVar4 - position->y) / _UNK_?;
      if (0.0 <= fVar4) {
        if (_UNK_? < fVar4) {
          fVar4 = _UNK_?;
        }
        return fVar4;
      }
    }
    return 0.0;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar4 = (float)(*pcVar5)();
  return fVar4;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WaterState::WaterState_Destroy(WaterState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    pSVar3 = (pSVar2->fields).spawnRoleMode;
    uVar4 = FUN_?(
                         TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                         );
    FUN_?(uVar4,this,
                  MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_);
    if (pSVar3 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0) {
      FUN_?(pSVar3,uVar4);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).waterPlaneManager, this_00 != (WaterPlaneManager *)0x0)) {
    VStack_2.x = (this->fields).worldPosition.x;
    VStack_2.y = (this->fields).worldPosition.y;
    VStack_2.z = (this->fields).worldPosition.z;
    fVar3 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                      (this_00,&VStack_2,(MethodInfo *)0x0);
    if (_UNK_? < (double)fVar3) {
      return TypeRef__System__Activator__T._0_4_;
    }
    return _UNK_?;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Single UnderwaterModifierCallback() */

float Assembly-CSharp.dll::WaterState::WaterState_UnderwaterModifierCallback
                (WaterState *this,MethodInfo *method)

{
  aVStack_1[0].x = (this->fields).worldPosition.x;
  aVStack_1[0].y = (this->fields).worldPosition.y;
  aVStack_1[0].z = (this->fields).worldPosition.z;
  fVar2 = WaterState_ComputeAvatarWaterProximity(this,aVStack_1,(MethodInfo *)0x0);
  return (_UNK_? - fVar2) * _UNK_? + _UNK_?;
}


/* Void Update(Vector3, MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_Update
               (WaterState *this,Vector3 *worldPosition,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  fVar1 = worldPosition->y;
  fVar2 = worldPosition->z;
  (this->fields).worldPosition.x = worldPosition->x;
  (this->fields).worldPosition.y = fVar1;
  (this->fields).worldPosition.z = fVar2;
  WaterState_UpdateModifiers(this,avatarInteractable,(MethodInfo *)0x0);
  aVStack_3[0].x = (this->fields).worldPosition.x;
  aVStack_3[0].y = (this->fields).worldPosition.y;
  aVStack_3[0].z = (this->fields).worldPosition.z;
  fVar2 = WaterState_ComputeAvatarWaterProximity(this,aVStack_3,(MethodInfo *)0x0);
  if ((fVar2 < _UNK_? ^ (this->fields).hasGillsNoLungs) == 1) {
    (this->fields).oxygen = (this->fields).oxygenMax;
    return;
  }
  fVar2 = (this->fields).oxygen;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar1 = (float)(*pcRam_?)();
  fVar2 = fVar2 - fVar1;
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  (this->fields).oxygen = fVar1;
  if (fVar1 <= 0.0) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar2 = (float)(*pcRam_?)();
    if (avatarInteractable == (MVInteractableBase *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*(avatarInteractable->klass->vtable).__unknown.methodPtr)
              (avatarInteractable,fVar2 * _UNK_?,0,6,
               (avatarInteractable->klass->vtable).__unknown.method);
  }
  return;
}


/* Void UpdateLocalAvatarOxygen(MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_UpdateLocalAvatarOxygen
               (WaterState *this,MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  aVStack_1[0].x = (this->fields).worldPosition.x;
  aVStack_1[0].y = (this->fields).worldPosition.y;
  aVStack_1[0].z = (this->fields).worldPosition.z;
  fVar2 = WaterState_ComputeAvatarWaterProximity(this,aVStack_1,(MethodInfo *)0x0);
  if ((fVar2 < _UNK_? ^ (this->fields).hasGillsNoLungs) == 1) {
    (this->fields).oxygen = (this->fields).oxygenMax;
    return;
  }
  fVar2 = (this->fields).oxygen;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  fVar2 = fVar2 - fVar5;
  fVar5 = 0.0;
  if (0.0 <= fVar2) {
    fVar5 = fVar2;
  }
  (this->fields).oxygen = fVar5;
  if (fVar5 <= 0.0) {
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar2 = (float)(*pcRam_?)();
    if (avatarInteractable == (MVInteractableBase *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(avatarInteractable->klass->vtable).__unknown.methodPtr)
              (avatarInteractable,fVar2 * _UNK_?,0,6,
               (avatarInteractable->klass->vtable).__unknown.method);
  }
  return;
}


/* Void UpdateModifiers(MVInteractableBase) */

void Assembly-CSharp.dll::WaterState::WaterState_UpdateModifiers
               (WaterState *this,MVInteractableBase *avatarInteractable,MethodInfo *method)

{
  fVar1 = (this->fields).worldPosition.y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 == (MVGameControllerBase *)0x0) ||
     (pWVar3 = (pMVar2->fields).waterPlaneManager, pWVar3 == (WaterPlaneManager *)0x0))
  goto code_?;
  fVar4 = WaterPlaneManager::WaterPlaneManager_get_WaterLevel(pWVar3,(MethodInfo *)0x0);
  if (fVar1 < fVar4) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pWVar3 = (pMVar2->fields).waterPlaneManager, pWVar3 == (WaterPlaneManager *)0x0))
    goto code_?;
    bVar5 = WaterPlaneManager::WaterPlaneManager_get_IsActive(pWVar3,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      if (avatarInteractable != (MVInteractableBase *)0x0) {
        (*(avatarInteractable->klass->vtable).__unknown_4.methodPtr)
                  (avatarInteractable,9,0xffffffff,(this->fields).additionalUnderWaterModifiers,
                   (avatarInteractable->klass->vtable).__unknown_4.method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 != (MVGameControllerBase *)0x0) &&
            (pWVar3 = (pMVar2->fields).waterPlaneManager, pWVar3 != (WaterPlaneManager *)0x0)) &&
           (pWVar6 = (pWVar3->fields).water, pWVar6 != (Water *)0x0)) {
          if ((pWVar6->fields).isLethal == 0) {
            return;
          }
          (*(avatarInteractable->klass->vtable).__unknown_4.methodPtr)
                    (avatarInteractable,0x14,0xffffffff,0,
                     (avatarInteractable->klass->vtable).__unknown_4.method);
          return;
        }
      }
      goto code_?;
    }
  }
  if (avatarInteractable != (MVInteractableBase *)0x0) {
    cVar7 = (*(avatarInteractable->klass->vtable).__unknown_5.methodPtr)
                      (avatarInteractable,9,(avatarInteractable->klass->vtable).__unknown_5.method);
    if (cVar7 == '\0') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(avatarInteractable->klass->vtable).__unknown_6.methodPtr)
              (avatarInteractable,9,0xffffffff,
               (avatarInteractable->klass->vtable).__unknown_6.method);
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* WaterState(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::WaterState::WaterState__ctor
               (WaterState *this,WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage__AvatarModifier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<float>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WaterState__UnderwaterJumpPowerModifierCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WaterState__UnderwaterModifierCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OxygenSupply);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BreathesWater);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).oxygenMax = 20.0;
  (this->fields).oxygen = 20.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).worldPosition.x = (pVVar2->zeroVector).x;
  (this->fields).worldPosition.y = fVar3;
  (this->fields).worldPosition.z = fVar4;
  pAVar5 = (AvatarModifierPackage_AvatarModifier__Array *)
           FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier,2);
  uVar6 = FUN_?(TypeInfo__System__Func<float>);
  FUN_?(uVar6,this,MethodInfo__WaterState__UnderwaterModifierCallback__);
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
    uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar10 == *puVar11;
      if (bVar1) {
        *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar12 = iRam_?;
  uStack_8 = uVar6;
  if (pAVar5 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
code_?:
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((int)pAVar5->max_length != 0) {
    uStack_8._0_4_ = (undefined4)uVar6;
    uStack_8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    pAVar5->vector[0].avatarModifierType = 0;
    pAVar5->vector[0].avatarModifierEffect = 3;
    *(undefined4 *)&pAVar5->vector[0].value = (undefined4)uStack_8;
    *(undefined4 *)((longlong)&pAVar5->vector[0].value + 4) = uStack_8._4_4_;
    if (iVar12 != 0) {
      uVar7 = (uint)((ulonglong)&pAVar5->vector[0].value >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar10 == *puVar11;
        if (bVar1) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pFVar14 = (Func_1_Single_ *)FUN_?(TypeInfo__System__Func<float>);
    FUN_?(pFVar14,this,MethodInfo__WaterState__UnderwaterJumpPowerModifierCallback__);
    uStack_15 = 0;
    uStack_16 = 2;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pFStack_17 >> 0xc);
      uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar10 == *puVar11;
        if (bVar1) {
          *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    iVar12 = iRam_?;
    pFStack_17 = pFVar14;
    if (1 < (uint)pAVar5->max_length) {
      pAVar5->vector[1].avatarModifierType = 0;
      pAVar5->vector[1].avatarModifierEffect = 2;
      pAVar5->vector[1].value = pFVar14;
      if (iVar12 != 0) {
        uVar7 = (uint)((ulonglong)&pAVar5->vector[1].value >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar10 == *puVar11;
          if (bVar1) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
          iVar12 = iRam_?;
        } while (!bVar1);
      }
      (this->fields).additionalUnderWaterModifiers = pAVar5;
      if (iVar12 != 0) {
        uVar7 = (uint)((ulonglong)&this->fields >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar10 == *puVar11;
          if (bVar1) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pSVar18 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar18 != (SpawnRoleDataMediator *)0x0) {
        pSVar19 = (pSVar18->fields).spawnRoleMode;
        uVar6 = FUN_?(
                              TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                              );
        FUN_?(uVar6,this);
        if ((pSVar19 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                        *)0x0) &&
           (FUN_?(pSVar19,uVar6), skillDataManager != (WorldObjectSkillDataManager *)0x0)) {
          bVar20 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                            (skillDataManager,StringLiteral_OxygenSupply,(MethodInfo *)0x0);
          fVar4 = _UNK_?;
          if (bVar20 != 0) {
            fVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillFloatValue
                               (skillDataManager,StringLiteral_OxygenSupply,(MethodInfo *)0x0);
          }
          (this->fields).oxygenMax = fVar4;
          (this->fields).oxygen = (this->fields).oxygenMax;
          bVar20 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                            (skillDataManager,StringLiteral_BreathesWater,(MethodInfo *)0x0);
          (this->fields).hasGillsNoLungs = bVar20;
          return;
        }
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

