
/* Void SetControl(KogamaControls) */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::
     FirstTimeSystemPopupMovementHeight_SetControl
               (FirstTimeSystemPopupMovementHeight *this,KogamaControls__Enum control,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).controlImages;
  if (pLVar1 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
    index = (pLVar1->fields)._size;
    do {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pLVar1 = (this->fields).controlImages;
      if (pLVar1 == (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0)
      goto code_?;
      pUVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
               UnitySynchronizationContext+WorkRequest]::
               List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                         (&UStack_3,
                          (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar1,
                          index,
                          MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Item_int_
                         );
      uStack_4._0_4_ = pUVar2->m_DelagateCallback;
      uStack_4._4_4_ = pUVar2->m_DelagateState;
    } while (control != (undefined4)uStack_4);
    pLVar1 = (this->fields).controlImages;
    if (pLVar1 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
      UStack_3.m_DelagateCallback =
           (SendOrPostCallback *)
           MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Item_int_
      ;
      iVar5 = func_?(&UStack_3,pLVar1,index);
      if (*(int *)(iVar5 + 4) != 0) {
        func_?(0x17,*(int *)(iVar5 + 4),(this->fields).deactivated.r,
                        (this->fields).deactivated.g,(this->fields).deactivated.b,
                        (this->fields).deactivated.a);
        pLVar1 = (this->fields).controlImages;
        if (pLVar1 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
          iVar5 = func_?(&UStack_3,pLVar1,index,
                                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Item_int_
                                 );
          if (*(GameObject **)(iVar5 + 8) != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (*(GameObject **)(iVar5 + 8),1,(MethodInfo *)0x0);
            pLVar1 = (this->fields).controlImages;
            if (pLVar1 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::
              List`1[TierUnlockAccessItemsPopup+AccessItemData]::
              List_1_TierUnlockAccessItemsPopup_AccessItemData__RemoveAt
                        ((List_1_TierUnlockAccessItemsPopup_AccessItemData_ *)pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__RemoveAt_int_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::
     FirstTimeSystemPopupMovementHeight_Update
               (FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MethodInfo__FirstTimeSystemPopupMovementHeight____c___Update_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeSystemPopupMovementHeight____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_EditMoveUp,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovementHeight_SetControl
              (this,KogamaControls__Enum_EditMoveUp,(MethodInfo *)0x0);
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_EditMoveDown,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovementHeight_SetControl
              (this,KogamaControls__Enum_EditMoveDown,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).controlImages;
  if (pLVar2 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      fVar3 = (this->fields).currentFade;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar4 = fVar4 + fVar3;
      this_00 = (this->fields).group;
      (this->fields).currentFade = fVar4;
      if (this_00 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,_UNK_? - fVar4 / (this->fields).fadeDuration,(MethodInfo *)0x0);
      if ((this->fields).fadeDuration <= (this->fields).currentFade) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__FirstTimeSystemPopupMovementHeight____c->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        callbackFunction =
             TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9__9_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__FirstTimeSystemPopupMovementHeight____c->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          object = TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__FirstTimeSystemPopupMovementHeight____c___Update_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__FirstTimeSystemPopupMovementHeight____c->static_fields->__9__9_0 =
               callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* FirstTimeSystemPopupMovementHeight() */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::
     FirstTimeSystemPopupMovementHeight__ctor
               (FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields).fadeDuration = 0.4;
  (this->fields).deactivated.r = fVar4;
  (this->fields).deactivated.g = fVar3;
  (this->fields).deactivated.b = fVar2;
  (this->fields).deactivated.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsFinished() */

bool Assembly-CSharp.dll::FirstTimeSystemPopupMovementHeight::
     FirstTimeSystemPopupMovementHeight_get_IsFinished
               (FirstTimeSystemPopupMovementHeight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovementHeight::ControlImage>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).controlImages;
  if (pLVar2 != (List_1_FirstTimeSystemPopupMovementHeight_ControlImage_ *)0x0) {
    return (pLVar2->fields)._size == 0;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

