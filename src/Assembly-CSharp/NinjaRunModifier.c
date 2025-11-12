
/* Void Awake() */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_Awake
               (NinjaRunModifier *this,MethodInfo *method)

{
  obj = (this->fields).soundEffect;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
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
  fVar4 = (float)(*pcRam_?)(pvVar2);
  (this->fields).initialVolume = fVar4;
  return;
}


/* IEnumerator DoFadeAndDestroy() */

IEnumerator *
Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_DoFadeAndDestroy
          (NinjaRunModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NinjaRunModifier___DoFadeAndDestroy_d__17);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__NinjaRunModifier___DoFadeAndDestroy_d__17);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnActivated
               (NinjaRunModifier *this,Avatar *target,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._.owner = target;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.owner >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar6 = (this->fields)._.owner;
  if (pAVar6 != (Avatar *)0x0) {
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pAVar6,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).ownerTransform = pTVar7;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).ownerTransform >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pAVar6 = (this->fields)._.owner;
    if (((pAVar6 != (Avatar *)0x0) &&
        (pMVar8 = (pAVar6->fields).mvAvatar, pMVar8 != (MVAvatar *)0x0)) &&
       (pTVar7 = (pMVar8->fields)._._.transform, pTVar7 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      pTVar7 = (this->fields).ownerTransform;
      pTVar12 = (this->fields).trailRenderer;
      fVar13 = (this->fields).startWidth;
      (this->fields).oldScale.x = 0.0;
      (this->fields).oldScale.y = 0.0;
      (this->fields).oldScale.z = 0.0;
      if (pTVar7 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_14 = 0;
        uStack_15 = 0;
        pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9);
        if (pTVar12 != (TrailRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_startWidth
                    (pTVar12,(float)uStack_14 * fVar13,(MethodInfo *)0x0);
          pTVar7 = (this->fields).ownerTransform;
          pTVar12 = (this->fields).trailRenderer;
          fVar13 = (this->fields).endWidth;
          if (pTVar7 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_14 = 0;
            uStack_15 = 0;
            pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)(pvVar9);
            if (pTVar12 != (TrailRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_endWidth
                        (pTVar12,(float)uStack_14 * fVar13,(MethodInfo *)0x0);
              pTVar12 = (this->fields).trailRenderer;
              if ((pTVar12 != (TrailRenderer *)0x0) &&
                 (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pTVar12,(MethodInfo *)0x0),
                 pTVar7 != (Transform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
                if (pvVar9 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pcRam_? = pcVar10;
                (*pcRam_?)(pvVar9);
                pTVar7 = (this->fields).ownerTransform;
                fVar13 = (this->fields).trailHeight;
                uStack_16 = 0;
                if (pTVar7 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_14 = 0;
                  uStack_15 = 0;
                  pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
                  if (pvVar9 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  (*pcRam_?)(pvVar9);
                  pTVar12 = (this->fields).trailRenderer;
                  uStack_16 = CONCAT44((float)uStack_14 * fVar13,(undefined4)uStack_16);
                  if ((pTVar12 != (TrailRenderer *)0x0) &&
                     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pTVar12,(MethodInfo *)0x0),
                     pTVar7 != (Transform *)0x0)) {
                    uStack_14 = uStack_16;
                    uStack_15 = 0;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
                    if (pvVar9 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    pcVar10 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                      uVar11 = func_?(&UNK_?);
                      FUN_?(uVar11,0);
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    pcRam_? = pcVar10;
                    (*pcRam_?)(pvVar9,&uStack_14);
                    return;
                  }
                  FUN_?();
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnDeactivated
               (NinjaRunModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).isDestroying = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pGVar1->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 == '\0') {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
    pvVar3 = (void *)0x0;
    if (pGVar1 != (GameObject *)0x0) {
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar3,0);
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NinjaRunModifier___DoFadeAndDestroy_d__17);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar6 = FUN_?(TypeInfo__NinjaRunModifier___DoFadeAndDestroy_d__17);
  bVar7 = iRam_? != 0;
  *(undefined4 *)(lVar6 + 0x10) = 0;
  *(NinjaRunModifier **)(lVar6 + 0x20) = this;
  if (bVar7) {
    uVar8 = (uint)(lVar6 + 0x20U >> 0xc);
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
  if (lVar6 == 0) {
    uVar4 = func_?(&TypeInfo__System__NullReferenceException,0,0,0,unaff_RSI);
    this_00 = (NullReferenceException *)func_?(uVar4);
    pSVar12 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar12,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar13 == 0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar4);
    pSVar12 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar12,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (NinjaRunModifier *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,lVar6);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnDisable
               (NinjaRunModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isDestroying == 0) {
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
  pvVar2 = (void *)0x0;
  if (pGVar1 != (GameObject *)0x0) {
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_Update
               (NinjaRunModifier *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.owner;
  pTVar2 = (this->fields).trailRenderer;
  if (pAVar1 != (Avatar *)0x0) {
    if ((pAVar1->fields).isLocal == 0) {
      bVar3 = true;
    }
    else {
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((((pMVar4 == (MainCameraManager *)0x0) ||
           (pMVar5 = (pMVar4->fields).cameraController, pMVar5 == (MVCameraController *)0x0)) ||
          (this_00 = (pMVar5->fields).cameraStack, this_00 == (MVCameraController_CameraStack *)0x0)
          ) || (pMVar6 = MVCameraController+CameraStack::
                          MVCameraController_CameraStack_get_CurCamera(this_00,(MethodInfo *)0x0),
               pMVar6 == (MVCameraBase *)0x0)) goto code_?;
      iVar7 = (*(pMVar6->klass->vtable).__unknown.methodPtr)
                         (pMVar6,(pMVar6->klass->vtable).__unknown.method);
      bVar3 = iVar7 != 0x10;
    }
    if (pTVar2 != (TrailRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)pTVar2,bVar3,(MethodInfo *)0x0);
      pTVar8 = (this->fields).ownerTransform;
      uStack_9._0_4_ = (this->fields).oldPosition.x;
      uStack_9._4_4_ = (this->fields).oldPosition.y;
      fVar10 = (this->fields).oldPosition.z;
      if (pTVar8 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(pvVar11);
        fVar14 = _UNK_?;
        fVar10 = fVar10 - 0.0;
        if (((uStack_9._4_4_ - 0.0) * (uStack_9._4_4_ - 0.0) +
             ((float)uStack_9 - 0.0) * ((float)uStack_9 - 0.0) + fVar10 * fVar10 < _UNK_?)
           || ((this->fields).isDestroying != 0)) {
          return;
        }
        pTVar8 = (this->fields).ownerTransform;
        if (pTVar8 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_9 = 0;
          fStack_15 = 0.0;
          pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(pvVar11);
          uVar16 = (this->fields).oldPosition.x;
          uVar17 = (this->fields).oldPosition.y;
          fStack_15 = fStack_15 - (this->fields).oldPosition.z;
          uStack_9 = CONCAT44(uStack_9._4_4_ - (float)uVar17,(float)uStack_9 - (float)uVar16);
          fVar10 = (float)FUN_?(&uStack_9);
          pTVar8 = (this->fields).ownerTransform;
          if (pTVar8 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_9 = 0;
            fStack_15 = 0.0;
            pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pvVar11);
            uVar18 = (this->fields).oldScale.x;
            uVar19 = (this->fields).oldScale.y;
            fVar20 = fStack_15 - (this->fields).oldScale.z;
            bVar3 = (uStack_9._4_4_ - (float)uVar19) * (uStack_9._4_4_ - (float)uVar19) +
                     ((float)uStack_9 - (float)uVar18) * ((float)uStack_9 - (float)uVar18) +
                     fVar20 * fVar20 < fVar14;
            if (!bVar3) {
              pTVar8 = (this->fields).ownerTransform;
              if (pTVar8 == (Transform *)0x0) goto code_?;
              if ((bool)cRam_? == bVar3) {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcRam_? = pcVar12;
              (*pcRam_?)(pvVar11);
              pTVar8 = (this->fields).ownerTransform;
              pTVar2 = (this->fields).trailRenderer;
              fVar14 = (this->fields).startWidth;
              (this->fields).oldScale.x = 0.0;
              (this->fields).oldScale.y = 0.0;
              (this->fields).oldScale.z = 0.0;
              if (pTVar8 == (Transform *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_9 = 0;
              fStack_15 = 0.0;
              pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcRam_? = pcVar12;
              (*pcRam_?)(pvVar11);
              if (pTVar2 == (TrailRenderer *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_startWidth
                        (pTVar2,(float)uStack_9 * fVar14,(MethodInfo *)0x0);
              pTVar8 = (this->fields).ownerTransform;
              pTVar2 = (this->fields).trailRenderer;
              fVar14 = (this->fields).endWidth;
              if (pTVar8 == (Transform *)0x0) goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_9 = 0;
              fStack_15 = 0.0;
              pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcRam_? = pcVar12;
              (*pcRam_?)(pvVar11);
              if (pTVar2 == (TrailRenderer *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_endWidth
                        (pTVar2,(float)uStack_9 * fVar14,(MethodInfo *)0x0);
            }
            pAVar1 = (this->fields)._.owner;
            if (pAVar1 != (Avatar *)0x0) {
              pAVar21 = (this->fields).soundEffect;
              if ((pAVar1->fields).isLocal == 0) {
                if (pAVar21 == (AudioSource *)0x0) goto code_?;
                fVar14 = _UNK_?;
                if (fVar10 <= _UNK_?) {
                  fVar14 = 0.0;
                }
              }
              else {
                if (fVar10 < 0.0) {
                  fVar10 = 0.0;
                }
                else if (_UNK_? < fVar10) {
                  fVar10 = _UNK_?;
                }
                fVar14 = fVar10;
                if (pAVar21 == (AudioSource *)0x0) goto code_?;
              }
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                        (pAVar21,fVar14,(MethodInfo *)0x0);
              pAVar21 = (this->fields).soundEffect;
              if (pAVar21 != (AudioSource *)0x0) {
                fVar10 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                         AudioSource_get_volume(pAVar21,(MethodInfo *)0x0);
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                          (pAVar21,fVar10 * (this->fields).initialVolume,(MethodInfo *)0x0);
                pTVar8 = (this->fields).ownerTransform;
                if (pTVar8 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_9 = 0;
                  fStack_15 = 0.0;
                  pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
                  if (pvVar11 != (void *)0x0) {
                    pcVar12 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                      uVar13 = func_?(&UNK_?);
                      FUN_?(uVar13,0);
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                    pcRam_? = pcVar12;
                    (*pcRam_?)(pvVar11,&uStack_9);
                    (this->fields).oldPosition.x = (float)uStack_9;
                    (this->fields).oldPosition.y = uStack_9._4_4_;
                    (this->fields).oldPosition.z = fStack_15;
                    return;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

