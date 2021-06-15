
/* Void Initialize(String, UnityAction) */

void Assembly-CSharp.dll::ContextMenuButton::ContextMenuButton_Initialize
               (ContextMenuButton *this,String *buttonText,UnityAction *onClickCallback,
               MethodInfo *method)

{
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,buttonText,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
    ;
    this_00 = (HoverCraftMotor *)(this->fields).button;
    if (this_00 != (HoverCraftMotor *)0x0) {
      this_01 = (UnityEvent *)
                HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0);
      if (this_01 != (UnityEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                  (this_01,onClickCallback,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ContextMenuButton::ContextMenuButton_OnPointerDown
               (ContextMenuButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ContextMenuButton->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IHandlePointerDownOnContextMenuButton_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandlePointerDownOnContextMenuButton>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ContextMenuButton___OnPointerDown_m__0_IHandlePointerDownOnContextMenuButton__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandlePointerDownOnContextMenuButton>__EventFunction_System__Object__void__
              );
    TypeInfo__ContextMenuButton->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IHandlePointerDownOnContextMenuButton_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ContextMenuButton->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandlePointerDownOnContextMenuButton>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandlePointerDownOnContextMenuButton>_
            );
  return;
}


/* Void <OnPointerDown>m__0(IHandlePointerDownOnContextMenuButton, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuButton::ContextMenuButton__OnPointerDown_m__0
               (IHandlePointerDownOnContextMenuButton *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IHandlePointerDownOnContextMenuButton *)0x0) {
    func_?(0,TypeInfo__IHandlePointerDownOnContextMenuButton,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

