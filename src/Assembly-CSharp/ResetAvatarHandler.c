
/* Void GameOnReceivedItemFromQuery(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_GameOnReceivedItemFromQuery
               (ResetAvatarHandler *this,Object *sender,
               ReceivedItemFromQueryEventArgs *receivedItemFromQueryEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_reset_to);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).game;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                  (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,
                   (MethodInfo *)0x0),
       receivedItemFromQueryEventArgs != (ReceivedItemFromQueryEventArgs *)0x0)) {
      koGaMaData = (receivedItemFromQueryEventArgs->fields).KoGaMaData;
      this_03 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_03,koGaMaData,0,(MethodInfo *)0x0);
      if (this_03 != (KoGaMaPackageClient *)0x0) {
        KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_03,(MethodInfo *)0x0);
        this_01 = (this_03->fields).worldObjects;
        if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          wo = (MVWorldObjectClient *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                          (this_03->fields).worldObjectRoot,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
          uVar2 = _UNK_?;
          lVar3 = _UNK_?;
          pRVar4 = (this->fields).toImage;
          if (pRVar4 != (RawImage *)0x0) {
            auStack_5._0_8_ = _UNK_?;
            auStack_5._8_8_ = _UNK_?;
            (*(pRVar4->klass->vtable).set_color.methodPtr)
                      (pRVar4,auStack_5,(pRVar4->klass->vtable).set_color.method);
            pRVar4 = (this->fields).fromImage;
            if (pRVar4 != (RawImage *)0x0) {
              auStack_5._0_8_ = lVar3;
              auStack_5._8_8_ = uVar2;
              (*(pRVar4->klass->vtable).set_color.methodPtr)
                        (pRVar4,auStack_5,(pRVar4->klass->vtable).set_color.method);
              pAVar6 = (this->fields).previewer;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pAVar6 = (AvatarPreviewer *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pAVar6,
                                   AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                  );
              bVar7 = iRam_? != 0;
              (this->fields).toPreviewer = pAVar6;
              if (bVar7) {
                uVar8 = (uint)((ulonglong)&(this->fields).toPreviewer >> 0xc);
                uVar2 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                do {
                  uVar9 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                  puVar10 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                  LOCK();
                  bVar7 = uVar9 == *puVar10;
                  if (bVar7) {
                    *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              fVar11 = _UNK_?;
              pAVar6 = (this->fields).toPreviewer;
              if ((wo != (MVWorldObjectClient *)0x0) &&
                 (auStack_5._0_8_ = 0, pAVar6 != (AvatarPreviewer *)0x0)) {
                iVar12 = (this->fields).previewDimensions;
                VStack_13.z = _UNK_?;
                VStack_14.x = 0.0;
                VStack_14.y = 0.0;
                VStack_14.z = 0.0;
                VStack_13.y = _UNK_?;
                VStack_13.x = _UNK_?;
                auStack_5._0_8_ = 0;
                auStack_5._8_8_ = auStack_5._8_8_ & 0xffffffff00000000;
                AvatarPreviewer::AvatarPreviewer_Initialize
                          (pAVar6,iVar12,iVar12,CameraClearFlags__Enum_Color,
                           (wo->fields).previewLayerMask,(Vector3 *)auStack_5,
                           (this->fields).avatarResetToTransform,&VStack_13,
                           StringLiteral_Avatar_reset_to,wo,(wo->fields).gameObject,&VStack_14,
                           (MethodInfo *)0x0);
                pAVar6 = (this->fields).toPreviewer;
                if ((pAVar6 != (AvatarPreviewer *)0x0) &&
                   ((pGVar15 = (pAVar6->fields)._PreviewGameObject_k__BackingField,
                    pGVar15 != (GameObject *)0x0 &&
                    (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform(pGVar15,(MethodInfo *)0x0),
                    uVar8 = _UNK_?, pTVar16 != (Transform *)0x0)))) {
                  auStack_5._0_8_ = (ulonglong)_UNK_? << 0x20;
                  auStack_5._8_8_ = auStack_5._8_8_ & 0xffffffff00000000;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
                            (pTVar16,(Vector3 *)auStack_5,Space__Enum_Self,(MethodInfo *)0x0);
                  pMVar17 = (this->fields).avatarBody;
                  if (pMVar17 != (MVBody *)0x0) {
                    pGVar15 = (GameObject *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_4
                                        ((Object *)(pMVar17->fields)._._._.gameObject,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                        );
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Debug);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_layer_parameter_constant_should_);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uVar18 = 0x40000;
                    layer = 0;
                    do {
                      layer = layer + 1;
                      uVar18 = (int)uVar18 >> 1;
                    } while ((uVar18 & 1) == 0);
                    LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar15,layer,(MethodInfo *)0x0);
                    pAVar6 = (AvatarPreviewer *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_4
                                        ((Object *)(this->fields).previewer,
                                         AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                        );
                    bVar7 = iRam_? != 0;
                    (this->fields).fromPreviewer = pAVar6;
                    if (bVar7) {
                      uVar18 = (uint)((ulonglong)&(this->fields).fromPreviewer >> 0xc);
                      uVar2 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
                      do {
                        uVar9 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
                        puVar10 = (ulonglong *)(uVar2 * 8 + 0xADDR);
                        LOCK();
                        bVar7 = uVar9 == *puVar10;
                        if (bVar7) {
                          *puVar10 = uVar9 | 1L << (uVar18 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar7);
                    }
                    pMVar17 = (this->fields).avatarBody;
                    pAVar6 = (this->fields).fromPreviewer;
                    if ((pMVar17 != (MVBody *)0x0) && (pAVar6 != (AvatarPreviewer *)0x0)) {
                      iVar12 = (this->fields).previewDimensions;
                      VStack_13.y = fVar11;
                      VStack_13.x = fVar11;
                      VStack_13.z = fVar11;
                      VStack_14.z = 0.0;
                      auStack_5._0_8_ = 0;
                      auStack_5._8_8_ = auStack_5._8_8_ & 0xffffffff00000000;
                      VStack_14.x = 0.0;
                      VStack_14.y = 0.0;
                      AvatarPreviewer::AvatarPreviewer_Initialize
                                (pAVar6,iVar12,iVar12,CameraClearFlags__Enum_Color,
                                 (pMVar17->fields)._._._.previewLayerMask,&VStack_14,
                                 (this->fields).avatarResetToTransform,&VStack_13,
                                 StringLiteral_Avatar_reset_to,(MVWorldObjectClient *)pMVar17,pGVar15
                                 ,(Vector3 *)auStack_5,(MethodInfo *)0x0);
                      pAVar6 = (this->fields).fromPreviewer;
                      if ((pAVar6 != (AvatarPreviewer *)0x0) &&
                         ((pGVar15 = (pAVar6->fields)._PreviewGameObject_k__BackingField,
                          pGVar15 != (GameObject *)0x0 &&
                          (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_transform(pGVar15,(MethodInfo *)0x0),
                          pTVar16 != (Transform *)0x0)))) {
                        auStack_5._8_8_ = auStack_5._8_8_ & 0xffffffff00000000;
                        auStack_5._0_8_ = (ulonglong)uVar8 << 0x20;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
                                  (pTVar16,(Vector3 *)auStack_5,Space__Enum_Self,(MethodInfo *)0x0)
                        ;
                        pAVar6 = (this->fields).fromPreviewer;
                        if ((pAVar6 != (AvatarPreviewer *)0x0) &&
                           (pRVar4 = (this->fields).fromImage, pRVar4 != (RawImage *)0x0)) {
                          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                    (pRVar4,(Texture *)(pAVar6->fields).previewTexture,
                                     (MethodInfo *)0x0);
                          pAVar6 = (this->fields).toPreviewer;
                          if ((pAVar6 != (AvatarPreviewer *)0x0) &&
                             (pRVar4 = (this->fields).toImage, pRVar4 != (RawImage *)0x0)) {
                            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                                      (pRVar4,(Texture *)(pAVar6->fields).previewTexture,
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
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void GetResetAvatarData(Int32) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_GetResetAvatarData
               (ResetAvatarHandler *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    pMVar2 = (pMVar1->fields).game;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    uVar3 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                (pMVar2,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_00,(MethodInfo *)0x0)
      ;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar4 = (pMVar2->fields).operationRequests,
         pMVar4 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        aiStackX_20[0] = id;
        value = (Object *)FUN_?(uRam_?,aiStackX_20);
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar5 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x16,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),method_00);
          pPVar6 = (pMVar4->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar6 != (PhotonPeer *)0x0) {
            (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                      (pPVar6,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x56),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar6->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnAcceptReset() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnAcceptReset
               (ResetAvatarHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ResetAvatarHandler____c__DisplayClass26_0___OnAcceptReset_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ResetAvatarHandler____c__DisplayClass26_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ResetAvatarHandler____c__DisplayClass26_0);
  original = (this->fields).pleaseWaitPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__ResetAvatarHandler____c__DisplayClass26_0___OnAcceptReset_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pAVar7 = (this->fields).OnReset;
    if (pAVar7 != (Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnDestroy
               (ResetAvatarHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).game;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
                (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0
                );
      pTVar2 = (this->fields).avatarResetToTransform;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar2 != (Transform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
          pTVar2 = (this->fields).avatarResetToTransform;
          if (pTVar2 == (Transform *)0x0) goto code_?;
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar2,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
          bVar3 = iRam_? != 0;
          (this->fields).avatarResetToTransform = (Transform *)0x0;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).avatarResetToTransform >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnDrag
               (ResetAvatarHandler *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  fVar1 = (float)((uint)fVar1 ^ _UNK_?);
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
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).OnReset = onReset;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).OnReset >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).avatarBody = currentBody;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarBody >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pTVar7 = (this->fields).avatarResetToTransform;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar7 == (Transform *)0x0) {
code_?:
    self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (self,(String *)0x0,(MethodInfo *)0x0);
    if (self == (GameObject *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (self,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).avatarResetToTransform = pTVar7;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields).avatarResetToTransform >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar7->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (currentBody != (MVBody *)0x0) {
    iVar8 = (currentBody->fields)._._._._.id;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>,iVar8,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar9 != (MVGameControllerBase *)0x0) {
      pMVar10 = (pMVar9->fields).game;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      uVar11 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar10 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                  (pMVar10,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_00,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar9 != (MVGameControllerBase *)0x0) &&
            (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
           (pMVar12 = (pMVar10->fields).operationRequests,
           pMVar12 != (MVNetworkGame_OperationRequests *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          aiStackX_20[0] = iVar8;
          value = (Object *)FUN_?(uRam_?,aiStackX_20);
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar13 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x16,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),method_00
                      );
            pPVar14 = (pMVar12->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar14 != (PhotonPeer *)0x0) {
              (*(pPVar14->klass->vtable).SendOperation.methodPtr)
                        (pPVar14,CONCAT71((int7)((ulonglong)uVar13 >> 8),0x56),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar14->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_Update
               (ResetAvatarHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).imagesReady == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ResetAvatarHandler() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler__ctor
               (ResetAvatarHandler *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).defaultRotationSpeed = 15.0;
  (this->fields).rotationSensitivity = 15.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

