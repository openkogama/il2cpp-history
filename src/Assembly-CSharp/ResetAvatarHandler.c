
/* Void GameOnReceivedItemFromQuery(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_GameOnReceivedItemFromQuery
               (ResetAvatarHandler *this,Object *sender,
               ReceivedItemFromQueryEventArgs *receivedItemFromQueryEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&TypeInfo__KoGaMaPackageClient);
    func_?(&
                    AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    func_?(&StringLiteral_Avatar_reset_to);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_02 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,(MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
              (this_01,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0);
    if (receivedItemFromQueryEventArgs != (ReceivedItemFromQueryEventArgs *)0x0) {
      koGaMaData = (receivedItemFromQueryEventArgs->fields).KoGaMaData;
      this_03 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_03,koGaMaData,0,(MethodInfo *)0x0);
      if (this_03 != (KoGaMaPackageClient *)0x0) {
        KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_03,(MethodInfo *)0x0);
        this_00 = (this_03->fields).worldObjects;
        if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          wo = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                          (this_03->fields).worldObjectRoot,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
          pRVar1 = (this->fields).toImage;
          if (pRVar1 != (RawImage *)0x0) {
            (*(code *)(pRVar1->klass->vtable).set_color.method)
                      (pRVar1,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                       (pRVar1->klass->vtable).get_raycastTarget.methodPtr);
            pRVar1 = (this->fields).fromImage;
            if (pRVar1 != (RawImage *)0x0) {
              (*(code *)(pRVar1->klass->vtable).set_color.method)
                        (pRVar1,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
                         (pRVar1->klass->vtable).get_raycastTarget.methodPtr);
              pAVar2 = (this->fields).previewer;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              pAVar2 = (AvatarPreviewer *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)pAVar2,
                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                 );
              (this->fields).toPreviewer = pAVar2;
              func_?(&(this->fields).toPreviewer,pAVar2);
              pAVar2 = (this->fields).toPreviewer;
              if (wo != (MVWorldObjectClient *)0x0) {
                if (pAVar2 != (AvatarPreviewer *)0x0) {
                  previewPosition_00.z = 100.0;
                  previewPosition_00.x = 100.0;
                  previewPosition_00.y = 100.0;
                  AvatarPreviewer::AvatarPreviewer_Initialize
                            (pAVar2,(this->fields).previewDimensions,
                             (this->fields).previewDimensions,CameraClearFlags__Enum_Color,
                             (wo->fields).previewLayerMask,(Vector3)ZEXT812(0),
                             (this->fields).avatarResetToTransform,previewPosition_00,
                             StringLiteral_Avatar_reset_to,wo,(wo->fields).gameObject,
                             (Vector3)ZEXT812(0),(MethodInfo *)0x0);
                  pAVar2 = (this->fields).toPreviewer;
                  if ((pAVar2 != (AvatarPreviewer *)0x0) &&
                     (pGVar3 = (pAVar2->fields)._PreviewGameObject_k__BackingField,
                     pGVar3 != (GameObject *)0x0)) {
                    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                    if (pTVar4 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_3
                                (pTVar4,0.0,180.0,0.0,(MethodInfo *)0x0);
                      pMVar5 = (this->fields).avatarBody;
                      if (pMVar5 != (MVBody *)0x0) {
                        pGVar3 = (GameObject *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Object::
                                 Object_1_Instantiate_4
                                           ((Object *)(pMVar5->fields)._._._.gameObject,
                                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                           );
                        layer = LayerUtil::LayerUtil_GetLayerNumber
                                          (LayerFlags__Enum_Hidden,(MethodInfo *)0x0);
                        LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar3,layer,(MethodInfo *)0x0);
                        pAVar2 = (AvatarPreviewer *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Object::
                                 Object_1_Instantiate_4
                                           ((Object *)(this->fields).previewer,
                                            AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                           );
                        (this->fields).fromPreviewer = pAVar2;
                        func_?(&(this->fields).fromPreviewer,pAVar2);
                        pMVar5 = (this->fields).avatarBody;
                        pAVar2 = (this->fields).fromPreviewer;
                        if (pMVar5 != (MVBody *)0x0) {
                          if (pAVar2 != (AvatarPreviewer *)0x0) {
                            previewPosition.z = 100.0;
                            previewPosition.x = 100.0;
                            previewPosition.y = 100.0;
                            AvatarPreviewer::AvatarPreviewer_Initialize
                                      (pAVar2,(this->fields).previewDimensions,
                                       (this->fields).previewDimensions,CameraClearFlags__Enum_Color
                                       ,(pMVar5->fields)._._._.previewLayerMask,(Vector3)ZEXT812(0),
                                       (this->fields).avatarResetToTransform,previewPosition,
                                       StringLiteral_Avatar_reset_to,(MVWorldObjectClient *)pMVar5,
                                       pGVar3,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
                            pAVar2 = (this->fields).fromPreviewer;
                            if ((pAVar2 != (AvatarPreviewer *)0x0) &&
                               (pGVar3 = (pAVar2->fields)._PreviewGameObject_k__BackingField,
                               pGVar3 != (GameObject *)0x0)) {
                              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                       GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                              if (pTVar4 != (Transform *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_Rotate_3(pTVar4,0.0,180.0,0.0,(MethodInfo *)0x0);
                                pAVar2 = (this->fields).fromPreviewer;
                                if ((pAVar2 != (AvatarPreviewer *)0x0) &&
                                   (pRVar1 = (this->fields).fromImage, pRVar1 != (RawImage *)0x0)) {
                                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                  RawImage_set_texture
                                            (pRVar1,(Texture *)(pAVar2->fields).previewTexture,
                                             (MethodInfo *)0x0);
                                  pAVar2 = (this->fields).toPreviewer;
                                  if ((pAVar2 != (AvatarPreviewer *)0x0) &&
                                     (pRVar1 = (this->fields).toImage, pRVar1 != (RawImage *)0x0)) {
                                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                    RawImage_set_texture
                                              (pRVar1,(Texture *)(pAVar2->fields).previewTexture,
                                               (MethodInfo *)0x0);
                                    (this->fields).imagesReady = 1;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
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


/* Void GetResetAvatarData(Int32) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_GetResetAvatarData
               (ResetAvatarHandler *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&
                    MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_00 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,(MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
              (pMVar1,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_00,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       ((pMVar1->fields).operationRequests != (MVNetworkGame_OperationRequests *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      value = (Object *)func_?();
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (this_01,0x16,value,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        piVar2 = *(int **)(in_stack_3 + 0x10);
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        iStack4 =
             (TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable).
             DeliveryMode;
        if (piVar2 != (int *)0x0) {
          pDStack5 = this_01;
          (**(code **)(*piVar2 + 0x110))();
          return;
        }
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnAcceptReset() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnAcceptReset
               (ResetAvatarHandler *this,MethodInfo *method)

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
                    PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ResetAvatarHandler____c__DisplayClass26_0___OnAcceptReset_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ResetAvatarHandler____c__DisplayClass26_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ResetAvatarHandler____c__DisplayClass26_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
               MethodInfo__ResetAvatarHandler____c__DisplayClass26_0___OnAcceptReset_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pAVar2 = (this->fields).OnReset;
    if (pAVar2 != (Action *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnDestroy
               (ResetAvatarHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (EventHandler_1_Object_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
              (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0);
    pTVar1 = (this->fields).avatarResetToTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar1 = (this->fields).avatarResetToTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      (this->fields).avatarResetToTransform = (Transform *)0x0;
      func_?();
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnDrag
               (ResetAvatarHandler *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  fVar1 = (float)((uint)fVar1 ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  (this->fields).isDown = 1;
  (this->fields).currentRotationSpeed = fVar1 * (this->fields).rotationSensitivity;
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnPointerDown
               (ResetAvatarHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).currentRotationSpeed = 0.0;
  (this->fields).isDown = 1;
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnPointerUp
               (ResetAvatarHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isDown = 0;
  return;
}


/* Void ResetAvatar(MVBody, Action) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_ResetAvatar
               (ResetAvatarHandler *this,MVBody *currentBody,Action *onReset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).OnReset = onReset;
  func_?(&(this->fields).OnReset,onReset);
  (this->fields).avatarBody = currentBody;
  func_?(&(this->fields).avatarBody,currentBody);
  pTVar1 = (this->fields).avatarResetToTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_01 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (this_01,(MethodInfo *)0x0);
    if (this_01 == (GameObject *)0x0) goto code_?;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_01,(MethodInfo *)0x0);
    (this->fields).avatarResetToTransform = pTVar1;
    func_?(&(this->fields).avatarResetToTransform,pTVar1);
  }
  if (currentBody != (MVBody *)0x0) {
    avatarWoID = (currentBody->fields)._._._._.id;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      func_?(&
                      MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                     );
      cRam_? = '\x01';
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_02 = (EventHandler_1_Object_ *)
              func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                (pMVar3,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0)
      ;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar3->fields).operationRequests,
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetResetAvatar
                  (this_00,avatarWoID,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_Update
               (ResetAvatarHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((this->fields).imagesReady == 0) {
    return;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  pAVar1 = (this->fields).fromPreviewer;
  if (pAVar1 != (AvatarPreviewer *)0x0) {
    AvatarPreviewer::AvatarPreviewer_UpdateRotation
              (pAVar1,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
    pAVar1 = (this->fields).toPreviewer;
    if (pAVar1 != (AvatarPreviewer *)0x0) {
      AvatarPreviewer::AvatarPreviewer_UpdateRotation
                (pAVar1,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
      if ((this->fields).isDown == 0) {
        (this->fields).currentRotationSpeed = (this->fields).defaultRotationSpeed;
        return;
      }
      (this->fields).currentRotationSpeed = 0.0;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ResetAvatarHandler() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler__ctor
               (ResetAvatarHandler *this,MethodInfo *method)

{
  (this->fields).defaultRotationSpeed = 15.0;
  (this->fields).rotationSensitivity = 15.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

