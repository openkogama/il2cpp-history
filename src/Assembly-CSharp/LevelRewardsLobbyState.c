
/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnDestroy
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pCVar3 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                         ((DayNightCycle *)pMVar2,(MethodInfo *)0x0),
     pCVar3 != (CelestialParam *)0x0)) {
    pDVar4 = (Delegate *)(pCVar3->fields).TintColor.b;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,unaff_EDI,MethodInfo__LevelRewardsLobbyState__ShowRewards__,(MethodInfo *)0x0
              );
    pDStack5 =
         mscorlib.dll::System::Delegate::Delegate_Remove
                   (pDVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pDVar4 = (Delegate *)0x0;
    if (pDStack5 != (Delegate *)0x0) {
      if ((Action__Class *)pDStack5->klass == TypeInfo__System__Action) {
        pDVar4 = pDStack5;
      }
      pAStack6 = TypeInfo__System__Action;
      if (pDVar4 == (Delegate *)0x0) goto code_?;
    }
    (pCVar3->fields).TintColor.b = (float)pDVar4;
    return;
  }
  func_?();
  pDStack5 = extraout_ECX;
  pAStack6 = extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnEnable
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper, pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)
     ) {
    bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (pSVar2,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar1 == (SpawnRoleDataMediator *)0x0) ||
         (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
         pSVar2 == (SpawnRoleModeTypeWrapper *)0x0)) goto code_?;
      bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                        (pSVar2,SpawnRoleModeType__Enum_Dead,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (in_stack_5,(MethodInfo *)0x0);
    if (pGVar4 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar4,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar6 != (MVNetworkGame *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        pCVar7 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                           ((DayNightCycle *)pMVar6,(MethodInfo *)0x0);
        if ((pCVar7 != (CelestialParam *)0x0) &&
           (levelRewards = (Dictionary_2_System_Int32_System_Int32_ *)(pCVar7->fields)._.Time_1,
           levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
          pOVar8 = System.Core.dll::System::Linq::
                   Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                   KeyValuePair`2[System::Object,System::Object],System::Object]::
                   Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                               *)levelRewards,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__
                             );
          if ((int)pOVar8 < 1) {
            return;
          }
          this_02 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
          original = in_stack_5[1].klass;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pXVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             ((XpBoostParticlePreviewer *)original,
                              LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                             );
          if (this_02 != (ScaleAnimationBase *)0x0) {
            (this_02->fields)._._._._.m_CachedPtr = pXVar9;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (in_stack_5,(MethodInfo *)0x0);
            this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_03,(Object *)this_02,
                       MethodInfo__LevelRewardsLobbyState___ShowRewards_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar4,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            this_00 = (this_02->fields)._._._._.m_CachedPtr;
            if (this_00 != (LevelRewardAnimation *)0x0) {
              LevelRewardAnimation::LevelRewardAnimation_Initialize
                        (this_00,levelRewards,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar6 != (MVNetworkGame *)0x0) &&
                 (pCVar7 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                                     ((DayNightCycle *)pMVar6,(MethodInfo *)0x0),
                 pCVar7 != (CelestialParam *)0x0)) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)(pCVar7->fields)._.Time_1;
                if (this_01 !=
                    (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                            (this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_OnPointerDown
               (LevelRewardsLobbyState *this,PointerEventData *eventData,MethodInfo *method)

{
  if (eventData == (PointerEventData *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pHVar2 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                     ((MVSentryGun *)eventData,(MethodInfo *)0x0);
  if ((pHVar2 == (HashSet_1_System_Int32_ *)0x0) && ((this->fields).isMouseOver != 0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 == (MVNetworkGame *)0x0) ||
       (pCVar3 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                           ((DayNightCycle *)this_00,(MethodInfo *)0x0),
       pCVar3 == (CelestialParam *)0x0)) goto code_?;
    iVar4 = func_?();
    if ((((uint)(TypeInfo__LevelRewardsLobbyState->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelRewardsLobbyState->_1).cctor_started == 0)) {
      func_?();
    }
    if (iVar4 != TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown) {
      if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
        func_?();
      }
      NotificationController::NotificationController_PushNotification_1
                (NotificationType__Enum_NextLevelReward,NotificationLifetime__Enum_SuperHigh,
                 (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__LevelRewardsLobbyState->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__LevelRewardsLobbyState->_1).cctor_started == 0)) {
        func_?();
      }
      TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown = iVar4;
    }
  }
  return;
}


/* Void ShowLevelNotification() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_ShowLevelNotification
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                       ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      iVar2 = func_?();
      if ((((uint)(TypeInfo__LevelRewardsLobbyState->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__LevelRewardsLobbyState->_1).cctor_started == 0)) {
        func_?();
      }
      if (iVar2 != TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown) {
        if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
          func_?();
        }
        NotificationController::NotificationController_PushNotification_1
                  (NotificationType__Enum_NextLevelReward,NotificationLifetime__Enum_SuperHigh,
                   (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__LevelRewardsLobbyState->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__LevelRewardsLobbyState->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__LevelRewardsLobbyState->static_fields->previousNextLevelRewardShown = iVar2;
      }
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowRewards() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_ShowRewards
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pCVar4 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                         ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
      if ((pCVar4 != (CelestialParam *)0x0) &&
         (levelRewards = (Dictionary_2_System_Int32_System_Int32_ *)(pCVar4->fields)._.Time_1,
         levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
        pOVar5 = System.Core.dll::System::Linq::
                 Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                 KeyValuePair`2[System::Object,System::Object],System::Object]::
                 Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                             *)levelRewards,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__
                           );
        if ((int)pOVar5 < 1) {
          return;
        }
        this_01 = (ScaleAnimationBase *)
                  func_?(TypeInfo__LevelRewardsLobbyState___ShowRewards_c__AnonStorey0);
        ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,method_00);
        pLVar6 = (this->fields).levelRewardAnimation;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           ((XpBoostParticlePreviewer *)pLVar6,
                            LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                           );
        if (this_01 != (ScaleAnimationBase *)0x0) {
          (this_01->fields)._._._._.m_CachedPtr = pXVar7;
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)this_01,
                     MethodInfo__LevelRewardsLobbyState___ShowRewards_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar1,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pLVar6 = (this_01->fields)._._._._.m_CachedPtr;
          if (pLVar6 != (LevelRewardAnimation *)0x0) {
            LevelRewardAnimation::LevelRewardAnimation_Initialize
                      (pLVar6,levelRewards,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar3 != (MVNetworkGame *)0x0) &&
               (pCVar4 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                                   ((DayNightCycle *)pMVar3,(MethodInfo *)0x0),
               pCVar4 != (CelestialParam *)0x0)) {
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)(pCVar4->fields)._.Time_1;
              if (this_00 !=
                  (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LevelRewardsLobbyState::LevelRewardsLobbyState_Start
               (LevelRewardsLobbyState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pCVar2 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
      pCVar2 != (CelestialParam *)0x0)) &&
     (this_02 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                 *)(pCVar2->fields)._.Time_1,
     this_02 !=
     (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
      *)0x0)) {
    pOVar3 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       (this_02,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__)
    ;
    if (pOVar3 != (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (in_stack_5,(MethodInfo *)0x0);
      if (pGVar4 != (GameObject *)0x0) {
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar4,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          method_00 = (MethodInfo *)&UNK_?;
          pCVar2 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                             ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
          if ((pCVar2 != (CelestialParam *)0x0) &&
             (levelRewards = (Dictionary_2_System_Int32_System_Int32_ *)(pCVar2->fields)._.Time_1,
             levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
            pOVar3 = System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                     KeyValuePair`2[System::Object,System::Object],System::Object]::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                 *)levelRewards,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Count__
                               );
            if ((int)pOVar3 < 1) {
              return;
            }
            this_03 = (ScaleAnimationBase *)func_?();
            ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,method_00);
            original = in_stack_5[1].klass;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            pXVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)original,
                                LevelRewardAnimation_MethodInfo__UnityEngine__Object__Instantiate<LevelRewardAnimation>_LevelRewardAnimation_
                               );
            if (this_03 != (ScaleAnimationBase *)0x0) {
              (this_03->fields)._._._._.m_CachedPtr = pXVar7;
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject(in_stack_5,(MethodInfo *)0x0);
              pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar8,(Object *)this_03,
                         MethodInfo__LevelRewardsLobbyState___ShowRewards_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,
                         MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                        );
              if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy_63
                        (pGVar4,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar8,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              this_00 = (this_03->fields)._._._._.m_CachedPtr;
              if (this_00 != (LevelRewardAnimation *)0x0) {
                LevelRewardAnimation::LevelRewardAnimation_Initialize
                          (this_00,levelRewards,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar1 != (MVNetworkGame *)0x0) &&
                   (pCVar2 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
                   pCVar2 != (CelestialParam *)0x0)) {
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)(pCVar2->fields)._.Time_1;
                  if (this_01 !=
                      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                              (this_01,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__
                              );
                    return;
                  }
                }
              }
            }
          }
        }
      }
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pCVar2 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                           ((DayNightCycle *)pMVar1,(MethodInfo *)0x0),
       pCVar2 != (CelestialParam *)0x0)) {
      pDVar10 = (Delegate *)(pCVar2->fields).TintColor.b;
      pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar8,(Object *)MethodInfo__LevelRewardsLobbyState__ShowRewards__,
                 MethodInfo__LevelRewardsLobbyState__ShowRewards__,(MethodInfo *)0x0);
      pDStack11 =
           mscorlib.dll::System::Delegate::Delegate_Combine
                     (pDVar10,(Delegate *)pUVar8,(MethodInfo *)0x0);
      pDVar10 = (Delegate *)0x0;
      if (pDStack11 == (Delegate *)0x0) {
code_?:
        (pCVar2->fields).TintColor.b = (float)pDVar10;
        return;
      }
      if ((Action__Class *)pDStack11->klass == TypeInfo__System__Action) {
        pDVar10 = pDStack11;
      }
      pAStack12 = TypeInfo__System__Action;
      if (pDVar10 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pDStack11 = extraout_ECX;
  pAStack12 = extraout_EDX;
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

