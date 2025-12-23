
/* Void FaceGameObject(GameObject) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_FaceGameObject
               (AvatarPreviewer *this,GameObject *go,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (((this_00 == (Camera *)0x0) ||
      (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0), go == (GameObject *)0x0)) ||
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (go,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,obj_00,0);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj_00 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((obj_00->fields)._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (obj_00->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar2);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_5._0_4_ = (pVVar4->upVector).x;
      uStack_5._4_4_ = (pVVar4->upVector).y;
      fStack_6 = (pVVar4->upVector).z;
      uStack_7 = 0;
      uStack_8 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar2 = (obj->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar2,&uStack_7,&uStack_5);
    }
  }
  return;
}


/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Transform, Vector3, String,
   MVWorldObjectClient, GameObject, Vector3) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_Initialize
               (AvatarPreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 *cameraOffset,Transform *previewItemsRoot,Vector3 *previewPosition,
               String *name,MVWorldObjectClient *wo,GameObject *woGameObjectCopy,
               Vector3 *additionalCameraRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_Avatar_Previewer);
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
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (((pTVar1 == (Transform *)0x0) ||
      (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                 (pTVar1,previewItemsRoot,(MethodInfo *)0x0), previewItemsRoot == (Transform *)0x0)
      ) || (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)previewItemsRoot,(MethodInfo *)0x0),
           pGVar2 == (GameObject *)0x0)) {
code_?:
    FUN_?();
code_?:
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
code_?:
    FUN_?();
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
              ((Object_1 *)pGVar2,StringLiteral_Avatar_Previewer,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pSVar4 = StringLiteral_Preview__0__RenderCam;
    auStack_5 = (undefined1  [8])0x0;
    pOStack_6 = (Object *)0x0;
    uStack_7 = (Object *)0x0;
    pOStack_8 = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              ((ParamsArray *)auStack_5,(Object *)name,(MethodInfo *)0x0);
    aPStack_9[0]._arg0 = (Object *)auStack_5;
    aPStack_9[0]._arg1 = pOStack_6;
    aPStack_9[0]._arg2 = uStack_7;
    aPStack_9[0]._args = pOStack_8;
    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar4,aPStack_9,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
              ((Object_1 *)pGVar2,pSVar4,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    iVar10 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Preview,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar2,iVar10,(MethodInfo *)0x0);
    pRVar11 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
    pvVar12 = (void *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
              (pRVar11,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
               RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
    if (pRVar11 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
              (pRVar11,2,(MethodInfo *)0x0);
    (this->fields).previewTexture = pRVar11;
    if (iRam_? != 0) {
      uVar13 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
      uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
      do {
        uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
        puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
        LOCK();
        bVar17 = uVar15 == *puVar16;
        if (bVar17) {
          *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar17);
    }
    pCVar18 = (Camera *)(this->fields).previewTexture;
    if (pCVar18 == (Camera *)0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar20 = (pCVar18->fields)._._._.m_CachedPtr;
    if (pvVar20 == (void *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar18,(MethodInfo *)0x0);
      goto code_?;
    }
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar19;
    cVar21 = (*pcRam_?)(pvVar20);
    if (cVar21 != '\0') {
code_?:
      pRVar11 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
                (pRVar11,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                 RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
      if (pRVar11 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                  (pRVar11,2,(MethodInfo *)0x0);
        (this->fields).previewTexture = pRVar11;
        if (iRam_? != 0) {
          uVar13 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
          uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
            puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        pCVar18 = (this->fields).previewCam;
        pRVar11 = (this->fields).previewTexture;
        if (pCVar18 != (Camera *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar20 = (pCVar18->fields)._._._.m_CachedPtr;
          if (pvVar20 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar18,(MethodInfo *)0x0);
            goto code_?;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pRVar11 != (RenderTexture *)0x0) {
            pvVar12 = (pRVar11->fields)._._.m_CachedPtr;
          }
          pcVar19 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar19;
          (*pcRam_?)(pvVar20,pvVar12);
          (this->fields)._PreviewGameObject_k__BackingField = woGameObjectCopy;
          if (iRam_? != 0) {
            uVar13 = (uint)((ulonglong)&(this->fields)._PreviewGameObject_k__BackingField >> 0xc);
            uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
            do {
              uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
              LOCK();
              bVar17 = uVar15 == *puVar16;
              if (bVar17) {
                *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
              }
              UNLOCK();
            } while (!bVar17);
          }
          pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
          values = (String__Array *)FUN_?(TypeInfo__System__String,6);
          if (values != (String__Array *)0x0) {
            FUN_?(values,0,StringLiteral_Preview_);
            FUN_?(values,1,name);
            FUN_?(values,2);
            if (wo != (MVWorldObjectClient *)0x0) {
              iVar10 = (wo->fields)._.itemId;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                   field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              auStack_5 = (undefined1  [8])0x0;
              pOStack_6 = (Object *)0x0;
              pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                                  (iVar10,(ReadOnlySpan_1_Char_ *)auStack_5,(IFormatProvider *)0x0,
                                   (MethodInfo *)0x0);
              FUN_?(values,3,pSVar4);
              FUN_?(values,4);
              iVar10 = (wo->fields)._.id;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                   field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              auStack_5 = (undefined1  [8])0x0;
              pOStack_6 = (Object *)0x0;
              mscorlib.dll::System::Number::Number_FormatInt32
                        (iVar10,(ReadOnlySpan_1_Char_ *)auStack_5,(IFormatProvider *)0x0,
                         (MethodInfo *)0x0);
              FUN_?(values);
              pSVar4 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
              if (pGVar2 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                          ((Object_1 *)pGVar2,pSVar4,(MethodInfo *)0x0);
                pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                if ((pGVar2 != (GameObject *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            (pTVar1,previewItemsRoot,(MethodInfo *)0x0);
                  pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                  if (pGVar2 != (GameObject *)0x0) {
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Quaternion);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (pTVar1 == (Transform *)0x0) {
code_?:
                      FUN_?();
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    auStack_5 = *(undefined1 (*) [8])
                                  &TypeInfo__UnityEngine__Quaternion->static_fields->
                                   identityQuaternion;
                    pOStack_6 = *(Object **)
                                  &(TypeInfo__UnityEngine__Quaternion->static_fields->
                                   identityQuaternion).z;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar12 = (pTVar1->fields)._._.m_CachedPtr;
                    if (pvVar12 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0)
                      ;
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcVar19 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                      uVar3 = func_?(&UNK_?);
                      FUN_?(uVar3,0);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcRam_? = pcVar19;
                    (*pcRam_?)(pvVar12);
                    pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                    if ((pGVar2 == (GameObject *)0x0) ||
                       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                       pTVar1 == (Transform *)0x0)) goto code_?;
                    VStack_22.x = previewPosition->x;
                    VStack_22.y = previewPosition->y;
                    VStack_22.z = previewPosition->z;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar12 = (pTVar1->fields)._._.m_CachedPtr;
                    if (pvVar12 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0)
                      ;
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcVar19 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                      uVar3 = func_?(&UNK_?);
                      FUN_?(uVar3,0);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcRam_? = pcVar19;
                    (*pcRam_?)(pvVar12,&VStack_22);
                    pfVar23 = (float *)(*(wo->klass->vtable).GetLocalBounds.methodPtr)(auStack_5);
                    fVar24 = *pfVar23;
                    fVar25 = pfVar23[1];
                    fVar26 = pfVar23[2];
                    fVar27 = pfVar23[3];
                    uStack_7 = *(Object **)(pfVar23 + 4);
                    pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                    if ((pGVar2 != (GameObject *)0x0) &&
                       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                       pTVar1 != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      VStack_22.x = 0.0;
                      VStack_22.y = 0.0;
                      VStack_22.z = 0.0;
                      pvVar12 = (pTVar1->fields)._._.m_CachedPtr;
                      if (pvVar12 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar1,(MethodInfo *)0x0);
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                      pcVar19 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0))
                      {
                        uVar3 = func_?(&UNK_?);
                        FUN_?(uVar3,0);
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                      pcRam_? = pcVar19;
                      (*pcRam_?)(pvVar12,&VStack_22);
                      lVar28 = FUN_?(TypeInfo__System__Single,3);
                      fVar29 = TypeRef__System__Activator__T._0_4_;
                      if (lVar28 != 0) {
                        if (*(int *)(lVar28 + 0x18) == 0) {
code_?:
                          FUN_?();
                          pcVar19 = (code *)swi(3);
                          (*pcVar19)();
                          return;
                        }
                        *(float *)(lVar28 + 0x20) = fVar27 * TypeRef__System__Activator__T._0_4_;
                        fVar30 = (float)uStack_7;
                        if (*(uint *)(lVar28 + 0x18) < 2) goto code_?;
                        *(float *)(lVar28 + 0x24) = (float)uStack_7 + (float)uStack_7;
                        fVar31 = uStack_7._4_4_;
                        if (*(uint *)(lVar28 + 0x18) < 3) goto code_?;
                        *(float *)(lVar28 + 0x28) = uStack_7._4_4_ + uStack_7._4_4_;
                        uVar13 = *(uint *)(lVar28 + 0x18);
                        if (uVar13 != 0) {
                          if (*(int *)(lVar28 + 0x18) == 0) goto code_?;
                          fVar32 = *(float *)(lVar28 + 0x20);
                          uVar33 = 1;
                          if (1 < (int)uVar13) {
                            lVar34 = 1;
                            pfVar23 = (float *)(lVar28 + 0x24);
                            do {
                              if (uVar13 <= uVar33) goto code_?;
                              if (fVar32 < *pfVar23) {
                                fVar32 = *pfVar23;
                              }
                              uVar33 = uVar33 + 1;
                              lVar34 = lVar34 + 1;
                              pfVar23 = pfVar23 + 1;
                            } while (lVar34 < (int)uVar13);
                          }
                        }
                        lVar28 = FUN_?(TypeInfo__System__Single,3);
                        fVar32 = VStack_22.z;
                        if (lVar28 != 0) {
                          if (*(int *)(lVar28 + 0x18) == 0) goto code_?;
                          fVar35 = VStack_22.x;
                          *(float *)(lVar28 + 0x20) = VStack_22.x * fVar27 * fVar29;
                          if (*(uint *)(lVar28 + 0x18) < 2) goto code_?;
                          fVar27 = VStack_22.y;
                          *(float *)(lVar28 + 0x24) = VStack_22.y * (fVar30 + fVar30);
                          if (*(uint *)(lVar28 + 0x18) < 3) goto code_?;
                          *(float *)(lVar28 + 0x28) = VStack_22.z * (fVar31 + fVar31);
                          iVar36 = *(int *)(lVar28 + 0x18);
                          if (iVar36 == 0) {
                            fVar29 = 0.0;
                          }
                          else {
                            if (*(int *)(lVar28 + 0x18) == 0) goto code_?;
                            fVar29 = *(float *)(lVar28 + 0x20);
                            uVar13 = 1;
                            if (1 < iVar36) {
                              lVar34 = 1;
                              pfVar23 = (float *)(lVar28 + 0x24);
                              do {
                                if (*(uint *)(lVar28 + 0x18) <= uVar13) goto code_?;
                                if (fVar29 < *pfVar23) {
                                  fVar29 = *pfVar23;
                                }
                                uVar13 = uVar13 + 1;
                                lVar34 = lVar34 + 1;
                                pfVar23 = pfVar23 + 1;
                              } while (lVar34 < iVar36);
                            }
                          }
                          fVar29 = (this->fields).previewObjMaxSize / fVar29;
                          pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                          if (pGVar2 != (GameObject *)0x0) {
                            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                            if (pTVar1 == (Transform *)0x0) {
                              FUN_?();
                              pcVar19 = (code *)swi(3);
                              (*pcVar19)();
                              return;
                            }
                            auStack_5 = (undefined1  [8])CONCAT44(fVar27 * fVar29,fVar35 * fVar29);
                            pOStack_6 = (Object *)CONCAT44(pOStack_6._4_4_,fVar32 * fVar29);
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                              fVar32 = VStack_22.z;
                              fVar27 = VStack_22.y;
                              fVar35 = VStack_22.x;
                            }
                            pvVar12 = (pTVar1->fields)._._.m_CachedPtr;
                            if (pvVar12 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pTVar1,(MethodInfo *)0x0);
                              pcVar19 = (code *)swi(3);
                              (*pcVar19)();
                              return;
                            }
                            pcVar19 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar19 = (code *)FUN_?(&UNK_?),
                               pcVar19 == (code *)0x0)) {
                              uVar3 = func_?(&UNK_?);
                              FUN_?(uVar3,0);
                              pcVar19 = (code *)swi(3);
                              (*pcVar19)();
                              return;
                            }
                            pcRam_? = pcVar19;
                            (*pcRam_?)(pvVar12);
                            pGVar2 = (this->fields)._PreviewGameObject_k__BackingField;
                            if ((pGVar2 != (GameObject *)0x0) &&
                               (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                               pTVar1 != (Transform *)0x0)) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              VStack_22.x = 0.0;
                              VStack_22.y = 0.0;
                              VStack_22.z = 0.0;
                              pvVar12 = (pTVar1->fields)._._.m_CachedPtr;
                              if (pvVar12 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pTVar1,(MethodInfo *)0x0);
                                pcVar19 = (code *)swi(3);
                                (*pcVar19)();
                                return;
                              }
                              pcVar19 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar19 = (code *)FUN_?(&UNK_?),
                                 pcVar19 == (code *)0x0)) {
                                uVar3 = func_?(&UNK_?);
                                FUN_?(uVar3,0);
                                pcVar19 = (code *)swi(3);
                                (*pcVar19)();
                                return;
                              }
                              pcRam_? = pcVar19;
                              (*pcRam_?)(pvVar12);
                              (this->fields).pivotPoint.x = VStack_22.x + fVar24 * fVar35 * fVar29;
                              (this->fields).pivotPoint.y = VStack_22.y + fVar25 * fVar27 * fVar29;
                              (this->fields).pivotPoint.z = VStack_22.z + fVar26 * fVar32 * fVar29;
                              pCVar18 = (this->fields).previewCam;
                              if (pCVar18 != (Camera *)0x0) {
                                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform
                                                    ((Component *)pCVar18,(MethodInfo *)0x0);
                                uVar37 = cameraOffset->x;
                                uVar38 = cameraOffset->y;
                                fVar24 = (this->fields).previewObjMaxSize;
                                auStack_5 = *(undefined1 (*) [8])&(this->fields).pivotPoint;
                                if (pTVar1 != (Transform *)0x0) {
                                  auStack_5 = (undefined1  [8])
                                               CONCAT44(((float)uVar38 +
                                                        (this->fields).previewCamAdditionalHeight) *
                                                        fVar24 + (float)((ulonglong)auStack_5 >>
                                                                       0x20),
                                                        ((float)uVar37 + 0.0) * fVar24 +
                                                        SUB84(auStack_5,0));
                                  pOStack_6 = (Object *)
                                               CONCAT44(pOStack_6._4_4_,
                                                        ((float)((uint)(this->fields).previewCamDist
                                                                ^ _UNK_?) + cameraOffset->z)
                                                        * fVar24 + (this->fields).pivotPoint.z);
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar12 = (pTVar1->fields)._._.m_CachedPtr;
                                  if (pvVar12 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)pTVar1,(MethodInfo *)0x0);
                                    pcVar19 = (code *)swi(3);
                                    (*pcVar19)();
                                    return;
                                  }
                                  pcVar19 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar19 = (code *)FUN_?(&UNK_?),
                                     pcVar19 == (code *)0x0)) {
                                    uVar3 = func_?(&UNK_?);
                                    FUN_?(uVar3,0);
                                    pcVar19 = (code *)swi(3);
                                    (*pcVar19)();
                                    return;
                                  }
                                  pcRam_? = pcVar19;
                                  (*pcRam_?)(pvVar12);
                                  pCVar18 = (this->fields).previewCam;
                                  if ((pCVar18 != (Camera *)0x0) &&
                                     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_transform
                                                          ((Component *)pCVar18,(MethodInfo *)0x0),
                                     pTVar1 != (Transform *)0x0)) {
                                    VStack_22.x = (this->fields).pivotPoint.x;
                                    VStack_22.y = (this->fields).pivotPoint.y;
                                    VStack_22.z = (this->fields).pivotPoint.z;
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_LookAt_2(pTVar1,&VStack_22,(MethodInfo *)0x0);
                                    pCVar18 = (this->fields).previewCam;
                                    if ((pCVar18 != (Camera *)0x0) &&
                                       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_get_transform
                                                            ((Component *)pCVar18,(MethodInfo *)0x0)
                                       , pTVar1 != (Transform *)0x0)) {
                                      VStack_22.x = additionalCameraRotation->x;
                                      VStack_22.y = additionalCameraRotation->y;
                                      VStack_22.z = additionalCameraRotation->z;
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_Rotate(pTVar1,&VStack_22,Space__Enum_Self,
                                                       (MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                                FUN_?();
                                pcVar19 = (code *)swi(3);
                                (*pcVar19)();
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
      goto code_?;
    }
    pRVar11 = (this->fields).previewTexture;
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
              ((Object_1 *)pRVar11,0.0,(MethodInfo *)0x0);
    pRVar11 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_8
              (pRVar11,textureWidth / textureHeight << 8,0x100,0x10,RenderTextureFormat__Enum_ARGB32
               ,RenderTextureReadWrite__Enum_Default,(MethodInfo *)0x0);
    if (pRVar11 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                (pRVar11,2,(MethodInfo *)0x0);
      (this->fields).previewTexture = pRVar11;
      if (iRam_? != 0) {
        uVar13 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
        uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar17 = uVar15 == *puVar16;
          if (bVar17) {
            *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar17);
      }
      pRVar11 = (this->fields).previewTexture;
      if (pRVar11 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Create
                  (pRVar11,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  uVar3 = func_?(&UNK_?);
  FUN_?(uVar3,0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnDestroy
               (AvatarPreviewer *this,MethodInfo *method)

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
      bVar2 = iRam_? != 0;
      (this->fields).previewTexture = (RenderTexture *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
  }
  pRVar7 = (this->fields).previewTexture;
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
  if (pRVar7 != (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar7->fields)._._.m_CachedPtr != (void *)0x0) {
      pRVar7 = (this->fields).previewTexture;
      if (pRVar7 == (RenderTexture *)0x0) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pRVar7->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar9);
      pRVar7 = (this->fields).previewTexture;
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
                ((Object_1 *)pRVar7,0.0,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).previewTexture = (RenderTexture *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).previewTexture >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
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
  pvVar9 = (void *)0x0;
  if (pGVar11 != (GameObject *)0x0) {
    pvVar9 = (pGVar11->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar9,0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnPostRender
               (AvatarPreviewer *this,MethodInfo *method)

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

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OnPreCull
               (AvatarPreviewer *this,MethodInfo *method)

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


/* Void OverrideCameraForPreviewer(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_OverrideCameraForPreviewer
               (AvatarPreviewer *this,Vector3 *cameraAngle,Vector3 *cameraOffset,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this_00,(MethodInfo *)0x0);
  uStack_2._0_4_ = cameraAngle->x;
  uStack_2._4_4_ = cameraAngle->y;
  fStack_3 = cameraAngle->z * _UNK_?;
  uStack_4 = CONCAT44((float)uStack_2._4_4_ * _UNK_?,
                       (float)(undefined4)uStack_2 * _UNK_?);
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_4);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_8 = (undefined4)uStack_5;
  uStack_9 = uStack_5._4_4_;
  uStack_10 = (undefined4)uStack_6;
  uStack_11 = uStack_6._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar12 = (obj->fields)._._.m_CachedPtr;
  if (pvVar12 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar12);
    uStack_2._0_4_ = cameraOffset->x;
    uStack_2._4_4_ = cameraOffset->y;
    fStack_13 = cameraOffset->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar12 = (obj->fields)._._.m_CachedPtr;
    if (pvVar12 != (void *)0x0) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12,&uStack_2);
      return;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateRotation(Single) */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer_UpdateRotation
               (AvatarPreviewer *this,float rotateSpeed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (rotateSpeed != 0.0) {
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
          uVar5._0_4_ = (pVVar4->upVector).x;
          uVar5._4_4_ = (pVVar4->upVector).y;
          fVar6 = (pVVar4->upVector).z;
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
            VStack_9._0_8_ = uVar5;
            VStack_9.z = fVar6;
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
  }
  return;
}


/* AvatarPreviewer() */

void Assembly-CSharp.dll::AvatarPreviewer::AvatarPreviewer__ctor
               (AvatarPreviewer *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).previewObjMaxSize = 2.0;
  (this->fields).previewCamAdditionalHeight = 0.5;
  (this->fields).previewCamDist = 1.5;
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
                while (ppMVar16 = ppMVar15 + 0x3052af36,
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

