
/* Void OnScreenShotUploaded(Object, ScreenshotUploadedEventArgs) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler::
     UploadGameScreenshotHandler_OnScreenShotUploaded
               (UploadGameScreenshotHandler *this,Object *sender,ScreenshotUploadedEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UploadGameScreenshotHandler____c___OnScreenShotUploaded_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UploadGameScreenshotHandler____c___OnScreenShotUploaded_b__6_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UploadGameScreenshotHandler____c__DisplayClass6_0___OnScreenShotUploaded_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UploadGameScreenshotHandler____c__DisplayClass6_0);
    func_?(&TypeInfo__UploadGameScreenshotHandler____c);
    func_?(&
                    MethodInfo__UploadGameScreenshotHandler__OnScreenShotUploaded_System__Object__ScreenshotUploadedEventArgs_
                   );
    func_?(&StringLiteral_Screenshot_Successfully_uploaded);
    func_?(&StringLiteral_Failed_to_upload_screenshot);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UploadGameScreenshotHandler____c__DisplayClass6_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).game;
    this_01 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__UploadGameScreenshotHandler__OnScreenShotUploaded_System__Object__ScreenshotUploadedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
                (this_00,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_01,(MethodInfo *)0x0);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UploadGameScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UploadGameScreenshotHandler____c);
      }
      pEVar3 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__UploadGameScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UploadGameScreenshotHandler____c);
        }
        pUVar4 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pUVar4,
                   MethodInfo__UploadGameScreenshotHandler____c___OnScreenShotUploaded_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_0 = pEVar3;
        func_?(&TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_0,pEVar3)
        ;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UploadGameScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UploadGameScreenshotHandler____c);
      }
      pEVar3 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__UploadGameScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UploadGameScreenshotHandler____c);
        }
        pUVar4 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pUVar4,
                   MethodInfo__UploadGameScreenshotHandler____c___OnScreenShotUploaded_b__6_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_1 = pEVar3;
        func_?(&TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_1,pEVar3)
        ;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar5 = (Object__Class *)
               TM::TM__(StringLiteral_Screenshot_Successfully_uploaded,(MethodInfo *)0x0);
      if (value != (Object *)0x0) {
        pOVar6 = value + 1;
        pOVar6->klass = pOVar5;
        func_?(pOVar6,pOVar5);
        if (args != (ScreenshotUploadedEventArgs *)0x0) {
          if ((args->fields).Uploaded == 0) {
            pOVar5 = (Object__Class *)
                     TM::TM__(StringLiteral_Failed_to_upload_screenshot,(MethodInfo *)0x0);
            pOVar6->klass = pOVar5;
            func_?(pOVar6,pOVar5);
          }
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__UploadGameScreenshotHandler____c__DisplayClass6_0___OnScreenShotUploaded_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar2,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnScreenshotReady(Byte[]) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler::UploadGameScreenshotHandler_OnScreenshotReady
               (UploadGameScreenshotHandler *this,Byte__Array *imageData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Texture2D);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).screenShotSound;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
              (this_00,(MethodInfo *)0x0);
    this_02 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
              (this_02,600,0xf0,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
    UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::ImageConversion_LoadImage_1
              (this_02,imageData,(MethodInfo *)0x0);
    this_01 = (this->fields).toImage;
    if (this_01 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_01,(Texture *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TakeScreenshot() */

void Assembly-CSharp.dll::UploadGameScreenshotHandler::UploadGameScreenshotHandler_TakeScreenshot
               (UploadGameScreenshotHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Byte_[]>);
    func_?(&
                    GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&MethodInfo__UploadGameScreenshotHandler__OnScreenshotReady_System__Byte____);
    func_?(&StringLiteral_GenerateTexture);
    cRam_? = '\x01';
  }
  this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_00,StringLiteral_GenerateTexture,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    this_01 = (GenerateTextureData *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this_00,
                         GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                        );
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::Byte_[]>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,
               MethodInfo__UploadGameScreenshotHandler__OnScreenshotReady_System__Byte____,
               (MethodInfo *)0x0);
    if (this_01 != (GenerateTextureData *)0x0) {
      GenerateTextureData::GenerateTextureData_GenerateTextureDataCameraView
                (this_01,(Action_1_Byte_ *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UploadScreenshot() */

void Assembly-CSharp.dll::UploadGameScreenshotHandler::UploadGameScreenshotHandler_UploadScreenshot
               (UploadGameScreenshotHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UploadGameScreenshotHandler____c___UploadScreenshot_b__5_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UploadGameScreenshotHandler____c);
    func_?(&
                    MethodInfo__UploadGameScreenshotHandler__OnScreenShotUploaded_System__Object__ScreenshotUploadedEventArgs_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UploadGameScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UploadGameScreenshotHandler____c);
  }
  callbackFunction = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__5_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__UploadGameScreenshotHandler____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UploadGameScreenshotHandler____c);
    }
    object = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__UploadGameScreenshotHandler____c___UploadScreenshot_b__5_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__5_0 = callbackFunction;
    func_?(&TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__5_0,
                    callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  object_00 = TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>;
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).game;
    this_01 = (EventHandler_1_Object_ *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_01,(Object *)object_00,
               MethodInfo__UploadGameScreenshotHandler__OnScreenShotUploaded_System__Object__ScreenshotUploadedEventArgs_
               ,(MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
                (pMVar2,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar2->fields).operationRequests,
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UploadGameScreenShot
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

