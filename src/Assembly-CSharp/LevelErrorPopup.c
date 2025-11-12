
/* Void Initialize(UnityAction, Int32) */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_Initialize
               (LevelErrorPopup *this,UnityAction *resultCallback,int32_t requiredLevel,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelErrorPopup__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelErrorPopup__OnPlayerLevelLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_1_System_Object_ *)
           FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar1,(Object *)this,
             MethodInfo__LevelErrorPopup__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (requiredLevel,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    level = (pMVar4->fields)._.level;
    pUVar1 = (UnityAction_1_System_Object_ *)
             FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar1,(Object *)this,
               MethodInfo__LevelErrorPopup__OnPlayerLevelLoaded_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    BadgeManager::BadgeManager_GetBadgeTexture
              (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields).resultCallback = resultCallback;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
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
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnButtonPressed() */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_OnButtonPressed
               (LevelErrorPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__LevelErrorPopup____c___OnButtonPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelErrorPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__LevelErrorPopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelErrorPopup____c);
  }
  this_00 = TypeInfo__LevelErrorPopup____c->static_fields->__9__8_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__LevelErrorPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LevelErrorPopup____c);
    }
    object = TypeInfo__LevelErrorPopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__LevelErrorPopup____c___OnButtonPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LevelErrorPopup____c->static_fields->__9__8_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__LevelErrorPopup____c->static_fields->__9__8_0 >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  iVar6 = iRam_?;
  (this->fields).requiredLevelTextureAsset = (Texture2D *)0x0;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).requiredLevelTextureAsset >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar5);
  }
  (this->fields).playerLevelTextureAsset = (Texture2D *)0x0;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).playerLevelTextureAsset >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if ((this->fields).resultCallback == (UnityAction *)0x0) {
    return;
  }
  pUVar7 = (this->fields).resultCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar7->fields)._._.invoke_impl)((pUVar7->fields)._._.method_code,(pUVar7->fields)._._.method);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_OnDestroy
               (LevelErrorPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelErrorPopup__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelErrorPopup__OnPlayerLevelLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar1,(Object *)this,
             MethodInfo__LevelErrorPopup__OnLevelRequirementLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  pUVar1 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar1,(Object *)this,
             MethodInfo__LevelErrorPopup__OnPlayerLevelLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_2._version = 0;
  DStack_2._index = 0;
  DStack_2._current.key = 0;
  DStack_2._current._4_4_ = 0;
  DStack_2._current.value = (Object *)0x0;
  DStack_2._getEnumeratorRetType = 0;
  DStack_2._36_4_ = 0;
  QStack_3._q = (Queue_1_System_Object_ *)0x0;
  QStack_3._version = 0;
  QStack_3._index = 0;
  QStack_3._currentElement = (Object *)0x0;
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AsyncWWWManager);
  }
  pHVar4 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (pHVar4 != (HashSet_1_AsyncWebRequest_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pHStack_6 >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 ((ulonglong)(uint)(pHVar4->fields)._version << 0x20);
    uStack_12 = 0;
    auStack_13._8_8_ = pDStack_11;
    pOStack_14 = (Object *)0x0;
    pHStack_6 = pHVar4;
    auStack_13._0_8_ = pHVar4;
code_?:
    while (bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             ((HashSet_1_T_Enumerator_System_Object_ *)auStack_13,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                             ), pOVar16 = pOStack_14, bVar15 != 0) {
      ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                 TypeInfo__AsyncWWWManager;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        ppAVar17 = &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar16 == (Object *)0x0) goto code_?;
      pOVar18 = pOVar16[1].klass;
      if (pOVar18 == (Object__Class *)0x0) goto code_?;
      if ((pUVar1 != (UnityAction_1_System_Object_ *)0x0) &&
         (cVar19 = (**(code **)&(pOVar18->_0).image[4].typeCount)(pOVar18,pUVar1), cVar19 != '\0'))
      goto code_?;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AsyncWWWManager);
    }
    pDVar20 = (Dictionary_2_System_UInt32_System_Object_ *)
             TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar20 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_21 >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uStack_22 = (ulonglong)(uint)(pDVar20->fields)._version;
      uStack_23 = 2;
      uStack_24 = 0;
      uStack_25 = 0;
      DStack_2._version = (undefined4)uStack_22;
      DStack_2._index = uStack_22._4_4_;
      DStack_2._current.key = 0;
      DStack_2._current._4_4_ = 0;
      DStack_2._current.value = (Object *)0x0;
      DStack_2._getEnumeratorRetType = 2;
      DStack_2._36_4_ = 0;
      pHStack_6 = (HashSet_1_AsyncWebRequest_ *)0x0;
      pDStack_11 = &DStack_2;
      pDStack_21 = pDVar20;
      DStack_2._dictionary = pDVar20;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_2,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__MoveNext__
                               ), bVar15 != 0) {
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        uStack_22 = 0;
        uStack_24 = 0;
        pDStack_21 = (Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&pDStack_21 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        if ((Dictionary_2_System_UInt32_System_Object_ *)DStack_2._current.value ==
            (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
        QStack_3._version =
             ((Dictionary_2_System_UInt32_System_Object___Fields *)
             ((longlong)DStack_2._current.value + 0x10))->_freeList;
        uStack_22 = CONCAT44(0xffffffff,QStack_3._version);
        uStack_24 = 0;
        QStack_3._q = (Queue_1_System_Object_ *)DStack_2._current.value;
        QStack_3._index = 0xffffffff;
        QStack_3._currentElement = (Object *)0x0;
        while (bVar15 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::
                       Object]::Queue_1_T_Enumerator_System_Object__MoveNext
                                 (&QStack_3,
                                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                 ), pOVar16 = QStack_3._currentElement, bVar15 != 0) {
          ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<AsyncWebRequest>__get_Current__
          ;
          if ((longlong)QStack_3._8_8_ < 0) goto code_?;
          if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          AsyncWWWManager::AsyncWWWManager_Unsubscribe
                    ((AsyncWebRequest *)pOVar16,
                     (Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
          unaff_RDI = (AsyncWWWManager__Class *)pOVar16;
        }
        QStack_3._index = 0xfffffffe;
        QStack_3._currentElement = (Object *)0x0;
      }
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AsyncWWWManager);
      }
      this_00 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_00 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_00,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI;
code_?:
  FUN_?(ppAVar17,unaff_RSI);
code_?:
  FUN_?();
  FUN_?();
code_?:
  lVar7 = func_?((((AsyncWWWManager__Class *)ppAVar17)->_0).byval_arg.data.dummy);
  uVar26 = func_?(*(undefined8 *)(lVar7 + 0xc0),4);
  FUN_?(&QStack_3,uVar26);
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
code_?:
  if (pUVar1 == (UnityAction_1_System_Object_ *)0x0) {
code_?:
    unaff_RDI = (AsyncWWWManager__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pOVar16[1].klass,(Delegate *)pUVar1,(MethodInfo *)0x0);
    unaff_RSI = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar18 = (Object__Class *)0x0;
    if ((unaff_RDI != (AsyncWWWManager__Class *)0x0) &&
       (pOVar18 = (Object__Class *)
                 FUN_?(unaff_RDI,
                               TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       ppAVar17 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class **)unaff_RDI,
       pOVar18 == (Object__Class *)0x0)) goto code_?;
    pOVar16[1].klass = pOVar18;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)(pOVar16 + 1) >> 0xc);
      lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
  }
  goto code_?;
}


/* Void OnLevelRequirementLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_OnLevelRequirementLoaded
               (LevelErrorPopup *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Badge_not_loaded_for_accessory_l);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (DownloadHandlerTexture *)
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
            DownloadHandler_GetCheckedDownloader
                      (www,
                       UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                      );
  if (this_00 == (DownloadHandlerTexture *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                     (this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).requiredLevelTextureAsset = pTVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).requiredLevelTextureAsset >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pTVar2 = (this->fields).requiredLevelTextureAsset;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar2 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar8 = (this->fields).requiredLevelImage;
      if (pRVar8 != (RawImage *)0x0) {
        pTVar2 = (this->fields).requiredLevelTextureAsset;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,pTVar2,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar9 = (Texture2D *)(pRVar8->fields).m_Texture;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Texture2D *)0x0 || pTVar9 != (Texture2D *)0x0) {
          if (pTVar2 == (Texture2D *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pTVar9 == (Texture2D *)0x0) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            bVar3 = (pTVar9->fields)._._.m_CachedPtr == (void *)0x0;
          }
          else if (pTVar9 == (Texture2D *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar3 = (pTVar2->fields)._._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar3 = pTVar9 == pTVar2;
          }
          if (!bVar3) {
            bVar3 = iRam_? != 0;
            (pRVar8->fields).m_Texture = (Texture *)pTVar2;
            if (bVar3) {
              uVar4 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
              puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar6 = *puVar5;
                LOCK();
                uVar7 = *puVar5;
                if (uVar6 == uVar7) {
                  *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (uVar6 != uVar7);
            }
            (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                      (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
            (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                      (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
          }
        }
        return;
      }
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar10 = StringLiteral_Badge_not_loaded_for_accessory_l;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar11 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,2,pSVar10);
  return;
}


/* Void OnPlayerLevelLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelErrorPopup::LevelErrorPopup_OnPlayerLevelLoaded
               (LevelErrorPopup *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Badge_not_loaded_for_accessory_l);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (DownloadHandlerTexture *)
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
            DownloadHandler_GetCheckedDownloader
                      (www,
                       UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                      );
  if (this_00 == (DownloadHandlerTexture *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                     (this_00,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).playerLevelTextureAsset = pTVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).playerLevelTextureAsset >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pTVar2 = (this->fields).playerLevelTextureAsset;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar2 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar8 = (this->fields).playerLevelImage;
      if (pRVar8 != (RawImage *)0x0) {
        pTVar2 = (this->fields).playerLevelTextureAsset;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,pTVar2,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar9 = (Texture2D *)(pRVar8->fields).m_Texture;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Texture2D *)0x0 || pTVar9 != (Texture2D *)0x0) {
          if (pTVar2 == (Texture2D *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pTVar9 == (Texture2D *)0x0) {
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            bVar3 = (pTVar9->fields)._._.m_CachedPtr == (void *)0x0;
          }
          else if (pTVar9 == (Texture2D *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar3 = (pTVar2->fields)._._.m_CachedPtr == (void *)0x0;
          }
          else {
            bVar3 = pTVar9 == pTVar2;
          }
          if (!bVar3) {
            bVar3 = iRam_? != 0;
            (pRVar8->fields).m_Texture = (Texture *)pTVar2;
            if (bVar3) {
              uVar4 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
              puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar6 = *puVar5;
                LOCK();
                uVar7 = *puVar5;
                if (uVar6 == uVar7) {
                  *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (uVar6 != uVar7);
            }
            (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                      (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
            (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                      (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
          }
        }
        return;
      }
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar10 = StringLiteral_Badge_not_loaded_for_accessory_l;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar11 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,2,pSVar10);
  return;
}

