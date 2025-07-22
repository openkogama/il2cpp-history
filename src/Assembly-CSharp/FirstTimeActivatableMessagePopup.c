
/* Void FadeOut() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup_FadeOut
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&
                    MethodInfo__FirstTimeActivatableMessagePopup__OnFinished_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeActivatableMessagePopup__OnFinished_UnityEngine__GameObject_,
             (MethodInfo *)0x0);
  if (this_00 != (FirstTimeEventMessage *)0x0) {
    FirstTimeEventMessage::FirstTimeEventMessage_FadeOut
              (this_00,(Action_1_UnityEngine_GameObject_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnFinished(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::
     FirstTimeActivatableMessagePopup_OnFinished
               (FirstTimeActivatableMessagePopup *this,GameObject *firstTimeEventMessage,
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
    func_?(&
                    MethodInfo__FirstTimeActivatableMessagePopup____c__DisplayClass12_0___OnFinished_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatableMessagePopup____c__DisplayClass12_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeActivatableMessagePopup____c__DisplayClass12_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)firstTimeEventMessage;
    func_?(value + 1,firstTimeEventMessage);
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
               MethodInfo__FirstTimeActivatableMessagePopup____c__DisplayClass12_0___OnFinished_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup_OnPop
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup_OnShow
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).firstTimeEventMessagePrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pFVar1 = (FirstTimeEventMessage *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pFVar1,
                      FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                     );
  (this->fields).firstTimeEventMessage = pFVar1;
  func_?(&(this->fields).firstTimeEventMessage,pFVar1);
  this_00 = (DebriefingWinnerGUI *)(this->fields).firstTimeEventMessage;
  time = TM::TM__((this->fields).messageText,(MethodInfo *)0x0);
  if (this_00 != (DebriefingWinnerGUI *)0x0) {
    DebriefingWinnerGUI::DebriefingWinnerGUI_SetTimerText(this_00,time,(MethodInfo *)0x0);
    (this->fields).isShown = 1;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      time = (String *)&UNK_?;
      func_?(&
                      MethodInfo__FirstTimeActivatableMessagePopup___PushToStack_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__FirstTimeActivatableMessagePopup___PushToStack_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    iVar2 = iRam_?;
    if ((this->fields).firstTimeEventMessage != (FirstTimeEventMessage *)0x0) {
      if (iRam_? != 0) {
        puVar3 = (undefined4 *)(iRam_? + 0x10);
        *(undefined1 *)(iRam_? + 0x24) = 1;
        if ((CanvasGroup *)*puVar3 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    ((CanvasGroup *)*puVar3,0.0,(MethodInfo *)0x0);
          *(undefined4 *)(iVar2 + 0x20) = 0;
          return;
        }
      }
      func_?(time);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PushToStack() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::
     FirstTimeActivatableMessagePopup_PushToStack
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

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
                    MethodInfo__FirstTimeActivatableMessagePopup___PushToStack_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__FirstTimeActivatableMessagePopup___PushToStack_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup_Update
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if ((this->fields).isDone == 0) {
    fVar1 = (this->fields).showedTime;
    pfVar2 = &(this->fields).stayTimeInSeconds;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
        func_?(&
                        MethodInfo__FirstTimeActivatableMessagePopup__OnFinished_UnityEngine__GameObject_
                       );
        cRam_? = '\x01';
      }
      this_00 = (this->fields).firstTimeEventMessage;
      this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,(Object *)this,
                 MethodInfo__FirstTimeActivatableMessagePopup__OnFinished_UnityEngine__GameObject_,
                 (MethodInfo *)0x0);
      if (this_00 == (FirstTimeEventMessage *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FirstTimeEventMessage::FirstTimeEventMessage_FadeOut
                (this_00,(Action_1_UnityEngine_GameObject_ *)this_01,(MethodInfo *)0x0);
      (this->fields).isDone = 1;
    }
    if ((this->fields).isShown != 0) {
      fVar1 = (this->fields).showedTime;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      (this->fields).showedTime = fVar4 + fVar1;
    }
  }
  return;
}


/* Void <PushToStack>b__11_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::
     FirstTimeActivatableMessagePopup__PushToStack_b__11_0
               (FirstTimeActivatableMessagePopup *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__FirstTimeActivatableMessagePopup__OnPop__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  index = 0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).pushOptions;
  do {
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this_00->fields)._size <= index) {
      this_01 = (this->fields).firstTimeEventMessage;
      if (this_01 != (FirstTimeEventMessage *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        this_02 = (NavMesh_OnNavMeshPreUpdate *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__FirstTimeActivatableMessagePopup__OnPop__,
                   (MethodInfo *)0x0);
        if (x != (IUIStack *)0x0) {
          func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar3,uVar1,this_02,
                          0x20);
          return;
        }
      }
      goto code_?;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_);
    uVar1 = uVar1 | (uint)RVar4;
    index = index + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).pushOptions;
  } while( true );
}


/* FirstTimeActivatableMessagePopup() */

void Assembly-CSharp.dll::FirstTimeActivatableMessagePopup::FirstTimeActivatableMessagePopup__ctor
               (FirstTimeActivatableMessagePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UIPushOption>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UIPushOption_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIPushOption>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
  (this->fields).pushOptions = this_00;
  func_?(&(this->fields).pushOptions,this_00);
  (this->fields).stayTimeInSeconds = 2.0;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
  Singleton_1_System_Object___ctor((Singleton_1_System_Object_ *)this,(MethodInfo *)0x0);
  return;
}

