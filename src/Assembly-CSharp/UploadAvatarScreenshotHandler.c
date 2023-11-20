
/* Void OnScreenshotReady(Texture2D, String) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnScreenshotReady
               (UploadAvatarScreenshotHandler *this,Texture2D *texture,String *text,
               MethodInfo *method)

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
                    MethodInfo__UploadAvatarScreenshotHandler____c___OnScreenshotReady_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UploadAvatarScreenshotHandler____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UploadAvatarScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UploadAvatarScreenshotHandler____c);
  }
  callbackFunction = TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__11_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__UploadAvatarScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UploadAvatarScreenshotHandler____c);
    }
    object = TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__UploadAvatarScreenshotHandler____c___OnScreenshotReady_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__11_0 = callbackFunction;
    func_?(&TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__11_0,
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
  pRVar1 = (this->fields).toImage;
  if (pRVar1 != (RawImage *)0x0) {
    (*(code *)(pRVar1->klass->vtable).set_color.method)
              (pRVar1,_UNK_?,_UNK_?,_UNK_?);
    pRVar1 = (this->fields).toImage;
    if (pRVar1 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (pRVar1,(Texture *)texture,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnScreenshotReadyUploadDirect(Texture2D, String) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnScreenshotReadyUploadDirect
               (UploadAvatarScreenshotHandler *this,Texture2D *texture,String *text,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__UploadAvatarScreenshotHandler____c___OnScreenshotReadyUploadDirect_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UploadAvatarScreenshotHandler____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UploadAvatarScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UploadAvatarScreenshotHandler____c);
  }
  callbackFunction = TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__10_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__UploadAvatarScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UploadAvatarScreenshotHandler____c);
    }
    object = TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__UploadAvatarScreenshotHandler____c___OnScreenshotReadyUploadDirect_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__10_0 = callbackFunction;
    func_?(&TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__10_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pAVar2 = (this->fields).OnUploadScreenshot;
  if (pAVar2 != (Action_2_UnityEngine_Texture2D_String_ *)0x0) {
    (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUpdatePressed() */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnUpdatePressed
               (UploadAvatarScreenshotHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__UploadAvatarScreenshotHandler____c__DisplayClass12_0___OnUpdatePressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UploadAvatarScreenshotHandler____c__DisplayClass12_0);
    func_?(&
                    MethodInfo__UploadAvatarScreenshotHandler__UploadAndDestroy_UnityEngine__Texture2D__System__String_
                   );
    func_?(&StringLiteral_Screenshot_taken_successfully_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UploadAvatarScreenshotHandler____c__DisplayClass12_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).pleaseWaitPopupPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__UploadAvatarScreenshotHandler____c__DisplayClass12_0___OnUpdatePressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = (this->fields).screenShooter;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__UploadAvatarScreenshotHandler__UploadAndDestroy_UnityEngine__Texture2D__System__String_
               ,(MethodInfo *)0x0);
    if (this_00 != (AvatarScreenShooter *)0x0) {
      AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
                (this_00,(Action_2_UnityEngine_Texture2D_String_ *)this_01,(this->fields).avatarBody
                 ,0,StringLiteral_Screenshot_taken_successfully_,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__UploadAvatarScreenshotHandler____c__DisplayClass9_0___PrepareScreenshot_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UploadAvatarScreenshotHandler____c__DisplayClass9_0);
    func_?(&StringLiteral_Screenshot_taken_successfully);
    func_?(&StringLiteral_New_avatar_purchased_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UploadAvatarScreenshotHandler____c__DisplayClass9_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).OnUploadScreenshot = onUploadScreenshot;
  func_?(&(this->fields).OnUploadScreenshot,onUploadScreenshot);
  if (purchasedAvatar == 0) {
    pSVar1 = TM::TM__(StringLiteral_Screenshot_taken_successfully,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = TM::TM__(StringLiteral_New_avatar_purchased_,(MethodInfo *)0x0);
  }
  *successText = pSVar1;
  func_?(successText,pSVar1);
  (this->fields).avatarBody = currentBody;
  func_?(&(this->fields).avatarBody,currentBody);
  pGVar2 = (this->fields).invisibleBlocker;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar3 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar2,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar3;
    func_?();
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__UploadAvatarScreenshotHandler____c__DisplayClass9_0___PrepareScreenshot_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(&TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    func_?(&
                    MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReadyUploadDirect_UnityEngine__Texture2D__System__String_
                   );
    cRam_? = '\x01';
  }
  pSStack_1 = (String *)0x0;
  UploadAvatarScreenshotHandler_PrepareScreenshot
            (this,currentBody,onUploadScreenshot,purchasedAvatar,&pSStack_1,(MethodInfo *)0x0);
  this_00 = (this->fields).screenShooter;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReadyUploadDirect_UnityEngine__Texture2D__System__String_
             ,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    func_?(&
                    MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReady_UnityEngine__Texture2D__System__String_
                   );
    cRam_? = '\x01';
  }
  pSStack_1 = (String *)0x0;
  UploadAvatarScreenshotHandler_PrepareScreenshot
            (this,currentBody,onUploadScreenshot,purchasedAvatar,&pSStack_1,(MethodInfo *)0x0);
  this_00 = (this->fields).screenShooter;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReady_UnityEngine__Texture2D__System__String_
             ,(MethodInfo *)0x0);
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
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).OnUploadScreenshot;
  if (pAVar2 != (Action_2_UnityEngine_Texture2D_String_ *)0x0) {
    puStack_1 = (pAVar2->fields)._._.method;
    pSStack_3 = successText;
    pTStack_4 = texture;
    (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code);
    return;
  }
  uVar5 = func_?(&pTStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

