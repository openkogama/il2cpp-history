
/* Void OnClick() */

void Assembly-CSharp.dll::PlayerInventoryButton::PlayerInventoryButton_OnClick
               (PlayerInventoryButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__PlayerInventoryButton->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__PlayerInventoryButton___OnClick_m__0_UnityEngine__EventSystems__IPlayerInventory__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>__EventFunction_System__Object__void__
              );
    TypeInfo__PlayerInventoryButton->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IPlayerInventory_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__PlayerInventoryButton->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IPlayerInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IPlayerInventory>_
            );
  return;
}


/* Void <OnClick>m__0(IPlayerInventory, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryButton::PlayerInventoryButton__OnClick_m__0
               (IPlayerInventory *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IPlayerInventory *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IPlayerInventory,x,1);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

