
/* Bounds ComputeLocalBounds(GameObject) */

Bounds * Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_ComputeLocalBounds
                   (Bounds *__return_storage_ptr__,GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Renderers_required_for_correct_b);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  pMVar1 = 
  UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
  ;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (go != (GameObject *)0x0) {
    if ((
        UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Renderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    }
    pMVar1 = ((pMVar1->field7_0x38).rgctx_data)->method;
    p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4(go,0,pMVar1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).x;
    fVar4 = (pVVar2->zeroVector).y;
    fVar5 = (pVVar2->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar6 = _UNK_?;
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_7._0_4_ = (pVVar2->zeroVector).x;
    auStack_7._4_4_ = (pVVar2->zeroVector).y;
    fVar8 = (pVVar2->zeroVector).z;
    (__return_storage_ptr__->m_Center).x = fVar3;
    (__return_storage_ptr__->m_Center).y = fVar4;
    (__return_storage_ptr__->m_Center).z = fVar5;
    (__return_storage_ptr__->m_Extents).x = (float)auStack_7._0_4_ * fVar6;
    (__return_storage_ptr__->m_Extents).y = (float)auStack_7._4_4_ * fVar6;
    (__return_storage_ptr__->m_Extents).z = fVar8 * fVar6;
    if (p_Var6 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      if (p_Var6->max_length == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Renderers_required_for_correct_b,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
      if ((int)p_Var6->max_length == 0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        pBVar10 = (Bounds *)(*pcVar9)();
        return pBVar10;
      }
      pOVar11 = (Object *)p_Var6->vector[0];
      if (pOVar11 != (Object *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_12._0_4_ = 0.0;
        auStack_12._4_4_ = 0.0;
        uStack_13 = 0;
        uStack_14 = 0;
        pOVar15 = pOVar11[1].klass;
        if (pOVar15 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          pBVar10 = (Bounds *)(*pcVar9)();
          return pBVar10;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar9 = (code *)swi(3);
          pBVar10 = (Bounds *)(*pcVar9)();
          return pBVar10;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pOVar15);
        uVar16 = uStack_14;
        auStack_7._0_8_ = auStack_12;
        stack0xffffffffffffff40 = uStack_13;
        obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (go,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar17 = (obj->fields)._._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            pBVar10 = (Bounds *)(*pcVar9)();
            return pBVar10;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar16 = func_?(&UNK_?);
            FUN_?(uVar16,0);
            pcVar9 = (code *)swi(3);
            pBVar10 = (Bounds *)(*pcVar9)();
            return pBVar10;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(pvVar17);
          uVar18 = uStack_14;
          pp_Var14 = p_Var6->vector;
          uVar19 = 1;
          (__return_storage_ptr__->m_Center).x = (float)auStack_12._0_4_ - 0.0;
          (__return_storage_ptr__->m_Center).y = (float)auStack_12._4_4_ - 0.0;
          (__return_storage_ptr__->m_Center).z = (float)uStack_13 - 0.0;
          (__return_storage_ptr__->m_Extents).x = fStack_20;
          uStack_14._0_4_ = (float)uVar16;
          uStack_14._4_4_ = SUB84(uVar16,4);
          (__return_storage_ptr__->m_Extents).y = (float)uStack_14;
          (__return_storage_ptr__->m_Extents).z = uStack_14._4_4_;
          auStack_7._4_4_ = (float)auStack_12._4_4_ - 0.0;
          auStack_7._0_4_ = (float)auStack_12._0_4_ - 0.0;
          stack0xffffffffffffff40 = CONCAT44(fStack_20,(float)uStack_13 - 0.0);
          uStack_14 = uVar18;
          while( true ) {
            pp_Var14 = pp_Var14 + 1;
            if ((int)p_Var6->max_length <= (int)uVar19) {
              return __return_storage_ptr__;
            }
            if ((uint)p_Var6->max_length <= uVar19) break;
            pOVar11 = (Object *)*pp_Var14;
            if (pOVar11 == (Object *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            auStack_12._0_4_ = 0.0;
            auStack_12._4_4_ = 0.0;
            uStack_13 = 0;
            uStack_14 = 0;
            pOVar15 = pOVar11[1].klass;
            if (pOVar15 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              pBVar10 = (Bounds *)(*pcVar9)();
              return pBVar10;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar9 = (code *)swi(3);
              pBVar10 = (Bounds *)(*pcVar9)();
              return pBVar10;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pOVar15);
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
            pvVar17 = (go->fields)._.m_CachedPtr;
            if (pvVar17 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)go,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              pBVar10 = (Bounds *)(*pcVar9)();
              return pBVar10;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar9 = (code *)swi(3);
              pBVar10 = (Bounds *)(*pcVar9)();
              return pBVar10;
            }
            pcRam_? = pcVar9;
            pvVar17 = (void *)(*pcRam_?)(pvVar17);
            pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                     Unmarshal_UnmarshalUnityObject
                               (pvVar17,
                                UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                               );
            if (pOVar11 == (Object *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_21 = 0;
            fStack_22 = 0.0;
            pOVar15 = pOVar11[1].klass;
            if (pOVar15 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar11,(MethodInfo *)0x0);
              pcVar9 = (code *)swi(3);
              pBVar10 = (Bounds *)(*pcVar9)();
              return pBVar10;
            }
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar9 = (code *)swi(3);
              pBVar10 = (Bounds *)(*pcVar9)();
              return pBVar10;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pOVar15,&uStack_21);
            fVar4 = (float)auStack_12._0_4_ - (float)uStack_21;
            fVar5 = (float)auStack_12._4_4_ - uStack_21._4_4_;
            fVar3 = (float)uStack_13 - fStack_22;
            VStack_23.z = fVar3 - uStack_14._4_4_;
            VStack_23.y = fVar5 - (float)uStack_14;
            VStack_23.x = fVar4 - uStack_13._4_4_;
            pBVar10 = __return_storage_ptr__;
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                      (__return_storage_ptr__,&VStack_23,pMVar1);
            auStack_7._4_4_ = fVar5 + (float)uStack_14;
            auStack_7._0_4_ = fVar4 + uStack_13._4_4_;
            stack0xffffffffffffff40 = CONCAT44(fStack_20,fVar3 + uStack_14._4_4_);
            UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                      (pBVar10,(Vector3 *)auStack_7,pMVar1);
            uVar19 = uVar19 + 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  pBVar10 = (Bounds *)(*pcVar9)();
  return pBVar10;
}


/* ObjectPreviewer Create(Int32, CameraClearFlags, LayerFlags, Transform, String, GameObject) */

ObjectPreviewer *
Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Create
          (int32_t textureSize,CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
          Transform *previewItemsRoot,String *name,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObjectPreviewer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObjectPreviewer->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ObjectPreviewer);
  }
  fVar1 = _UNK_?;
  iVar2 = TypeInfo__ObjectPreviewer->static_fields->previewerIndex;
  TypeInfo__ObjectPreviewer->static_fields->previewerIndex = iVar2 + 1;
  uVar3._0_4_ = (float)(iVar2 * 10);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3._4_4_ = fVar1;
  VStack_4.z = 0.0;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  aVStack_6[0].x = (pVVar5->zeroVector).x;
  aVStack_6[0].y = (pVVar5->zeroVector).y;
  aVStack_6[0].z = (pVVar5->zeroVector).z;
  VStack_4._0_8_ = uVar3;
  pOVar7 = ObjectPreviewer_Create_2
                     (textureSize,textureSize,clearFlags,layersToRender,aVStack_6,previewItemsRoot,
                      &VStack_4,name,(MVWorldObjectClient *)0x0,woGameObjectCopy,(MethodInfo *)0x0)
  ;
  return pOVar7;
}


/* ObjectPreviewer Create(Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   MVWorldObjectClient, GameObject) */

ObjectPreviewer *
Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Create_1
          (int32_t textureSize,CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
          Vector3 *cameraOffset,Transform *previewItemsRoot,Vector3 *previewPosition,String *name,
          MVWorldObjectClient *wo,GameObject *woGameObjectCopy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObjectPreviewer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ObjectPreviewer->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.x = previewPosition->x;
  VStack_1.y = previewPosition->y;
  VStack_1.z = previewPosition->z;
  VStack_2.z = cameraOffset->z;
  VStack_2.x = cameraOffset->x;
  VStack_2.y = cameraOffset->y;
  pOVar3 = ObjectPreviewer_Create_2
                     (textureSize,textureSize,clearFlags,layersToRender,&VStack_2,previewItemsRoot,
                      &VStack_1,name,wo,woGameObjectCopy,(MethodInfo *)0x0);
  return pOVar3;
}


/* ObjectPreviewer Create(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3,
   String, MVWorldObjectClient, GameObject) */

ObjectPreviewer *
Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Create_2
          (int32_t textureWidth,int32_t textureHeight,CameraClearFlags__Enum clearFlags,
          LayerFlags__Enum layersToRender,Vector3 *cameraOffset,Transform *previewItemsRoot,
          Vector3 *previewPosition,String *name,MVWorldObjectClient *wo,GameObject *woGameObjectCopy
          ,MethodInfo *method)

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
                  UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ObjectPreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<ObjectPreviewer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarAccessory>__
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
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovingPlatformGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObjectPreviewer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
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
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar1,(MethodInfo *)0x0)
  ;
  if ((pGVar1 == (GameObject *)0x0) ||
     (pOVar2 = (ObjectPreviewer *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar1,
                           ObjectPreviewer_MethodInfo__UnityEngine__GameObject__AddComponent<ObjectPreviewer>__
                          ), pOVar2 == (ObjectPreviewer *)0x0)) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pOVar2 = (ObjectPreviewer *)(*pcVar3)();
    return pOVar2;
  }
  (pOVar2->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  fVar4 = cameraOffset->y;
  fVar5 = cameraOffset->z;
  (pOVar2->fields).previewCamOffset.x = cameraOffset->x;
  (pOVar2->fields).previewCamOffset.y = fVar4;
  (pOVar2->fields).previewCamOffset.z = fVar5;
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
  if (pTVar6 == (Transform *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            (pTVar6,previewItemsRoot,(MethodInfo *)0x0);
  pSVar7 = mscorlib.dll::System::String::String_Format
                      (StringLiteral_Preview__0__RenderCam,(Object *)name,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
            ((Object_1 *)pGVar1,pSVar7,(MethodInfo *)0x0);
  iVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Preview,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            (pGVar1,iVar8,(MethodInfo *)0x0);
  pRVar9 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
            (pRVar9,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
             (MethodInfo *)0x0);
  (pOVar2->fields)._PreviewTexture_k__BackingField = pRVar9;
  func_?(&(pOVar2->fields)._PreviewTexture_k__BackingField);
  pRVar9 = (pOVar2->fields)._PreviewTexture_k__BackingField;
  if (pRVar9 == (RenderTexture *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
            ((Object_1 *)pRVar9,name,(MethodInfo *)0x0);
  pRVar9 = (pOVar2->fields)._PreviewTexture_k__BackingField;
  if (pRVar9 == (RenderTexture *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
            (pRVar9,2,(MethodInfo *)0x0);
  pRVar9 = (pOVar2->fields)._PreviewTexture_k__BackingField;
  if (pRVar9 == (RenderTexture *)0x0) goto DAT_?;
  uVar10 = 1;
  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
            ((Texture *)pRVar9,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
  pRVar9 = (pOVar2->fields)._PreviewTexture_k__BackingField;
  if (pRVar9 == (RenderTexture *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
            ((Object_1 *)pRVar9,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
  pCVar11 = (Camera *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                      (pGVar1,
                       UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                      );
  (pOVar2->fields).previewCam = pCVar11;
  func_?(&(pOVar2->fields).previewCam);
  pCVar11 = (pOVar2->fields).previewCam;
  if (pCVar11 == (Camera *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
            (pCVar11,clearFlags,(MethodInfo *)0x0);
  pCVar11 = (pOVar2->fields).previewCam;
  if (pCVar11 == (Camera *)0x0) goto DAT_?;
  aCStack_12[0].r = 0.0;
  aCStack_12[0].g = 0.0;
  aCStack_12[0].b = 0.0;
  aCStack_12[0].a = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
            (pCVar11,aCStack_12,(MethodInfo *)0x0);
  pCVar11 = (pOVar2->fields).previewCam;
  if (pCVar11 == (Camera *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
            (pCVar11,_UNK_?,(MethodInfo *)0x0);
  pCVar11 = (pOVar2->fields).previewCam;
  if (pCVar11 == (Camera *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
            (pCVar11,(float)textureWidth / (float)textureHeight,(MethodInfo *)0x0);
  pCVar11 = (pOVar2->fields).previewCam;
  iVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Preview,(MethodInfo *)0x0);
  if (pCVar11 == (Camera *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (pCVar11,1 << ((byte)iVar8 & 0x1f),(MethodInfo *)0x0);
  pCVar11 = (pOVar2->fields).previewCam;
  if (pCVar11 == (Camera *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
            (pCVar11,_UNK_?,(MethodInfo *)0x0);
  pCVar11 = (pOVar2->fields).previewCam;
  if (pCVar11 == (Camera *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
            (pCVar11,_UNK_?,(MethodInfo *)0x0);
  pCVar11 = (pOVar2->fields).previewCam;
  if (pCVar11 == (Camera *)0x0) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
            (pCVar11,(pOVar2->fields)._PreviewTexture_k__BackingField,(MethodInfo *)0x0);
  (pOVar2->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
  func_?(&(pOVar2->fields)._PreviewGameObject_k__BackingField);
  pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
  if (wo == (MVWorldObjectClient *)0x0) {
    pSVar7 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Preview_,name,(MethodInfo *)0x0);
  }
  else {
    values = (String__Array *)FUN_?(TypeInfo__System__String,6);
    if (values == (String__Array *)0x0) goto code_?;
    FUN_?(values,0,StringLiteral_Preview_);
    FUN_?(values,1,name);
    FUN_?(values,2,StringLiteral__Item_);
    aIStack_13[0].m_value = (wo->fields)._.itemId;
    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(aIStack_13,(MethodInfo *)0x0);
    FUN_?(values,3,pSVar7);
    FUN_?(values,4,StringLiteral__woID_);
    aIStack_13[0].m_value = (wo->fields)._.id;
    mscorlib.dll::System::Int32::Int32_ToString(aIStack_13,(MethodInfo *)0x0);
    FUN_?(values);
    pSVar7 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
  }
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
            ((Object_1 *)pGVar1,pSVar7,(MethodInfo *)0x0);
  pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
  if ((pGVar1 == (GameObject *)0x0) ||
     (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar1,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            (pTVar6,previewItemsRoot,(MethodInfo *)0x0);
  pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar14 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pTVar6 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pOVar2 = (ObjectPreviewer *)(*pcVar3)();
    return pOVar2;
  }
  pMStack_15 = *(MonitorData **)&pQVar14->identityQuaternion;
  uStack_16._0_4_ = (pQVar14->identityQuaternion).z;
  uStack_16._4_4_ = (pQVar14->identityQuaternion).w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar17 = (pTVar6->fields)._._.m_CachedPtr;
  if (pvVar17 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pOVar2 = (ObjectPreviewer *)(*pcVar3)();
    return pOVar2;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
    pcVar3 = (code *)swi(3);
    pOVar2 = (ObjectPreviewer *)(*pcVar3)();
    return pOVar2;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar17);
  pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
  if ((pGVar1 == (GameObject *)0x0) ||
     (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar1,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
  goto code_?;
  VStack_19.x = previewPosition->x;
  VStack_19.y = previewPosition->y;
  VStack_19.z = previewPosition->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar17 = (pTVar6->fields)._._.m_CachedPtr;
  if (pvVar17 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pOVar2 = (ObjectPreviewer *)(*pcVar3)();
    return pOVar2;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
    pcVar3 = (code *)swi(3);
    pOVar2 = (ObjectPreviewer *)(*pcVar3)();
    return pOVar2;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar17);
  if ((pOVar2->fields)._PreviewGameObject_k__BackingField == (GameObject *)0x0)
  goto code_?;
  lVar20 = FUN_?();
  uVar21 = 0;
  if (lVar20 == 0) goto code_?;
  for (; pMVar22 = 
         SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
      , (int)uVar21 < *(int *)(lVar20 + 0x18); uVar21 = uVar21 + 1) {
    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_?;
    this = *(Renderer **)(lVar20 + 0x20 + (longlong)(int)uVar21 * 8);
    if (this == (Renderer *)0x0) goto code_?;
    pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                        );
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
    if (pOVar23 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar23[1].klass != (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (this,0,(MethodInfo *)0x0);
      }
    }
  }
  pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  if ((
      SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                 );
  }
  p_Var23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
            GameObject_GetComponentsInChildren_4
                      (pGVar1,0,((pMVar22->field7_0x38).rgctx_data)->method);
  uVar21 = 0;
  if (p_Var23 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
  for (; (int)uVar21 < (int)p_Var23->max_length; uVar21 = uVar21 + 1) {
    if ((uint)p_Var23->max_length <= uVar21) goto code_?;
    if (((Component *)p_Var23->vector[(int)uVar21] == (Component *)0x0) ||
       (pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)p_Var23->vector[(int)uVar21],
                             UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                            ), pOVar23 == (Object *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar24 = pOVar23[1].klass;
    if (pOVar24 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pOVar2 = (ObjectPreviewer *)(*pcVar3)();
      return pOVar2;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18,0);
      pcVar3 = (code *)swi(3);
      pOVar2 = (ObjectPreviewer *)(*pcVar3)();
      return pOVar2;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pOVar24,0);
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar1,
                         AvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarAccessory>__
                        );
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
    if (pOVar23 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar23[1].klass != (Object__Class *)0x0) {
        pBVar25 = (Bounds *)
                  (*(code *)pOVar23->klass[1]._0.interopData)
                            (&BStack_26,pOVar23,pOVar23->klass[1]._0.klass);
        goto code_?;
      }
    }
    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
    if (*(int *)&(TypeInfo__ObjectPreviewer->_1).field_0x1c == 0) {
      FUN_?();
    }
    pBVar25 = ObjectPreviewer_ComputeLocalBounds(&BStack_26,pGVar1,(MethodInfo *)0x0);
  }
  else {
    pBVar25 = (Bounds *)
              (*(wo->klass->vtable).GetLocalBounds.methodPtr)
                        (&BStack_26,wo,2,(wo->klass->vtable).GetLocalBounds.method);
  }
code_?:
  uStack_27._0_4_ = (pBVar25->m_Extents).y;
  uStack_27._4_4_ = (pBVar25->m_Extents).z;
  fVar5 = (pBVar25->m_Center).x;
  fVar4 = (pBVar25->m_Center).y;
  fVar28 = (pBVar25->m_Center).z;
  fVar29 = (pBVar25->m_Extents).x;
  pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
  if (pGVar1 != (GameObject *)0x0) {
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
    pvVar17 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pOVar2 = (ObjectPreviewer *)(*pcVar3)();
      return pOVar2;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18,0);
      pcVar3 = (code *)swi(3);
      pOVar2 = (ObjectPreviewer *)(*pcVar3)();
      return pOVar2;
    }
    pcRam_? = pcVar3;
    pvVar17 = (void *)(*pcRam_?)(pvVar17);
    pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar17,
                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                        );
    if (pOVar23 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_19.x = 0.0;
      VStack_19.y = 0.0;
      VStack_19.z = 0.0;
      pOVar24 = pOVar23[1].klass;
      if (pOVar24 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
        return pOVar2;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18,0);
        pcVar3 = (code *)swi(3);
        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
        return pOVar2;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pOVar24,&VStack_19);
      lVar20 = FUN_?(TypeInfo__System__Single,3);
      fVar30 = TypeRef__System__Activator__T._0_4_;
      if (lVar20 != 0) {
        if (*(int *)(lVar20 + 0x18) != 0) {
          fVar31 = (float)uStack_27;
          *(float *)(lVar20 + 0x20) = fVar29 * TypeRef__System__Activator__T._0_4_;
          uVar21 = 1;
          if (1 < *(uint *)(lVar20 + 0x18)) {
            fVar32 = uStack_27._4_4_;
            *(float *)(lVar20 + 0x24) = (float)uStack_27 + (float)uStack_27;
            if (2 < *(uint *)(lVar20 + 0x18)) {
              *(float *)(lVar20 + 0x28) = uStack_27._4_4_ + uStack_27._4_4_;
              uVar33 = *(uint *)(lVar20 + 0x18);
              if (uVar33 != 0) {
                if (*(int *)(lVar20 + 0x18) == 0) goto code_?;
                fVar34 = *(float *)(lVar20 + 0x20);
                if (1 < (int)uVar33) {
                  lVar35 = 1;
                  pfVar36 = (float *)(lVar20 + 0x24);
                  do {
                    if (uVar33 <= uVar21) goto code_?;
                    if (fVar34 < *pfVar36) {
                      fVar34 = *pfVar36;
                    }
                    uVar21 = uVar21 + 1;
                    lVar35 = lVar35 + 1;
                    pfVar36 = pfVar36 + 1;
                  } while (lVar35 < (int)uVar33);
                }
              }
              lVar20 = FUN_?(TypeInfo__System__Single);
              if (lVar20 == 0) goto code_?;
              if (*(int *)(lVar20 + 0x18) != 0) {
                *(float *)(lVar20 + 0x20) = fVar29 * fVar30 * VStack_19.x;
                if (1 < *(uint *)(lVar20 + 0x18)) {
                  *(float *)(lVar20 + 0x24) = (fVar31 + fVar31) * VStack_19.y;
                  if (2 < *(uint *)(lVar20 + 0x18)) {
                    *(float *)(lVar20 + 0x28) = (fVar32 + fVar32) * VStack_19.z;
                    pMVar22 = 
                    UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                    ;
                    iVar37 = *(int *)(lVar20 + 0x18);
                    if (iVar37 == 0) {
                      fVar29 = 0.0;
                    }
                    else {
                      if (*(int *)(lVar20 + 0x18) == 0) goto code_?;
                      fVar29 = *(float *)(lVar20 + 0x20);
                      if (1 < iVar37) {
                        lVar35 = 1;
                        pfVar36 = (float *)(lVar20 + 0x24);
                        do {
                          if (*(uint *)(lVar20 + 0x18) <= uVar10) goto code_?;
                          if (fVar29 < *pfVar36) {
                            fVar29 = *pfVar36;
                          }
                          uVar10 = uVar10 + 1;
                          lVar35 = lVar35 + 1;
                          pfVar36 = pfVar36 + 1;
                        } while (lVar35 < iVar37);
                      }
                    }
                    fVar30 = fVar30 / fVar29;
                    if (wo != (MVWorldObjectClient *)0x0) {
                      bVar38 = (TypeInfo__MVMovingPlatformGroup->_1).naturalAligment;
                      if ((bVar38 <= (wo->klass->_1).naturalAligment) &&
                         ((MVMovingPlatformGroup__Class *)
                          (wo->klass->_1).typeHierarchy[(ulonglong)bVar38 - 1] ==
                          TypeInfo__MVMovingPlatformGroup)) {
                        pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                        if (pGVar1 == (GameObject *)0x0) goto code_?;
                        if ((
                            UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                          FUN_?(
                                       UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                                       );
                        }
                        pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentInChildren_3
                                            (pGVar1,0,((pMVar22->field7_0x38).rgctx_data)->method);
                        if (pOVar23 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar24 = pOVar23[1].klass;
                        if (pOVar24 == (Object__Class *)0x0) {
code_?:
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                          pcVar3 = (code *)swi(3);
                          pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                          return pOVar2;
                        }
                        pcVar3 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)
                           ) {
                          uVar18 = func_?(&UNK_?);
                          FUN_?(uVar18,0);
                          pcVar3 = (code *)swi(3);
                          pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                          return pOVar2;
                        }
                        pcRam_? = pcVar3;
                        (*pcRam_?)(pOVar24);
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar24 = pOVar23[1].klass;
                        if (pOVar24 == (Object__Class *)0x0) goto code_?;
                        pcVar3 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)
                           ) {
                          uVar18 = func_?(&UNK_?);
                          FUN_?(uVar18,0);
                          pcVar3 = (code *)swi(3);
                          pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                          return pOVar2;
                        }
                        pcRam_? = pcVar3;
                        (*pcRam_?)(pOVar24);
                      }
                    }
                    pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                    if (pGVar1 != (GameObject *)0x0) {
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
                      pvVar17 = (pGVar1->fields)._.m_CachedPtr;
                      if (pvVar17 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pGVar1,(MethodInfo *)0x0);
                        pcVar3 = (code *)swi(3);
                        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                        return pOVar2;
                      }
                      pcVar3 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
                      {
                        uVar18 = func_?(&UNK_?);
                        FUN_?(uVar18,0);
                        pcVar3 = (code *)swi(3);
                        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                        return pOVar2;
                      }
                      pcRam_? = pcVar3;
                      pvVar17 = (void *)(*pcRam_?)(pvVar17);
                      pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                Unmarshal_UnmarshalUnityObject
                                          (pvVar17,
                                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                          );
                      BStack_26.m_Center.x = VStack_19.x * fVar30;
                      BStack_26.m_Center.z = VStack_19.z * fVar30;
                      if (pOVar23 == (Object *)0x0) {
                        FUN_?();
                        pcVar3 = (code *)swi(3);
                        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                        return pOVar2;
                      }
                      BStack_26.m_Center.y = VStack_19.y * fVar30;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar24 = pOVar23[1].klass;
                      if (pOVar24 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                        pcVar3 = (code *)swi(3);
                        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                        return pOVar2;
                      }
                      pcVar3 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
                      {
                        uVar18 = func_?(&UNK_?);
                        FUN_?(uVar18,0);
                        pcVar3 = (code *)swi(3);
                        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                        return pOVar2;
                      }
                      pcRam_? = pcVar3;
                      (*pcRam_?)(pOVar24);
                      fVar5 = fVar5 * VStack_19.x;
                      fVar4 = fVar4 * VStack_19.y;
                      fVar28 = fVar28 * VStack_19.z;
                      pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                      if (pGVar1 != (GameObject *)0x0) {
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
                        pvVar17 = (pGVar1->fields)._.m_CachedPtr;
                        if (pvVar17 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pGVar1,(MethodInfo *)0x0);
                          pcVar3 = (code *)swi(3);
                          pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                          return pOVar2;
                        }
                        pcVar3 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)
                           ) {
                          uVar18 = func_?(&UNK_?);
                          FUN_?(uVar18,0);
                          pcVar3 = (code *)swi(3);
                          pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                          return pOVar2;
                        }
                        pcRam_? = pcVar3;
                        pvVar17 = (void *)(*pcRam_?)(pvVar17);
                        pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                  Unmarshal_UnmarshalUnityObject
                                            (pvVar17,
                                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                            );
                        if (pOVar23 != (Object *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          VStack_19.x = 0.0;
                          VStack_19.y = 0.0;
                          VStack_19.z = 0.0;
                          pOVar24 = pOVar23[1].klass;
                          if (pOVar24 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                            pcVar3 = (code *)swi(3);
                            pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                            return pOVar2;
                          }
                          pcVar3 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar3 = (code *)FUN_?(&UNK_?),
                             pcVar3 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar3 = (code *)swi(3);
                            pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                            return pOVar2;
                          }
                          pcRam_? = pcVar3;
                          (*pcRam_?)(pOVar24);
                          pGVar1 = (pOVar2->fields)._PreviewGameObject_k__BackingField;
                          (pOVar2->fields).pivotPoint.x = fVar5 * fVar30 + VStack_19.x;
                          (pOVar2->fields).pivotPoint.y = fVar4 * fVar30 + VStack_19.y;
                          (pOVar2->fields).pivotPoint.z = VStack_19.z + fVar28 * fVar30;
                          if (pGVar1 != (GameObject *)0x0) {
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
                            pvVar17 = (pGVar1->fields)._.m_CachedPtr;
                            if (pvVar17 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pGVar1,(MethodInfo *)0x0);
                              pcVar3 = (code *)swi(3);
                              pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                              return pOVar2;
                            }
                            pcVar3 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar3 = (code *)FUN_?(&UNK_?),
                               pcVar3 == (code *)0x0)) {
                              uVar18 = func_?(&UNK_?);
                              FUN_?(uVar18,0);
                              pcVar3 = (code *)swi(3);
                              pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                              return pOVar2;
                            }
                            pcRam_? = pcVar3;
                            pvVar17 = (void *)(*pcRam_?)(pvVar17);
                            pTVar6 = (Transform *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                      Unmarshal_UnmarshalUnityObject
                                                (pvVar17,
                                                 UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                );
                            uVar18._0_4_ = (pOVar2->fields).pivotPoint.x;
                            uVar18._4_4_ = (pOVar2->fields).pivotPoint.y;
                            fVar5 = (pOVar2->fields).pivotPoint.z;
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pVVar39 = TypeInfo__UnityEngine__Vector3->static_fields;
                            if (pTVar6 != (Transform *)0x0) {
                              BStack_26.m_Center.x = (pVVar39->upVector).x;
                              BStack_26.m_Center.y = (pVVar39->upVector).y;
                              BStack_26.m_Center.z = (pVVar39->upVector).z;
                              VStack_19._0_8_ = uVar18;
                              VStack_19.z = fVar5;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_RotateAround
                                        (pTVar6,&VStack_19,&BStack_26.m_Center,_UNK_?,
                                         (MethodInfo *)0x0);
                              pCVar11 = (pOVar2->fields).previewCam;
                              if (pCVar11 != (Camera *)0x0) {
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
                                pvVar17 = (pCVar11->fields)._._._.m_CachedPtr;
                                if (pvVar17 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pCVar11,(MethodInfo *)0x0);
                                  pcVar3 = (code *)swi(3);
                                  pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                  return pOVar2;
                                }
                                pcVar3 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar3 = (code *)FUN_?(&UNK_?),
                                   pcVar3 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar3 = (code *)swi(3);
                                  pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                  return pOVar2;
                                }
                                pcRam_? = pcVar3;
                                pvVar17 = (void *)(*pcRam_?)(pvVar17);
                                pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          Unmarshal::Unmarshal_UnmarshalUnityObject
                                                    (pvVar17,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                uVar40 = (pOVar2->fields).previewCamOffset.x;
                                uVar41 = (pOVar2->fields).previewCamOffset.y;
                                fVar5 = (pOVar2->fields).previewCamOffset.z - _UNK_?;
                                pMStack_15 = *(MonitorData **)&(pOVar2->fields).pivotPoint;
                                fVar5 = fVar5 + fVar5 + (pOVar2->fields).pivotPoint.z;
                                if (pOVar23 != (Object *)0x0) {
                                  BStack_26.m_Center.y =
                                       (float)uVar41 + _UNK_? + (float)uVar41 + _UNK_?
                                       + (float)((ulonglong)pMStack_15 >> 0x20);
                                  BStack_26.m_Center.x =
                                       (float)uVar40 + 0.0 + (float)uVar40 + 0.0 + SUB84(pMStack_15,0)
                                  ;
                                  BStack_26.m_Center.z = fVar5;
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar24 = pOVar23[1].klass;
                                  if (pOVar24 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              (pOVar23,(MethodInfo *)0x0);
                                    pcVar3 = (code *)swi(3);
                                    pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                    return pOVar2;
                                  }
                                  pcVar3 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar3 = (code *)FUN_?(&UNK_?),
                                     pcVar3 == (code *)0x0)) {
                                    uVar18 = func_?(&UNK_?);
                                    FUN_?(uVar18,0);
                                    pcVar3 = (code *)swi(3);
                                    pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                    return pOVar2;
                                  }
                                  pcRam_? = pcVar3;
                                  (*pcRam_?)(pOVar24);
                                  pCVar11 = (pOVar2->fields).previewCam;
                                  if (pCVar11 != (Camera *)0x0) {
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
                                    pvVar17 = (pCVar11->fields)._._._.m_CachedPtr;
                                    if (pvVar17 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)pCVar11,(MethodInfo *)0x0);
                                      pcVar3 = (code *)swi(3);
                                      pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                      return pOVar2;
                                    }
                                    pcVar3 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar3 = (code *)FUN_?(&UNK_?),
                                       pcVar3 == (code *)0x0)) {
                                      uVar18 = func_?(&UNK_?);
                                      FUN_?(uVar18,0);
                                      pcVar3 = (code *)swi(3);
                                      pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                      return pOVar2;
                                    }
                                    pcRam_? = pcVar3;
                                    pvVar17 = (void *)(*pcRam_?)(pvVar17);
                                    pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                              Unmarshal::Unmarshal_UnmarshalUnityObject
                                                        (pvVar17,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                    if (pOVar23 != (Object *)0x0) {
                                      pMVar42 = *(MonitorData **)&(pOVar2->fields).pivotPoint;
                                      fVar5 = (pOVar2->fields).pivotPoint.z;
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      uStack_16 = CONCAT44(uStack_16._4_4_,fVar5);
                                      pVVar39 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      VStack_19.x = (pVVar39->upVector).x;
                                      VStack_19.y = (pVVar39->upVector).y;
                                      VStack_19.z = (pVVar39->upVector).z;
                                      pMStack_15 = pMVar42;
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pOVar24 = pOVar23[1].klass;
                                      if (pOVar24 == (Object__Class *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  (pOVar23,(MethodInfo *)0x0);
                                        pcVar3 = (code *)swi(3);
                                        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                        return pOVar2;
                                      }
                                      pcVar3 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar3 = (code *)FUN_?(&UNK_?),
                                         pcVar3 == (code *)0x0)) {
                                        uVar18 = func_?(&UNK_?);
                                        FUN_?(uVar18,0);
                                        pcVar3 = (code *)swi(3);
                                        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                        return pOVar2;
                                      }
                                      pcRam_? = pcVar3;
                                      (*pcRam_?)(pOVar24,&pMStack_15,&VStack_19);
                                      return pOVar2;
                                    }
                                  }
                                }
                                FUN_?();
                                pcVar3 = (code *)swi(3);
                                pOVar2 = (ObjectPreviewer *)(*pcVar3)();
                                return pOVar2;
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
        pcVar3 = (code *)swi(3);
        pOVar2 = (ObjectPreviewer *)(*pcVar3)();
        return pOVar2;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (ObjectPreviewer *)(*pcVar3)();
  return pOVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_Destroy
               (ObjectPreviewer *this,MethodInfo *method)

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
      if (pCVar1 != (Camera *)0x0) {
        pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                           (pCVar1,(MethodInfo *)0x0);
        pCVar1 = (this->fields).previewCam;
        if (pCVar1 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
          if (pRVar2 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                      (pRVar2,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((this->fields)._._._._.m_CachedPtr != (void *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
  }
  pRVar2 = (this->fields)._PreviewTexture_k__BackingField;
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
      pRVar2 = (this->fields)._PreviewTexture_k__BackingField;
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
                ((Object_1 *)pRVar2,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_OnPostRender
               (ObjectPreviewer *this,MethodInfo *method)

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

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_OnPreCull
               (ObjectPreviewer *this,MethodInfo *method)

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

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer_UpdateRotation
               (ObjectPreviewer *this,float rotateSpeed,MethodInfo *method)

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


/* ObjectPreviewer() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ObjectPreviewer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__ObjectPreviewer->static_fields->previewerIndex = 1;
  return;
}


/* ObjectPreviewer() */

void Assembly-CSharp.dll::ObjectPreviewer::ObjectPreviewer__ctor
               (ObjectPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).previewCamOffset.x = (pVVar2->zeroVector).x;
  (this->fields).previewCamOffset.y = fVar3;
  (this->fields).previewCamOffset.z = fVar4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar5 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar6 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar7 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar8 = ppMVar6;
  if (lVar7 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar7 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar8;
      LOCK();
      bVar1 = uVar9 != uRam_?;
      uVar10 = uVar9;
      uVar11 = uVar9 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar8 = (MethodInfo **)(ulonglong)uVar10, uVar9 = uVar10, uVar10 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar7;
  puVar12 = &(pOVar5->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar9 = uRam_?;
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
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar5->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar14 = &(pOVar5->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar9 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar5->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar7._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
      lVar7._4_4_ = (pOVar5->_1).cctor_started;
      if (lVar7 == 0) {
        (pOVar5->_1).initializationExceptionGCHandle = 0;
        (pOVar5->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar7 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar5->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar5->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar5->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar5->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar5);
      ppMVar8 = ppMVar6;
      pIVar16 = (Il2CppClass *)pOVar5;
code_?:
      do {
        if (ppMVar8 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar8 = pIVar16->methods;
            pMVar17 = *ppMVar8;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar6;
                while (ppMVar19 = ppMVar18 + 0x3052af36,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar8 = ppMVar8 + 1;
          if (ppMVar8 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar8;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar8 = ppMVar6;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar5->_1).cctor_thread = 0;
    uVar20 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar5->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar5->_0).byval_arg,0,0);
    pppppppuVar19 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar19 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar19);
    if (uStack_24 < 0x10) {
code_?:
      lVar7 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar19 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar20;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar19);
      if (lVar7 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar7;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar26 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar27 = *puVar26;
            LOCK();
            uVar20 = *puVar26;
            if (uVar27 == uVar20) {
              *puVar26 = uVar27 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar27 != uVar20);
        }
      }
      FUN_?(pOVar5,lVar15);
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar19 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar19))))
        goto code_?;
        func_?(pppppppuVar19);
      }
      goto code_?;
    }
    pppppppuVar19 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar19 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
      func_?(pppppppuVar19);
      uVar21 = _UNK_?;
      uVar20 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar5->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

