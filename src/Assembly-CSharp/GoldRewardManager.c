
/* Boolean CanGetGoldReward() */

bool Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_CanGetGoldReward
               (GoldRewardManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) == 0) {
    bVar1 = 0;
  }
  else {
    bVar2 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    bVar1 = bVar2 ^ 1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar3 != (GameSessionData *)0x0) {
    iVar4 = (pGVar3->fields).gameMode;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 != (GameSessionData *)0x0) {
      if (((bVar1 != 0) && ((this->fields).isGoldRewardGame != 0)) &&
         (iVar4 == 1 && (this->fields).isGoldRewardDone == 0)) {
        return 0 < (pGVar3->fields).profileID;
      }
      return 0;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Single GetGoldRewardCountdownProgressPercentage() */

float Assembly-CSharp.dll::GoldRewardManager::
      GoldRewardManager_GetGoldRewardCountdownProgressPercentage
                (GoldRewardManager *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  return (fVar3 - (this->fields).startTime) / _UNK_?;
}


/* Single GetGoldRewardTimeLeft() */

float Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft
                (GoldRewardManager *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar4 = _UNK_? - (fVar3 - (this->fields).startTime);
  fVar3 = 0.0;
  if (0.0 <= fVar4) {
    fVar3 = fVar4;
  }
  return fVar3;
}


/* Void OnAvatarChangeState(SpawnRoleModeType) */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_OnAvatarChangeState
               (GoldRewardManager *this,SpawnRoleModeType__Enum avatarMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GoldRewardManager__OnAvatarChangeState_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (avatarMode == SpawnRoleModeType__Enum_Playing) {
    pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
      pSVar2 = (pSVar1->fields).spawnRoleMode;
      uVar3 = FUN_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                           );
      FUN_?(uVar3,this,
                    MethodInfo__GoldRewardManager__OnAvatarChangeState_MV__Common__SpawnRoleModeType_
                   );
      if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_
                     *)0x0) {
        FUN_?(pSVar2,uVar3);
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        fVar5 = (float)(*pcRam_?)();
        (this->fields).startTime = fVar5;
        (this->fields).isCountingDownGoldReward = 1;
        return;
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void OnClaimGoldReward() */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_OnClaimGoldReward
               (GoldRewardManager *this,MethodInfo *method)

{
  (this->fields).isCountingDownGoldReward = 0;
  (this->fields).isGoldRewardDone = 1;
  return;
}


/* Void StartGoldRewardCountdown() */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_StartGoldRewardCountdown
               (GoldRewardManager *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).startTime = fVar3;
  (this->fields).isCountingDownGoldReward = 1;
  return;
}


/* Void StartGoldRewardCountdownWhenReady() */

void Assembly-CSharp.dll::GoldRewardManager::GoldRewardManager_StartGoldRewardCountdownWhenReady
               (GoldRewardManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GoldRewardManager__OnAvatarChangeState_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).spawnRoleMode;
    b = (Delegate *)
        FUN_?(
                     TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                     );
    FUN_?(b,this);
    pMVar3 = 
    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
    ;
    if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0) {
      ppSVar4 = &(pSVar2->fields)._.OnChange;
      a = (pSVar2->fields)._.OnChange;
      do {
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,b,(MethodInfo *)0x0)
        ;
        pvVar6 = pMVar3->klass->rgctx_data[6].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
          pvVar6 = (void *)FUN_?();
        }
        if (pDVar5 == (Delegate *)0x0) {
          pSVar7 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0;
        }
        else {
          pSVar7 = (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)
                   FUN_?(pDVar5,pvVar6);
          if (pSVar7 == (SpawnRoleVariable_1_T_SubDelegate_MV_Common_SpawnRoleModeType_ *)0x0) {
            FUN_?(pDVar5,pvVar6);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        LOCK();
        pSVar9 = *ppSVar4;
        bVar10 = a == pSVar9;
        if (bVar10) {
          *ppSVar4 = pSVar7;
          pSVar9 = a;
        }
        UNLOCK();
        pSVar7 = a;
        if (!bVar10) {
          pSVar7 = pSVar9;
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)ppSVar4 >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        bVar10 = pSVar7 != a;
        a = pSVar7;
      } while (bVar10);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

