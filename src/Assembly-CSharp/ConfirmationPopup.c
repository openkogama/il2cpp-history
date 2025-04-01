
/* Void Cancel() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Cancel
               (ConfirmationPopup *this,MethodInfo *method)

{
  pUVar1 = (this->fields).resultCallback;
  ppUVar2 = &(this->fields).resultCallback;
  if (pUVar1 != (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,0,this,(pUVar1->fields)._._.method);
  }
  *ppUVar2 = (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0;
  func_?(ppUVar2,0);
  return;
}


/* Void Initialize(String, UnityAction`2[System.Boolean,ConfirmationPopup], String) */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Initialize
               (ConfirmationPopup *this,String *text,
               UnityAction_2_System_Boolean_ConfirmationPopup_ *resultCallback,String *header,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ConfirmationPopup__Cancel__);
    func_?(&MethodInfo__ConfirmationPopup__Ok__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).text;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,text,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).header;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,header,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      ppUVar2 = &(this->fields).resultCallback;
      *ppUVar2 = resultCallback;
      func_?(ppUVar2,resultCallback);
      pBVar3 = (this->fields).okButton;
      if (pBVar3 != (Button *)0x0) {
        pUVar4 = (UnityEvent *)(pBVar3->fields).m_OnClick;
        pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                 func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar5,(Object *)this,MethodInfo__ConfirmationPopup__Ok__,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (pUVar4,(UnityAction *)pNVar5,(MethodInfo *)0x0);
          pBVar3 = (this->fields).cancelButton;
          if (pBVar3 != (Button *)0x0) {
            pUVar4 = (UnityEvent *)(pBVar3->fields).m_OnClick;
            pNVar5 = (NavMesh_OnNavMeshPreUpdate *)
                     func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar5,(Object *)this,MethodInfo__ConfirmationPopup__Cancel__,
                       (MethodInfo *)0x0);
            if (pUVar4 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (pUVar4,(UnityAction *)pNVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Ok() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Ok
               (ConfirmationPopup *this,MethodInfo *method)

{
  pUVar1 = (this->fields).resultCallback;
  ppUVar2 = &(this->fields).resultCallback;
  if (pUVar1 != (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,1,this,(pUVar1->fields)._._.method);
  }
  *ppUVar2 = (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0;
  func_?(ppUVar2,0);
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Pop
               (ConfirmationPopup *this,MethodInfo *method)

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
                    MethodInfo__ConfirmationPopup____c___Pop_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ConfirmationPopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ConfirmationPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ConfirmationPopup____c);
  }
  callbackFunction = TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ConfirmationPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ConfirmationPopup____c);
    }
    object = TypeInfo__ConfirmationPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ConfirmationPopup____c___Pop_b__7_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0 = callbackFunction;
    func_?(&TypeInfo__ConfirmationPopup____c->static_fields->__9__7_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}

