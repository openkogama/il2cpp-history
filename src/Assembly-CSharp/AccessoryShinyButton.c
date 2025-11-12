
/* Void Start() */

void Assembly-CSharp.dll::AccessoryShinyButton::AccessoryShinyButton_Start
               (AccessoryShinyButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonShine;
  if (this_00 == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pRVar2 = (RectTransform *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this_00,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                     );
  bVar3 = iRam_? != 0;
  (this->fields).shine = pRVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).shine >> 0xc);
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
  (this->fields).currentProgress = 0.0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AccessoryShinyButton::AccessoryShinyButton_Update
               (AccessoryShinyButton *this,MethodInfo *method)

{
  fVar1 = (this->fields).currentProgress;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar4 = fVar4 + fVar1;
  pfVar5 = &(this->fields).animationDuration;
  (this->fields).currentProgress = fVar4;
  if (*pfVar5 <= fVar4 && fVar4 != *pfVar5) {
    (this->fields).currentProgress = 0.0;
  }
  pRVar6 = (this->fields).shine;
  if (pRVar6 != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pRVar6->fields)._._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar6,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar7);
    pRVar6 = (this->fields).buttonRect;
    if (pRVar6 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_8 = 0;
      uStack_9 = 0;
      pvVar7 = (pRVar6->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar6,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar7);
      pAVar10 = (this->fields).buttonShinePositionCurve;
      if (pAVar10 != (AnimationCurve *)0x0) {
        pvVar7 = (pAVar10->fields).m_Ptr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar10,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = (this->fields).currentProgress;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar1 = (float)(*pcRam_?)(pvVar7,fVar1);
        pRVar6 = (this->fields).shine;
        if (pRVar6 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pRVar6->fields)._._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar6,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar7);
          pRVar6 = (this->fields).shine;
          uStack_11 = (ulonglong)(uint)((float)uStack_9 * fVar1 - 0.0);
          if (pRVar6 != (RectTransform *)0x0) {
            uStack_8 = uStack_11;
            uStack_9 = uStack_9 & 0xffffffff00000000;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar7 = (pRVar6->fields)._._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar6,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pvVar7);
            pIVar12 = (this->fields).topFlare;
            if ((pIVar12 != (Image *)0x0) &&
               (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pIVar12,(MethodInfo *)0x0),
               pTVar13 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar7 = (pTVar13->fields)._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar3 = func_?(&UNK_?);
                FUN_?(uVar3,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar7);
              pRVar6 = (this->fields).buttonRect;
              if (pRVar6 != (RectTransform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_14 = 0;
                uStack_15 = 0;
                pvVar7 = (pRVar6->fields)._._._.m_CachedPtr;
                if (pvVar7 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar6,(MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcVar2 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcRam_? = pcVar2;
                (*pcRam_?)(pvVar7);
                pAVar10 = (this->fields).topFlarePositionCurve;
                if (pAVar10 != (AnimationCurve *)0x0) {
                  pvVar7 = (pAVar10->fields).m_Ptr;
                  if (pvVar7 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar10,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  fVar1 = (this->fields).currentProgress;
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar3 = func_?(&UNK_?);
                    FUN_?(uVar3,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  fVar1 = (float)(*pcRam_?)(pvVar7,fVar1);
                  pIVar12 = (this->fields).topFlare;
                  uStack_11 = (ulonglong)(uint)(fVar1 * (float)uStack_15);
                  if ((pIVar12 != (Image *)0x0) &&
                     (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pIVar12,(MethodInfo *)0x0),
                     pTVar13 != (Transform *)0x0)) {
                    uStack_8 = uStack_11;
                    uStack_9 = uStack_9 & 0xffffffff00000000;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar7 = (pTVar13->fields)._._.m_CachedPtr;
                    if (pvVar7 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0)
                      ;
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar3 = func_?(&UNK_?);
                      FUN_?(uVar3,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcRam_? = pcVar2;
                    (*pcRam_?)(pvVar7,&uStack_8);
                    pIVar12 = (this->fields).topFlare;
                    if (pIVar12 != (Image *)0x0) {
                      puVar16 = (ulonglong *)
                                (*(pIVar12->klass->vtable).get_color.methodPtr)
                                          (&uStack_14,pIVar12,
                                           (pIVar12->klass->vtable).get_color.method);
                      pAVar10 = (this->fields).flareAlphaCurve;
                      uVar17 = *puVar16;
                      uVar18 = *puVar16;
                      uVar19 = puVar16[1];
                      if (pAVar10 != (AnimationCurve *)0x0) {
                        pvVar7 = (pAVar10->fields).m_Ptr;
                        if (pvVar7 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pAVar10,(MethodInfo *)0x0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        fVar1 = (this->fields).currentProgress;
                        pcVar2 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0))
                        {
                          uVar3 = func_?(&UNK_?);
                          FUN_?(uVar3,0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcRam_? = pcVar2;
                        uVar20 = (*pcRam_?)(pvVar7,fVar1);
                        pIVar12 = (this->fields).topFlare;
                        if (pIVar12 != (Image *)0x0) {
                          uStack_9 = CONCAT44(uVar20,(int)uVar19);
                          uStack_15 = CONCAT44(uVar20,(int)uVar19);
                          uStack_8 = uVar18;
                          uStack_14 = uVar17;
                          (*(pIVar12->klass->vtable).set_color.methodPtr)
                                    (pIVar12,&uStack_14,(pIVar12->klass->vtable).set_color.method);
                          pIVar12 = (this->fields).bottomFlare;
                          if ((pIVar12 != (Image *)0x0) &&
                             (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pIVar12,(MethodInfo *)0x0),
                             pTVar13 != (Transform *)0x0)) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pvVar7 = (pTVar13->fields)._._.m_CachedPtr;
                            if (pvVar7 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pTVar13,(MethodInfo *)0x0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcVar2 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar2 = (code *)FUN_?(&UNK_?),
                               pcVar2 == (code *)0x0)) {
                              uVar3 = func_?(&UNK_?);
                              FUN_?(uVar3,0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcRam_? = pcVar2;
                            (*pcRam_?)(pvVar7);
                            pRVar6 = (this->fields).buttonRect;
                            if (pRVar6 != (RectTransform *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              uStack_14 = 0;
                              uStack_15 = 0;
                              pvVar7 = (pRVar6->fields)._._._.m_CachedPtr;
                              if (pvVar7 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pRVar6,(MethodInfo *)0x0);
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pcVar2 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar2 = (code *)FUN_?(&UNK_?),
                                 pcVar2 == (code *)0x0)) {
                                uVar3 = func_?(&UNK_?);
                                FUN_?(uVar3,0);
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pcRam_? = pcVar2;
                              (*pcRam_?)(pvVar7);
                              pAVar10 = (this->fields).bottomFlarePositionCurve;
                              if (pAVar10 != (AnimationCurve *)0x0) {
                                pvVar7 = (pAVar10->fields).m_Ptr;
                                if (pvVar7 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pAVar10,(MethodInfo *)0x0);
                                  pcVar2 = (code *)swi(3);
                                  (*pcVar2)();
                                  return;
                                }
                                fVar1 = (this->fields).currentProgress;
                                pcVar2 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar2 = (code *)FUN_?(&UNK_?),
                                   pcVar2 == (code *)0x0)) {
                                  uVar3 = func_?(&UNK_?);
                                  FUN_?(uVar3,0);
                                  pcVar2 = (code *)swi(3);
                                  (*pcVar2)();
                                  return;
                                }
                                pcRam_? = pcVar2;
                                fVar1 = (float)(*pcRam_?)(pvVar7,fVar1);
                                pIVar12 = (this->fields).bottomFlare;
                                uStack_11 = (ulonglong)(uint)(fVar1 * (float)uStack_15);
                                if ((pIVar12 != (Image *)0x0) &&
                                   (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_transform
                                                        ((Component *)pIVar12,(MethodInfo *)0x0),
                                   pTVar13 != (Transform *)0x0)) {
                                  uStack_8 = uStack_11;
                                  uStack_9 = uStack_9 & 0xffffffff00000000;
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar7 = (pTVar13->fields)._._.m_CachedPtr;
                                  if (pvVar7 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)pTVar13,(MethodInfo *)0x0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcVar2 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar2 = (code *)FUN_?(&UNK_?),
                                     pcVar2 == (code *)0x0)) {
                                    uVar3 = func_?(&UNK_?);
                                    FUN_?(uVar3,0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcRam_? = pcVar2;
                                  (*pcRam_?)(pvVar7,&uStack_8);
                                  pIVar12 = (this->fields).bottomFlare;
                                  if (pIVar12 != (Image *)0x0) {
                                    puVar16 = (ulonglong *)
                                              (*(pIVar12->klass->vtable).get_color.methodPtr)
                                                        (&uStack_14,pIVar12,
                                                         (pIVar12->klass->vtable).get_color.method);
                                    pAVar10 = (this->fields).flareAlphaCurve;
                                    uVar18 = *puVar16;
                                    uVar17 = puVar16[1];
                                    if (pAVar10 != (AnimationCurve *)0x0) {
                                      pvVar7 = (pAVar10->fields).m_Ptr;
                                      if (pvVar7 == (void *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  ((Object *)pAVar10,(MethodInfo *)0x0);
                                        pcVar2 = (code *)swi(3);
                                        (*pcVar2)();
                                        return;
                                      }
                                      fVar1 = (this->fields).currentProgress;
                                      pcVar2 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar2 = (code *)FUN_?(&UNK_?),
                                         pcVar2 == (code *)0x0)) {
                                        uVar3 = func_?(&UNK_?);
                                        FUN_?(uVar3,0);
                                        pcVar2 = (code *)swi(3);
                                        (*pcVar2)();
                                        return;
                                      }
                                      pcRam_? = pcVar2;
                                      uVar20 = (*pcRam_?)(pvVar7,fVar1);
                                      pIVar12 = (this->fields).bottomFlare;
                                      if (pIVar12 != (Image *)0x0) {
                                        uStack_15 = CONCAT44(uVar20,(int)uVar17);
                                        uStack_14 = uVar18;
                                        (*(pIVar12->klass->vtable).set_color.methodPtr)
                                                  (pIVar12,&uStack_14,
                                                   (pIVar12->klass->vtable).set_color.method);
                                        return;
                                      }
                                    }
                                    goto DAT_?;
                                  }
                                }
                              }
                              FUN_?();
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                          }
                        }
                      }
                      goto DAT_?;
                    }
                  }
                }
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              goto DAT_?;
            }
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

