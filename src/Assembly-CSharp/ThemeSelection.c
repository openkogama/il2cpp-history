
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
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<MV::WorldObject::ThemesData::ThemeData_[]>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
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
    pSStack2 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      pIStack3 = (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      pTStack4 = pTVar1;
      (*(code *)(pTVar1->klass->vtable).set_text.method)();
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__ThemeSelection__LocalizeAndSetDescriptionText__,
                 (MethodInfo *)0x0);
      TM::TM_LanguageChanged((Action *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  method_00 = (Component__Class *)0x0;
  pTVar2 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
  if (pTVar2 != (ThemeWorldObject *)0x0) {
    original = (this->fields).themeRemovalButtonPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_00 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UnityEngine__UI__Button_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Button>_UnityEngine__UI__Button_
                        );
    if (this_00 == (Component *)0x0) goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (this_00,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar3,(Transform *)(this->fields).themeButtonContainer,0,(MethodInfo *)0x0);
    method_00 = this_00[0xf].klass;
    pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar4,(Object *)this,MethodInfo__ThemeSelection___CreateThemeButtons_b__21_0__,
               (MethodInfo *)0x0);
    if (method_00 == (Component__Class *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
              ((UnityEvent *)method_00,(UnityAction *)pNVar4,(MethodInfo *)0x0);
  }
  puVar5 = (undefined1 *)0x0;
  if (data != (ThemeData__Array *)0x0) {
    ppTVar6 = data->vector;
    while( true ) {
      if ((int)data->max_length <= (int)puVar5) {
        return;
      }
      if ((undefined1 *)data->max_length <= puVar5) break;
      pOVar7 = (Object__Class *)*ppTVar6;
      value = (Object *)func_?(TypeInfo__ThemeSelection____c__DisplayClass21_0);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      if (value == (Object *)0x0) goto code_?;
      value[2].monitor = (MonitorData *)selectionMenu;
      func_?(&value[2].monitor,selectionMenu);
      original_00 = (selectionMenu->fields).buttonPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar8 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original_00,
                          ThemeSelectionButton_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelectionButton>_ThemeSelectionButton_
                         );
      value[1].klass = pOVar8;
      func_?(value + 1,pOVar8);
      if (value[1].klass == (Object__Class *)0x0) goto code_?;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)value[1].klass,(MethodInfo *)0x0);
      if (pTVar3 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar3,(Transform *)(selectionMenu->fields).themeButtonContainer,0,
                 (MethodInfo *)0x0);
      pTVar1 = (selectionMenu->fields).themeRepo;
      if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
      pTVar2 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
      if (pTVar2 == (ThemeWorldObject *)0x0) {
        a = (String *)0x0;
      }
      else {
        pTVar2 = ThemeRepository::ThemeRepository_get_CurrentTheme(pTVar1,(MethodInfo *)0x0);
        if (pTVar2 == (ThemeWorldObject *)0x0) goto code_?;
        a = ThemeWorldObject::ThemeWorldObject_get_Identifier(pTVar2,(MethodInfo *)0x0);
      }
      if (pOVar7 == (Object__Class *)0x0) goto code_?;
      bVar9 = mscorlib.dll::System::String::String_op_Equality
                        (a,(String *)(pOVar7->_0).namespaze,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        pUVar10 = (UnityAction__Class *)(pOVar7->_0).namespaze;
        value[1].monitor = (MonitorData *)pUVar10;
        ppMVar11 = &value[1].monitor;
        func_?();
        value[2].klass = pOVar7;
        func_?(value + 2,pOVar7);
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,value,
                   MethodInfo__ThemeSelection____c__DisplayClass21_0___CreateThemeButtons_b__2__,
                   (MethodInfo *)0x0);
        pTVar1 = (selectionMenu->fields).themeRepo;
        pOVar8 = value[1].klass;
        if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
        themePrefab = ThemeRepository::ThemeRepository_GetThemePrefab
                                (pTVar1,(String *)(pOVar7->_0).namespaze,(MethodInfo *)0x0);
        if (pOVar8 == (Object__Class *)0x0) goto code_?;
        this._0_1_ = 0;
      }
      else {
        ppMVar11 = (MonitorData **)&UNK_?;
        pUVar10 = TypeInfo__UnityEngine__Events__UnityAction;
        pNVar4 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar4,(Object *)selectionMenu,
                   MethodInfo__ThemeSelection___CreateThemeButtons_b__21_1__,(MethodInfo *)0x0);
        pTVar1 = (selectionMenu->fields).themeRepo;
        pOVar8 = value[1].klass;
        if (pTVar1 == (ThemeRepository *)0x0) goto code_?;
        themePrefab = ThemeRepository::ThemeRepository_GetThemePrefab
                                (pTVar1,(String *)(pOVar7->_0).namespaze,(MethodInfo *)0x0);
        if (pOVar8 == (Object__Class *)0x0) goto code_?;
        this._0_1_ = 1;
      }
      method_00 = *(Component__Class **)&(pOVar7->_0).byval_arg.attrs;
      ThemeSelectionButton::ThemeSelectionButton_Initialize
                ((ThemeSelectionButton *)pOVar8,selectionMenu,themePrefab,(UnityAction *)pNVar4,
                 (pOVar7->_0).byval_arg.data.__klassIndex,(int32_t)method_00,(bool)this,
                 (MethodInfo *)0x0);
      puVar5 = (undefined1 *)((int)&(pUVar10->_0).image + 1);
      ppTVar6 = (ThemeData **)(ppMVar11 + 1);
    }
    func_?();
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&StringLiteral_Preview_theme_created);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Preview_theme_created,(MethodInfo *)0x0);
    pTVar1 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
    if (pTVar1 == (ThemeWorldObject *)0x0) {
      pTVar2 = (Theme *)0x0;
    }
    else {
      pTVar2 = (pTVar1->fields)._Visualization_k__BackingField;
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pTVar1 = ThemeRepository::ThemeRepository_get_CurrentTheme(this_00,(MethodInfo *)0x0);
      if ((pTVar1 == (ThemeWorldObject *)0x0) ||
         (pTVar2 = (pTVar1->fields)._Visualization_k__BackingField, pTVar2 == (Theme *)0x0))
      goto code_?;
      Theme::Theme_Deactivate(pTVar2,(MethodInfo *)0x0);
    }
    pTVar2 = ThemeRepository::ThemeRepository_GetThemePrefab(this_00,identifier,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pTVar2 = (Theme *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)pTVar2,
                                 Theme_MethodInfo__UnityEngine__Object__Instantiate<Theme>_Theme_);
    if (pTVar2 != (Theme *)0x0) {
      Theme::Theme_InitializeForPreview(pTVar2,(MethodInfo *)0x0);
      Theme::Theme_Activate(pTVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      pTVar4 = (this->fields).previewTheme;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pTVar4 = (this->fields).previewTheme;
        if (pTVar4 == (Theme *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar4,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar5,(MethodInfo *)0x0);
      }
      (this->fields).previewTheme = pTVar2;
      method_00 = (ExecuteEvents__Class **)&UNK_?;
      func_?(&(this->fields).previewTheme,pTVar2);
      menuController = (this->fields).menuController;
      pTVar2 = (this->fields).previewTheme;
      if (menuController != (ThemeMenuController *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
          func_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                         );
          method_00 = &TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
          func_?();
          func_?(&
                          ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          func_?(&
                          MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         );
          func_?(&TypeInfo__ThemeMenuController____c__DisplayClass6_0);
          cRam_? = '\x01';
        }
        value = (Object *)func_?(TypeInfo__ThemeMenuController____c__DisplayClass6_0);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        if (value != (Object *)0x0) {
          value[1].monitor = (MonitorData *)pTVar2;
          func_?(&value[1].monitor,pTVar2);
          original = (menuController->fields).previewSettingsPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pOVar6 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)original,
                              ThemePreviewSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ThemePreviewSettingsMenu>_ThemePreviewSettingsMenu_
                             );
          value[1].klass = pOVar6;
          func_?(value + 1,pOVar6);
          if (value[1].klass != (Object__Class *)0x0) {
            ThemePreviewSettingsMenu::ThemePreviewSettingsMenu_Initialize
                      ((ThemePreviewSettingsMenu *)value[1].klass,(Theme *)value[1].monitor,data,
                       menuController,(MethodInfo *)0x0);
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)menuController,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__ThemeMenuController____c__DisplayClass6_0___OpenSettingsForPreview_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar5,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void LocalizeAndSetDescriptionText() */

void Assembly-CSharp.dll::ThemeSelection::ThemeSelection_LocalizeAndSetDescriptionText
               (ThemeSelection *this,MethodInfo *method)

{
  pTVar1 = (this->fields).themeDescription;
  pSVar2 = TM::TM__((this->fields).currentDescription,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ConfirmationPopup *)
              TypeInfo__ThemeRepository->static_fields->_Instance_k__BackingField;
    if (this_00 == (ConfirmationPopup *)0x0) goto code_?;
    pTVar1 = ThemeRepository::ThemeRepository_get_CurrentTheme
                       ((ThemeRepository *)this_00,(MethodInfo *)0x0);
    if (pTVar1 == (ThemeWorldObject *)0x0) {
      worldObjectID = -1;
    }
    else {
      pTVar1 = ThemeRepository::ThemeRepository_get_CurrentTheme
                         ((ThemeRepository *)this_00,(MethodInfo *)0x0);
      if (pTVar1 == (ThemeWorldObject *)0x0) goto code_?;
      worldObjectID = (pTVar1->fields)._._.id;
      popup = this_00;
    }
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  method_00 = TypeInfo__ThemeSelection____c__DisplayClass23_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
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
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__ThemeSelection____c__DisplayClass23_0___ShowThemeRemovalWarning_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
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
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

