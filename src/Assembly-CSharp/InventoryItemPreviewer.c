
/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   MVWorldObjectClient, GameObject) */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_Initialize
               (InventoryItemPreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 *cameraOffset,Transform *previewItemsRoot,Vector3 *previewPosition,
               String *name,MVWorldObjectClient *wo,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Item_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__woID_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview__0__RenderCam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = wo;
  pDVar2 = (this->fields).WorldObjectCameraFOVOverload;
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (IVar3 = (*(wo->klass->vtable).get_DocumentationType.methodPtr)
                         (wo,(wo->klass->vtable).get_DocumentationType.method),
     pDVar2 != (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0)) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Single]::Dictionary_2_System_Int32Enum_System_Single__FindEntry
                       ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar2,IVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__ContainsKey_MVWorldObjectDocumentationType_
                        ->klass->rgctx_data[0x21].method);
    if (-1 < iVar4) {
      pCVar5 = (this->fields).previewCam;
      pDVar2 = (this->fields).WorldObjectCameraFOVOverload;
      IVar3 = (*(pMVar1->klass->vtable).get_DocumentationType.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable).get_DocumentationType.method);
      if ((pDVar2 == (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)0x0) ||
         (fVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Single]::Dictionary_2_System_Int32Enum_System_Single__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar2,IVar3,
                              MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__get_Item_MVWorldObjectDocumentationType_
                             ), pCVar5 == (Camera *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (pCVar5,fVar6,(MethodInfo *)0x0);
    }
    fVar7 = cameraOffset->y;
    fVar6 = cameraOffset->z;
    (this->fields).previewCamOffset.x = cameraOffset->x;
    (this->fields).previewCamOffset.y = fVar7;
    (this->fields).previewCamOffset.z = fVar6;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar9 = previewItemsRoot;
    if (pTVar8 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar8,previewItemsRoot,(MethodInfo *)0x0);
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar11 = name;
      name_00 = mscorlib.dll::System::String::String_Format
                          (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
      if (pGVar10 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                  ((Object_1 *)pGVar10,name_00,(MethodInfo *)0x0);
        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Preview,(MethodInfo *)0x0);
        if (pGVar10 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                    (pGVar10,iVar4,(MethodInfo *)0x0);
          pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                    RenderTexture_GetTemporary_4
                              (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                               RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
          (this->fields).previewTexture = pRVar12;
          func_?(&(this->fields).previewTexture);
          pRVar12 = (this->fields).previewTexture;
          if (pRVar12 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                      ((Object_1 *)pRVar12,pSVar11,(MethodInfo *)0x0);
            pRVar12 = (this->fields).previewTexture;
            if (pRVar12 != (RenderTexture *)0x0) {
              uVar13 = 1;
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        ((Texture *)pRVar12,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
              pRVar12 = (this->fields).previewTexture;
              if (pRVar12 != (RenderTexture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                          ((Object_1 *)pRVar12,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
                pCVar5 = (this->fields).previewCam;
                if (pCVar5 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar5,(this->fields).previewTexture,(MethodInfo *)0x0);
                  (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
                  func_?(&(this->fields)._PreviewGameObject_k__BackingField);
                  pGVar10 = (this->fields)._PreviewGameObject_k__BackingField;
                  values = (String__Array *)FUN_?(TypeInfo__System__String,6);
                  if (values != (String__Array *)0x0) {
                    FUN_?(values,0,StringLiteral_Preview_);
                    FUN_?(values,1,pSVar11);
                    FUN_?(values,2,StringLiteral__Item_);
                    layersToRender = (pMVar1->fields)._.itemId;
                    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                                        ((Int32 *)&layersToRender,(MethodInfo *)0x0);
                    FUN_?(values,3,pSVar11);
                    FUN_?(values,4,StringLiteral__woID_);
                    layersToRender = (pMVar1->fields)._.id;
                    mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&layersToRender,(MethodInfo *)0x0);
                    FUN_?(values);
                    pSVar11 = mscorlib.dll::System::String::String_Concat_7
                                        (values,(MethodInfo *)0x0);
                    if (pGVar10 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                                ((Object_1 *)pGVar10,pSVar11,(MethodInfo *)0x0);
                      pGVar10 = (this->fields)._PreviewGameObject_k__BackingField;
                      if ((pGVar10 != (GameObject *)0x0) &&
                         (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar10,(MethodInfo *)0x0),
                         pTVar8 != (Transform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                                  (pTVar8,pTVar9,(MethodInfo *)0x0);
                        pGVar10 = (this->fields)._PreviewGameObject_k__BackingField;
                        if (pGVar10 != (GameObject *)0x0) {
                          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar10,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Quaternion);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pQVar14 = TypeInfo__UnityEngine__Quaternion->static_fields;
                          if (pTVar9 != (Transform *)0x0) {
                            QStack_15.x = (pQVar14->identityQuaternion).x;
                            QStack_15.y = (pQVar14->identityQuaternion).y;
                            QStack_15.z = (pQVar14->identityQuaternion).z;
                            QStack_15.w = (pQVar14->identityQuaternion).w;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localRotation(pTVar9,&QStack_15,(MethodInfo *)0x0);
                            pGVar10 = (this->fields)._PreviewGameObject_k__BackingField;
                            if ((pGVar10 != (GameObject *)0x0) &&
                               (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar10,(MethodInfo *)0x0),
                               pTVar9 != (Transform *)0x0)) {
                              VStack_16.x = previewPosition->x;
                              VStack_16.y = previewPosition->y;
                              VStack_16.z = previewPosition->z;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_position(pTVar9,&VStack_16,(MethodInfo *)0x0);
                              if ((this->fields)._PreviewGameObject_k__BackingField !=
                                  (GameObject *)0x0) {
                                lVar17 = FUN_?();
                                uVar18 = 0;
                                if (lVar17 != 0) {
                                  for (; pMVar19 = 
                                         SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                      , (int)uVar18 < *(int *)(lVar17 + 0x18); uVar18 = uVar18 + 1)
                                  {
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18)
                                    goto code_?;
                                    this_00 = *(Renderer **)
                                               (lVar17 + 0x20 + (longlong)(int)uVar18 * 8);
                                    if (this_00 == (Renderer *)0x0) goto code_?;
                                    pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_GetComponent_1
                                                        ((Component *)this_00,
                                                                                                                  
                                                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                                                  );
                                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0
                                       ) {
                                      FUN_?();
                                    }
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Object);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0
                                       ) {
                                      FUN_?();
                                    }
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Object);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (pOVar20 != (Object *)0x0) {
                                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c ==
                                          0) {
                                        FUN_?();
                                      }
                                      if (pOVar20[1].klass != (Object__Class *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                        Renderer_set_enabled(this_00,0,(MethodInfo *)0x0);
                                      }
                                    }
                                  }
                                  pGVar10 = (this->fields)._PreviewGameObject_k__BackingField;
                                  if (pGVar10 != (GameObject *)0x0) {
                                    if ((
                                        SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?(
                                                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                                  );
                                    }
                                    p_Var25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentsInChildren_4
                                                        (pGVar10,0,
                                                         ((pMVar19->field7_0x38).rgctx_data)->method
                                                        );
                                    uVar18 = 0;
                                    if (p_Var25 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                      for (; (int)uVar18 < (int)p_Var25->max_length;
                                          uVar18 = uVar18 + 1) {
                                        if ((uint)p_Var25->max_length <= uVar18)
                                        goto code_?;
                                        if (((Component *)p_Var25->vector[(int)uVar18] ==
                                             (Component *)0x0) ||
                                           (pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_GetComponent_1
                                                                ((Component *)
                                                                 p_Var25->vector[(int)uVar18],
                                                                                                                                  
                                                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                                                  ), pOVar20 == (Object *)0x0))
                                        goto code_?;
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pOVar21 = pOVar20[1].klass;
                                        if (pOVar21 == (Object__Class *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                    (pOVar20,(MethodInfo *)0x0);
                                          pcVar22 = (code *)swi(3);
                                          (*pcVar22)();
                                          return;
                                        }
                                        pcVar22 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar22 = (code *)FUN_?(&UNK_?),
                                           pcVar22 == (code *)0x0)) {
                                          uVar23 = func_?(&UNK_?);
                                          FUN_?(uVar23,0);
                                          pcVar22 = (code *)swi(3);
                                          (*pcVar22)();
                                          return;
                                        }
                                        pcRam_? = pcVar22;
                                        (*pcRam_?)(pOVar21,0);
                                      }
                                      pfVar24 = (float *)(*(pMVar1->klass->vtable).GetLocalBounds.
                                                           methodPtr)(aVStack_25,pMVar1,2,
                                                                      (pMVar1->klass->vtable).
                                                                      GetLocalBounds.method);
                                      pGVar10 = (this->fields)._PreviewGameObject_k__BackingField;
                                      uStack_26 = *(undefined8 *)(pfVar24 + 4);
                                      fVar6 = *pfVar24;
                                      fVar7 = pfVar24[1];
                                      fVar27 = pfVar24[2];
                                      fVar28 = pfVar24[3];
                                      if (pGVar10 != (GameObject *)0x0) {
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pvVar29 = (pGVar10->fields)._.m_CachedPtr;
                                        if (pvVar29 == (void *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                    ((Object *)pGVar10,(MethodInfo *)0x0);
                                          pcVar22 = (code *)swi(3);
                                          (*pcVar22)();
                                          return;
                                        }
                                        pcVar22 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar22 = (code *)FUN_?(&UNK_?),
                                           pcVar22 == (code *)0x0)) {
                                          uVar23 = func_?(&UNK_?);
                                          FUN_?(uVar23,0);
                                          pcVar22 = (code *)swi(3);
                                          (*pcVar22)();
                                          return;
                                        }
                                        pcRam_? = pcVar22;
                                        pvVar29 = (void *)(*pcRam_?)(pvVar29);
                                        pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings
                                                  ::Unmarshal::Unmarshal_UnmarshalUnityObject
                                                            (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                        if (pOVar20 != (Object *)0x0) {
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          VStack_16.x = 0.0;
                                          VStack_16.y = 0.0;
                                          VStack_16.z = 0.0;
                                          pOVar21 = pOVar20[1].klass;
                                          if (pOVar21 == (Object__Class *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                            ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                      (pOVar20,(MethodInfo *)0x0);
                                            pcVar22 = (code *)swi(3);
                                            (*pcVar22)();
                                            return;
                                          }
                                          pcVar22 = pcRam_?;
                                          if ((pcRam_? == (code *)0x0) &&
                                             (pcVar22 = (code *)FUN_?(&UNK_?),
                                             pcVar22 == (code *)0x0)) {
                                            uVar23 = func_?(&UNK_?);
                                            FUN_?(uVar23,0);
                                            pcVar22 = (code *)swi(3);
                                            (*pcVar22)();
                                            return;
                                          }
                                          pcRam_? = pcVar22;
                                          (*pcRam_?)(pOVar21,&VStack_16);
                                          lVar17 = FUN_?(TypeInfo__System__Single,3);
                                          fVar30 = TypeRef__System__Activator__T._0_4_;
                                          if (lVar17 != 0) {
                                            if (*(int *)(lVar17 + 0x18) != 0) {
                                              fVar31 = (float)uStack_26;
                                              *(float *)(lVar17 + 0x20) =
                                                   fVar28 * TypeRef__System__Activator__T._0_4_;
                                              uVar18 = 1;
                                              if (1 < *(uint *)(lVar17 + 0x18)) {
                                                fVar32 = uStack_26._4_4_;
                                                *(float *)(lVar17 + 0x24) =
                                                     (float)uStack_26 + (float)uStack_26;
                                                if (2 < *(uint *)(lVar17 + 0x18)) {
                                                  *(float *)(lVar17 + 0x28) =
                                                       uStack_26._4_4_ + uStack_26._4_4_;
                                                  uVar33 = *(uint *)(lVar17 + 0x18);
                                                  if (uVar33 != 0) {
                                                    if (*(int *)(lVar17 + 0x18) == 0)
                                                    goto code_?;
                                                    fVar34 = *(float *)(lVar17 + 0x20);
                                                    if (1 < (int)uVar33) {
                                                      lVar35 = 1;
                                                      pfVar24 = (float *)(lVar17 + 0x24);
                                                      do {
                                                        if (uVar33 <= uVar18)
                                                        goto code_?;
                                                        if (fVar34 < *pfVar24) {
                                                          fVar34 = *pfVar24;
                                                        }
                                                        uVar18 = uVar18 + 1;
                                                        lVar35 = lVar35 + 1;
                                                        pfVar24 = pfVar24 + 1;
                                                      } while (lVar35 < (int)uVar33);
                                                    }
                                                  }
                                                  lVar17 = FUN_?(TypeInfo__System__Single,3)
                                                  ;
                                                  if (lVar17 == 0) goto code_?;
                                                  if (*(int *)(lVar17 + 0x18) != 0) {
                                                    *(float *)(lVar17 + 0x20) =
                                                         VStack_16.x * fVar28 * fVar30;
                                                    if (1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(float *)(lVar17 + 0x24) =
                                                           VStack_16.y * (fVar31 + fVar31);
                                                      if (2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(float *)(lVar17 + 0x28) =
                                                             VStack_16.z * (fVar32 + fVar32);
                                                        pMVar19 = 
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  ;
                                                  iVar36 = *(int *)(lVar17 + 0x18);
                                                  if (iVar36 == 0) {
                                                    fVar28 = 0.0;
                                                  }
                                                  else {
                                                    if (*(int *)(lVar17 + 0x18) == 0)
                                                    goto code_?;
                                                    fVar28 = *(float *)(lVar17 + 0x20);
                                                    if (1 < iVar36) {
                                                      lVar35 = 1;
                                                      pfVar24 = (float *)(lVar17 + 0x24);
                                                      do {
                                                        if (*(uint *)(lVar17 + 0x18) <= uVar13)
                                                        goto code_?;
                                                        if (fVar28 < *pfVar24) {
                                                          fVar28 = *pfVar24;
                                                        }
                                                        uVar13 = uVar13 + 1;
                                                        lVar35 = lVar35 + 1;
                                                        pfVar24 = pfVar24 + 1;
                                                      } while (lVar35 < iVar36);
                                                    }
                                                  }
                                                  fVar30 = fVar30 / fVar28;
                                                  bVar37 = (TypeInfo__MVMovingPlatformGroup->_1).
                                                          naturalAligment;
                                                  if ((bVar37 <= (pMVar1->klass->_1).naturalAligment
                                                      ) && ((MVMovingPlatformGroup__Class *)
                                                            (pMVar1->klass->_1).typeHierarchy
                                                            [(ulonglong)bVar37 - 1] ==
                                                            TypeInfo__MVMovingPlatformGroup)) {
                                                    pGVar10 = (this->fields).
                                                              _PreviewGameObject_k__BackingField;
                                                    if (pGVar10 == (GameObject *)0x0)
                                                    goto code_?;
                                                    if ((
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  ->field7_0x38).rgctx_data ==
                                                  (Il2CppRGCTXData *)0x0) {
                                                    FUN_?(
                                                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                                  );
                                                  }
                                                  fVar28 = fVar30 * _UNK_?;
                                                  pOVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::
                                                            GameObject_GetComponentInChildren_3
                                                                      (pGVar10,0,
                                                                       ((pMVar19->field7_0x38).
                                                                       rgctx_data)->method);
                                                  if (pOVar20 == (Object *)0x0)
                                                  goto code_?;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar21 = pOVar20[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0) {
code_?:
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar20,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)(pOVar21,fVar28);
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar21 = pOVar20[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0)
                                                  goto code_?;
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)(pOVar21,fVar28);
                                                  }
                                                  pGVar10 = (this->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  if (pGVar10 != (GameObject *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar29 = (pGVar10->fields)._.m_CachedPtr;
                                                  if (pvVar29 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar10,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  pvVar29 = (void *)(*pcRam_?)
                                                                              (pvVar29);
                                                  pOVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  aVStack_25[0].z = VStack_16.z * fVar30;
                                                  if (pOVar20 == (Object *)0x0) {
                                                    FUN_?();
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  aVStack_25[0].y = VStack_16.y * fVar30;
                                                  aVStack_25[0].x = VStack_16.x * fVar30;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar21 = pOVar20[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar20,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)(pOVar21);
                                                  fVar6 = fVar6 * VStack_16.x;
                                                  fVar7 = fVar7 * VStack_16.y;
                                                  fVar27 = fVar27 * VStack_16.z;
                                                  pGVar10 = (this->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  if (pGVar10 != (GameObject *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar29 = (pGVar10->fields)._.m_CachedPtr;
                                                  if (pvVar29 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar10,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  pvVar29 = (void *)(*pcRam_?)
                                                                              (pvVar29);
                                                  pOVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar20 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  VStack_16.x = 0.0;
                                                  VStack_16.y = 0.0;
                                                  VStack_16.z = 0.0;
                                                  pOVar21 = pOVar20[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar20,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)(pOVar21);
                                                  pGVar10 = (this->fields).
                                                            _PreviewGameObject_k__BackingField;
                                                  (this->fields).pivotPoint.x =
                                                       VStack_16.x + fVar6 * fVar30;
                                                  (this->fields).pivotPoint.y =
                                                       VStack_16.y + fVar7 * fVar30;
                                                  (this->fields).pivotPoint.z =
                                                       VStack_16.z + fVar27 * fVar30;
                                                  if (pGVar10 != (GameObject *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar29 = (pGVar10->fields)._.m_CachedPtr;
                                                  if (pvVar29 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar10,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  pvVar29 = (void *)(*pcRam_?)
                                                                              (pvVar29);
                                                  pTVar9 = (Transform *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  uVar23._0_4_ = (this->fields).pivotPoint.x;
                                                  uVar23._4_4_ = (this->fields).pivotPoint.y;
                                                  fVar6 = (this->fields).pivotPoint.z;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pVVar38 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  if (pTVar9 != (Transform *)0x0) {
                                                    aVStack_25[0].x = (pVVar38->upVector).x;
                                                    aVStack_25[0].y = (pVVar38->upVector).y;
                                                    aVStack_25[0].z = (pVVar38->upVector).z;
                                                    VStack_16._0_8_ = uVar23;
                                                    VStack_16.z = fVar6;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_RotateAround
                                                              (pTVar9,&VStack_16,aVStack_25,
                                                               _UNK_?,(MethodInfo *)0x0);
                                                    pCVar5 = (this->fields).previewCam;
                                                    if (pCVar5 != (Camera *)0x0) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar29 = (pCVar5->fields)._._._.m_CachedPtr;
                                                  if (pvVar29 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar5,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  pvVar29 = (void *)(*pcRam_?)
                                                                              (pvVar29);
                                                  pOVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  uVar39 = (this->fields).inventoryItemStandardOffset
                                                          .x;
                                                  uVar40 = (this->fields).inventoryItemStandardOffset
                                                          .y;
                                                  QStack_15.x = (this->fields).pivotPoint.x;
                                                  QStack_15.y = (this->fields).pivotPoint.y;
                                                  fVar6 = (this->fields).
                                                           inventoryItemStandardOffset.z +
                                                           (this->fields).pivotPoint.z;
                                                  if (pOVar20 != (Object *)0x0) {
                                                    aVStack_25[0].y = (float)uVar40 + QStack_15.y;
                                                    aVStack_25[0].x = (float)uVar39 + QStack_15.x;
                                                    aVStack_25[0].z = fVar6;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar21 = pOVar20[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar20,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)(pOVar21);
                                                  pCVar5 = (this->fields).previewCam;
                                                  if (pCVar5 != (Camera *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar29 = (pCVar5->fields)._._._.m_CachedPtr;
                                                  if (pvVar29 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar5,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  pvVar29 = (void *)(*pcRam_?)
                                                                              (pvVar29);
                                                  pOVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar20 != (Object *)0x0) {
                                                    uVar41._0_4_ = (this->fields).pivotPoint.x;
                                                    uVar41._4_4_ = (this->fields).pivotPoint.y;
                                                    fVar6 = (this->fields).pivotPoint.z;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__UnityEngine__Vector3)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    QStack_15.z = fVar6;
                                                    pVVar38 = TypeInfo__UnityEngine__Vector3->
                                                              static_fields;
                                                    VStack_16.x = (pVVar38->upVector).x;
                                                    VStack_16.y = (pVVar38->upVector).y;
                                                    VStack_16.z = (pVVar38->upVector).z;
                                                    QStack_15._0_8_ = uVar41;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar21 = pOVar20[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar20,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)
                                                            (pOVar21,&QStack_15,&VStack_16);
                                                  pCVar5 = (this->fields).previewCam;
                                                  if (pCVar5 != (Camera *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar29 = (pCVar5->fields)._._._.m_CachedPtr;
                                                  if (pvVar29 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar5,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  pvVar29 = (void *)(*pcRam_?)
                                                                              (pvVar29);
                                                  pOVar20 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  pCVar5 = (this->fields).previewCam;
                                                  if (pCVar5 != (Camera *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar29 = (pCVar5->fields)._._._.m_CachedPtr;
                                                  if (pvVar29 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar5,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  pvVar29 = (void *)(*pcRam_?)
                                                                              (pvVar29);
                                                  pOVar42 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar42 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  VStack_16.x = 0.0;
                                                  VStack_16.y = 0.0;
                                                  VStack_16.z = 0.0;
                                                  pOVar21 = pOVar42[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar42,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)(pOVar21);
                                                  pCVar5 = (this->fields).previewCam;
                                                  if (pCVar5 != (Camera *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar29 = (pCVar5->fields)._._._.m_CachedPtr;
                                                  if (pvVar29 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar5,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  pvVar29 = (void *)(*pcRam_?)
                                                                              (pvVar29);
                                                  pOVar42 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar29,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar42 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  uStack_43 = 0;
                                                  uStack_44 = 0;
                                                  uStack_45 = 0;
                                                  uStack_46 = 0;
                                                  uStack_47 = 0;
                                                  uStack_48 = 0;
                                                  uStack_49 = 0;
                                                  uStack_50 = 0;
                                                  pOVar21 = pOVar42[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar42,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)(pOVar21);
                                                  QStack_15.x = (this->fields).previewCamOffset.x;
                                                  QStack_15.y = (this->fields).previewCamOffset.y;
                                                  fVar6 = (this->fields).previewCamOffset.z;
                                                  fVar27 = (float)uStack_45 * QStack_15.y;
                                                  fVar28 = (float)uStack_46 * QStack_15.y;
                                                  fVar7 = (float)uStack_44 * QStack_15.x;
                                                  if (pOVar20 == (Object *)0x0) {
                                                    FUN_?();
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  QStack_15.y = uStack_45._4_4_ * QStack_15.y +
                                                                uStack_43._4_4_ * QStack_15.x +
                                                                uStack_47._4_4_ * fVar6 +
                                                                VStack_16.y;
                                                  QStack_15.x = fVar27 + (float)uStack_43 *
                                                                         QStack_15.x +
                                                                (float)uStack_47 * fVar6 +
                                                                VStack_16.x;
                                                  QStack_15.z = fVar28 + fVar7 +
                                                                (float)uStack_48 * fVar6 +
                                                                VStack_16.z;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar21 = pOVar20[1].klass;
                                                  if (pOVar21 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar20,(MethodInfo *)0x0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcVar22 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar22 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar22 == (code *)0x0)) {
                                                    uVar23 = func_?(&UNK_?);
                                                    FUN_?(uVar23,0);
                                                    pcVar22 = (code *)swi(3);
                                                    (*pcVar22)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar22;
                                                  (*pcRam_?)(pOVar21,&QStack_15);
                                                  return;
                                                  }
                                                  }
                                                  goto code_?;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  FUN_?();
                                                  pcVar22 = (code *)swi(3);
                                                  (*pcVar22)();
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto code_?;
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
code_?:
                                            FUN_?();
                                            pcVar22 = (code *)swi(3);
                                            (*pcVar22)();
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto code_?;
                              }
                            }
                          }
                          FUN_?();
                          pcVar22 = (code *)swi(3);
                          (*pcVar22)();
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
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_OnDestroy
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).previewCam;
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
  if (pCVar1 != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).previewCam;
      if (pCVar1 == (Camera *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
    }
  }
  pRVar2 = (this->fields).previewTexture;
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
  if (pRVar2 != (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar2->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar2 = (this->fields).previewTexture;
      if (pRVar2 == (RenderTexture *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_DiscardContents_1
                (pRVar2,(MethodInfo *)0x0);
      pRVar2 = (this->fields).previewTexture;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar4 = (void *)0x0;
      if (pRVar2 != (RenderTexture *)0x0) {
        pvVar4 = (pRVar2->fields)._._.m_CachedPtr;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar4);
      bVar6 = iRam_? != 0;
      (this->fields).previewTexture = (RenderTexture *)0x0;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
  }
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar4 = (void *)0x0;
  if (pGVar11 != (GameObject *)0x0) {
    pvVar4 = (pGVar11->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_OnPostRender
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
  layerName = StringLiteral_Hidden;
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  layersToChange.m_Mask = 1 << ((byte)iVar4 & 0x1f);
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (layerName,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,layersToChange.m_Mask,iVar4,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_5[0] = 0;
  if ((pTVar3 != (Transform *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar2;
      bVar8 = (*pcRam_?)(pvVar6);
      uVar9 = 1 << (bVar8 & 0x1f);
      if ((uVar9 & layersToChange.m_Mask) == uVar9) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar3,(MethodInfo *)0x0);
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar1,iVar4,(MethodInfo *)0x0);
      }
      pIVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (pTVar3,(MethodInfo *)0x0);
      uStack_11 = 0;
      puStack_12 = &stack0x00000008;
      plStack_13 = alStack_5;
      while (pIVar10 != (IEnumerator *)0x0) {
        cVar14 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar14 == '\0') {
          alStack_5[0] = FUN_?(pIVar10,TypeInfo__System__IDisposable);
          if (alStack_5[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_5[0]);
          }
          return;
        }
        if (pIVar10 == (IEnumerator *)0x0) goto code_?;
        pIVar15 = pIVar10->klass;
        uVar16 = 0;
        uVar17._0_1_ = (pIVar15->_1).rank;
        uVar17._1_1_ = (pIVar15->_1).minimumAlignment;
        if (uVar17 != 0) {
          do {
            if (pIVar15->interfaceOffsets[uVar16].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar18 = &(pIVar15->vtable).MoveNext + (pIVar15->interfaceOffsets[uVar16].offset + 1);
              goto code_?;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar17);
        }
        pVVar18 = (VirtualInvokeData *)
                  FUN_?(pIVar10,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pTVar19 = (Transform *)(*pVVar18->methodPtr)(pIVar10,pVVar18->method);
        pTVar3 = (Transform *)0x0;
        if (pTVar19 != (Transform *)0x0) {
          bVar8 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar19->klass->_1).naturalAligment < bVar8) ||
             (pTVar3 = pTVar19,
             (pTVar19->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
             (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
        }
        LayerUtil::LayerUtil_SetLayerRecursively_2(pTVar3,layersToChange,iVar4,(MethodInfo *)0x0);
      }
    }
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_OnPreCull
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
  layersToChange.m_Mask = (this->fields).layersToRender;
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable,layersToChange.m_Mask,value,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  alStack_4[0] = 0;
  if ((pTVar3 != (Transform *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar3,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
code_?:
      FUN_?();
code_?:
      FUN_?();
    }
    else {
      pcRam_? = pcVar2;
      bVar7 = (*pcRam_?)(pvVar5);
      uVar8 = 1 << (bVar7 & 0x1f);
      if ((uVar8 & layersToChange.m_Mask) == uVar8) {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar3,(MethodInfo *)0x0);
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar1,value,(MethodInfo *)0x0);
      }
      pIVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (pTVar3,(MethodInfo *)0x0);
      uStack_10 = 0;
      puStack_11 = &stack0x00000008;
      plStack_12 = alStack_4;
      while (pIVar9 != (IEnumerator *)0x0) {
        cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar13 == '\0') {
          alStack_4[0] = FUN_?(pIVar9,TypeInfo__System__IDisposable);
          if (alStack_4[0] != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,alStack_4[0]);
          }
          return;
        }
        if (pIVar9 == (IEnumerator *)0x0) goto code_?;
        pIVar14 = pIVar9->klass;
        uVar15 = 0;
        uVar16._0_1_ = (pIVar14->_1).rank;
        uVar16._1_1_ = (pIVar14->_1).minimumAlignment;
        if (uVar16 != 0) {
          do {
            if (pIVar14->interfaceOffsets[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar17 = &(pIVar14->vtable).MoveNext + (pIVar14->interfaceOffsets[uVar15].offset + 1);
              goto code_?;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar16);
        }
        pVVar17 = (VirtualInvokeData *)
                 FUN_?(pIVar9,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        pTVar18 = (Transform *)(*pVVar17->methodPtr)(pIVar9,pVVar17->method);
        pTVar3 = (Transform *)0x0;
        if (pTVar18 != (Transform *)0x0) {
          bVar7 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pTVar18->klass->_1).naturalAligment < bVar7) ||
             (pTVar3 = pTVar18,
             (pTVar18->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
             (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
        }
        LayerUtil::LayerUtil_SetLayerRecursively_2(pTVar3,layersToChange,value,(MethodInfo *)0x0);
      }
    }
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateRotation(Single) */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer_UpdateRotation
               (InventoryItemPreviewer *this,float rotateSpeed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields)._PreviewGameObject_k__BackingField;
      if (pGVar1 != (GameObject *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar1,(MethodInfo *)0x0);
        uVar2._0_4_ = (this->fields).pivotPoint.x;
        uVar2._4_4_ = (this->fields).pivotPoint.y;
        fVar3 = (this->fields).pivotPoint.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar5 = (pVVar4->upVector).z;
        uVar6._0_4_ = (pVVar4->upVector).x;
        uVar6._4_4_ = (pVVar4->upVector).y;
        if (rotateSpeed <= 0.0) {
          rotateSpeed = _UNK_?;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        fVar8 = (float)(*pcRam_?)();
        if (this_00 != (Transform *)0x0) {
          VStack_9._0_8_ = uVar6;
          VStack_9.z = fVar5;
          aVStack_10[0]._0_8_ = uVar2;
          aVStack_10[0].z = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                    (this_00,aVStack_10,&VStack_9,fVar8 * rotateSpeed,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  return;
}


/* InventoryItemPreviewer() */

void Assembly-CSharp.dll::InventoryItemPreviewer::InventoryItemPreviewer__ctor
               (InventoryItemPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Add_MVWorldObjectDocumentationType__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = TypeRef__System__Activator__T._0_4_;
  fVar2 = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  (this->fields).previewCamOffset.x = (pVVar3->zeroVector).x;
  (this->fields).previewCamOffset.y = fVar4;
  (this->fields).inventoryItemStandardOffset.x = (float)_UNK_?;
  (this->fields).inventoryItemStandardOffset.y = (float)uVar1;
  (this->fields).inventoryItemStandardOffset.z = fVar2;
  (this->fields).previewCamOffset.z = fVar5;
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Dictionary__
            );
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
  Dictionary_2_System_Int32Enum_System_Single__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,0x1a,_UNK_?,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_float>__Add_MVWorldObjectDocumentationType__float_
             ->klass->rgctx_data[0x22].method);
  bVar7 = iRam_? != 0;
  (this->fields).WorldObjectCameraFOVOverload =
       (Dictionary_2_MVWorldObjectDocumentationType_System_Single_ *)this_00;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields).WorldObjectCameraFOVOverload >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
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
  return;
}

