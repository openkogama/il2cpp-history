
/* Void Awake() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_Awake
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::ThemesData::ThemeData_[]>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ThemeSelection__CallbackHandler);
    func_?(&
                    MethodInfo__ThemeSelection__CreateThemeButtons_MV__WorldObject__ThemesData__ThemeData____
                   );
    func_?(&MethodInfo__ThemeSelection__LocalizeAndSetDescriptionText__);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<MV::WorldObject::ThemesData::ThemeData_[]>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ThemeSelection__CreateThemeButtons_MV__WorldObject__ThemesData__ThemeData____
               ,(MethodInfo *)0x0);
    TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived =
         (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)this_00;
    func_?(TypeInfo__ThemeSelection__CallbackHandler->static_fields,this_00);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetThemesData
                (this_01,(MethodInfo *)0x0);
      pTVar1 = (this->fields).themeDescription;
      pSVar2 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)
                  (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
        this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,
                     MethodInfo__ThemeSelection__LocalizeAndSetDescriptionText__,(MethodInfo *)0x0);
          TM::TM_LanguageChanged((Action *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateThemeButtons(ThemeData[]) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_CreateThemeButtons
               (ThemeSelection *this,ThemeData__Array *data,MethodInfo *method)

{
  selectionMenu = this;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                   );
    func_?(&
                    ThemeSelectionButton_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelectionButton>_ThemeSelectionButton_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__ThemeSelection___CreateThemeButtons_b__21_0__);
    func_?(&MethodInfo__ThemeSelection___CreateThemeButtons_b__21_1__);
    func_?(&MethodInfo__ThemeSelection____c__DisplayClass21_0___CreateThemeButtons_b__2__);
    func_?(&TypeInfo__ThemeSelection____c__DisplayClass21_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).themeRepo;
  if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
  bVar2 = ThemeRepository::ThemeRepository_get_ThemeIsActive(pTVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    original = (this->fields).themeRemovalButtonPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_01 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                        );
    if (this_01 == (Component *)0x0) goto code_?;
    unaff_EBX = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_01,(MethodInfo *)0x0);
    if (unaff_EBX == (Object__Class *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              ((Transform *)unaff_EBX,(Transform *)(this->fields).themeButtonContainer,0,
               (MethodInfo *)0x0);
    this_00 = this_01[0xe].fields._.m_CachedPtr;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    if (pNVar3 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,(Object *)this,MethodInfo__ThemeSelection___CreateThemeButtons_b__21_0__,
               (MethodInfo *)0x0);
    if (this_00 == (UnityEvent *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
              (this_00,(UnityAction *)pNVar3,(MethodInfo *)0x0);
  }
  puVar4 = (undefined1 *)0x0;
  if (data != (ThemeData__Array *)0x0) {
    ppTVar5 = data->vector;
    while( true ) {
      if ((int)data->max_length <= (int)puVar4) {
        return;
      }
      if ((undefined1 *)data->max_length <= puVar4) break;
      pOVar6 = (Object__Class *)*ppTVar5;
      value = (Object *)func_?(TypeInfo__ThemeSelection____c__DisplayClass21_0);
      if (value == (Object *)0x0) goto code_?;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EBX);
      value[2].monitor = (MonitorData *)selectionMenu;
      func_?(&value[2].monitor,selectionMenu);
      original_00 = (selectionMenu->fields).buttonPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object,puVar4);
      }
      pOVar7 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original_00,
                          ThemeSelectionButton_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelectionButton>_ThemeSelectionButton_
                         );
      value[1].klass = pOVar7;
      unaff_EBX = (Object__Class *)(value + 1);
      func_?(unaff_EBX,pOVar7);
      if (value[1].klass == (Object__Class *)0x0) goto code_?;
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)value[1].klass,(MethodInfo *)0x0);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_02,(Transform *)(selectionMenu->fields).themeButtonContainer,0,
                 (MethodInfo *)0x0);
      pTVar1 = (selectionMenu->fields).themeRepo;
      if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
      a = ThemeRepository::ThemeRepository_get_CurrentThemeIdentifier(pTVar1,(MethodInfo *)0x0);
      if (pOVar6 == (Object__Class *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (a,(String *)(pOVar6->_0).namespaze,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pUVar8 = (UnityAction__Class *)(pOVar6->_0).namespaze;
        value[1].monitor = (MonitorData *)pUVar8;
        ppMVar9 = &value[1].monitor;
        func_?();
        value[2].klass = pOVar6;
        unaff_EBX = pOVar6;
        func_?(value + 2);
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__UnityEngine__Events__UnityAction);
        if (pNVar3 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,value,
                   MethodInfo__ThemeSelection____c__DisplayClass21_0___CreateThemeButtons_b__2__,
                   (MethodInfo *)0x0);
        pTVar1 = (selectionMenu->fields).themeRepo;
        pOVar7 = value[1].klass;
        if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
        themePrefab = ThemeRepository::ThemeRepository_GetThemePrefab
                                (pTVar1,(String *)(pOVar6->_0).namespaze,(MethodInfo *)0x0);
        if (pOVar7 == (Object__Class *)0x0) goto code_?;
        this._0_1_ = 0;
      }
      else {
        ppMVar9 = (MonitorData **)&UNK_?;
        pUVar8 = TypeInfo__UnityEngine__Events__UnityAction;
        pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        if (pNVar3 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)selectionMenu,
                   MethodInfo__ThemeSelection___CreateThemeButtons_b__21_1__,(MethodInfo *)0x0);
        pTVar1 = (selectionMenu->fields).themeRepo;
        pOVar7 = value[1].klass;
        if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
        themePrefab = ThemeRepository::ThemeRepository_GetThemePrefab
                                (pTVar1,(String *)(pOVar6->_0).namespaze,(MethodInfo *)0x0);
        if (pOVar7 == (Object__Class *)0x0) goto code_?;
        this._0_1_ = 1;
      }
      levelReq._0_2_ = (pOVar6->_0).byval_arg.attrs;
      levelReq._2_1_ = (pOVar6->_0).byval_arg.type;
      levelReq._3_1_ = (pOVar6->_0).byval_arg.field_0x7;
      ThemeSelectionButton::ThemeSelectionButton_Initialize
                ((ThemeSelectionButton *)pOVar7,selectionMenu,themePrefab,(UnityAction *)pNVar3,
                 (pOVar6->_0).byval_arg.data.__klassIndex,levelReq,(bool)this,(MethodInfo *)0x0);
      puVar4 = (undefined1 *)((int)&(pUVar8->_0).image + 1);
      ppTVar5 = (ThemeData **)(ppMVar9 + 1);
    }
    func_?();
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeWithBackButton(ThemeMenuController) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_InitializeWithBackButton
               (ThemeSelection *this,ThemeMenuController *menuController,MethodInfo *method)

{
  pIVar1 = (this->fields).close;
  if (pIVar1 != (Image *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pIVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      pIVar1 = (this->fields).back;
      if (pIVar1 != (Image *)0x0) {
        this_01 = (ThemeMenuController *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pIVar1,(MethodInfo *)0x0);
        if (this_01 != (ThemeMenuController *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,1,(MethodInfo *)0x0);
          (this->fields).menuController = this_01;
          func_?();
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LoadTheme(String, ThemeData) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_LoadTheme
               (ThemeSelection *this,String *identifier,ThemeData *data,MethodInfo *method)

{
  this_00 = (this->fields).themeRepo;
  if (this_00 != (ThemeRepository *)0x0) {
    pTVar1 = ThemeRepository::ThemeRepository_CreateTemporaryThemeVisualization
                       (this_00,identifier,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pTVar2 = (this->fields).previewTheme;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pTVar2 = (this->fields).previewTheme;
      if (pTVar2 == (Theme *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    (this->fields).previewTheme = pTVar1;
    func_?();
    this_01 = (this->fields).menuController;
    if (this_01 != (ThemeMenuController *)0x0) {
      ThemeMenuController::ThemeMenuController_OpenSettingsForPreview
                (this_01,(this->fields).previewTheme,(ThemeData *)&UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void LocalizeAndSetDescriptionText() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_LocalizeAndSetDescriptionText
               (ThemeSelection *this,MethodInfo *method)

{
  pTVar1 = (this->fields).themeDescription;
  pSVar2 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_OnDestroy
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeSelection__CallbackHandler);
    cRam_? = '\x01';
  }
  TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived =
       (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0;
  func_?(TypeInfo__ThemeSelection__CallbackHandler->static_fields,0);
  return;
}


/* Void OnThemeRemovalWarningResolved(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_OnThemeRemovalWarningResolved
               (ThemeSelection *this,bool answer,ConfirmationPopup *popup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ThemeSelection____c___OnThemeRemovalWarningResolved_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemeSelection____c);
    cRam_? = '\x01';
  }
  if (answer != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ThemeSelection____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ThemeSelection____c);
    }
    callbackFunction = TypeInfo__ThemeSelection____c->static_fields->__9__24_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ThemeSelection____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ThemeSelection____c);
      }
      object = TypeInfo__ThemeSelection____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ThemeSelection____c___OnThemeRemovalWarningResolved_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ThemeSelection____c->static_fields->__9__24_0 = callbackFunction;
      func_?(&TypeInfo__ThemeSelection____c->static_fields->__9__24_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeRepository);
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
    if (this_00 == (ThemeRepository *)0x0) goto code_?;
    worldObjectID = ThemeRepository::ThemeRepository_get_CurrentThemeWoid(this_00,(MethodInfo *)0x0)
    ;
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UnregisterWorldObject
              (this_01,worldObjectID,(MethodInfo *)0x0);
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <CreateThemeButtons>b__21_0() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__CreateThemeButtons_b__21_0
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ThemeSelection____c__DisplayClass23_0___ShowThemeRemovalWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemeSelection____c__DisplayClass23_0);
    func_?(&StringLiteral_This_will_remove_the_current_the);
    func_?(&StringLiteral__0_u000A_1_);
    func_?(&StringLiteral_Are_you_sure_you_want_to_do_this);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ThemeSelection____c__DisplayClass23_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    arg0 = TM::TM__(StringLiteral_This_will_remove_the_current_the,(MethodInfo *)0x0);
    arg1 = TM::TM__(StringLiteral_Are_you_sure_you_want_to_do_this,(MethodInfo *)0x0);
    pOVar1 = (Object__Class *)
             mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0_u000A_1_,(Object *)arg0,(Object *)arg1,(MethodInfo *)0x0);
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__ThemeSelection____c__DisplayClass23_0___ShowThemeRemovalWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <CreateThemeButtons>b__21_1() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__CreateThemeButtons_b__21_1
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ThemeSelection____c___GoBackToSettings_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ThemeSelection____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ThemeSelection____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ThemeSelection____c);
  }
  callbackFunction = TypeInfo__ThemeSelection____c->static_fields->__9__25_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ThemeSelection____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ThemeSelection____c);
    }
    object = TypeInfo__ThemeSelection____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ThemeSelection____c___GoBackToSettings_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ThemeSelection____c->static_fields->__9__25_0 = callbackFunction;
    func_?(&TypeInfo__ThemeSelection____c->static_fields->__9__25_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* ThemeSelection() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection__ctor
               (ThemeSelection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral____Hover_over_a_theme_to_know_mo);
    cRam_? = '\x01';
  }
  (this->fields).currentDescription = StringLiteral____Hover_over_a_theme_to_know_mo;
  func_?(&(this->fields).currentDescription,StringLiteral____Hover_over_a_theme_to_know_mo)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_PreviewTheme(Theme) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_set_PreviewTheme
               (ThemeSelection *this,Theme *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewTheme;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).previewTheme;
    if (pTVar1 == (Theme *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  (this->fields).previewTheme = value;
  func_?();
  return;
}


/* Void set_ThemeDescription(String) */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_set_ThemeDescription
               (ThemeSelection *this,String *value,MethodInfo *method)

{
  (this->fields).currentDescription = value;
  func_?(&(this->fields).currentDescription,value);
  pTVar1 = (this->fields).themeDescription;
  pSVar2 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

