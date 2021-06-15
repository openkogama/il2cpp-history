
/* Void Initialize(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_Initialize
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  PlayerElementState_SetupButtons(this,player,friend_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((*(Component_1 **)(in_stack_1 + 0x10) == (Component_1 *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (*(Component_1 **)(in_stack_1 + 0x10),(MethodInfo *)0x0),
     pGVar2 == (GameObject *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  if ((*(Component_1 **)(in_stack_1 + 0x18) == (Component_1 *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (*(Component_1 **)(in_stack_1 + 0x18),(MethodInfo *)0x0),
     pGVar2 == (GameObject *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  if ((*(Component_1 **)(in_stack_1 + 0x14) == (Component_1 *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (*(Component_1 **)(in_stack_1 + 0x14),(MethodInfo *)0x0),
     pGVar2 == (GameObject *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  if ((*(Component_1 **)(in_stack_1 + 0xc) == (Component_1 *)0x0) ||
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (*(Component_1 **)(in_stack_1 + 0xc),(MethodInfo *)0x0),
     pGVar3 == (GameObject *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,0,(MethodInfo *)0x0);
  if ((*(Component_1 **)(in_stack_1 + 0x1c) == (Component_1 *)0x0) ||
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (*(Component_1 **)(in_stack_1 + 0x1c),(MethodInfo *)0x0),
     pGVar3 == (GameObject *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
  pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)&UNK_?,(MethodInfo *)0x0);
  if (this_00 == (MVLocalPlayer *)0x0) goto code_?;
  pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
  bVar7 = pSVar5 != pSVar6;
  MVar8 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar8 == MVGameMode__Enum_Edit) {
    MVar9 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_00,(MethodInfo *)0x0);
    bVar10 = MVar9 == MVLocalPlayer_PlanetOwnershipType__Enum_Owner;
  }
  else {
    bVar10 = false;
  }
  if (*(Component_1 **)(in_stack_1 + 0x1c) == (Component_1 *)0x0) goto code_?;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     (*(Component_1 **)(in_stack_1 + 0x1c),(MethodInfo *)0x0);
  bVar11 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_00,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    iVar12 = GamePointGainEffect::GamePointGainEffect_get_ID
                       ((GamePointGainEffect *)this_00,(MethodInfo *)0x0);
    if (iVar12 == 0) goto code_?;
    player._0_1_ = bVar7;
    if ((*(char *)(iVar12 + 8) == '\0') && (!bVar10)) goto code_?;
  }
  else {
code_?:
    player._0_1_ = false;
  }
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,player._0_1_,(MethodInfo *)0x0);
    bVar11 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)&UNK_?,(MethodInfo *)0x0);
    if (((bVar11 != 0) ||
        (bVar11 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_00,(MethodInfo *)0x0), bVar11 != 0
        )) || (!bVar7)) {
      return;
    }
    if ((*(Component_1 **)(in_stack_1 + 0xc) != (Component_1 *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (*(Component_1 **)(in_stack_1 + 0xc),(MethodInfo *)0x0),
       pGVar3 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,pGVar2 == (GameObject *)0x0,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) {
        return;
      }
      if (pGVar2[1].monitor != (MonitorData *)0x1) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 != (MVNetworkGame *)0x0) &&
          (this_01 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                               ((CloudyThemeBase *)pMVar4,(MethodInfo *)0x0),
          this_01 != (ThemeSkybox *)0x0)) &&
         (this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                               (MethodInfo *)0x0),
         this_02 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) {
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__ContainsValue
                          (this_02,(Object *)pGVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                          );
        if ((*(Component_1 **)(in_stack_1 + 0x10) != (Component_1 *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (*(Component_1 **)(in_stack_1 + 0x10),(MethodInfo *)0x0),
           pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,bVar11,(MethodInfo *)0x0);
          if ((*(Component_1 **)(in_stack_1 + 0x18) != (Component_1 *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject
                                 (*(Component_1 **)(in_stack_1 + 0x18),(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,bVar11 == 0,(MethodInfo *)0x0);
            if ((*(Component_1 **)(in_stack_1 + 0x14) != (Component_1 *)0x0) &&
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject
                                   (*(Component_1 **)(in_stack_1 + 0x14),(MethodInfo *)0x0),
               pGVar2 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,bVar11 == 0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OpenUserManagement() */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_OpenUserManagement
               (PlayerElementState *this,MethodInfo *method)

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
    pMVar1 = (MethodInfo *)&UNK_?;
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 == (MVLocalPlayer *)0x0) goto code_?;
    pOVar2 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_01,(MethodInfo *)0x0);
    if (0 < (int)pOVar2) {
      iVar3 = GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
      if (iVar3 == 0) goto code_?;
      if (*(char *)(iVar3 + 8) != '\0') {
        this_02 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar1);
        pXVar4 = _UNK_?;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_03 = (AdminToolController *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            (pXVar4,
                             AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                            );
        if (((this_02 == (ScaleAnimationBase *)0x0) ||
            ((this_02->fields)._._._._.m_CachedPtr = this_03, _UNK_? == (int *)0x0)) ||
           (pSVar5 = (String *)
                     (**(code **)(*_UNK_? + 0x300))
                               (_UNK_?,*(undefined4 *)(*_UNK_? + 0x304)),
           this_03 == (AdminToolController *)0x0)) goto code_?;
        AdminToolController::AdminToolController_Initialize(this_03,pSVar5,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        pMVar1 = 
        MethodInfo__PlayerElementState___OpenUserManagement_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
        goto code_?;
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar6 != MVGameMode__Enum_Edit) {
      return;
    }
    MVar7 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    if (MVar7 != MVLocalPlayer_PlanetOwnershipType__Enum_Owner) {
      return;
    }
    this_02 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,pMVar1);
    pXVar4 = _UNK_?;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar4,
                        OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                       );
    if (((this_02 != (ScaleAnimationBase *)0x0) &&
        ((this_02->fields)._._._._.m_CachedPtr = pXVar4, _UNK_? != (int *)0x0)) &&
       (pSVar5 = (String *)
                 (**(code **)(*_UNK_? + 0x300))
                           (_UNK_?,*(undefined4 *)(*_UNK_? + 0x304)),
       pXVar4 != (XpBoostParticlePreviewer *)0x0)) {
      OwnerToolController::OwnerToolController_Initialize
                ((OwnerToolController *)pXVar4,pSVar5,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
      this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
      pMVar1 = 
      MethodInfo__PlayerElementState___OpenUserManagement_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_04,(Object *)this_02,pMVar1,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_04,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetButtonVisibility(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_SetButtonVisibility
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).pendingFriendship;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).cancel;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).acceptFriendRequest;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).requestFriendship;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pBVar1,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).manageUserButton;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pBVar1,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
  this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
  pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)&UNK_?,(MethodInfo *)0x0);
  if (this_00 == (MVLocalPlayer *)0x0) goto code_?;
  pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
           NamedThemeAttribute_1_UnityEngine_Color__get_Name
                     ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
  bVar7 = pSVar5 != pSVar6;
  MVar8 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar8 == MVGameMode__Enum_Edit) {
    MVar9 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_00,(MethodInfo *)0x0);
    bVar10 = MVar9 == MVLocalPlayer_PlanetOwnershipType__Enum_Owner;
  }
  else {
    bVar10 = false;
  }
  pBVar1 = (this->fields).manageUserButton;
  if (pBVar1 == (Button *)0x0) goto code_?;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)pBVar1,(MethodInfo *)0x0);
  bVar11 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_00,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    iVar12 = GamePointGainEffect::GamePointGainEffect_get_ID
                       ((GamePointGainEffect *)this_00,(MethodInfo *)0x0);
    if (iVar12 == 0) goto code_?;
    value = bVar7;
    if ((*(char *)(iVar12 + 8) == '\0') && (!bVar10)) goto code_?;
  }
  else {
code_?:
    value = false;
  }
  if (pGVar3 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar3,value,(MethodInfo *)0x0);
    bVar11 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)&UNK_?,(MethodInfo *)0x0);
    if (((bVar11 != 0) ||
        (bVar11 = MVPlayer::MVPlayer_get_IsTourist((MVPlayer *)this_00,(MethodInfo *)0x0), bVar11 != 0
        )) || (!bVar7)) {
      return;
    }
    pBVar1 = (this->fields).requestFriendship;
    if ((pBVar1 != (Button *)0x0) &&
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pBVar1,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,pGVar2 == (GameObject *)0x0,(MethodInfo *)0x0);
      if (pGVar2 == (GameObject *)0x0) {
        return;
      }
      if (pGVar2[1].monitor != (MonitorData *)0x1) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 != (MVNetworkGame *)0x0) &&
          (this_01 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                               ((CloudyThemeBase *)pMVar4,(MethodInfo *)0x0),
          this_01 != (ThemeSkybox *)0x0)) &&
         (this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                               (MethodInfo *)0x0),
         this_02 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) {
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__ContainsValue
                          (this_02,(Object *)pGVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                          );
        pBVar1 = (this->fields).pendingFriendship;
        if ((pBVar1 != (Button *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pBVar1,(MethodInfo *)0x0),
           pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,bVar11,(MethodInfo *)0x0);
          pBVar1 = (this->fields).cancel;
          if ((pBVar1 != (Button *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pBVar1,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,bVar11 == 0,(MethodInfo *)0x0);
            pBVar1 = (this->fields).acceptFriendRequest;
            if ((pBVar1 != (Button *)0x0) &&
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pBVar1,(MethodInfo *)0x0),
               pGVar2 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,bVar11 == 0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetupButtons(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_SetupButtons
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerElementState___SetupButtons_c__AnonStorey2;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = player;
    (this_00->fields).state = (int32_t)friend_1;
    (this_00->fields).originalScale.x = (float)this;
    pHVar1 = (HoverCraftMotor *)(this->fields).requestFriendship;
    if (pHVar1 != (HoverCraftMotor *)0x0) {
      pUVar2 = (UnityEvent *)
               HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_00,
                 MethodInfo__PlayerElementState___SetupButtons_c__AnonStorey2____m__0__,
                 (MethodInfo *)0x0);
      if (pUVar2 != (UnityEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                  (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
        pHVar1 = (HoverCraftMotor *)(this->fields).acceptFriendRequest;
        if (pHVar1 != (HoverCraftMotor *)0x0) {
          pUVar2 = (UnityEvent *)
                   HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this_00,
                     MethodInfo__PlayerElementState___SetupButtons_c__AnonStorey2____m__1__,
                     (MethodInfo *)0x0);
          if (pUVar2 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
            pHVar1 = (HoverCraftMotor *)(this->fields).cancel;
            if (pHVar1 != (HoverCraftMotor *)0x0) {
              pUVar2 = (UnityEvent *)
                       HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar1,(MethodInfo *)0x0);
              pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar3,(Object *)this_00,
                         MethodInfo__PlayerElementState___SetupButtons_c__AnonStorey2____m__2__,
                         (MethodInfo *)0x0);
              if (pUVar2 != (UnityEvent *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                          (pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
                pHVar1 = (HoverCraftMotor *)(this->fields).pendingFriendship;
                if (pHVar1 != (HoverCraftMotor *)0x0) {
                  pUVar2 = (UnityEvent *)
                           HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                                     (pHVar1,(MethodInfo *)0x0);
                  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar3,(Object *)this_00,
                             MethodInfo__PlayerElementState___SetupButtons_c__AnonStorey2____m__3__,
                             (MethodInfo *)0x0);
                  if (pUVar2 != (UnityEvent *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                    UnityEvent_AddListener(pUVar2,(UnityAction *)pUVar3,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ValidateFriendRequest() */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_ValidateFriendRequest
               (PlayerElementState *this,MethodInfo *method)

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
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     this_00 == (MVLocalPlayer *)0x0)) goto code_?;
  level = System.dll::System::Collections::Generic::
          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
          Single,System::Object]::
          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                    ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)this_00,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  iVar2 = BadgeManager::BadgeManager_GetFriendsLimit((int32_t)level,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 == (MVNetworkGame *)0x0) ||
      (this_01 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                           ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0),
      this_01 == (ThemeSkybox *)0x0)) ||
     (this_02 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                 *)System.Core.dll::System::Linq::
                   Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                   Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                              (MethodInfo *)0x0),
     this_02 ==
     (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
      *)0x0)) goto code_?;
  pOVar3 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
           Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
           Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     (this_02,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__
                     );
  if ((int)pOVar3 < iVar2) {
    return;
  }
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_GetFriendsLimit((int32_t)((int)&level->klass + 1),(MethodInfo *)0x0);
  pSVar4 = TM::TM__(StringLiteral_You_can_only_have__0__friends_at,(MethodInfo *)0x0);
  args = (Object__Array *)func_?();
  pOVar3 = (Object *)func_?();
  if (args == (Object__Array *)0x0) goto code_?;
  if ((pOVar3 == (Object *)0x0) || (iVar5 = func_?(), iVar5 != 0)) {
    if (args->max_length == 0) goto code_?;
    args->vector[0] = pOVar3;
    level = (Object *)func_?();
    if ((level != (Object *)0x0) && (iVar5 = func_?(), iVar5 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = level;
    level = (Object *)func_?();
    if ((level != (Object *)0x0) && (iVar5 = func_?(), iVar5 == 0)) goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = level;
    level = (Object *)func_?();
    if ((level != (Object *)0x0) && (iVar5 = func_?(), iVar5 == 0)) goto code_?;
    if (args->max_length < 4) goto code_?;
  }
  else {
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  args->vector[3] = level;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_3(pSVar4,args,(MethodInfo *)0x0);
  message = TM::TM__(StringLiteral_Your_friendlist_is_full,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
  this_03 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_03,pSVar4,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

