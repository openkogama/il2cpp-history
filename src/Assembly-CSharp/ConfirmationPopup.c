
/* Void Cancel() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Cancel
               (ConfirmationPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)(this->fields).resultCallback;
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object__Invoke
              (this_00,0,(Object *)this,
               MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__Invoke_bool__ConfirmationPopup_
              );
  }
  (this->fields).resultCallback = (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0;
  return;
}


/* Void Initialize(String, UnityAction`2[System.Boolean,ConfirmationPopup], String) */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Initialize
               (ConfirmationPopup *this,String *text,
               UnityAction_2_System_Boolean_ConfirmationPopup_ *resultCallback,String *header,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      (this->fields).resultCallback = resultCallback;
      pHVar2 = (HoverCraftMotor *)(this->fields).okButton;
      if (pHVar2 != (HoverCraftMotor *)0x0) {
        pUVar3 = (UnityEvent *)
                 HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar2,(MethodInfo *)0x0);
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__ConfirmationPopup__Ok__,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEvent *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                    (pUVar3,(UnityAction *)pUVar4,(MethodInfo *)0x0);
          pHVar2 = (HoverCraftMotor *)(this->fields).cancelButton;
          if (pHVar2 != (HoverCraftMotor *)0x0) {
            pUVar3 = (UnityEvent *)
                     HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(pHVar2,(MethodInfo *)0x0);
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)this,MethodInfo__ConfirmationPopup__Cancel__,
                       (MethodInfo *)0x0);
            if (pUVar3 != (UnityEvent *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                        (pUVar3,(UnityAction *)pUVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Ok() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Ok
               (ConfirmationPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)(this->fields).resultCallback;
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object__Invoke
              (this_00,1,(Object *)this,
               MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__Invoke_bool__ConfirmationPopup_
              );
  }
  (this->fields).resultCallback = (UnityAction_2_System_Boolean_ConfirmationPopup_ *)0x0;
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup_Pop
               (ConfirmationPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__ConfirmationPopup->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__ConfirmationPopup___Pop_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__ConfirmationPopup->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__ConfirmationPopup->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void <Pop>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ConfirmationPopup::ConfirmationPopup__Pop_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

