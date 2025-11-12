
/* Boolean CanWinningConditionBeFullfilledForTeam(MVTeam) */

bool Assembly-CSharp.dll::FlagWinningCondition::
     FlagWinningCondition_CanWinningConditionBeFullfilledForTeam
               (FlagWinningCondition *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = FlagWinningCondition_GetClosestFlags(this,team,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
    return 0 < (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* List`1[MVWorldObjectClient] GetClosestFlags(MVTeam) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_GetClosestFlags
          (FlagWinningCondition *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVFlag);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (this_01,WorldObjectType__Enum_Flag,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      index = (pLVar1->fields)._size - 1;
      if (-1 < (int)index) {
        lVar2 = (longlong)(int)index * 8 + 0x20;
        do {
          if ((uint)(pLVar1->fields)._size <= index) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar3)();
            return pLVar1;
          }
          pMVar4 = (pLVar1->fields)._items;
          if (pMVar4 == (MVWorldObjectClient__Array *)0x0) goto code_?;
          if ((uint)pMVar4->max_length <= index) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar3)();
            return pLVar1;
          }
          plVar5 = *(longlong **)((longlong)pMVar4->vector + lVar2 + -0x20);
          if (plVar5 != (longlong *)0x0) {
            bVar6 = (TypeInfo__MVFlag->_1).naturalAligment;
            if ((bVar6 <= *(byte *)(*plVar5 + 0x130)) &&
               (*(MVFlag__Class **)(*(longlong *)(*plVar5 + 200) + -8 + (ulonglong)bVar6 * 8) ==
                TypeInfo__MVFlag)) {
              if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)plVar5[0xe] ==
                  (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) goto code_?;
              iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                  *)plVar5[0xe],(Object *)StringLiteral_team,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 ->klass->rgctx_data[0x21].method);
              if (-1 < iVar7) {
                if ((Dictionary_2_System_Object_System_Object_ *)plVar5[0xe] ==
                    (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
                pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   ((Dictionary_2_System_Object_System_Object_ *)plVar5[0xe],
                                    (Object *)StringLiteral_team,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar9 == (MVNetworkGame *)0x0) ||
                   (this_00 = (pMVar9->fields).teamManager, this_00 == (MVTeamManager *)0x0))
                goto code_?;
                iVar7 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
                if (pOVar8 == (Object *)0x0) goto code_?;
                if ((pOVar8->klass->_0).element_class !=
                    (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
                  FUN_?(pOVar8,TypeInfo__MV__WorldObject__MVTeam);
                  pcVar3 = (code *)swi(3);
                  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar3)();
                  return pLVar1;
                }
                if ((*(MVTeam__Enum *)&pOVar8[1].klass != team) || (iVar7 < 2)) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__RemoveAt
                            ((List_1_System_Object_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                            );
                }
              }
            }
          }
          lVar2 = lVar2 + -8;
          index = index - 1;
        } while (-1 < (int)index);
      }
      return pLVar1;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar3)();
  return pLVar1;
}


/* Void InitializeGameUI(RectTransform) */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_InitializeGameUI
               (FlagWinningCondition *this,RectTransform *lobbyState,MethodInfo *method)

{
  FlagWinningCondition_UpdateFlagGraphics(this,(MethodInfo *)0x0);
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
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar3 != (MVLocalPlayer *)0x0 &&
        (this_01 = (pMVar2->fields).gameStatCounterManager, this_01 != (GameStatCounterManager *)0x0
        )))) {
      uVar4 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        (this_01,(GameStatCounterType__Enum)
                                 CONCAT71((int7)((ulonglong)
                                                 TypeInfo__MVGameControllerBase->static_fields >> 8)
                                          ,2),(pMVar3->fields)._._Team_k__BackingField,
                         (pMVar3->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
      (*(this->klass->vtable).UpdateValue.methodPtr)(this,(ulonglong)uVar4);
      if (cRam_? == '\0') {
        FUN_?(&
                      WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                      ,lobbyState);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClientManager *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      roundCube = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                            (this_02,
                             WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                            );
      if (roundCube == (WorldObjectClientRef_1_System_Object_ *)0x0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pRVar6 = (this->fields)._.roundTimerPrefab;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar7,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pRVar6 = (RoundTimer *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pRVar6,pTVar7,0,
                             RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                            );
        bVar8 = iRam_? != 0;
        (this->fields)._.roundTimer = pRVar6;
        if (bVar8) {
          uVar4 = (uint)((ulonglong)&(this->fields)._.roundTimer >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        pRVar6 = (this->fields)._.roundTimer;
        if ((pRVar6 != (RoundTimer *)0x0) &&
           (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pRVar6,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)
           ) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar12 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar12);
          pRVar6 = (this->fields)._.roundTimer;
          if (pRVar6 != (RoundTimer *)0x0) {
            RoundTimer::RoundTimer_Initialize
                      (pRVar6,(WorldObjectClientRef_1_MVRoundCube_ *)roundCube,(MethodInfo *)0x0);
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar12 = (pTVar7->fields)._._.m_CachedPtr;
              if (pvVar12 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pcVar5 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar12);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_RoundEndReset
               (FlagWinningCondition *this,MethodInfo *method)

{
  pTVar1 = (this->fields).score;
  pSVar2 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                     (0,(GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                      (MethodInfo *)0x0);
  if (pTVar1 == (Text *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(pTVar1->klass->vtable).set_text.methodPtr)
            (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar4 = (this->fields)._.roundTimer;
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
  if (pRVar4 != (RoundTimer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pRVar4 = (this->fields)._.roundTimer;
      if (pRVar4 == (RoundTimer *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      RoundTimer::RoundTimer_ResetTimeNotifications(pRVar4,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_Update
               (FlagWinningCondition *this,MethodInfo *method)

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
  (*pcRam_?)();
  fVar3 = (float)FUN_?();
  if (fVar3 != 0.0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
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
  pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar6 != (MVLocalPlayer *)0x0 &&
       (pLVar7 = FlagWinningCondition_GetClosestFlags
                           (this,(pMVar6->fields)._._Team_k__BackingField,(MethodInfo *)0x0),
       pLVar7 != (List_1_MVWorldObjectClient_ *)0x0)))) &&
     (this_01 = (this->fields).graphics, this_01 != (GameObject *)0x0)) {
    if ((pLVar7->fields)._size == 0) {
      uVar2 = 0;
    }
    else {
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_01,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        return;
      }
      this_01 = (this->fields).graphics;
      if (this_01 == (GameObject *)0x0) goto code_?;
      uVar2 = 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,uVar2,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_01 == (GameObject *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar9 = (this_01->fields)._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar9,uVar2);
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateFlagGraphics() */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_UpdateFlagGraphics
               (FlagWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
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
  if (((((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 &&
       (pLVar4 = FlagWinningCondition_GetClosestFlags
                           (this,(pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0),
       pLVar4 != (List_1_MVWorldObjectClient_ *)0x0)))) &&
     (this_01 = (this->fields).graphics, this_01 != (GameObject *)0x0)) {
    if ((pLVar4->fields)._size == 0) {
      uVar5 = 0;
    }
    else {
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (this_01,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        return;
      }
      this_01 = (this->fields).graphics;
      if (this_01 == (GameObject *)0x0) goto code_?;
      uVar5 = 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,uVar5,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_01 == (GameObject *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pvVar8 = (this_01->fields)._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar8,uVar5);
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateValue(Int32) */

void Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_UpdateValue
               (FlagWinningCondition *this,int32_t newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,CONCAT44(in_register_00000014,newValue));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    pTVar4 = (this->fields).score;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar3 != (MVLocalPlayer *)0x0 &&
        (this_01 = (pMVar2->fields).gameStatCounterManager, this_01 != (GameStatCounterManager *)0x0
        )))) {
      uVar5 = CONCAT71((int7)((ulonglong)TypeInfo__MVGameControllerBase->static_fields >> 8),2);
      score = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                        (this_01,(GameStatCounterType__Enum)uVar5,
                         (pMVar3->fields)._._Team_k__BackingField,
                         (pMVar3->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
      pSVar6 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (score,(GameStatCounterType__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2)
                          ,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar4->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar4,pSVar6,(pTVar4->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* GameStatCounterType get_StatType() */

GameStatCounterType__Enum
Assembly-CSharp.dll::FlagWinningCondition::FlagWinningCondition_get_StatType
          (FlagWinningCondition *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),2);
}


/* Boolean get_WinningConditionAbleToBeFulfilled() */

bool Assembly-CSharp.dll::FlagWinningCondition::
     FlagWinningCondition_get_WinningConditionAbleToBeFulfilled
               (FlagWinningCondition *this,MethodInfo *method)

{
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
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      UNRECOVERED_JUMPTABLE = (this->klass->vtable).CanWinningConditionBeFullfilledForTeam.methodPtr
      ;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar4 = (*UNRECOVERED_JUMPTABLE)
                        (this,(ulonglong)(uint)(pMVar3->fields)._._Team_k__BackingField,
                         (this->klass->vtable).CanWinningConditionBeFullfilledForTeam.method,
                         UNRECOVERED_JUMPTABLE);
      return bVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}

