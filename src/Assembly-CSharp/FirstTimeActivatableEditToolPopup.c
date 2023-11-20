
/* Void OnCubeChanged(Int32, EditCubeChange) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_OnCubeChanged
               (FirstTimeActivatableEditToolPopup *this,int32_t cubeCount,
               EditCubeChange__Enum changeMade,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).cubeChangesToCheck;
  while (pLVar1 != (List_1_EditCubeChange_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).cubeChangesToCheck;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Item_int_
                      );
    if (RVar2 == (RegexCharClass_SingleRange)changeMade) {
      FirstTimeActivatableEditToolPopup_OnShown(this,(MethodInfo *)0x0);
      return;
    }
    index = index + 1;
    pLVar1 = (this->fields).cubeChangesToCheck;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPopupRemoved(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_OnPopupRemoved
               (FirstTimeActivatableEditToolPopup *this,GameObject *popupGameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass14_0___OnPopupRemoved_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass14_0);
    func_?(&StringLiteral_OnShown_);
    func_?(&::StringLiteral___);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass14_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)popupGameObject;
    func_?(value + 1,popupGameObject);
    EStack_1.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent;
    iStack_2 = (this->fields)._._.firstTimeEvent;
    EStack_1.monitor = (MonitorData *)0xffffffff;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    IStack_4.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    str3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_5
                       (StringLiteral_OnShown_,pSVar3,::StringLiteral___,str3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    IStack_4.m_value = (int32_t)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass14_0___OnPopupRemoved_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)0x0,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_OnShow
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

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
                    MethodInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass9_0___OnShow_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass9_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass9_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  value[1].monitor = (MonitorData *)this;
  func_?(&value[1].monitor,this);
  if ((this->fields).showing == 0) {
    *(undefined1 *)&value[1].klass = 0;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass9_0___OnShow_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (*(char *)&value[1].klass != '\0') {
      (this->fields).wantsToShow = 1;
      return;
    }
    FirstTimeActivatableEditToolPopup_ShowPopup(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_OnShown
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&
                    MethodInfo__FirstTimeActivatableEditToolPopup__OnCubeChanged_int__EditCubeChange_
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatableEditToolPopup__OnPopupRemoved_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatableEditToolPopup__OnCubeChanged_int__EditCubeChange_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
code_?:
    func_?();
    pFVar3 = (this->fields).popup;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pFVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pFVar3 = (this->fields).popup;
      this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,(Object *)this,
                 MethodInfo__FirstTimeActivatableEditToolPopup__OnPopupRemoved_UnityEngine__GameObject_
                 ,(MethodInfo *)0x0);
      if (pFVar3 == (FirstTimeEventPopup *)0x0) goto code_?;
      FirstTimeEventPopup::FirstTimeEventPopup_StartFade
                (pFVar3,(Action_1_UnityEngine_GameObject_ *)this_01,(MethodInfo *)0x0);
    }
    return;
  }
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)func_?();
  if (pAVar1 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
    iVar5 = func_?();
    if (iVar5 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowPopup() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_ShowPopup
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__FirstTimeActivatableEditToolPopup__OnCubeChanged_int__EditCubeChange_
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatableEditToolPopup___ShowPopup_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    FirstTimeEventPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopup>_FirstTimeEventPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_onshow_);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_onshow_,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableEditToolPopup__OnCubeChanged_int__EditCubeChange_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange =
           (Action_2_Int32_EditCubeChange_ *)0x0;
    }
    else {
      pAVar3 = (Action_2_Int32_EditCubeChange_ *)func_?();
      if (pAVar3 == (Action_2_Int32_EditCubeChange_ *)0x0) goto code_?;
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar3;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    pFVar6 = (this->fields).popupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pFVar6 = (FirstTimeEventPopup *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pFVar6,
                        FirstTimeEventPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopup>_FirstTimeEventPopup_
                       );
    (this->fields).popup = pFVar6;
    func_?();
    pFVar6 = (this->fields).popup;
    if (pFVar6 != (FirstTimeEventPopup *)0x0) {
      FirstTimeEventPopup::FirstTimeEventPopup_SetSkippable
                (pFVar6,(this->fields).skipAllowed,(MethodInfo *)0x0);
      pFVar6 = (this->fields).popup;
      if (pFVar6 != (FirstTimeEventPopup *)0x0) {
        FirstTimeEventPopup::FirstTimeEventPopup_FadeIn(pFVar6,(MethodInfo *)0x0);
        (this->fields).showing = 1;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                   MethodInfo__FirstTimeActivatableEditToolPopup___ShowPopup_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_Update
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

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
                    MethodInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass11_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass11_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    if ((this->fields).wantsToShow != 0) {
      *(undefined1 *)&value[1].monitor = 0;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__FirstTimeActivatableEditToolPopup____c__DisplayClass11_0___Update_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (*(char *)&value[1].monitor == '\0') {
        FirstTimeActivatableEditToolPopup_ShowPopup(this,(MethodInfo *)0x0);
      }
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowPopup>b__10_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup__ShowPopup_b__10_0
               (FirstTimeActivatableEditToolPopup *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (FirstTimeEventPopup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* FirstTimeActivatableEditToolPopup() */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::FirstTimeActivatableEditToolPopup__ctor
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  (this->fields).skipAllowed = 1;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup::
     FirstTimeActivatableEditToolPopup_get_CanShow
               (FirstTimeActivatableEditToolPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_canshow_);
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_canshow_;
  if (bVar1 == 0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
              (pGVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Boolean);
  }
  str1 = mscorlib.dll::System::Boolean::Boolean_ToString
                   ((Boolean *)&stack0xfffffffb,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,str1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar3,(MethodInfo *)0x0);
    return bVar1;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}

