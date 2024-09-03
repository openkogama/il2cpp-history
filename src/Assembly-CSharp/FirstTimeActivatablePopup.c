
/* Void CreatePopup() */

void Assembly-CSharp.dll::FirstTimeActivatablePopup::FirstTimeActivatablePopup_CreatePopup
               (FirstTimeActivatablePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    FirstTimeEventPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopup>_FirstTimeEventPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).popupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pFVar1 = (FirstTimeEventPopup *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pFVar1,
                      FirstTimeEventPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopup>_FirstTimeEventPopup_
                     );
  (this->fields).popup = pFVar1;
  func_?(&(this->fields).popup,pFVar1);
  pFVar1 = (this->fields).popup;
  value = (this->fields).skipAllowed;
  if (pFVar1 == (FirstTimeEventPopup *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pBVar2 = (pFVar1->fields).skipButton;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pBVar2 = (pFVar1->fields).skipButton;
    if (pBVar2 == (Button *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pBVar2,(MethodInfo *)0x0);
    if (this_01 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,value,(MethodInfo *)0x0);
  }
  pFVar1 = (this->fields).popup;
  if ((pFVar1 != (FirstTimeEventPopup *)0x0) &&
     (pFVar4 = (pFVar1->fields).fader, pFVar4 != (FirstTimeFadeHandler *)0x0)) {
    this_00 = (pFVar4->fields).canvasGroup;
    (pFVar4->fields).fadingIn = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pFVar4->fields).currentFadeInTime = 0.0;
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DoShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePopup::FirstTimeActivatablePopup_DoShow
               (FirstTimeActivatablePopup *this,MethodInfo *method)

{
  FirstTimeActivatablePopup_CreatePopup(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__FirstTimeActivatablePopup___PushToStack_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__FirstTimeActivatablePopup___PushToStack_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnPop() */

void Assembly-CSharp.dll::FirstTimeActivatablePopup::FirstTimeActivatablePopup_OnPop
               (FirstTimeActivatablePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRegistered != 0) {
    FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
              ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePopup::FirstTimeActivatablePopup_OnShow
               (FirstTimeActivatablePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).popup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (*(code *)(this->klass->vtable).DoShow.method)(this,this->klass[1]._0.image);
  }
  return;
}


/* Void PushToStack() */

void Assembly-CSharp.dll::FirstTimeActivatablePopup::FirstTimeActivatablePopup_PushToStack
               (FirstTimeActivatablePopup *this,MethodInfo *method)

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
                    MethodInfo__FirstTimeActivatablePopup___PushToStack_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
             MethodInfo__FirstTimeActivatablePopup___PushToStack_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void <PushToStack>b__9_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePopup::FirstTimeActivatablePopup__PushToStack_b__9_0
               (FirstTimeActivatablePopup *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__FirstTimeActivatablePopup__OnPop__);
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
      this_01 = (this->fields).popup;
      if (this_01 != (FirstTimeEventPopup *)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        this_02 = (NavMesh_OnNavMeshPreUpdate *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__FirstTimeActivatablePopup__OnPop__,
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

