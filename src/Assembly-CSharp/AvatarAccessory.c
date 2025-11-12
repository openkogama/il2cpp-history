
/* Void Awake() */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_Awake
               (AvatarAccessory *this,MethodInfo *method)

{
  pCVar1 = AvatarAccessory_get_Colliders(this,(MethodInfo *)0x0);
  uVar2 = 0;
  uVar3 = 0;
  if (pCVar1 != (Collider__Array *)0x0) {
    ppCVar4 = pCVar1->vector;
    for (; (int)uVar3 < (int)pCVar1->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pCVar1->max_length <= uVar3) goto code_?;
      obj = *ppCVar4;
      if (obj == (Collider *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (obj->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,0);
      ppCVar4 = ppCVar4 + 1;
    }
    pRVar8 = AvatarAccessory_get_Renderers(this,(MethodInfo *)0x0);
    if (pRVar8 != (Renderer__Array *)0x0) {
      ppRVar9 = pRVar8->vector;
      do {
        if ((int)pRVar8->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pRVar8->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        obj_00 = *ppRVar9;
        if (obj_00 == (Renderer *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (obj_00->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5);
        uVar2 = uVar2 + 1;
        ppRVar9 = ppRVar9 + 1;
      } while( true );
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Bounds GetLocalBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_GetLocalBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = this->klass;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  puVar2 = (undefined8 *)
           (*(pAVar1->vtable).GetWorldBounds.methodPtr)
                     (&uStack_3,this,(pAVar1->vtable).GetWorldBounds.method);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  (__return_storage_ptr__->m_Center).x = (float)(int)uVar4;
  (__return_storage_ptr__->m_Center).y = (float)(int)((ulonglong)uVar4 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar5;
  (__return_storage_ptr__->m_Extents).y = (float)(int)uVar6;
  (__return_storage_ptr__->m_Extents).z = (float)(int)((ulonglong)uVar6 >> 0x20);
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar7 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar7->fields)._._.m_CachedPtr != (void *)0x0) {
      uStack_3._0_4_ = (__return_storage_ptr__->m_Center).x;
      uStack_3._4_4_ = (__return_storage_ptr__->m_Center).y;
      fVar8 = (__return_storage_ptr__->m_Center).z;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar7 == (Transform *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        pBVar10 = (Bounds *)(*pcVar9)();
        return pBVar10;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_11 = 0;
      fStack_12 = 0.0;
      pvVar13 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        pBVar10 = (Bounds *)(*pcVar9)();
        return pBVar10;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar9 = (code *)swi(3);
        pBVar10 = (Bounds *)(*pcVar9)();
        return pBVar10;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar13,&uStack_11);
      (__return_storage_ptr__->m_Center).x = (float)uStack_3 - (float)uStack_11;
      (__return_storage_ptr__->m_Center).y = uStack_3._4_4_ - uStack_11._4_4_;
      (__return_storage_ptr__->m_Center).z = fVar8 - fStack_12;
    }
  }
  return __return_storage_ptr__;
}


/* Bounds GetWorldBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_GetWorldBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessory *this,MethodInfo *method)

{
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  pRVar1 = AvatarAccessory_get_Renderers(this,(MethodInfo *)0x0);
  uVar2 = 0;
  if (pRVar1 != (Renderer__Array *)0x0) {
    ppRVar3 = pRVar1->vector;
    while( true ) {
      if ((int)pRVar1->max_length <= (int)uVar2) {
        return __return_storage_ptr__;
      }
      if ((uint)pRVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        pBVar5 = (Bounds *)(*pcVar4)();
        return pBVar5;
      }
      if (*ppRVar3 == (Renderer *)0x0) break;
      pBVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_6,*ppRVar3,(MethodInfo *)0x0);
      fVar7 = (pBVar5->m_Center).y;
      uVar8 = *(undefined8 *)&(pBVar5->m_Center).z;
      fVar9 = (pBVar5->m_Extents).y;
      fVar10 = (pBVar5->m_Extents).z;
      (__return_storage_ptr__->m_Center).x = (pBVar5->m_Center).x;
      (__return_storage_ptr__->m_Center).y = fVar7;
      *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar8;
      (__return_storage_ptr__->m_Extents).y = fVar9;
      (__return_storage_ptr__->m_Extents).z = fVar10;
      uVar2 = uVar2 + 1;
      ppRVar3 = ppRVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pBVar5 = (Bounds *)(*pcVar4)();
  return pBVar5;
}


/* Void InitAccessory(String, String) */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_InitAccessory
               (AvatarAccessory *this,String *assetReqPath,String *bundleName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Accessory_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._AssetPath_k__BackingField = assetReqPath;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._AssetPath_k__BackingField >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Accessory_,(this->fields)._AssetPath_k__BackingField,
                      (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Object>_UnityEngine__Object_
                  ,pSVar6,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStack_7 = (uint16_t *)0x0;
  uStack_8 = 0;
  uStack_9 = 0;
  puStack_10 = &stack0x00000008;
  if (this != (AvatarAccessory *)0x0) {
    pvVar11 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar11 != (void *)0x0) {
      if (pSVar6 != (String *)0x0) {
        if ((pSVar6->fields)._stringLength == 0) {
          puStack_7 = (uint16_t *)0x1;
          uStack_8 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar12 = (pSVar6->fields)._stringLength;
          puStack_7 = &(pSVar6->fields)._firstChar;
          if (iVar12 == 0) {
            puStack_7 = (uint16_t *)0x0;
          }
          uStack_8 = CONCAT44(uStack_8._4_4_,iVar12);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? != (code *)0x0) ||
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 != (code *)0x0)) {
        pcRam_? = pcVar13;
        (*pcRam_?)(pvVar11,&puStack_7);
        return;
      }
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Collider[] get_Colliders() */

Collider__Array *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Colliders
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._colliders == (Collider__Array *)0x0) {
    pCVar1 = (Collider__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                       );
    bVar2 = iRam_? == 0;
    (this->fields)._colliders = pCVar1;
    if (bVar2) {
      return pCVar1;
    }
    uVar3 = (uint)((ulonglong)&(this->fields)._colliders >> 0xc);
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
  return (this->fields)._colliders;
}


/* Renderer[] get_Renderers() */

Renderer__Array *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Renderers
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._renderers == (Renderer__Array *)0x0) {
    pRVar1 = (Renderer__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    bVar2 = iRam_? == 0;
    (this->fields)._renderers = pRVar1;
    if (bVar2) {
      return pRVar1;
    }
    uVar3 = (uint)((ulonglong)&(this->fields)._renderers >> 0xc);
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
  return (this->fields)._renderers;
}


/* Transform get_Transform() */

Transform *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Transform
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._transform;
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
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  bVar2 = iRam_? == 0;
  (this->fields)._transform = pTVar1;
  if (bVar2) {
    return pTVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields)._transform >> 0xc);
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
code_?:
  return (this->fields)._transform;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_set_Visible
               (AvatarAccessory *this,bool value,MethodInfo *method)

{
  if ((this->fields)._visible != value) {
    pRVar1 = AvatarAccessory_get_Renderers(this,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pRVar1 == (Renderer__Array *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppRVar4 = pRVar1->vector;
    for (; (int)uVar2 < (int)pRVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pRVar1->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      obj = *ppRVar4;
      if (obj == (Renderer *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (obj->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar5);
      ppRVar4 = ppRVar4 + 1;
    }
    (this->fields)._visible = value;
  }
  return;
}

