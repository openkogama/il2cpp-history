
/* GameEventManager() */

void Assembly-CSharp.dll::GameEventManager::GameEventManager__ctor
               (GameEventManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameEventManager__AvatarCommandsBuildModeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameEventManager__AvatarCommandsPlayModeManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameEventManager__GameStateManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameEventManager_AvatarCommandsPlayModeManager *)
           FUN_?(TypeInfo__GameEventManager__AvatarCommandsPlayModeManager);
  bVar2 = iRam_? != 0;
  (this->fields).AvatarCommandsPlayMode = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).AvatarCommandsPlayMode >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar7 = (GameEventManager_AvatarCommandsBuildModeManager *)
           FUN_?(TypeInfo__GameEventManager__AvatarCommandsBuildModeManager);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar8 = (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
           FUN_?(
                        TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager
                        );
  (pGVar7->fields).LaserCommands = pGVar8;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pGVar7->fields).LaserCommands >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar9 = iRam_?;
  (this->fields).AvatarCommandsBuildMode = pGVar7;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).AvatarCommandsBuildMode >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar10 = (GameEventManager_GameStateManager *)
           FUN_?(TypeInfo__GameEventManager__GameStateManager);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar11 = (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_ *)
           FUN_?(
                        TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                        );
  (pGVar11->fields)._.value = 0;
  (pGVar10->fields).gameStateType = pGVar11;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pGVar10->fields).gameStateType >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar9 = iRam_?;
  (this->fields).GameState = pGVar10;
  if (iVar9 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).GameState >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Void add_OnFirstTimeEvent(Action`1[MV.WorldObject.MetaData.FirstTimeEvent]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_add_OnFirstTimeEvent
               (GameEventManager *this,Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnFirstTimeEvent;
  a = (this->fields).OnFirstTimeEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
      if (pAVar4 == (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void add_OnXPRewarded(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_add_OnXPRewarded
               (GameEventManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnXPRewarded;
  a = (this->fields).OnXPRewarded;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Int32_ *)FUN_?(pDVar2,TypeInfo__System__Action<int>);
      if (pAVar4 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnFirstTimeEvent(Action`1[MV.WorldObject.MetaData.FirstTimeEvent]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_remove_OnFirstTimeEvent
               (GameEventManager *this,Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnFirstTimeEvent;
  source = (this->fields).OnFirstTimeEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
      if (pAVar4 == (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnXPRewarded(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_remove_OnXPRewarded
               (GameEventManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnXPRewarded;
  source = (this->fields).OnXPRewarded;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Int32_ *)FUN_?(pDVar2,TypeInfo__System__Action<int>);
      if (pAVar4 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}

