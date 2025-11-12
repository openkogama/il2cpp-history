
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_Initialize
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterTimeAttackFlag__OnEndFlagCountdown__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__00_00_00);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timeAttackFlagText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,StringLiteral__00_00_00,(pTVar1->klass->vtable).set_text.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pFVar3 = (pMVar2->fields).flagDebriefingControl, pFVar3 != (FlagDebriefingControl *)0x0)) {
      pAVar4 = (pFVar3->fields).OnFlagDebriefing;
      pDVar5 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
      FUN_?(pDVar5,this);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,pDVar5,(MethodInfo *)0x0);
      pAVar6 = TypeInfo__System__Action<int>;
      pAVar7 = (Action *)0x0;
      if (pDVar5 == (Delegate *)0x0) {
        (pFVar3->fields).OnFlagDebriefing = (Action_1_Int32_ *)0x0;
      }
      else {
        pAVar4 = (Action_1_Int32_ *)FUN_?(pDVar5,TypeInfo__System__Action<int>);
        if (pAVar4 == (Action_1_Int32_ *)0x0) {
          FUN_?(pDVar5,pAVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pFVar3->fields).OnFlagDebriefing = pAVar4;
        pAVar6 = TypeInfo__System__Action<int>;
        lVar9 = FUN_?(pDVar5,TypeInfo__System__Action<int>);
        if (lVar9 == 0) {
          FUN_?(pDVar5,pAVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(pFVar3->fields).OnFlagDebriefing >> 0xc);
        lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar12 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar2 != (MVGameControllerBase *)0x0) &&
         (pFVar3 = (pMVar2->fields).flagDebriefingControl, pFVar3 != (FlagDebriefingControl *)0x0))
      {
        pAVar14 = (pFVar3->fields).OnFlagCountDown;
        pNVar15 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar15,(Object *)this,
                   MethodInfo__GameMeterTimeAttackFlag__OnStartFlagCountdown__,(MethodInfo *)0x0);
        pAVar14 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar14,(Delegate *)pNVar15,(MethodInfo *)0x0);
        if (pAVar14 == (Action *)0x0) {
          (pFVar3->fields).OnFlagCountDown = (Action *)0x0;
        }
        else {
          pAVar16 = pAVar7;
          if (pAVar14->klass == TypeInfo__System__Action) {
            pAVar16 = pAVar14;
          }
          if (pAVar16 == (Action *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (pFVar3->fields).OnFlagCountDown = pAVar16;
          pAVar16 = pAVar7;
          if (pAVar14->klass == TypeInfo__System__Action) {
            pAVar16 = pAVar14;
          }
          if (pAVar16 == (Action *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&(pFVar3->fields).OnFlagCountDown >> 0xc);
          lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar12 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 != (MVGameControllerBase *)0x0) &&
           (pFVar3 = (pMVar2->fields).flagDebriefingControl, pFVar3 != (FlagDebriefingControl *)0x0)
           ) {
          pAVar14 = (pFVar3->fields).OnFlagCountDownEnd;
          pNVar15 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar15,(Object *)this,
                     MethodInfo__GameMeterTimeAttackFlag__OnEndFlagCountdown__,(MethodInfo *)0x0);
          pAVar14 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar14,(Delegate *)pNVar15,(MethodInfo *)0x0);
          if (pAVar14 == (Action *)0x0) {
            (pFVar3->fields).OnFlagCountDownEnd = (Action *)0x0;
          }
          else {
            pAVar16 = pAVar7;
            if (pAVar14->klass == TypeInfo__System__Action) {
              pAVar16 = pAVar14;
            }
            if (pAVar16 == (Action *)0x0) {
              FUN_?(pAVar14);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (pFVar3->fields).OnFlagCountDownEnd = pAVar16;
            if (pAVar14->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar14;
            }
            if (pAVar7 == (Action *)0x0) {
              FUN_?(pAVar14);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)&(pFVar3->fields).OnFlagCountDownEnd >> 0xc);
            lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar12 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar13);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnStartFlagCountdown(Int32) */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_OnStartFlagCountdown_1
               (GameMeterTimeAttackFlag *this,int32_t captureTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__00_00_00,CONCAT44(in_register_00000014,captureTime));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timeAttackFlagText;
  (this->fields).shouldUpdate = 0;
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,StringLiteral__00_00_00,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_SetGameMeterVisibility
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar2 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        TimeAttackFlagReachedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<TimeAttackFlagReachedClient>__
                       );
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,pOVar2 != (Object *)0x0,(MethodInfo *)0x0);
      return pOVar2 != (Object *)0x0;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_SetShowGameMeter
               (GameMeterTimeAttackFlag *this,bool show,MethodInfo *method)

{
  this_00 = (this->fields).timeAttackFlagBar;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,show,(MethodInfo *)0x0);
    obj = (this->fields).timeAttackFlagText;
    if (obj != (Text *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                      ,show,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Text *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      CVar2._.m_CachedPtr = (obj->fields)._._._._._._._;
      if (CVar2._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(CVar2._.m_CachedPtr,show);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag_Update
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  if ((this->fields).shouldUpdate == 0) {
    return;
  }
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar4 != (MVGameControllerBase *)0x0) &&
     (pFVar5 = (pMVar4->fields).flagDebriefingControl, pFVar5 != (FlagDebriefingControl *)0x0)) {
    score = FUN_?((fVar3 - (pFVar5->fields).RunStartTime) * _UNK_?);
    pSVar6 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (score,(GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)method >> 8),8),
                        (MethodInfo *)0x0);
    pTVar7 = (this->fields).timeAttackFlagText;
    if (pTVar7 != (Text *)0x0) {
      (*(pTVar7->klass->vtable).set_text.methodPtr)
                (pTVar7,pSVar6,(pTVar7->klass->vtable).set_text.method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* GameMeterTimeAttackFlag() */

void Assembly-CSharp.dll::GameMeterTimeAttackFlag::GameMeterTimeAttackFlag__ctor
               (GameMeterTimeAttackFlag *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.gameMeterVisualEffects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.gameMeterVisualEffects >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.meterActive = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

