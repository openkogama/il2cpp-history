
/* Void Awake() */

void Assembly-CSharp.dll::MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_Awake
               (MaterialButtonTextureGenerator *this,MethodInfo *method)

{
  this_00 = (this->fields).meshRenderer;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if ((pMVar1 != (MaterialLoader *)0x0) && (this_00 != (MeshRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
              ((Renderer *)this_00,(pMVar1->fields)._CubeModelMaterial_k__BackingField,
               (MethodInfo *)0x0);
    uVar2 = MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
            ._0_4_;
    obj = (this->fields).pictureCamera;
    if (obj != (Camera *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                      ,MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                       ._0_4_,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Camera *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
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
      (*pcRam_?)(pvVar4,uVar2);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_OnDestroy
               (MaterialButtonTextureGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).pictureCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                     (pCVar1,(MethodInfo *)0x0);
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
      pCVar1 = (this->fields).pictureCamera;
      if (pCVar1 == (Camera *)0x0) goto code_?;
      pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                         (pCVar1,(MethodInfo *)0x0);
      pCVar1 = (this->fields).pictureCamera;
      if ((pCVar1 == (Camera *)0x0) ||
         (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0), pRVar2 == (RenderTexture *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                (pRVar2,(MethodInfo *)0x0);
    }
  }
  pCVar1 = (this->fields).pictureCamera;
  if (pCVar1 != (Camera *)0x0) {
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
    pvVar3 = (pCVar1->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar3,0);
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Texture2D TakePicture(Mesh) */

Texture2D *
Assembly-CSharp.dll::MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
          (MaterialButtonTextureGenerator *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshFilter;
  if (this_00 != (MeshFilter *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
              (this_00,mesh,(MethodInfo *)0x0);
    pCVar1 = (this->fields).pictureCamera;
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                (pCVar1,_UNK_?,(MethodInfo *)0x0);
      pCVar1 = (this->fields).pictureCamera;
      if (pCVar1 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pCVar1,1,(MethodInfo *)0x0);
        iVar2 = (this->fields).previewResolution;
        this_01 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
                  (this_01,iVar2,iVar2,0x10,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
        if (this_01 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)this_01,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)this_01,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (this_01->fields)._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            pTVar5 = (Texture2D *)(*pcVar4)();
            return pTVar5;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            pTVar5 = (Texture2D *)(*pcVar4)();
            return pTVar5;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3,2);
          pCVar1 = (this->fields).pictureCamera;
          if (pCVar1 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      (pCVar1,this_01,(MethodInfo *)0x0);
            pCVar1 = (this->fields).pictureCamera;
            if (pCVar1 != (Camera *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar3 = (pCVar1->fields)._._._.m_CachedPtr;
              if (pvVar3 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                pTVar5 = (Texture2D *)(*pcVar4)();
                return pTVar5;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar4 = (code *)swi(3);
                pTVar5 = (Texture2D *)(*pcVar4)();
                return pTVar5;
              }
              pcRam_? = pcVar4;
              (*pcRam_?)(pvVar3);
              pCVar1 = (this->fields).pictureCamera;
              if (pCVar1 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pCVar1,0,(MethodInfo *)0x0);
                iVar2 = (this->fields).previewResolution;
                pTVar5 = (Texture2D *)FUN_?(TypeInfo__UnityEngine__Texture2D);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Texture);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                auStack_7._0_4_ = 0.0;
                auStack_7._4_4_ = 0.0;
                stack0xffffffffffffffd0 = (String *)0x0;
                UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
                          (pTVar5,iVar2,iVar2,TextureFormat__Enum_ARGB32,1,0,(void *)0x0,0,
                           (MipmapLimitDescriptor *)auStack_7,(MethodInfo *)0x0);
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
                pvVar3 = (this_01->fields)._._.m_CachedPtr;
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar4 = (code *)swi(3);
                  pTVar5 = (Texture2D *)(*pcVar4)();
                  return pTVar5;
                }
                pcRam_? = pcVar4;
                (*pcRam_?)(pvVar3);
                iVar8 = (*(this_01->klass->vtable).get_width.methodPtr)
                                  (this_01,(this_01->klass->vtable).get_width.method);
                iVar9 = (*(this_01->klass->vtable).get_height.methodPtr)
                                  (this_01,(this_01->klass->vtable).get_height.method);
                if (pTVar5 != (Texture2D *)0x0) {
                  stack0xffffffffffffffd0 = (String *)CONCAT44((float)iVar9,(float)iVar8);
                  auStack_7._0_4_ = 0.0;
                  auStack_7._4_4_ = 0.0;
                  UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                            (pTVar5,(Rect *)auStack_7,0,0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply
                            (pTVar5,1,0,(MethodInfo *)0x0);
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
                  pcVar4 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                    uVar6 = func_?(&UNK_?);
                    FUN_?(uVar6,0);
                    pcVar4 = (code *)swi(3);
                    pTVar5 = (Texture2D *)(*pcVar4)();
                    return pTVar5;
                  }
                  pcRam_? = pcVar4;
                  (*pcRam_?)(0);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar3 = (this_01->fields)._._.m_CachedPtr;
                  if (pvVar3 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
                    pcVar4 = (code *)swi(3);
                    pTVar5 = (Texture2D *)(*pcVar4)();
                    return pTVar5;
                  }
                  pcVar4 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                    uVar6 = func_?(&UNK_?);
                    FUN_?(uVar6,0);
                    pcVar4 = (code *)swi(3);
                    pTVar5 = (Texture2D *)(*pcVar4)();
                    return pTVar5;
                  }
                  pcRam_? = pcVar4;
                  (*pcRam_?)(pvVar3);
                  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (this_02 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                              (this_02,(Transform *)0x0,(MethodInfo *)0x0);
                    bVar10 = iRam_? != 0;
                    (this->fields).testTexture2D = pTVar5;
                    if (bVar10) {
                      uVar11 = (uint)((ulonglong)&(this->fields).testTexture2D >> 0xc);
                      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                      do {
                        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                        LOCK();
                        bVar10 = uVar13 == *puVar14;
                        if (bVar10) {
                          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar10);
                    }
                    return pTVar5;
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
  pcVar4 = (code *)swi(3);
  pTVar5 = (Texture2D *)(*pcVar4)();
  return pTVar5;
}


/* MaterialButtonTextureGenerator() */

void Assembly-CSharp.dll::MaterialButtonTextureGenerator::MaterialButtonTextureGenerator__ctor
               (MaterialButtonTextureGenerator *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).previewResolution = 0x100;
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

