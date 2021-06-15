
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__AvatarAccessorySuccesPopup->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__AvatarAccessorySuccesPopup___OnButtonPressed_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__AvatarAccessorySuccesPopup->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__AvatarAccessorySuccesPopup->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).resultCallback == (UnityAction *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_2 + 0x2c) !=
      (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_2 + 0x2c),in_stack_3)
    ;
  }
  pcVar1 = *(code **)(in_stack_2 + 8);
  method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(in_stack_2 + 0x14);
  piVar4 = *(int **)(in_stack_2 + 0x10);
  if ((short)method_00[5].key == -1) {
    func_?();
  }
  cVar5 = func_?();
  if (cVar5 == '\0') {
    if (*(char *)((int)&method_00[5].key + 2) == '\0') {
      (*pcVar1)();
      return;
    }
  }
  else if (((short)method_00[5].key != -1) &&
          (((piVar4 == (int *)0x0 || ((*(uint *)(*piVar4 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(in_stack_2 + 0xc) != 0)))) {
    cVar5 = func_?();
    if (cVar5 != '\0') {
      return;
    }
    cVar5 = func_?();
    mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::Object]
    ::KeyValuePair_2_WinningConditionType_System_Object__get_Value
              (method_00,(MethodInfo *)method_00);
    cVar6 = func_?();
    if (cVar5 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?();
      return;
    }
    if (cVar6 != '\0') {
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
      Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                (method_00,in_stack_7);
      func_?();
      return;
    }
    func_?();
    return;
  }
  (*pcVar1)();
  return;
}


/* Void <OnButtonPressed>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessorySuccesPopup::
     AvatarAccessorySuccesPopup__OnButtonPressed_m__0
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

