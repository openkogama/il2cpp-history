
/* Void OnScreenshotReady(Texture2D, String) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnScreenshotReady
               (UploadAvatarScreenshotHandler *this,Texture2D *texture,String *text,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__UploadAvatarScreenshotHandler->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__UploadAvatarScreenshotHandler___OnScreenshotReady_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__UploadAvatarScreenshotHandler->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__UploadAvatarScreenshotHandler->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pRVar1 = (this->fields).toImage;
  uVar2 = 0x3f800000;
  uVar3 = 0x3f800000;
  func_?(&stack0xffffffec,0x3f800000,0x3f800000);
  if (pRVar1 != (RawImage *)0x0) {
    (*(code *)(pRVar1->klass->vtable).set_color.method)(pRVar1,uVar3,uVar2);
    pRVar1 = (this->fields).toImage;
    if (pRVar1 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (pRVar1,(Texture *)texture,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnScreenshotReadyUploadDirect(Texture2D, String) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnScreenshotReadyUploadDirect
               (UploadAvatarScreenshotHandler *this,Texture2D *texture,String *text,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__UploadAvatarScreenshotHandler->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)0x0,
               MethodInfo__UploadAvatarScreenshotHandler___OnScreenshotReadyUploadDirect_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__UploadAvatarScreenshotHandler->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__UploadAvatarScreenshotHandler->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
            (this->fields).OnUploadScreenshot;
  if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
    System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
    Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
              (this_00,(Object *)texture,(ReflectionProbe_ReflectionProbeEvent__Enum)text,
               MethodInfo__System__Action<UnityEngine::Texture2D,_System::String>__Invoke_UnityEngine__Texture2D__System__String_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnUpdatePressed() */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnUpdatePressed
               (UploadAvatarScreenshotHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UploadAvatarScreenshotHandler___OnUpdatePressed_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  original = (this->fields).pleaseWaitPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this_01,
               MethodInfo__UploadAvatarScreenshotHandler___OnUpdatePressed_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = (this->fields).screenShooter;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__UploadAvatarScreenshotHandler__UploadAndDestroy_UnityEngine__Texture2D__System__String_
               ,
               MethodInfo__System__Action<UnityEngine::Texture2D,_System::String>__Action_System__Object__void__
              );
    if (this_00 != (AvatarScreenShooter *)0x0) {
      AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
                (this_00,(Action_2_UnityEngine_Texture2D_String_ *)pUVar2,(this->fields).avatarBody,
                 0,StringLiteral_Screenshot_taken_successfully_,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PrepareScreenshot(MVBody, Action`2[UnityEngine.Texture2D,String], Boolean, String ByRef) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_PrepareScreenshot
               (UploadAvatarScreenshotHandler *this,MVBody *currentBody,
               Action_2_UnityEngine_Texture2D_String_ *onUploadScreenshot,bool purchasedAvatar,
               String **successText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UploadAvatarScreenshotHandler___PrepareScreenshot_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).OnUploadScreenshot = onUploadScreenshot;
  pSVar1 = StringLiteral_New_avatar_purchased_;
  if (purchasedAvatar == 0) {
    pSVar1 = StringLiteral_Screenshot_taken_successfully;
  }
  pSVar1 = TM::TM__(pSVar1,(MethodInfo *)0x0);
  *successText = pSVar1;
  pXVar2 = (XpBoostParticlePreviewer *)(this->fields).invisibleBlocker;
  (this->fields).avatarBody = currentBody;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar2,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (this_00 == (ScaleAnimationBase *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this_00->fields)._._._._.m_CachedPtr = pXVar2;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this_00,
             MethodInfo__UploadAvatarScreenshotHandler___PrepareScreenshot_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void TakePurchasedScreenshot(MVBody, Action`2[UnityEngine.Texture2D,String], Boolean) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_TakePurchasedScreenshot
               (UploadAvatarScreenshotHandler *this,MVBody *currentBody,
               Action_2_UnityEngine_Texture2D_String_ *onUploadScreenshot,bool purchasedAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (String *)0x0;
  UploadAvatarScreenshotHandler_PrepareScreenshot
            (this,currentBody,onUploadScreenshot,purchasedAvatar,&pSStack_1,(MethodInfo *)0x0);
  this_00 = (this->fields).screenShooter;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReadyUploadDirect_UnityEngine__Texture2D__System__String_
             ,
             MethodInfo__System__Action<UnityEngine::Texture2D,_System::String>__Action_System__Object__void__
            );
  successMessage = pSStack_1;
  if (this_00 != (AvatarScreenShooter *)0x0) {
    AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
              (this_00,(Action_2_UnityEngine_Texture2D_String_ *)this_01,(this->fields).avatarBody,0
               ,successMessage,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TakeScreenshot(MVBody, Action`2[UnityEngine.Texture2D,String], Boolean) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_TakeScreenshot
               (UploadAvatarScreenshotHandler *this,MVBody *currentBody,
               Action_2_UnityEngine_Texture2D_String_ *onUploadScreenshot,bool purchasedAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (String *)0x0;
  UploadAvatarScreenshotHandler_PrepareScreenshot
            (this,currentBody,onUploadScreenshot,purchasedAvatar,&pSStack_1,(MethodInfo *)0x0);
  this_00 = (this->fields).screenShooter;
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReady_UnityEngine__Texture2D__System__String_
             ,
             MethodInfo__System__Action<UnityEngine::Texture2D,_System::String>__Action_System__Object__void__
            );
  successMessage = pSStack_1;
  if (this_00 != (AvatarScreenShooter *)0x0) {
    AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
              (this_00,(Action_2_UnityEngine_Texture2D_String_ *)this_01,(this->fields).avatarBody,0
               ,successMessage,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UploadAndDestroy(Texture2D, String) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_UploadAndDestroy
               (UploadAvatarScreenshotHandler *this,Texture2D *texture,String *successText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
            (this->fields).OnUploadScreenshot;
  if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
    System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
    Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
              (this_00,(Object *)texture,(ReflectionProbe_ReflectionProbeEvent__Enum)successText,
               MethodInfo__System__Action<UnityEngine::Texture2D,_System::String>__Invoke_UnityEngine__Texture2D__System__String_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnScreenshotReadyUploadDirect>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler__OnScreenshotReadyUploadDirect_m__0
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


/* Void <OnScreenshotReady>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler__OnScreenshotReady_m__1
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

