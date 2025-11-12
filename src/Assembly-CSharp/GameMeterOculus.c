
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_Initialize
               (GameMeterOculus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameMeterOculus__OnVictoryConditionMet_System__Object__System__EventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__GameMeterOculus__OnVictoryConditionMet_System__Object__System__EventArgs_
               ,(MethodInfo *)0x0);
    if (pWVar3 != (WinningConditionManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppEVar4 = &(pWVar3->fields).OnWinningConditionReset;
      a = (pWVar3->fields).OnWinningConditionReset;
      do {
        pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
        pEVar6 = TypeInfo__System__EventHandler<System::EventArgs>;
        if (pDVar5 == (Delegate *)0x0) {
          pEVar7 = (EventHandler_1_EventArgs_ *)0x0;
        }
        else {
          pEVar7 = (EventHandler_1_EventArgs_ *)
                    FUN_?(pDVar5,TypeInfo__System__EventHandler<System::EventArgs>);
          if (pEVar7 == (EventHandler_1_EventArgs_ *)0x0) {
            FUN_?(pDVar5,pEVar6);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        LOCK();
        pEVar9 = *ppEVar4;
        bVar10 = a == pEVar9;
        if (bVar10) {
          *ppEVar4 = pEVar7;
          pEVar9 = a;
        }
        UNLOCK();
        pEVar7 = a;
        if (!bVar10) {
          pEVar7 = pEVar9;
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)ppEVar4 >> 0xc);
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
        bVar10 = pEVar7 != a;
        a = pEVar7;
      } while (bVar10);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_OnDestroy
               (GameMeterOculus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 != (MVGameControllerBase *)0x0) {
      if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
        return;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar3->fields)._WinningConditionManager_k__BackingField;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<System::EventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__GameMeterOculus__OnVictoryConditionMet_System__Object__System__EventArgs_
                   ,(MethodInfo *)0x0);
        if (this_00 != (WinningConditionManager *)0x0) {
          MVWorldObject.dll::WinningConditionManager::
          WinningConditionManager_remove_OnWinningConditionReset
                    (this_00,(EventHandler_1_EventArgs_ *)this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_SetGameMeterVisibility
               (GameMeterOculus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     pWVar3 != (WinningConditionManager *)0x0)) {
    pOVar4 = (OculusKillLimitClient *)
             MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar3,
                        OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                       );
    bVar5 = iRam_? != 0;
    (this->fields).oculusClient = pOVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).oculusClient >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    FlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<FlagReachedClient>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
       pWVar3 != (WinningConditionManager *)0x0)) {
      pOVar10 = MVWorldObject.dll::WinningConditionManager::
                WinningConditionManager_GetSingletonWinnerConditionByType
                          (pWVar3,
                           OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                          );
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,pOVar10 != (Object *)0x0,(MethodInfo *)0x0);
        return pOVar10 != (Object *)0x0;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void UpdateValue() */

void Assembly-CSharp.dll::GameMeterOculus::GameMeterOculus_UpdateValue
               (GameMeterOculus *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).oculusClient == (OculusKillLimitClient *)0x0) {
    return;
  }
  GameMeterKillBase::GameMeterKillBase_SetCount
            ((GameMeterKillBase *)this,
             (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)method >> 8),6),
             (((this->fields).oculusClient)->fields)._._.limit,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    uVar3 = 0;
    this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      iVar4 = MVPlayer::MVPlayer_GetGameStat
                        ((MVPlayer *)this_01,
                         (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),6),
                         (MethodInfo *)0x0);
      if ((this->fields).prevValue == iVar4) {
        return;
      }
      if (iVar4 == 0) {
        return;
      }
      uVar5 = 0;
      (this->fields).prevValue = iVar4;
      pLVar6 = (this->fields)._._.gameMeterVisualEffects;
      if (pLVar6 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
        lVar7 = 0x20;
        do {
          if ((pLVar6->fields)._size <= (int)uVar5) {
            return;
          }
          pLVar6 = (this->fields)._._.gameMeterVisualEffects;
          if (pLVar6 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
          if ((uint)(pLVar6->fields)._size <= uVar5) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pGVar9 = (pLVar6->fields)._items;
          if (pGVar9 == (GameMeterVisualEffect__Array *)0x0) break;
          if ((uint)pGVar9->max_length <= uVar5) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          plVar10 = *(longlong **)((longlong)pGVar9->vector + lVar7 + -0x20);
          if (plVar10 == (longlong *)0x0) break;
          (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          pLVar6 = (this->fields)._._.gameMeterVisualEffects;
          uVar5 = uVar5 + 1;
          lVar7 = lVar7 + 8;
        } while (pLVar6 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

