
/* Void FadeIn() */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_FadeIn
               (FirstTimeEventPopup *this,MethodInfo *method)

{
  pFVar1 = (this->fields).fader;
  if (pFVar1 != (FirstTimeFadeHandler *)0x0) {
    this_00 = (pFVar1->fields).canvasGroup;
    (pFVar1->fields).fadingIn = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pFVar1->fields).currentFadeInTime = 0.0;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopSelf(GameObject) */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_PopSelf
               (FirstTimeEventPopup *this,GameObject *popupGameObject,MethodInfo *method)

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
                    MethodInfo__FirstTimeEventPopup____c__DisplayClass5_0___PopSelf_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeEventPopup____c__DisplayClass5_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__FirstTimeEventPopup____c__DisplayClass5_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)popupGameObject;
    func_?(value + 1,popupGameObject);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__FirstTimeEventPopup____c__DisplayClass5_0___PopSelf_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetSkippable(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_SetSkippable
               (FirstTimeEventPopup *this,bool skipAllowed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).skipButton;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pBVar1 = (this->fields).skipButton;
    if (pBVar1 != (Button *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pBVar1,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        (*pcRam_?)();
        return;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void StartFade(Action`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_StartFade
               (FirstTimeEventPopup *this,Action_1_UnityEngine_GameObject_ *finishedAction,
               MethodInfo *method)

{
  this_00 = (this->fields).fader;
  targetGameObject =
       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                 ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (FirstTimeFadeHandler *)0x0) {
    FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
              (this_00,finishedAction,targetGameObject,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartFadeWithSelfPop() */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_StartFadeWithSelfPop
               (FirstTimeEventPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    func_?(&MethodInfo__FirstTimeEventPopup__PopSelf_UnityEngine__GameObject_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).fader;
  this_01 = (Action_1_Object_ *)func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  if (this_01 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__FirstTimeEventPopup__PopSelf_UnityEngine__GameObject_,(MethodInfo *)0x0);
    targetGameObject =
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (FirstTimeFadeHandler *)0x0) {
      FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                (this_00,(Action_1_UnityEngine_GameObject_ *)this_01,targetGameObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

