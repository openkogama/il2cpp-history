
/* Void OnClick() */

void Assembly-CSharp.dll::ClientShopButton::ClientShopButton_OnClick
               (ClientShopButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShop>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IOpenClientShop>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShop>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ClientShopButton____c___OnClick_b__0_0_UnityEngine__EventSystems__IOpenClientShop__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ClientShopButton____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ClientShopButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ClientShopButton____c);
  }
  callbackFunction = TypeInfo__ClientShopButton____c->static_fields->__9__0_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IOpenClientShop_ *)0x0) {
    if ((TypeInfo__ClientShopButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ClientShopButton____c);
    }
    object = TypeInfo__ClientShopButton____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IOpenClientShop_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShop>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ClientShopButton____c___OnClick_b__0_0_UnityEngine__EventSystems__IOpenClientShop__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ClientShopButton____c->static_fields->__9__0_0 = callbackFunction;
    func_?(&TypeInfo__ClientShopButton____c->static_fields->__9__0_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IOpenClientShop>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IOpenClientShop>_
            );
  return;
}

