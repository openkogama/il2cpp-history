
/* Void Initialize(UnityAction, Texture, AccessoryDataClient) */

void Assembly-CSharp.dll::AvatarAccessorySuccesPopup::AvatarAccessorySuccesPopup_Initialize
               (AvatarAccessorySuccesPopup *this,UnityAction *resultCallback,Texture *previewImage,
               AccessoryDataClient *accessoryData,MethodInfo *method)

{
  this_00 = (this->fields).preview;
  if (this_00 != (RawImage *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,previewImage,(MethodInfo *)0x0);
    (this->fields).resultCallback = resultCallback;
    func_?(&(this->fields).resultCallback,resultCallback);
    this_01 = (this->fields).itemBackground;
    if (this_01 != (AccessoryItemBackground *)0x0) {
      AccessoryItemBackground::AccessoryItemBackground_Initialize
                (this_01,accessoryData,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnButtonPressed() */

void Assembly-CSharp.dll::AvatarAccessorySuccesPopup::AvatarAccessorySuccesPopup_OnButtonPressed
               (AvatarAccessorySuccesPopup *this,MethodInfo *method)

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
                    MethodInfo__AvatarAccessorySuccesPopup____c___OnButtonPressed_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarAccessorySuccesPopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__AvatarAccessorySuccesPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarAccessorySuccesPopup____c);
  }
  callbackFunction = TypeInfo__AvatarAccessorySuccesPopup____c->static_fields->__9__4_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__AvatarAccessorySuccesPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarAccessorySuccesPopup____c);
    }
    object = TypeInfo__AvatarAccessorySuccesPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__AvatarAccessorySuccesPopup____c___OnButtonPressed_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessorySuccesPopup____c->static_fields->__9__4_0 = callbackFunction;
    func_?(&TypeInfo__AvatarAccessorySuccesPopup____c->static_fields->__9__4_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pUVar1 = (this->fields).resultCallback;
  if (pUVar1 != (UnityAction *)0x0) {
    puStack2 = (pUVar1->fields)._._.method;
    pvStack3 = (pUVar1->fields)._._.method_code;
    (*(pUVar1->fields)._._.invoke_impl)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

