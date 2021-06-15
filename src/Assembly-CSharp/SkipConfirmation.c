
/* Void CreateConfirmationPopup() */

void Assembly-CSharp.dll::SkipConfirmation::SkipConfirmation_CreateConfirmationPopup
               (SkipConfirmation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SkipConfirmation___CreateConfirmationPopup_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).popup;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar1;
    pSVar2 = TM::TM__(StringLiteral_You_ll_miss_out_on_a_lot_of_XP__,(MethodInfo *)0x0);
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(pSVar2);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__SkipConfirmation__HandleResult_bool__ConfirmationPopup_,
               MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__UnityAction_System__Object__void__
              );
    pSVar2 = TM::TM__(StringLiteral_Skip_,(MethodInfo *)0x0);
    if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Initialize
                ((ConfirmationPopup *)pXVar1,(String *)0x0,
                 (UnityAction_2_System_Boolean_ConfirmationPopup_ *)pUVar3,pSVar2,(MethodInfo *)0x0)
      ;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_00,
                 MethodInfo__SkipConfirmation___CreateConfirmationPopup_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleResult(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::SkipConfirmation::SkipConfirmation_HandleResult
               (SkipConfirmation *this,bool confirmed,ConfirmationPopup *popup,MethodInfo *method)

{
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    if (confirmed != 0) {
      this_00 = (this->fields).popElement;
      if (this_00 == (PopElement *)0x0) goto code_?;
      PopElement::PopElement_PopGroups(this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

