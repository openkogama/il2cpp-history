
/* Void DoAction() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::PlayMode::LobbyState::MenuButtons::
     AdminObserveButton::AdminObserveButton_DoAction(AdminObserveButton *this,MethodInfo *method)

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
                    MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c___DoAction_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Observe
              (this_00,1,(MethodInfo *)0x0);
    MVGameControllerDesktop::MVGameControllerDesktop_CursorLock(1,0,(MethodInfo *)0x0);
    if ((this->fields)._.shouldPop != 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((
          TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
          ->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction =
           TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
           ->static_fields->__9__0_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((
            TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
            ->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
                 ->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c___DoAction_b__0_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__UGUI__Desktop__Scripts__PlayMode__LobbyState__MenuButtons__AdminObserveButton____c
        ->static_fields->__9__0_0 = callbackFunction;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

