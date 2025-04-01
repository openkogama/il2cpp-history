
/* Void CreateConfirmationPopup() */

void Assembly-CSharp.dll::SkipConfirmation::SkipConfirmation_CreateConfirmationPopup
               (SkipConfirmation *this,MethodInfo *method)

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
                    ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SkipConfirmation__HandleResult_bool__ConfirmationPopup_);
    func_?(&
                    MethodInfo__SkipConfirmation____c__DisplayClass2_0___CreateConfirmationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SkipConfirmation____c__DisplayClass2_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Skip_);
    func_?(&StringLiteral_You_ll_miss_out_on_a_lot_of_XP__);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SkipConfirmation____c__DisplayClass2_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).popup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      ConfirmationPopup_MethodInfo__UnityEngine__Object__Instantiate<ConfirmationPopup>_ConfirmationPopup_
                     );
  if (value != (Object *)0x0) {
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    pOVar3 = pOVar2;
    func_?(pOVar2,pOVar1);
    pOVar1 = pOVar2->klass;
    pSVar4 = TM::TM__(StringLiteral_You_ll_miss_out_on_a_lot_of_XP__,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>,
                              pOVar3,pSVar4);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__SkipConfirmation__HandleResult_bool__ConfirmationPopup_,(MethodInfo *)0x0
              );
    pSVar4 = TM::TM__(StringLiteral_Skip_,(MethodInfo *)0x0);
    if (pOVar1 != (Object__Class *)0x0) {
      ConfirmationPopup::ConfirmationPopup_Initialize
                ((ConfirmationPopup *)pOVar1,(String *)0x0,
                 (UnityAction_2_System_Boolean_ConfirmationPopup_ *)this_00,pSVar4,(MethodInfo *)0x0
                );
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
                 MethodInfo__SkipConfirmation____c__DisplayClass2_0___CreateConfirmationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

