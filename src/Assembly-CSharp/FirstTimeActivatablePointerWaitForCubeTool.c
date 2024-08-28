
/* Void OnActivate() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnActivate
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                   );
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
code_?:
    func_?();
    return;
  }
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)func_?();
  if (pAVar1 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnClosed() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnClosed
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
code_?:
    func_?();
    if ((this->fields).completed == 0) {
      this_00 = (this->fields).popup;
      this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_02,(Object *)this,
                 MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
                 ,(MethodInfo *)0x0);
      if (this_00 == (FirstTimeEventPopupWithProgress *)0x0) goto code_?;
      FirstTimeEventPopup::FirstTimeEventPopup_StartFade
                ((FirstTimeEventPopup *)this_00,(Action_1_UnityEngine_GameObject_ *)this_02,
                 (MethodInfo *)0x0);
    }
    return;
  }
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)func_?();
  if (pAVar1 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnCubeChanged(Int32, EditCubeChange) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnCubeChanged
               (FirstTimeActivatablePointerWaitForCubeTool *this,int32_t cubeCount,
               EditCubeChange__Enum changeMade,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Item_int_);
    cRam_? = '\x01';
  }
  if ((this->fields).checkCubeCount == 0) {
    iVar1 = 0;
    pLVar2 = (this->fields).cubeChangesToCheck;
    while (pLVar2 != (List_1_EditCubeChange_ *)0x0) {
      if ((pLVar2->fields)._size <= iVar1) goto code_?;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).cubeChangesToCheck;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,iVar1,
                         MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)changeMade) {
        piVar4 = &(this->fields).currentChangeCount;
        *piVar4 = *piVar4 + 1;
        goto code_?;
      }
      iVar1 = iVar1 + 1;
      pLVar2 = (this->fields).cubeChangesToCheck;
    }
    goto code_?;
  }
  (this->fields).currentChangeCount = cubeCount;
code_?:
  if ((this->fields).isShown == 0) {
    return;
  }
  pFVar5 = (this->fields).popup;
  if (pFVar5 == (FirstTimeEventPopupWithProgress *)0x0) goto code_?;
  FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress_SetProgress
            (pFVar5,(float)(this->fields).currentChangeCount,
             (float)(this->fields).numberOfChangesBeforePointer,(MethodInfo *)0x0);
  if ((this->fields).currentChangeCount < (this->fields).numberOfChangesBeforePointer) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  (this->fields).canShow = 0;
  (this->fields).completed = 1;
  pAVar6 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,(MethodInfo *)0x0);
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar7 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
code_?:
    func_?();
    pFVar5 = (this->fields).popup;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,
               MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
               ,(MethodInfo *)0x0);
    if (pFVar5 != (FirstTimeEventPopupWithProgress *)0x0) {
      FirstTimeEventPopup::FirstTimeEventPopup_StartFade
                ((FirstTimeEventPopup *)pFVar5,(Action_1_UnityEngine_GameObject_ *)this_02,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else {
    pAVar6 = (Action_2_Int32_EditCubeChange_ *)func_?();
    if (pAVar6 != (Action_2_Int32_EditCubeChange_ *)0x0) {
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar6;
      iVar1 = func_?();
      if (iVar1 != 0) goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnDestroy
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                   );
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_OnDestroy
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
code_?:
    func_?();
    return;
  }
  pAVar1 = (Action_2_Int32_EditCubeChange_ *)func_?();
  if (pAVar1 != (Action_2_Int32_EditCubeChange_ *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPopupRemoved(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnPopupRemoved
               (FirstTimeActivatablePointerWaitForCubeTool *this,GameObject *popupGameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool____c__DisplayClass18_0___OnPopupRemoved_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatablePointerWaitForCubeTool____c__DisplayClass18_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatablePointerWaitForCubeTool____c__DisplayClass18_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)popupGameObject;
    func_?(value + 1,popupGameObject);
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (UnityAction_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (callbackFunction,value,
               MethodInfo__FirstTimeActivatablePointerWaitForCubeTool____c__DisplayClass18_0___OnPopupRemoved_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)callbackFunction,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
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
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnShow
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

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
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool___OnShow_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    FirstTimeEventPopupWithProgress_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopupWithProgress>_FirstTimeEventPopupWithProgress_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Shown_called_more_than_once);
    cRam_? = '\x01';
  }
  if ((this->fields).isShown == 0) {
    pFVar1 = (this->fields).meanwhilePopup;
    (this->fields).isShown = 1;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pFVar1 = (FirstTimeEventPopupWithProgress *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pFVar1,
                        FirstTimeEventPopupWithProgress_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopupWithProgress>_FirstTimeEventPopupWithProgress_
                       );
    ppFVar2 = &(this->fields).popup;
    *ppFVar2 = pFVar1;
    func_?(ppFVar2,pFVar1);
    if (*ppFVar2 != (FirstTimeEventPopupWithProgress *)0x0) {
      FirstTimeEventPopup::FirstTimeEventPopup_SetSkippable
                ((FirstTimeEventPopup *)*ppFVar2,(this->fields).skipAllowed,(MethodInfo *)0x0);
      if (*ppFVar2 != (FirstTimeEventPopupWithProgress *)0x0) {
        FirstTimeEventPopup::FirstTimeEventPopup_FadeIn
                  ((FirstTimeEventPopup *)*ppFVar2,(MethodInfo *)0x0);
        if (*ppFVar2 != (FirstTimeEventPopupWithProgress *)0x0) {
          FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress_SetProgress
                    (*ppFVar2,(float)(this->fields).currentChangeCount,
                     (float)(this->fields).numberOfChangesBeforePointer,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                     MethodInfo__FirstTimeActivatablePointerWaitForCubeTool___OnShow_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Shown_called_more_than_once,(MethodInfo *)0x0);
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnShown
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&TypeInfo__CubeModelTool);
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                   );
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  (this->fields).canShow = 0;
  (this->fields).completed = 1;
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<int,_EditCubeChange>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
code_?:
    func_?();
    this_00 = (this->fields).popup;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,
               MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
               ,(MethodInfo *)0x0);
    if (this_00 != (FirstTimeEventPopupWithProgress *)0x0) {
      FirstTimeEventPopup::FirstTimeEventPopup_StartFade
                ((FirstTimeEventPopup *)this_00,(Action_1_UnityEngine_GameObject_ *)this_02,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else {
    pAVar1 = (Action_2_Int32_EditCubeChange_ *)func_?();
    if (pAVar1 != (Action_2_Int32_EditCubeChange_ *)0x0) {
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
    }
    func_?();
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <OnShow>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool__OnShow_b__13_0
               (FirstTimeActivatablePointerWaitForCubeTool *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnClosed__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (FirstTimeEventPopupWithProgress *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnClosed__,(MethodInfo *)0x0)
    ;
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,0,this_01,0x20);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FirstTimeActivatablePointerWaitForCubeTool() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool__ctor
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  (this->fields).canShow = 1;
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

bool Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_get_CanShow
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return (this->fields).canShow;
    }
  }
  return 0;
}

