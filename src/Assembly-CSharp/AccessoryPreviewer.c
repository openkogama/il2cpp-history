
/* Bounds ComputeLocalBounds(GameObject) */

Bounds * Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_ComputeLocalBounds
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


/* Void Destroy() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_Destroy
               (AccessoryPreviewer *this,MethodInfo *method)

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
      pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                         (pCVar1,(MethodInfo *)0x0);
      pCVar1 = (this->fields).previewCam;
      if ((pCVar1 == (Camera *)0x0) ||
         (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0), pRVar2 == (RenderTexture *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                (pRVar2,(MethodInfo *)0x0);
    }
  }
  pTVar3 = (this->fields).rootTransform;
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
  if (pTVar3 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar3->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar3 = (this->fields).rootTransform;
      if (pTVar3 == (Transform *)0x0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar3,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar5,0.0,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (this->fields).rootTransform = (Transform *)0x0;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
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
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
  pvVar11 = (void *)0x0;
  if (pGVar5 != (GameObject *)0x0) {
    pvVar11 = (pGVar5->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,0);
  return;
}


/* Void Initialize(Int32, Int32, LayerFlags, CameraClearFlags, Vector3, Vector3, GameObject,
   Transform) */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_Initialize
               (AccessoryPreviewer *this,int32_t textureWidth,int32_t textureHeight,
               LayerFlags__Enum layersToRender,CameraClearFlags__Enum clearFlags,
               Vector3 *cameraPosOffset,Vector3 *cameraRotOffset,GameObject *woGameObjectCopy,
               Transform *rootTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryPreviewer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RenderCam_Preview__0_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).rootTransform = rootTransform;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).rootTransform >> 0xc);
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
  (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
  if (((pGVar1 != (GameObject *)0x0) &&
      (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar7,rootTransform,(MethodInfo *)0x0), woGameObjectCopy != (GameObject *)0x0)) {
    arg0 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                     ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    pSVar8 = StringLiteral_RenderCam_Preview__0_;
    auStack_9 = (undefined1  [8])0x0;
    pOStack_10 = (Object *)0x0;
    uStack_11 = (Object *)0x0;
    pOStack_12 = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor
              ((ParamsArray *)auStack_9,(Object *)arg0,(MethodInfo *)0x0);
    aPStack_13[0]._arg0 = (Object *)auStack_9;
    aPStack_13[0]._arg1 = pOStack_10;
    aPStack_13[0]._arg2 = uStack_11;
    aPStack_13[0]._args = pOStack_12;
    pSVar8 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar8,aPStack_13,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
              ((Object_1 *)pGVar1,pSVar8,(MethodInfo *)0x0);
    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Preview,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,iVar14,(MethodInfo *)0x0);
    pRVar15 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
              (pRVar15,textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
               (MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).previewTexture = pRVar15;
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
    pRVar15 = (this->fields).previewTexture;
    pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                        ((Object_1 *)woGameObjectCopy,(MethodInfo *)0x0);
    if (pRVar15 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                ((Object_1 *)pRVar15,pSVar8,(MethodInfo *)0x0);
      pRVar15 = (this->fields).previewTexture;
      if (pRVar15 != (RenderTexture *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar16 = (pRVar15->fields)._._.m_CachedPtr;
        if (pvVar16 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar15,(MethodInfo *)0x0);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pcVar17 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
          uVar18 = func_?(&UNK_?);
          FUN_?(uVar18,0);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pcRam_? = pcVar17;
        (*pcRam_?)(pvVar16,2);
        pRVar15 = (this->fields).previewTexture;
        if (pRVar15 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)pRVar15,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          pRVar15 = (this->fields).previewTexture;
          if (pRVar15 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)pRVar15,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            pCVar19 = (Camera *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar1,
                                 UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                                );
            bVar2 = iRam_? != 0;
            (this->fields).previewCam = pCVar19;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(this->fields).previewCam >> 0xc);
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
            pCVar19 = (this->fields).previewCam;
            if (pCVar19 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                        (pCVar19,clearFlags,(MethodInfo *)0x0);
              pCVar19 = (this->fields).previewCam;
              if (pCVar19 != (Camera *)0x0) {
                BStack_20.m_Center.x = 0.0;
                BStack_20.m_Center.y = 0.0;
                BStack_20.m_Center.z = 0.0;
                BStack_20.m_Extents.x = 0.0;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar16 = (pCVar19->fields)._._._.m_CachedPtr;
                if (pvVar16 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar19,(MethodInfo *)0x0);
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pcVar17 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
                  uVar18 = func_?(&UNK_?);
                  FUN_?(uVar18,0);
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pcRam_? = pcVar17;
                (*pcRam_?)(pvVar16);
                pCVar19 = (this->fields).previewCam;
                if (pCVar19 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                            (pCVar19,_UNK_?,(MethodInfo *)0x0);
                  pCVar19 = (this->fields).previewCam;
                  if (pCVar19 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                              (pCVar19,(float)textureWidth / (float)textureHeight,(MethodInfo *)0x0)
                    ;
                    pCVar19 = (this->fields).previewCam;
                    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                            LayerMask_NameToLayer(StringLiteral_Preview,(MethodInfo *)0x0);
                    if (pCVar19 != (Camera *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                                (pCVar19,1 << ((byte)iVar14 & 0x1f),(MethodInfo *)0x0);
                      pCVar19 = (this->fields).previewCam;
                      if (pCVar19 != (Camera *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
                                  (pCVar19,_UNK_?,(MethodInfo *)0x0);
                        pCVar19 = (this->fields).previewCam;
                        if (pCVar19 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
                                    (pCVar19,_UNK_?,(MethodInfo *)0x0);
                          pCVar19 = (this->fields).previewCam;
                          if (pCVar19 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::
                            Camera_set_targetTexture
                                      (pCVar19,(this->fields).previewTexture,(MethodInfo *)0x0);
                            pCVar19 = (this->fields).previewCam;
                            if (pCVar19 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Camera::
                              Camera_set_orthographic(pCVar19,1,(MethodInfo *)0x0);
                              pCVar19 = (this->fields).previewCam;
                              if (pCVar19 != (Camera *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                Camera_set_orthographicSize
                                          (pCVar19,_UNK_?,(MethodInfo *)0x0);
                                bVar2 = iRam_? != 0;
                                (this->fields).previewGameObject = woGameObjectCopy;
                                if (bVar2) {
                                  uVar3 = (uint)((ulonglong)&(this->fields).previewGameObject >>
                                                 0xc);
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
                                pGVar1 = (this->fields).previewGameObject;
                                pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                          Object_1_GetName((Object_1 *)woGameObjectCopy,
                                                           (MethodInfo *)0x0);
                                pSVar8 = mscorlib.dll::System::String::String_Concat_4
                                                    (StringLiteral_Preview_,pSVar8,
                                                     (MethodInfo *)0x0);
                                if (pGVar1 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_SetName
                                            ((Object_1 *)pGVar1,pSVar8,(MethodInfo *)0x0);
                                  pGVar1 = (this->fields).previewGameObject;
                                  if ((pGVar1 != (GameObject *)0x0) &&
                                     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar1,(MethodInfo *)0x0),
                                     pTVar7 != (Transform *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_parent(pTVar7,rootTransform,(MethodInfo *)0x0);
                                    pGVar1 = (this->fields).previewGameObject;
                                    if (pGVar1 != (GameObject *)0x0) {
                                      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar1,(MethodInfo *)0x0);
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__UnityEngine__Quaternion);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      if (pTVar7 != (Transform *)0x0) {
                                        auStack_9 = *(undefined1 (*) [8])
                                                      &TypeInfo__UnityEngine__Quaternion->
                                                       static_fields->identityQuaternion;
                                        pOStack_10 = *(Object **)
                                                      &(TypeInfo__UnityEngine__Quaternion->
                                                        static_fields->identityQuaternion).z;
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pvVar16 = (pTVar7->fields)._._.m_CachedPtr;
                                        if (pvVar16 == (void *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                    ((Object *)pTVar7,(MethodInfo *)0x0);
                                          pcVar17 = (code *)swi(3);
                                          (*pcVar17)();
                                          return;
                                        }
                                        pcVar17 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar17 = (code *)FUN_?(&UNK_?),
                                           pcVar17 == (code *)0x0)) {
                                          uVar18 = func_?(&UNK_?);
                                          FUN_?(uVar18,0);
                                          pcVar17 = (code *)swi(3);
                                          (*pcVar17)();
                                          return;
                                        }
                                        pcRam_? = pcVar17;
                                        (*pcRam_?)(pvVar16);
                                        pGVar1 = (this->fields).previewGameObject;
                                        if (pGVar1 != (GameObject *)0x0) {
                                          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_get_transform
                                                              (pGVar1,(MethodInfo *)0x0);
                                          if (*(int *)&(TypeInfo__AccessoryPreviewer->_1).field_0x1c
                                              == 0) {
                                            FUN_?();
                                          }
                                          pAVar21 = TypeInfo__AccessoryPreviewer->static_fields;
                                          VStack_22.x = (pAVar21->previewPosition).x;
                                          VStack_22.y = (pAVar21->previewPosition).y;
                                          VStack_22.z = (pAVar21->previewPosition).z;
                                          if (pTVar7 != (Transform *)0x0) {
                                            if (cRam_? == '\0') {
                                              FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            pvVar16 = (pTVar7->fields)._._.m_CachedPtr;
                                            if (pvVar16 == (void *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                              ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                        ((Object *)pTVar7,(MethodInfo *)0x0);
                                              pcVar17 = (code *)swi(3);
                                              (*pcVar17)();
                                              return;
                                            }
                                            pcVar17 = pcRam_?;
                                            if ((pcRam_? == (code *)0x0) &&
                                               (pcVar17 = (code *)FUN_?(&UNK_?),
                                               pcVar17 == (code *)0x0)) {
                                              uVar18 = func_?(&UNK_?);
                                              FUN_?(uVar18,0);
                                              pcVar17 = (code *)swi(3);
                                              (*pcVar17)();
                                              return;
                                            }
                                            pcRam_? = pcVar17;
                                            (*pcRam_?)(pvVar16);
                                            pAVar21 = TypeInfo__AccessoryPreviewer->static_fields;
                                            BStack_20.m_Center.x = (pAVar21->previewPosition).x;
                                            BStack_20.m_Center.y = (pAVar21->previewPosition).y;
                                            (pAVar21->previewPosition).x =
                                                 BStack_20.m_Center.x + _UNK_?;
                                            (pAVar21->previewPosition).y = BStack_20.m_Center.y + 0.0
                                            ;
                                            (pAVar21->previewPosition).z =
                                                 (pAVar21->previewPosition).z + 0.0;
                                            pGVar1 = (this->fields).previewGameObject;
                                            if (pGVar1 != (GameObject *)0x0) {
                                              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar1,(MethodInfo *)0x0);
                                              pGVar1 = (this->fields).previewGameObject;
                                              if ((pGVar1 != (GameObject *)0x0) &&
                                                 (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar1,(MethodInfo *)0x0),
                                                 pTVar23 != (Transform *)0x0)) {
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
                                                pvVar16 = (pTVar23->fields)._._.m_CachedPtr;
                                                if (pvVar16 == (void *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings
                                                  ::ThrowHelper::
                                                  ThrowHelper_2_ThrowNullReferenceException
                                                            ((Object *)pTVar23,(MethodInfo *)0x0);
                                                  pcVar17 = (code *)swi(3);
                                                  (*pcVar17)();
                                                  return;
                                                }
                                                pcVar17 = pcRam_?;
                                                if ((pcRam_? == (code *)0x0) &&
                                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                                   pcVar17 == (code *)0x0)) {
                                                  uVar18 = func_?(&UNK_?);
                                                  FUN_?(uVar18,0);
                                                  pcVar17 = (code *)swi(3);
                                                  (*pcVar17)();
                                                  return;
                                                }
                                                pcRam_? = pcVar17;
                                                (*pcRam_?)(pvVar16,&VStack_22);
                                                if (cRam_? == '\0') {
                                                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                if (pTVar7 != (Transform *)0x0) {
                                                  auStack_9 = *(undefined1 (*) [8])
                                                                &TypeInfo__UnityEngine__Vector3->
                                                                 static_fields->upVector;
                                                  pOStack_10 = (Object *)
                                                               CONCAT44(pOStack_10._4_4_,
                                                                        (
                                                  TypeInfo__UnityEngine__Vector3->static_fields->
                                                  upVector).z);
                                                  BStack_20.m_Center.x = VStack_22.x;
                                                  BStack_20.m_Center.y = VStack_22.y;
                                                  BStack_20.m_Center.z = VStack_22.z;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_RotateAround
                                                            (pTVar7,&BStack_20.m_Center,
                                                             (Vector3 *)auStack_9,_UNK_?,
                                                             (MethodInfo *)0x0);
                                                  pBVar24 = AccessoryPreviewer_ComputeLocalBounds
                                                                      (&BStack_20,
                                                                       (this->fields).
                                                                       previewGameObject,
                                                                       (MethodInfo *)0x0);
                                                  pGVar1 = (this->fields).previewGameObject;
                                                  uStack_11 = *(Object **)&(pBVar24->m_Extents).y;
                                                  fVar25 = (pBVar24->m_Center).y;
                                                  fVar26 = (pBVar24->m_Extents).x;
                                                  if ((pGVar1 != (GameObject *)0x0) &&
                                                     (pTVar7 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::GameObject::
                                                                GameObject_get_transform
                                                                          (pGVar1,(MethodInfo *)0x0
                                                                          ),
                                                     pTVar7 != (Transform *)0x0)) {
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
                                                  pvVar16 = (pTVar7->fields)._._.m_CachedPtr;
                                                  if (pvVar16 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pTVar7,(MethodInfo *)0x0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcVar17 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar17 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar17 == (code *)0x0)) {
                                                    uVar18 = func_?(&UNK_?);
                                                    FUN_?(uVar18,0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar17;
                                                  (*pcRam_?)(pvVar16,&VStack_22);
                                                  lVar27 = FUN_?(TypeInfo__System__Single,3)
                                                  ;
                                                  fVar28 = VStack_22.z;
                                                  fVar29 = TypeRef__System__Activator__T._0_4_;
                                                  if (lVar27 != 0) {
                                                    if (*(int *)(lVar27 + 0x18) != 0) {
                                                      fVar30 = VStack_22.x;
                                                      *(float *)(lVar27 + 0x20) =
                                                           VStack_22.x *
                                                           fVar26 * TypeRef__System__Activator__T.
                                                                    _0_4_;
                                                      if (1 < *(uint *)(lVar27 + 0x18)) {
                                                        fVar26 = VStack_22.y;
                                                        *(float *)(lVar27 + 0x24) =
                                                             VStack_22.y *
                                                             ((float)uStack_11 + (float)uStack_11);
                                                        if (2 < *(uint *)(lVar27 + 0x18)) {
                                                          *(float *)(lVar27 + 0x28) =
                                                               VStack_22.z *
                                                               (uStack_11._4_4_ + uStack_11._4_4_);
                                                          iVar31 = *(int *)(lVar27 + 0x18);
                                                          if (iVar31 == 0) {
                                                            fVar32 = 0.0;
                                                          }
                                                          else {
                                                            if (*(int *)(lVar27 + 0x18) == 0)
                                                            goto code_?;
                                                            fVar32 = *(float *)(lVar27 + 0x20);
                                                            uVar3 = 1;
                                                            if (1 < iVar31) {
                                                              lVar33 = 1;
                                                              pfVar34 = (float *)(lVar27 + 0x24);
                                                              do {
                                                                if (*(uint *)(lVar27 + 0x18) <=
                                                                    uVar3)
                                                                goto code_?;
                                                                if (fVar32 < *pfVar34) {
                                                                  fVar32 = *pfVar34;
                                                                }
                                                                uVar3 = uVar3 + 1;
                                                                lVar33 = lVar33 + 1;
                                                                pfVar34 = pfVar34 + 1;
                                                              } while (lVar33 < iVar31);
                                                            }
                                                          }
                                                          pGVar1 = (this->fields).previewGameObject
                                                          ;
                                                          if (pGVar1 != (GameObject *)0x0) {
                                                            pTVar7 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::GameObject::
                                                                      GameObject_get_transform
                                                                                (pGVar1,(MethodInfo
                                                                                          *)0x0);
                                                            fVar32 = fVar29 / fVar32;
                                                            fVar35 = fVar30 * fVar32;
                                                            if (fVar29 <= fVar30 * fVar32) {
                                                              fVar35 = fVar29;
                                                            }
                                                            fVar30 = fVar26 * fVar32;
                                                            if (fVar29 <= fVar26 * fVar32) {
                                                              fVar30 = fVar29;
                                                            }
                                                            fVar26 = fVar28 * fVar32;
                                                            if (fVar29 <= fVar28 * fVar32) {
                                                              fVar26 = fVar29;
                                                            }
                                                            if (pTVar7 != (Transform *)0x0) {
                                                              BStack_20.m_Center.y = fVar30;
                                                              BStack_20.m_Center.x = fVar35;
                                                              BStack_20.m_Center.z = fVar26;
                                                              if (cRam_? == '\0') {
                                                                FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar16 = (pTVar7->fields)._._.m_CachedPtr;
                                                  if (pvVar16 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pTVar7,(MethodInfo *)0x0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcVar17 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar17 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar17 == (code *)0x0)) {
                                                    uVar18 = func_?(&UNK_?);
                                                    FUN_?(uVar18,0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar17;
                                                  (*pcRam_?)(pvVar16);
                                                  pGVar1 = (this->fields).previewGameObject;
                                                  if (pGVar1 != (GameObject *)0x0) {
                                                    pTVar7 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_get_transform
                                                                        (pGVar1,(MethodInfo *)0x0);
                                                    pGVar1 = (this->fields).previewGameObject;
                                                    if ((pGVar1 != (GameObject *)0x0) &&
                                                       (pTVar23 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar1,(MethodInfo *)
                                                                                     0x0),
                                                       pTVar23 != (Transform *)0x0)) {
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
                                                  pvVar16 = (pTVar23->fields)._._.m_CachedPtr;
                                                  if (pvVar16 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pTVar23,(MethodInfo *)0x0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcVar17 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar17 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar17 == (code *)0x0)) {
                                                    uVar18 = func_?(&UNK_?);
                                                    FUN_?(uVar18,0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar17;
                                                  (*pcRam_?)(pvVar16);
                                                  if (pTVar7 != (Transform *)0x0) {
                                                    auStack_9 = (undefined1  [8])
                                                                 CONCAT44(VStack_22.y -
                                                                          (fVar25 - (float)uStack_11)
                                                                          ,VStack_22.x - 0.0);
                                                    pOStack_10 = (Object *)
                                                                 CONCAT44(pOStack_10._4_4_,
                                                                          VStack_22.z - 0.0);
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar16 = (pTVar7->fields)._._.m_CachedPtr;
                                                  if (pvVar16 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pTVar7,(MethodInfo *)0x0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcVar17 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar17 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar17 == (code *)0x0)) {
                                                    uVar18 = func_?(&UNK_?);
                                                    FUN_?(uVar18,0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar17;
                                                  (*pcRam_?)(pvVar16);
                                                  pCVar19 = (this->fields).previewCam;
                                                  if (pCVar19 != (Camera *)0x0) {
                                                    pTVar7 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        ((Component *)pCVar19,
                                                                         (MethodInfo *)0x0);
                                                    pGVar1 = (this->fields).previewGameObject;
                                                    if ((pGVar1 != (GameObject *)0x0) &&
                                                       (pTVar23 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar1,(MethodInfo *)
                                                                                     0x0),
                                                       pTVar23 != (Transform *)0x0)) {
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
                                                  pvVar16 = (pTVar23->fields)._._.m_CachedPtr;
                                                  if (pvVar16 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pTVar23,(MethodInfo *)0x0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcVar17 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar17 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar17 == (code *)0x0)) {
                                                    uVar18 = func_?(&UNK_?);
                                                    FUN_?(uVar18,0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar17;
                                                  (*pcRam_?)(pvVar16);
                                                  BStack_20.m_Center.x = cameraPosOffset->x;
                                                  BStack_20.m_Center.y = cameraPosOffset->y;
                                                  if (pTVar7 != (Transform *)0x0) {
                                                    BStack_20.m_Center.y =
                                                         VStack_22.y + BStack_20.m_Center.y;
                                                    BStack_20.m_Center.x =
                                                         VStack_22.x + BStack_20.m_Center.x;
                                                    BStack_20.m_Center.z =
                                                         VStack_22.z + cameraPosOffset->z;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar16 = (pTVar7->fields)._._.m_CachedPtr;
                                                  if (pvVar16 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pTVar7,(MethodInfo *)0x0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcVar17 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar17 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar17 == (code *)0x0)) {
                                                    uVar18 = func_?(&UNK_?);
                                                    FUN_?(uVar18,0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar17;
                                                  (*pcRam_?)(pvVar16);
                                                  pCVar19 = (this->fields).previewCam;
                                                  if ((pCVar19 != (Camera *)0x0) &&
                                                     (pTVar7 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pCVar19,
                                                                           (MethodInfo *)0x0),
                                                     pTVar7 != (Transform *)0x0)) {
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
                                                  pvVar16 = (pTVar7->fields)._._.m_CachedPtr;
                                                  if (pvVar16 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pTVar7,(MethodInfo *)0x0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcVar17 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar17 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar17 == (code *)0x0)) {
                                                    uVar18 = func_?(&UNK_?);
                                                    FUN_?(uVar18,0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar17;
                                                  (*pcRam_?)(pvVar16);
                                                  fVar25 = VStack_22.z;
                                                  pCVar19 = (this->fields).previewCam;
                                                  BStack_20.m_Center.x = VStack_22.x;
                                                  BStack_20.m_Center.y = cameraPosOffset->y;
                                                  if ((pCVar19 != (Camera *)0x0) &&
                                                     (pTVar7 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pCVar19,
                                                                           (MethodInfo *)0x0),
                                                     pTVar7 != (Transform *)0x0)) {
                                                    auStack_9._0_4_ = BStack_20.m_Center.x;
                                                    auStack_9._4_4_ = BStack_20.m_Center.y;
                                                    pOStack_10 = (Object *)
                                                                 CONCAT44(pOStack_10._4_4_,fVar25);
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar16 = (pTVar7->fields)._._.m_CachedPtr;
                                                  if (pvVar16 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pTVar7,(MethodInfo *)0x0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcVar17 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar17 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar17 == (code *)0x0)) {
                                                    uVar18 = func_?(&UNK_?);
                                                    FUN_?(uVar18,0);
                                                    pcVar17 = (code *)swi(3);
                                                    (*pcVar17)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar17;
                                                  (*pcRam_?)(pvVar16);
                                                  pCVar19 = (this->fields).previewCam;
                                                  if (pCVar19 != (Camera *)0x0) {
                                                    pTVar7 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_transform
                                                                        ((Component *)pCVar19,
                                                                         (MethodInfo *)0x0);
                                                    pGVar1 = (this->fields).previewGameObject;
                                                    if ((pGVar1 != (GameObject *)0x0) &&
                                                       (pTVar23 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::GameObject::
                                                                  GameObject_get_transform
                                                                            (pGVar1,(MethodInfo *)
                                                                                     0x0),
                                                       pTVar7 != (Transform *)0x0)) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_LookAt
                                                                (pTVar7,pTVar23,(MethodInfo *)0x0);
                                                      pCVar19 = (this->fields).previewCam;
                                                      if ((pCVar19 != (Camera *)0x0) &&
                                                         (pTVar7 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Component::
                                                                    Component_get_transform
                                                                              ((Component *)pCVar19,
                                                                               (MethodInfo *)0x0),
                                                         pTVar7 != (Transform *)0x0)) {
                                                        BStack_20.m_Center.x = cameraRotOffset->x;
                                                        BStack_20.m_Center.y = cameraRotOffset->y;
                                                        BStack_20.m_Center.z = cameraRotOffset->z;
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Transform::Transform_Rotate
                                                                  (pTVar7,&BStack_20.m_Center,
                                                                   Space__Enum_Self,
                                                                   (MethodInfo *)0x0);
                                                        return;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  FUN_?();
                                                  pcVar17 = (code *)swi(3);
                                                  (*pcVar17)();
                                                  return;
                                                  }
                                                  }
                                                  FUN_?();
                                                  pcVar17 = (code *)swi(3);
                                                  (*pcVar17)();
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  FUN_?();
                                                  pcVar17 = (code *)swi(3);
                                                  (*pcVar17)();
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  FUN_?();
                                                  pcVar17 = (code *)swi(3);
                                                  (*pcVar17)();
                                                  return;
                                                  }
                                                  goto code_?;
                                                  }
                                                  }
                                                  }
code_?:
                                                  FUN_?();
                                                  pcVar17 = (code *)swi(3);
                                                  (*pcVar17)();
                                                  return;
                                                  }
                                                  }
                                                }
                                              }
                                            }
code_?:
                                            FUN_?();
                                            pcVar17 = (code *)swi(3);
                                            (*pcVar17)();
                                            return;
                                          }
                                        }
                                      }
                                      FUN_?();
                                      pcVar17 = (code *)swi(3);
                                      (*pcVar17)();
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
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_OnPostRender
               (AccessoryPreviewer *this,MethodInfo *method)

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
  pGVar1 = (this->fields).previewGameObject;
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

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer_OnPreCull
               (AccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).previewGameObject;
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


/* AccessoryPreviewer() */

void Assembly-CSharp.dll::AccessoryPreviewer::AccessoryPreviewer__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryPreviewer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AccessoryPreviewer->static_fields;
  (pAVar1->previewPosition).x = 0.0;
  (pAVar1->previewPosition).y = 0.0;
  (pAVar1->previewPosition).z = 0.0;
  return;
}

