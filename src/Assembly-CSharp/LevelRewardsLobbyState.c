
/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnDestroy
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
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
    if (pMVar2 == (MVGameControllerBase *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar4 == (MVNetworkGame *)0x0) ||
         (pLVar5 = (pMVar4->fields).levelRewardsManager, pLVar5 == (LevelRewardsManager *)0x0))
      goto DAT_?;
      pAVar6 = (pLVar5->fields).OnRewardsReturned;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__LevelRewardsLobbyState__ShowRewards__,
                 (MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar6 == (Action *)0x0) {
        (pLVar5->fields).OnRewardsReturned = (Action *)0x0;
      }
      else {
        pAVar7 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?(pAVar6,TypeInfo__System__Action);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pLVar5->fields).OnRewardsReturned = pAVar7;
        pAVar7 = (Action *)0x0;
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar7 = pAVar6;
        }
        if (pAVar7 == (Action *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pLVar5->fields).OnRewardsReturned >> 0xc);
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
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnEnable
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper, pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar3 = (pSVar2->fields).spawnRoleType;
    if ((pSVar3 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
       (pSVar4 = (pSVar3->fields).subscribableVariable,
       pSVar4 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
      if (((pSVar4->fields)._.value & 1) != 0) {
code_?:
        LevelRewardsLobbyState_ShowRewards(this,(MethodInfo *)0x0);
        return;
      }
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
         (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
         pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar3 = (pSVar2->fields).spawnRoleType;
        if ((pSVar3 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
           (pSVar4 = (pSVar3->fields).subscribableVariable,
           pSVar4 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
          if (((pSVar4->fields)._.value & 2) == 0) {
            return;
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnPointerDown
               (LevelRewardsLobbyState *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData != (PointerEventData *)0x0) {
    if (((eventData->fields)._button_k__BackingField == 0) && ((this->fields).isMouseOver != 0)) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__LevelRewardsLobbyState);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__NotificationController);
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
      if (((pMVar1 == (MVGameControllerBase *)0x0) ||
          (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
         (pLVar3 = (pMVar2->fields).levelRewardsManager, pLVar3 == (LevelRewardsManager *)0x0))
      goto code_?;
      iVar4 = (pLVar3->fields)._NextReward_k__BackingField.key;
      if (iVar4 != TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown) {
        if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
          FUN_?();
        }
        NotificationController::NotificationController_PushNotification_1
                  (NotificationType__Enum_NextLevelReward,NotificationLifetime__Enum_SuperHigh,
                   (MethodInfo *)0x0);
        TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown = iVar4;
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowLevelNotification() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_ShowLevelNotification
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelRewardsLobbyState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
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
     (pLVar3 = (pMVar2->fields).levelRewardsManager, pLVar3 != (LevelRewardsManager *)0x0)) {
    iVar4 = (pLVar3->fields)._NextReward_k__BackingField.key;
    if (iVar4 != TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController::NotificationController_PushNotification_1
                (NotificationType__Enum_NextLevelReward,NotificationLifetime__Enum_SuperHigh,
                 (MethodInfo *)0x0);
      TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown = iVar4;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowRewards() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_ShowRewards
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__);
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
                  LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRewardsLobbyState____c__DisplayClass5_0___ShowRewards_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelRewardsLobbyState____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
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
    cVar5 = (*pcRam_?)(pvVar2);
    if (cVar5 == '\0') {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
         (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
        (pLVar8 = (pMVar7->fields).levelRewardsManager, pLVar8 != (LevelRewardsManager *)0x0)) &&
       (levelRewards = (pLVar8->fields).unseenLevelRewards,
       levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
      if ((levelRewards->fields)._count - (levelRewards->fields)._freeCount < 1) {
        return;
      }
      object = (Object *)FUN_?(TypeInfo__LevelRewardsLobbyState____c__DisplayClass5_0);
      original = (this->fields).levelRewardAnimation;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar9 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                          );
      if (object != (Object *)0x0) {
        bVar10 = iRam_? != 0;
        object[1].klass = pOVar9;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)(object + 1) >> 0xc);
          puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar13 = *puVar12;
            LOCK();
            uVar14 = *puVar12;
            if (uVar13 == uVar14) {
              *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (uVar13 != uVar14);
        }
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_00,object,
                   MethodInfo__LevelRewardsLobbyState____c__DisplayClass5_0___ShowRewards_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,this_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        if (object[1].klass != (Object__Class *)0x0) {
          LevelRewardAnimation::LevelRewardAnimation_Initialize
                    ((LevelRewardAnimation *)object[1].klass,levelRewards,(MethodInfo *)0x0);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar7 != (MVNetworkGame *)0x0) &&
             (pLVar8 = (pMVar7->fields).levelRewardsManager, pLVar8 != (LevelRewardsManager *)0x0))
          {
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((pLVar8->fields).unseenLevelRewards !=
                (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
              FUN_?();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_Start
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__LevelRewardsLobbyState__ShowRewards__);
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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pLVar3 = (pMVar2->fields).levelRewardsManager, pLVar3 != (LevelRewardsManager *)0x0)) &&
     (pDVar4 = (pLVar3->fields).unseenLevelRewards,
     pDVar4 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
    if ((pDVar4->fields)._count == (pDVar4->fields)._freeCount) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 == (MVGameControllerBase *)0x0) ||
          (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
         (pLVar3 = (pMVar2->fields).levelRewardsManager, pLVar3 == (LevelRewardsManager *)0x0))
      goto code_?;
      pAVar5 = (pLVar3->fields).OnRewardsReturned;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__LevelRewardsLobbyState__ShowRewards__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        (pLVar3->fields).OnRewardsReturned = (Action *)0x0;
      }
      else {
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          FUN_?(pAVar5,TypeInfo__System__Action);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pLVar3->fields).OnRewardsReturned = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pLVar3->fields).OnRewardsReturned >> 0xc);
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
        return;
      }
    }
    else {
      LevelRewardsLobbyState_ShowRewards(this,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

