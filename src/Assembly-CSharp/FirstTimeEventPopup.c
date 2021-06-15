
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopSelf(GameObject) */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_PopSelf
               (FirstTimeEventPopup *this,GameObject *popupGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeEventPopup___PopSelf_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = popupGameObject;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__FirstTimeEventPopup___PopSelf_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).skipButton;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pBVar1 = (this->fields).skipButton;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pBVar1,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0)) {
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)func_?(), pcVar4 == (code *)0x0))
  {
    func_?();
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)();
  return;
}


/* Void StartFade(Action`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_StartFade
               (FirstTimeEventPopup *this,Action_1_UnityEngine_GameObject_ *finishedAction,
               MethodInfo *method)

{
  this_00 = (this->fields).fader;
  targetGameObject =
       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                 ((Component_1 *)this,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).fader;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeEventPopup__PopSelf_UnityEngine__GameObject_,
             MethodInfo__System__Action<UnityEngine::GameObject>__Action_System__Object__void__);
  targetGameObject =
       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                 ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (FirstTimeFadeHandler *)0x0) {
    FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
              (this_00,(Action_1_UnityEngine_GameObject_ *)this_01,targetGameObject,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

