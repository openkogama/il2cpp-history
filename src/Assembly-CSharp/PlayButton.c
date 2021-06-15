
/* Void ConfirmPlay() */

void Assembly-CSharp.dll::PlayButton::PlayButton_ConfirmPlay(PlayButton *this,MethodInfo *method)

{
  if (((this->fields).OnPlayButtonPressed == (Action *)0x0) ||
     (cVar1 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)
                        (this,this->klass[1]._0.image), cVar1 != '\0')) {
    return;
  }
  pAVar2 = (this->fields).OnPlayButtonPressed;
  if (pAVar2 == (Action *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (JumpState_OnWallJumpDelegate *)(pAVar2->fields)._.prev;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  this_01 = (pAVar2->fields)._._.method;
  pcVar3 = (pAVar2->fields)._._.method_ptr;
  pOVar4 = (pAVar2->fields)._._.m_target;
  pOVar5 = pOVar4;
  method_00 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar1 = func_?(this_01);
  if (cVar1 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar3)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar4 == (Object *)0x0 || (((pOVar4->klass->_1).token & 0x100) == 0)) &&
           ((pAVar2->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar1 = func_?(pOVar4);
    if (cVar1 != '\0') {
      return;
    }
    pMVar6 = this_01;
    cVar1 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
    cVar8 = func_?(pOVar7);
    if (cVar1 == '\0') {
      if (cVar8 != '\0') {
        pOVar5 = mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00
                            );
        func_?(this_01->flags,pOVar5,pOVar4);
        return;
      }
      (*(code *)(&(pOVar4->klass->vtable).Equals)[this_01->flags].method)
                (pOVar4,(&(pOVar4->klass->vtable).Finalize)[this_01->flags].methodPtr);
      return;
    }
    uVar9 = (uint)this_01->flags;
    if (cVar8 == '\0') {
      puVar10 = (undefined4 *)
                func_?((&(pOVar4->klass->vtable).Finalize)[uVar9].methodPtr,this_01);
      (*(code *)*puVar10)(pOVar4,puVar10);
      return;
    }
    pOVar11 = pOVar4->klass;
    uVar12 = 0;
    uVar13._0_1_ = (pOVar11->_1).rank;
    uVar13._1_1_ = (pOVar11->_1).minimumAlignment;
    pMVar6 = this_01;
    if (uVar13 != 0) {
      do {
        if (pOVar11->interfaceOffsets[uVar12].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar14 = &(&(pOVar5->klass->vtable).Equals)
                      [(uint)method_00->flags + pOVar5->klass->interfaceOffsets[uVar12].offset].
                      method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar9 = (uint)method_00->flags;
      pMVar6 = method_00;
      pOVar4 = pOVar5;
    }
    pOVar5 = pOVar4;
    method_00 = pMVar6;
    ppMVar14 = (MethodInfo **)func_?(pOVar5,(Il2CppClass *)this_01->name,uVar9);
code_?:
    puVar10 = (undefined4 *)func_?(ppMVar14[1],method_00);
    (*(code *)*puVar10)(pOVar5,puVar10);
    return;
  }
  (*pcVar3)(pOVar4,this_01);
  return;
}


/* Boolean HandlePlayAvailable() */

bool Assembly-CSharp.dll::PlayButton::PlayButton_HandlePlayAvailable
               (PlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                           ((InventoryItemPreviewer *)this_01,(MethodInfo *)0x0);
    if (this_02 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      pOVar1 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (this_02,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      puVar2 = &UNK_?;
      this_03 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if (this_03 != (MVLocalPlayer *)0x0) {
        fVar3 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(this_03,(MethodInfo *)0x0);
        if ((pOVar1 != (Object *)0x2) && (fVar3 <= (float)puVar2)) {
          return 0;
        }
        this_00 = (Selectable *)(this_03->fields)._.OnGoldAmountChange;
        if (this_00 != (Selectable *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                    (this_00,0,(MethodInfo *)0x0);
          if (*(char *)&(this_03->fields)._.OnLevelChanged == '\0') {
            pIVar4 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                               ((MethodInfo *)0x0);
            if (pIVar4 == (ILockCursorManager *)0x0) goto code_?;
            uStack5 = 1;
            uStack6 = 4;
            func_?();
          }
          return 1;
        }
      }
    }
  }
code_?:
  uStack5 = 0;
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void HandlePlayPress() */

void Assembly-CSharp.dll::PlayButton::PlayButton_HandlePlayPress
               (PlayButton *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)(this,this->klass[1]._0.image);
  if (cVar1 == '\0') {
    (*(code *)(this->klass->vtable).StartPlaying.method)
              (this,(this->klass->vtable).OnCountDownEnd.methodPtr);
  }
  return;
}


/* Void OnContinuePressed() */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnContinuePressed
               (PlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__PlayButton->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__PlayButton___OnContinuePressed_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__PlayButton->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__PlayButton->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  cVar1 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)(this,this->klass[1]._0.image);
  if (cVar1 == '\0') {
    (*(code *)(this->klass->vtable).StartPlaying.method)();
  }
  return;
}


/* Void OnCountDownEnd() */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnCountDownEnd(PlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 == (Button *)0x0) goto code_?;
  bVar2 = AvatarMotor::AvatarMotor_get_IsMovementLocked((AvatarMotor *)pBVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((this->fields).shouldConfirmPlay == 0) {
      pIVar3 = MVGameControllerDesktop::MVGameControllerDesktop_get_LockCursorManager
                         ((MethodInfo *)0x0);
      if (pIVar3 == (ILockCursorManager *)0x0) goto code_?;
      cVar4 = func_?(2,TypeInfo__ILockCursorManager);
      if (cVar4 == '\0') {
        (*(code *)(this->klass->vtable).StartPlaying.method)(this);
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar5 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
        if (pIVar5 == (IPlayModeUI *)0x0) goto code_?;
        func_?(4,TypeInfo__IPlayModeUI);
        if ((this->fields)._.shouldPop != 0) {
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__PlayButton->static_fields->__f__am_cache1 ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_00,(Object *)0x0,
                       MethodInfo__PlayButton___OnCountDownEnd_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            TypeInfo__PlayButton->static_fields->__f__am_cache1 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
          }
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__PlayButton->static_fields->__f__am_cache1;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
        }
      }
    }
    else {
      PlayButton_ConfirmPlay(this,(MethodInfo *)0x0);
    }
    pBVar1 = (this->fields).button;
    if (pBVar1 == (Button *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)pBVar1,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnEnable(PlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).button;
  if (this_00 == (Button *)0x0) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
            ((Selectable *)this_00,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,in_stack_2);
  this_01 = (this->fields).embeddedPlayerConfig;
  if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
  pEVar3 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                     ((EmbeddedSiteConfigData *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
  bVar1 = pEVar3->showTouristPromotion;
  if (this_02 == (ScaleAnimationBase *)0x0) goto code_?;
  *(undefined1 *)&(this_02->fields)._._._._.m_CachedPtr = 0;
  pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_03,(Object *)this_02,
             MethodInfo__PlayButton___OnEnable_c__AnonStorey1____m__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar4,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
  iVar5 = mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                    (this_05,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                    );
  this_06 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_06 == (MVNetworkGame *)0x0) ||
     (this_07 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)this_06,(MethodInfo *)0x0),
     this_07 ==
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) goto code_?;
  pOVar6 = System.dll::System::Collections::Generic::
           SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
           Single,System::Object]::
           SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                     (this_07,(MethodInfo *)0x0);
  value = pOVar6 != (Object *)0x2;
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar7 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar7 == (IAdManager *)0x0) goto code_?;
    cVar8 = func_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar7);
    if (((cVar8 == '\0') || (*(char *)&(this_02->fields)._._._._.m_CachedPtr == '\0')) ||
       ((iVar5 != 2 && (iVar5 != 4)))) goto code_?;
  }
  else {
code_?:
    value = false;
  }
  pIVar9 = (this->fields).playIcon;
  if ((pIVar9 != (Image *)0x0) &&
     (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pIVar9,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,value ^ 1,(MethodInfo *)0x0);
    pIVar9 = (this->fields).adIcon;
    if ((pIVar9 != (Image *)0x0) &&
       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pIVar9,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,value,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnPointerDown
               (PlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if ((this->fields).isMouseOver != 0) {
    if (eventData == (PointerEventData *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pHVar2 = MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
                       ((MVSentryGun *)eventData,(MethodInfo *)0x0);
    if (pHVar2 == (HashSet_1_System_Int32_ *)0x0) {
      if ((this->fields).shouldConfirmPlay != 0) {
        PlayButton_ConfirmPlay(this,(MethodInfo *)0x0);
        return;
      }
      PlayButton_Play(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnPointerExit
               (PlayButton *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isMouseOver = 0;
  return;
}


/* Void OnPromotionShown(Boolean, Boolean) */

void Assembly-CSharp.dll::PlayButton::PlayButton_OnPromotionShown
               (PlayButton *this,bool promotionShown,bool withAd,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((promotionShown != 0) && (withAd != 0)) {
    method_00 = TypeInfo__PlayButton___OnPromotionShown_c__AnonStorey0;
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
    pXVar1 = (XpBoostParticlePreviewer *)(this->fields).continueButtonPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar1,
                        ContinueButtonLockCursor_MethodInfo__UnityEngine__Object__Instantiate<ContinueButtonLockCursor>_ContinueButtonLockCursor_
                       );
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = pXVar1;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,MethodInfo__PlayButton__OnContinuePressed__,(MethodInfo *)0x0
                );
      if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
        ContinueButtonLockCursor::ContinueButtonLockCursor_Initialize
                  ((ContinueButtonLockCursor *)pXVar1,(Action *)pUVar2,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this_00,
                   MethodInfo__PlayButton___OnPromotionShown_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                   ,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar4 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)(this,this->klass[1]._0.image);
  if (cVar4 == '\0') {
    (*(code *)(this->klass->vtable).StartPlaying.method)
              (this,(this->klass->vtable).OnCountDownEnd.methodPtr);
  }
  return;
}


/* Void Play() */

void Assembly-CSharp.dll::PlayButton::PlayButton_Play(PlayButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimePressPlayController);
  }
  bVar1 = FirstTimePressPlayController::FirstTimePressPlayController_get_HaveBeenPressed
                    ((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__FirstTimePressPlayController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__FirstTimePressPlayController->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimePressPlayController);
    }
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVClientSettings);
      }
      bVar1 = MVClientSettings::MVClientSettings_get_ShowTouristPromotion((MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (this_00 != (SpawnRoleDataMediator *)0x0) {
          this_01 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                    JsonSchemaType]::
                    Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                              ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                                *)this_00,(MethodInfo *)0x0);
          if (this_01 !=
              (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
            iVar2 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                              (this_01,
                               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                              );
            this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (this_02 != (MVNetworkGame *)0x0) {
              this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                     ((InventoryItemPreviewer *)this_02,(MethodInfo *)0x0);
              if (this_03 !=
                  (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)0x0) {
                pOVar3 = System.dll::System::Collections::Generic::
                         SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                         ::Single,System::Object]::
                         SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                   (this_03,(MethodInfo *)0x0);
                if (((iVar2 == 2) || (iVar2 == 4)) && (pOVar3 != (Object *)0x2)) {
                  root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)&UNK_?,(MethodInfo *)0x0);
                  this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_04,(Object *)&UNK_?,
                             MethodInfo__PlayButton___Play_m__0_IDeathPromotionSelector__UnityEngine__EventSystems__BaseEventData_
                             ,
                             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>__EventFunction_System__Object__void__
                            );
                  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0))
                  {
                    func_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy_63
                            (root,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_04,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IDeathPromotionSelector>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IDeathPromotionSelector>_
                            );
                  return;
                }
                puStack4 = *(undefined **)(*in_stack_5 + 0x10c);
                cVar6 = (**(code **)(*in_stack_5 + 0x108))();
                if (cVar6 == '\0') {
                  puStack4 = *(undefined **)(*in_stack_5 + 0xe4);
                  (**(code **)(*in_stack_5 + 0xe0))();
                }
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
  (*(code *)(this->klass->vtable).HandlePlayAvailable.method)(this,this->klass[1]._0.image);
  pTVar7 = (this->fields).timedPlayReward;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pTVar7 = (this->fields).timedPlayReward;
    if (pTVar7 == (TimedPlayReward *)0x0) {
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar1 = TimedPlayReward::TimedPlayReward_get_IsClaimable(pTVar7,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pTVar7 = (this->fields).timedPlayReward;
      if (pTVar7 == (TimedPlayReward *)0x0) goto code_?;
      TimedPlayReward::TimedPlayReward_ClaimReward(pTVar7,(MethodInfo *)0x0);
    }
  }
  cVar6 = (*(code *)(this->klass->vtable).HandlePlayAvailable.method)();
  if (cVar6 == '\0') {
    (*(code *)(this->klass->vtable).StartPlaying.method)();
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayButton::PlayButton_Update(PlayButton *this,MethodInfo *method)

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
     (this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
     this_01 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_01,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer(method_00);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      fVar4 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(pMVar3,(MethodInfo *)0x0);
      this_00 = pIRam0000000c;
      if (pOVar2 == (Object *)0x2) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar1 == (MVNetworkGame *)0x0) ||
            (this_02 = (MVNetworkGameStateListener *)
                       InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                                 ((InventoryItemPreviewer *)pMVar1,(MethodInfo *)0x0),
            this_02 == (MVNetworkGameStateListener *)0x0)) ||
           (fVar4 = MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInPercentage
                              (this_02,(MethodInfo *)0x0), this_00 == (Image *)0x0))
        goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (this_00,fVar4,(MethodInfo *)0x0);
      }
      else {
        if (fVar4 <= (float)method_00) {
          if ((pIRam0000000c != (Image *)0x0) &&
             (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pIRam0000000c,(MethodInfo *)0x0),
             pGVar5 != (GameObject *)0x0)) {
            bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar5,(MethodInfo *)0x0);
            if (bVar6 != 0) {
              if ((pIRam0000000c == (Image *)0x0) ||
                 (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject
                                     ((Component_1 *)pIRam0000000c,(MethodInfo *)0x0),
                 pGVar5 == (GameObject *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,0,(MethodInfo *)0x0);
            }
            uStack7 = *(undefined4 *)(iRam_? + 0xec);
            uStack8 = 0;
            (**(code **)(iRam_? + 0xe8))();
            return;
          }
          goto code_?;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
        fVar4 = MVLocalPlayer::MVLocalPlayer_get_RespawnTime(pMVar3,(MethodInfo *)0x0);
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        fVar4 = fVar4 - fVar9;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if ((pMVar3 == (MVLocalPlayer *)0x0) ||
           (fVar9 = MVLocalPlayer::MVLocalPlayer_get_RespawnDuration(pMVar3,(MethodInfo *)0x0),
           pIRam0000000c == (Image *)0x0)) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                  (pIRam0000000c,fVar4 / fVar9,(MethodInfo *)0x0);
      }
      if ((pIRam0000000c != (Image *)0x0) &&
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pIRam0000000c,(MethodInfo *)0x0),
         pGVar5 != (GameObject *)0x0)) {
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          return;
        }
        if ((pIRam0000000c != (Image *)0x0) &&
           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pIRam0000000c,(MethodInfo *)0x0),
           pGVar5 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
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


/* Void <OnContinuePressed>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton__OnContinuePressed_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnCountDownEnd>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton__OnCountDownEnd_m__2
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


/* Void <Play>m__0(IDeathPromotionSelector, BaseEventData) */

void Assembly-CSharp.dll::PlayButton::PlayButton__Play_m__0
               (PlayButton *this,IDeathPromotionSelector *x,BaseEventData *y,MethodInfo *method)

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
            (this_00,(Object *)this,MethodInfo__PlayButton__OnPromotionShown_bool__bool_,
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

