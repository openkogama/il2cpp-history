
/* Void OnConfirmPlay() */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile_OnConfirmPlay
               (PlayButtonMobile *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnPlayButtonPressed;
  if (pAVar1 == (Action *)0x0) {
    return;
  }
  this_00 = (JumpState_OnWallJumpDelegate *)(pAVar1->fields)._.prev;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  this_01 = (pAVar1->fields)._._.method;
  pcVar2 = (pAVar1->fields)._._.method_ptr;
  pOVar3 = (pAVar1->fields)._._.m_target;
  pOVar4 = pOVar3;
  method_00 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pAVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar5 = func_?(pOVar3);
    if (cVar5 != '\0') {
      return;
    }
    pMVar6 = this_01;
    cVar5 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
    cVar8 = func_?(pOVar7);
    if (cVar5 == '\0') {
      if (cVar8 != '\0') {
        pOVar4 = mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00
                            );
        func_?(this_01->flags,pOVar4,pOVar3);
        return;
      }
      (*(code *)(&(pOVar3->klass->vtable).Equals)[this_01->flags].method)
                (pOVar3,(&(pOVar3->klass->vtable).Finalize)[this_01->flags].methodPtr);
      return;
    }
    uVar9 = (uint)this_01->flags;
    if (cVar8 == '\0') {
      puVar10 = (undefined4 *)
                func_?((&(pOVar3->klass->vtable).Finalize)[uVar9].methodPtr,this_01);
      (*(code *)*puVar10)(pOVar3,puVar10);
      return;
    }
    pOVar11 = pOVar3->klass;
    uVar12 = 0;
    uVar13._0_1_ = (pOVar11->_1).rank;
    uVar13._1_1_ = (pOVar11->_1).minimumAlignment;
    pMVar6 = this_01;
    if (uVar13 != 0) {
      do {
        if (pOVar11->interfaceOffsets[uVar12].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar14 = &(&(pOVar4->klass->vtable).Equals)
                      [(uint)method_00->flags + pOVar4->klass->interfaceOffsets[uVar12].offset].
                      method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar9 = (uint)method_00->flags;
      pMVar6 = method_00;
      pOVar3 = pOVar4;
    }
    pOVar4 = pOVar3;
    method_00 = pMVar6;
    ppMVar14 = (MethodInfo **)func_?(pOVar4,(Il2CppClass *)this_01->name,uVar9);
code_?:
    puVar10 = (undefined4 *)func_?(ppMVar14[1],method_00);
    (*(code *)*puVar10)(pOVar4,puVar10);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}


/* Void OnCountdownEnd() */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile_OnCountdownEnd
               (PlayButtonMobile *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).StartPlaying.method)
            (this,(this->klass->vtable).OnCountdownEnd.methodPtr);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile_OnDisable
               (PlayButtonMobile *this,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPromotionShown(Boolean, Boolean) */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile_OnPromotionShown
               (PlayButtonMobile *this,bool promotionShown,bool withAd,MethodInfo *method)

{
  this_00 = (this->fields).button;
  if (this_00 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Play() */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile_Play
               (PlayButtonMobile *this,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).timedPlayReward;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).timedPlayReward;
    if (pTVar1 == (TimedPlayReward *)0x0) goto code_?;
    bVar2 = TimedPlayReward::TimedPlayReward_get_IsClaimable(pTVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar1 = (this->fields).timedPlayReward;
      if (pTVar1 == (TimedPlayReward *)0x0) goto code_?;
      TimedPlayReward::TimedPlayReward_ClaimReward(pTVar1,(MethodInfo *)0x0);
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 == (MVNetworkGame *)0x0) ||
     (this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)this_01,(MethodInfo *)0x0),
     this_02 ==
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pOVar4 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     (this_02,(MethodInfo *)0x0);
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (this_03 == (MVLocalPlayer *)0x0) goto code_?;
  fVar6 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(this_03,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                    ((MethodInfo *)0x0);
  this_04 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((this_04 == (SpawnRoleDataMediator *)0x0) ||
     (this_05 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)this_04,(MethodInfo *)0x0),
     this_05 == (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) goto code_?;
  iVar7 = mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                    (this_05,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                    );
  if ((pOVar4 == (Object *)0x2) || (fVar5 < fVar6)) {
    if ((bVar2 == 0) || (iVar7 != 2 && iVar7 != 4)) {
      this_00 = (this->fields).button;
      if (this_00 == (Button *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,0,(MethodInfo *)0x0);
      goto code_?;
    }
    this = (PlayButtonMobile *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_06 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    method_1 = 
    MethodInfo__PlayButtonMobile___Play_m__1_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
    ;
  }
  else {
    if ((bVar2 == 0) || (iVar7 != 2 && iVar7 != 4)) {
      (*(code *)(this->klass->vtable).StartPlaying.method)();
      goto code_?;
    }
    this = (PlayButtonMobile *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_06 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    method_1 = 
    MethodInfo__PlayButtonMobile___Play_m__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
    ;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_06,(Object *)object,method_1,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            ((GameObject *)this,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_06,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
            );
code_?:
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile_StartPlaying
               (PlayButtonMobile *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    func_?(4,TypeInfo__IPlayModeUI,pIVar1,0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if ((pSVar2 != (SpawnRoleDataMediator *)0x0) &&
       (this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper,
       this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
      bVar3 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                        (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar4 == (GameEventManager *)0x0) ||
           (pSVar2 = (SpawnRoleDataMediator *)(pGVar4->fields).AvatarCommandsPlayMode,
           pSVar2 == (SpawnRoleDataMediator *)0x0)) goto code_?;
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator
        ::SpawnRoleDataMediator_SpawnRoleDataReceiverOnOnSuicide(pSVar2,(MethodInfo *)0x0);
      }
      if ((this->fields).shouldPop != 0) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        if (TypeInfo__PlayButtonMobile->static_fields->__f__am_cache0 ==
            (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)0x0,
                     MethodInfo__PlayButtonMobile___StartPlaying_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          TypeInfo__PlayButtonMobile->static_fields->__f__am_cache0 =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__PlayButtonMobile->static_fields->__f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile_Update
               (PlayButtonMobile *this,MethodInfo *method)

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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
     this_02 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_02,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    puVar3 = &UNK_?;
    this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (this_03 != (MVLocalPlayer *)0x0) {
      fVar4 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(this_03,(MethodInfo *)0x0);
      if (pOVar2 == (Object *)0x2) {
        pIVar5 = (Image *)(this_03->fields)._.playerPlanetDataRemote;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 == (MVNetworkGame *)0x0) ||
            (this_04 = (MVNetworkGameStateListener *)
                       InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                 ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
            this_04 == (MVNetworkGameStateListener *)0x0)) ||
           (fVar4 = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                              (this_04,(MethodInfo *)0x0), pIVar5 == (Image *)0x0))
        goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar5,fVar4,(MethodInfo *)0x0);
      }
      else {
        if (fVar4 <= (float)puVar3) {
          pPVar6 = (this_03->fields)._.playerPlanetDataRemote;
          if (pPVar6 != (PlayerPlanetDataRemote *)0x0) {
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)pPVar6,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              pPVar6 = (this_03->fields)._.playerPlanetDataRemote;
              if (pPVar6 == (PlayerPlanetDataRemote *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pPVar6,0,(MethodInfo *)0x0);
            }
            this_00 = (AvatarMotor *)(this_03->fields)._.OnGoldAmountChange;
            if (this_00 != (AvatarMotor *)0x0) {
              bVar7 = AvatarMotor::AvatarMotor_get_IsMovementLocked(this_00,(MethodInfo *)0x0);
              if (bVar7 != 0) {
                return;
              }
              (*this_03->klass[1]._0.gc_desc)(this_03,this_03->klass[1]._0.name);
              this_01 = (Selectable *)(this_03->fields)._.OnGoldAmountChange;
              if (this_01 != (Selectable *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                          (this_01,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar8 == (MVLocalPlayer *)0x0) goto code_?;
        fVar4 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(pMVar8,(MethodInfo *)0x0);
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        fVar4 = fVar4 - fVar9;
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar8 == (MVLocalPlayer *)0x0) goto code_?;
        fVar9 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar8,(MethodInfo *)0x0);
        pIVar5 = (Image *)(this_03->fields)._.playerPlanetDataRemote;
        if (pIVar5 == (Image *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIVar5,fVar4 / fVar9,(MethodInfo *)0x0);
      }
      pPVar6 = (this_03->fields)._.playerPlanetDataRemote;
      if (pPVar6 != (PlayerPlanetDataRemote *)0x0) {
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                          ((Behaviour *)pPVar6,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          return;
        }
        pPVar6 = (this_03->fields)._.playerPlanetDataRemote;
        if (pPVar6 != (PlayerPlanetDataRemote *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pPVar6,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <Play>m__0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile__Play_m__0
               (PlayButtonMobile *this,IDeathPromotionSelector *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__PlayButtonMobile__OnPromotionShown_bool__bool_,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_bool>__UnityAction_System__Object__void__
            );
  if (x != (IDeathPromotionSelector *)0x0) {
    func_?(1,TypeInfo__IDeathPromotionSelector);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Play>m__1(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile__Play_m__1
               (PlayButtonMobile *this,IDeathPromotionSelector *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__PlayButtonMobile__OnPromotionShown_bool__bool_,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_bool>__UnityAction_System__Object__void__
            );
  if (x != (IDeathPromotionSelector *)0x0) {
    func_?(1,TypeInfo__IDeathPromotionSelector);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <StartPlaying>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayButtonMobile::PlayButtonMobile__StartPlaying_m__2
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,handler);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

