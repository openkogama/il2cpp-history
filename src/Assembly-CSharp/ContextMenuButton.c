
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
    pBVar2 = (this->fields).button;
    if ((pBVar2 != (Button *)0x0) &&
       (this_00 = (UnityEvent *)(pBVar2->fields).m_OnClick, this_00 != (UnityEvent *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,onClickCallback,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ContextMenuButton::ContextMenuButton_OnPointerDown
               (ContextMenuButton *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandlePointerDownOnContextMenuButton>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandlePointerDownOnContextMenuButton>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandlePointerDownOnContextMenuButton>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuButton____c___OnPointerDown_b__4_0_IHandlePointerDownOnContextMenuButton__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuButton____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuButton____c);
  }
  callbackFunction = TypeInfo__ContextMenuButton____c->static_fields->__9__4_0;
  if (callbackFunction ==
      (ExecuteEvents_EventFunction_1_IHandlePointerDownOnContextMenuButton_ *)0x0) {
    if ((TypeInfo__ContextMenuButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuButton____c);
    }
    object = TypeInfo__ContextMenuButton____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandlePointerDownOnContextMenuButton_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandlePointerDownOnContextMenuButton>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuButton____c___OnPointerDown_b__4_0_IHandlePointerDownOnContextMenuButton__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuButton____c->static_fields->__9__4_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuButton____c->static_fields->__9__4_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandlePointerDownOnContextMenuButton>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandlePointerDownOnContextMenuButton>_
            );
  return;
}

