
/* Void OnClick() */

void Assembly-CSharp.dll::PlayerInventoryButton::PlayerInventoryButton_OnClick
               (PlayerInventoryButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__PlayerInventoryButton____c___OnClick_b__0_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerInventoryButton____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__PlayerInventoryButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__PlayerInventoryButton____c);
  }
  callbackFunction = TypeInfo__PlayerInventoryButton____c->static_fields->__9__0_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
    if ((TypeInfo__PlayerInventoryButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PlayerInventoryButton____c);
    }
    object = TypeInfo__PlayerInventoryButton____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__PlayerInventoryButton____c___OnClick_b__0_0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayerInventoryButton____c->static_fields->__9__0_0 = callbackFunction;
    func_?(&TypeInfo__PlayerInventoryButton____c->static_fields->__9__0_0,callbackFunction)
    ;
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
            );
  return;
}

