
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_Initialize
               (GameMeterCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
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
               MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
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

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_OnDestroy
               (GameMeterCollectible *this,MethodInfo *method)

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
                   MethodInfo__GameMeterCollectible__OnVictoryConditionMet_System__Object__System__EventArgs_
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

bool Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_SetGameMeterVisibility
               (GameMeterCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
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
    pAVar4 = (AllCollectiblesCollectedClient *)
             MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar3,
                        AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                       );
    bVar5 = iRam_? != 0;
    (this->fields).collectedClient = pAVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).collectedClient >> 0xc);
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
                           AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
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

void Assembly-CSharp.dll::GameMeterCollectible::GameMeterCollectible_UpdateValue
               (GameMeterCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).collectedClient == (AllCollectiblesCollectedClient *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).teamManager, this_00 == (MVTeamManager *)0x0)) ||
     (pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0),
     pLVar3 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto DAT_?;
  if ((pLVar3->fields)._size < 2) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar4 = (pMVar2->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
    goto DAT_?;
    uVar5 = 0;
    pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    if (pMVar6 == (MVLocalPlayer *)0x0) goto DAT_?;
    value_00 = MVPlayer::MVPlayer_GetGameStat
                         ((MVPlayer *)pMVar6,
                          (GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),3),
                          (MethodInfo *)0x0);
  }
  else {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto DAT_?;
    this_01 = (pMVar2->fields).gameStatCounterManager;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar4 = (pMVar2->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
    goto DAT_?;
    uVar5 = 0;
    pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
    if ((pMVar6 == (MVLocalPlayer *)0x0) || (this_01 == (GameStatCounterManager *)0x0))
    goto DAT_?;
    value_00 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                         (this_01,(GameStatCounterType__Enum)
                                  CONCAT71((int7)((ulonglong)uVar5 >> 8),3),
                          (pMVar6->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
  }
  if (((this->fields).prevValue == value_00) || (value_00 == 0)) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_7[0]._pointer._value = (void *)0x0;
    aRStack_7[0]._length = 0;
    aRStack_7[0]._12_4_ = 0;
    pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                        (value_00,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pAVar9 = (this->fields).collectedClient;
    if (pAVar9 != (AllCollectiblesCollectedClient *)0x0) {
      value = (pAVar9->fields)._._.limit;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_7[0]._pointer._value = (void *)0x0;
      aRStack_7[0]._length = 0;
      aRStack_7[0]._12_4_ = 0;
      str2 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_5
                          (pSVar8,::StringLiteral__,str2,(MethodInfo *)0x0);
      pTVar10 = (this->fields).collectibleText;
      if (pTVar10 != (Text *)0x0) {
        (*(pTVar10->klass->vtable).set_text.methodPtr)
                  (pTVar10,pSVar8,(pTVar10->klass->vtable).set_text.method);
        return;
      }
    }
  }
  else {
    pLVar11 = (this->fields)._.gameMeterVisualEffects;
    uVar12 = 0;
    if (pLVar11 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
      lVar13 = 0x20;
      do {
        if ((pLVar11->fields)._size <= (int)uVar12) {
          (this->fields).prevValue = value_00;
          goto code_?;
        }
        pLVar11 = (this->fields)._.gameMeterVisualEffects;
        if (pLVar11 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
        if ((uint)(pLVar11->fields)._size <= uVar12) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pGVar15 = (pLVar11->fields)._items;
        if (pGVar15 == (GameMeterVisualEffect__Array *)0x0) break;
        if ((uint)pGVar15->max_length <= uVar12) {
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        plVar16 = *(longlong **)((longlong)pGVar15->vector + lVar13 + -0x20);
        if (plVar16 == (longlong *)0x0) break;
        (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
        pLVar11 = (this->fields)._.gameMeterVisualEffects;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (pLVar11 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
    }
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

