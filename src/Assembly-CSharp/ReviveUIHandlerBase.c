
/* Void Initialize(UnityAction) */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_Initialize
               (ReviveUIHandlerBase *this,UnityAction *onContinueClicked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).continueButton;
  if ((pBVar1 != (Button *)0x0) &&
     (pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick, pUVar2 != (UnityEvent *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
              (pUVar2,onContinueClicked,(MethodInfo *)0x0);
    pBVar1 = (this->fields).declineButton;
    if ((pBVar1 != (Button *)0x0) &&
       (pUVar2 = (UnityEvent *)(pBVar1->fields).m_OnClick, pUVar2 != (UnityEvent *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (pUVar2,onContinueClicked,(MethodInfo *)0x0);
      bVar3 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      pGVar4 = (this->fields).reviveButton;
      (this->fields).isSubscriber = bVar3;
      if (pGVar4 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        pGVar4 = (this->fields).icon;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if ((pGVar5 != (GameSessionData *)0x0) && (pGVar4 != (GameObject *)0x0)) {
          bVar6 = (pGVar5->fields).gameMode != 0;
          player = (MVPlayer *)
                   CONCAT71((int7)((ulonglong)TypeInfo__MVGameControllerBase->static_fields >> 8),
                            bVar6);
          method_00 = (MethodInfo *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,bVar6,(MethodInfo *)0x0);
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          fVar9 = (float)(*pcRam_?)();
          (this->fields).started = fVar9;
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if (extraout_RAX != 0) {
            bVar6 = cRam_? == '\0';
            (this->fields).duration = 10.0;
            if (bVar6) {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar10 != (MVGameControllerBase *)0x0) &&
                (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
               (pGVar12 = (pMVar11->fields).GameEventManager, pGVar12 != (GameEventManager *)0x0)) {
              pGVar13 = (pGVar12->fields).AvatarCommandsPlayMode;
              this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_00,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__
                         ,(MethodInfo *)0x0);
              if (pGVar13 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Action);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                ppAVar14 = &(pGVar13->fields).OnReviveTimeElapsed;
                a = (pGVar13->fields).OnReviveTimeElapsed;
                do {
                  pAVar15 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
                  pAVar16 = (Action *)0x0;
                  if (pAVar15 != (Action *)0x0) {
                    if (pAVar15->klass == TypeInfo__System__Action) {
                      pAVar16 = pAVar15;
                    }
                    if (pAVar16 == (Action *)0x0) {
                      FUN_?(pAVar15);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  LOCK();
                  pAVar15 = *ppAVar14;
                  bVar6 = a == pAVar15;
                  if (bVar6) {
                    *ppAVar14 = pAVar16;
                    pAVar15 = a;
                  }
                  UNLOCK();
                  pAVar16 = a;
                  if (!bVar6) {
                    pAVar16 = pAVar15;
                  }
                  if (iRam_? != 0) {
                    uVar17 = (uint)((ulonglong)ppAVar14 >> 0xc);
                    uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
                    do {
                      uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
                      puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
                      LOCK();
                      bVar6 = uVar19 == *puVar20;
                      if (bVar6) {
                        *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar6);
                  }
                  bVar6 = pAVar16 != a;
                  a = pAVar16;
                } while (bVar6);
                pGVar4 = (this->fields).countdown;
                if (pGVar4 != (GameObject *)0x0) {
                  bVar6 = (this->fields).isSubscriber == 0;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  ,bVar6,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (pGVar4 == (GameObject *)0x0) {
                    FUN_?();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pvVar21 = (pGVar4->fields)._.m_CachedPtr;
                  if (pvVar21 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar4,(MethodInfo *)0x0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pcVar7 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam_?)(pvVar21,bVar6);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_OnDestroy
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    pAVar4 = (pMVar3->fields).OnWinningConditionFulfilled;
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    if (this != (ReviveUIHandlerBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,(this->klass->vtable).RoundEnded.method,(MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar6 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar5 == (Delegate *)0x0) {
        (pMVar3->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar4 = (Action_1_IWinningCondition_ *)
                  FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
        if (pAVar4 == (Action_1_IWinningCondition_ *)0x0) {
          FUN_?(pDVar5,pAVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar3->fields).OnWinningConditionFulfilled = pAVar4;
        pAVar6 = TypeInfo__System__Action<IWinningCondition>;
        lVar8 = FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
        if (lVar8 == 0) {
          FUN_?(pDVar5,pAVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnWinningConditionFulfilled >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         (pGVar13 = (pMVar3->fields).GameEventManager, pGVar13 != (GameEventManager *)0x0)) {
        this_00 = (pGVar13->fields).AvatarCommandsPlayMode;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
                   (MethodInfo *)0x0);
        if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
          GameEventManager+AvatarCommandsPlayModeManager::
          GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
                    (this_00,(Action *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSubscriberClicked() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_OnSubscriberClicked
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ReviveUIHandlerBase____c__DisplayClass24_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    original = (this->fields).continuePopup;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                       );
    bVar1 = iRam_? != 0;
    object[1].klass = pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pOVar6 = object[1].klass;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,(this->klass->vtable).__unknown_2.method,(MethodInfo *)0x0);
    if (pOVar6 != (Object__Class *)0x0) {
      ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                ((ContinueButtonLockCursor *)pOVar6,(Action *)this_01,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__ReviveUIHandlerBase____c__DisplayClass24_0___OnSubscriberClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar3 = (longlong)(pLVar9->fields)._size;
        uVar2 = 0;
        if (0 < lVar3) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar9->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar2) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_02,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar3);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnWatchAdClicked() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_OnWatchAdClicked
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ReviveUIHandlerBase____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ReviveUIHandlerBase____c__DisplayClass23_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].monitor = (MonitorData *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 != (MVGameControllerBase *)0x0) &&
       (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
      pAVar8 = (pMVar7->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<IWinningCondition>);
      if (this != (ReviveUIHandlerBase *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,(Object *)this,(this->klass->vtable).RoundEnded.method,(MethodInfo *)0x0)
        ;
        pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar8,(Delegate *)this_00,(MethodInfo *)0x0);
        pAVar10 = TypeInfo__System__Action<IWinningCondition>;
        if (pDVar9 == (Delegate *)0x0) {
          (pMVar7->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        }
        else {
          pAVar8 = (Action_1_IWinningCondition_ *)
                   FUN_?(pDVar9,TypeInfo__System__Action<IWinningCondition>);
          if (pAVar8 == (Action_1_IWinningCondition_ *)0x0) {
            FUN_?(pDVar9,pAVar10);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (pMVar7->fields).OnWinningConditionFulfilled = pAVar8;
          pAVar10 = TypeInfo__System__Action<IWinningCondition>;
          lVar3 = FUN_?(pDVar9,TypeInfo__System__Action<IWinningCondition>);
          if (lVar3 == 0) {
            FUN_?(pDVar9,pAVar10);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pMVar7->fields).OnWinningConditionFulfilled >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        bVar1 = cRam_? == '\0';
        (this->fields).watchAdClicked = 1;
        if (bVar1) {
          FUN_?(&TypeInfo__ILockCursorManager);
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
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          pMVar12 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0)
          ;
          if ((pMVar12 == (MVGameControllerDesktop *)0x0) ||
             ((pMVar12->fields).lockCursorManager == (ILockCursorManager *)0x0))
          goto code_?;
          FUN_?(1,TypeInfo__ILockCursorManager);
        }
        original = (this->fields).continuePopup;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar13 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                            );
        bVar1 = iRam_? != 0;
        object[1].klass = pOVar13;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pOVar13 = object[1].klass;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,(this->klass->vtable).__unknown_2.method,(MethodInfo *)0x0
                  );
        if (pOVar13 != (Object__Class *)0x0) {
          ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                    ((ContinueButtonLockCursor *)pOVar13,(Action *)this_01,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object,
                     MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_02,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
              (IEditModeUI *)0x0) {
            pIVar14 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
            this_03 = (UnityAction_1_System_Int32Enum_ *)
                      FUN_?(
                                   TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                                   );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_03,(Object *)this,(this->klass->vtable).__unknown_1.method,
                       (MethodInfo *)0x0);
            (*(this->klass->vtable).__unknown.methodPtr)
                      (this,(this->klass->vtable).__unknown.method);
            if (pIVar14 == (IAdManager *)0x0) goto code_?;
            FUN_?();
          }
          else {
            (*(this->klass->vtable).__unknown_1.methodPtr)
                      (this,3,(this->klass->vtable).__unknown_1.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ReviveTimeElapsed() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_ReviveTimeElapsed
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__);
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
     (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) {
    this_00 = (pGVar3->fields).AvatarCommandsPlayMode;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__ReviveUIHandlerBase__ReviveTimeElapsed__,
               (MethodInfo *)0x0);
    if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
      GameEventManager+AvatarCommandsPlayModeManager::
      GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
                (this_00,(Action *)this_01,(MethodInfo *)0x0);
      if ((this->fields).watchAdClicked == 0) {
        (*(this->klass->vtable).__unknown_1.methodPtr)
                  (this,2,(this->klass->vtable).__unknown_1.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RoundEnded(IWinningCondition) */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_RoundEnded
               (ReviveUIHandlerBase *this,IWinningCondition *condition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
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
    pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    if (this != (ReviveUIHandlerBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,(this->klass->vtable).RoundEnded.method,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar5 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar4 == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar3 = (Action_1_IWinningCondition_ *)
                 FUN_?(pDVar4,TypeInfo__System__Action<IWinningCondition>);
        if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) {
          FUN_?(pDVar4,pAVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
        pAVar5 = TypeInfo__System__Action<IWinningCondition>;
        lVar7 = FUN_?(pDVar4,TypeInfo__System__Action<IWinningCondition>);
        if (lVar7 == 0) {
          FUN_?(pDVar4,pAVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ReviveUIHandlerBase::ReviveUIHandlerBase_Update
               (ReviveUIHandlerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isSubscriber == 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if (fVar3 - (this->fields).started < (this->fields).duration) {
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
      pIVar4 = (this->fields).timerFill;
      if (pIVar4 != (Image *)0x0) {
        fVar3 = _UNK_? - (fVar3 - (this->fields).started) / (this->fields).duration;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar4,fVar3,(MethodInfo *)0x0);
        pTVar5 = (this->fields).timerText;
        aIStackX_8[0].m_value = FUN_?(fVar3 * (this->fields).duration);
        pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
        if (pTVar5 != (Text *)0x0) {
          UNRECOVERED_JUMPTABLE = (pTVar5->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (pTVar5,pSVar6,(pTVar5->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
    else {
      pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar7 != (GameEventManager *)0x0) &&
         (pGVar8 = (pGVar7->fields).AvatarCommandsPlayMode,
         pGVar8 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
        if ((pGVar8->fields).OnReviveTimeElapsed != (Action *)0x0) {
          pAVar9 = (pGVar8->fields).OnReviveTimeElapsed;
          (*(pAVar9->fields)._._.invoke_impl)((pAVar9->fields)._._.method_code);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,0,(MethodInfo *)0x0);
        pIVar4 = (this->fields).timerFill;
        if (pIVar4 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                    (pIVar4,0.0,(MethodInfo *)0x0);
          pTVar5 = (this->fields).timerText;
          if (pTVar5 != (Text *)0x0) {
            (*(pTVar5->klass->vtable).set_text.methodPtr)
                      (pTVar5,StringLiteral__0,(pTVar5->klass->vtable).set_text.method);
            return;
          }
        }
      }
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

