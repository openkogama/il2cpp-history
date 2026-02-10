
/* Boolean BindAttachedBubble(ChatBubble, String) */

bool Assembly-CSharp.dll::ChatAnchor::ChatAnchor_BindAttachedBubble
               (ChatAnchor *this,ChatBubble *value,String *ownerName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
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
  if (value != (ChatBubble *)0x0 || pCVar1 != (ChatBubble *)0x0) {
    if (value == (ChatBubble *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pCVar1 == (ChatBubble *)0x0) goto code_?;
      bVar2 = (pCVar1->fields)._._._._.m_CachedPtr == (void *)0x0;
    }
    else if (pCVar1 == (ChatBubble *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = (value->fields)._._._._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar2 = pCVar1 == value;
    }
    iVar3 = iRam_?;
    if (!bVar2) {
      (this->fields).AttachedBubble = value;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).AttachedBubble >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar2 = uVar6 == *puVar7;
          if (bVar2) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar3 = iRam_?;
        } while (!bVar2);
      }
      (this->fields)._OwnerName_k__BackingField = ownerName;
      iVar8 = 0;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields)._OwnerName_k__BackingField >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar2 = uVar6 == *puVar7;
          if (bVar2) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar8 = iRam_?;
        } while (!bVar2);
      }
      pCVar1 = (this->fields).AttachedBubble;
      if (pCVar1 != (ChatBubble *)0x0) {
        (pCVar1->fields).anchor = this;
        if (iVar8 != 0) {
          uVar4 = (uint)((ulonglong)&(pCVar1->fields).anchor >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar2 = uVar6 == *puVar7;
            if (bVar2) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        (this->fields).snapTracking = 1;
        return 1;
      }
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
  }
  return 0;
}


/* Vector3 HandleOffScreenChatBubble(Camera, Vector3) */

Vector3 * Assembly-CSharp.dll::ChatAnchor::ChatAnchor_HandleOffScreenChatBubble
                    (Vector3 *__return_storage_ptr__,ChatAnchor *this,Camera *camera,
                    Vector3 *adjustedPosition,MethodInfo *method)

{
  pCVar1 = (this->fields).AttachedBubble;
  if ((pCVar1 != (ChatBubble *)0x0) &&
     (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
     pRVar2 != (RectTransform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar6)();
      return pVVar7;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5);
    pCVar1 = (this->fields).AttachedBubble;
    if ((pCVar1 != (ChatBubble *)0x0) &&
       (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
       pRVar2 != (RectTransform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = 0;
      uStack_10 = 0;
      pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pVVar7 = (Vector3 *)(*pcVar6)();
        return pVVar7;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        pVVar7 = (Vector3 *)(*pcVar6)();
        return pVVar7;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5);
      pCVar1 = (this->fields).AttachedBubble;
      if ((pCVar1 != (ChatBubble *)0x0) &&
         (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
         pRVar2 != (RectTransform *)0x0)) {
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                          (pRVar2,(MethodInfo *)0x0);
        fVar12 = _UNK_?;
        fStackX_8 = VVar11.x;
        fVar13 = (float)uStack_4 * (float)uStack_9 * fStackX_8 + _UNK_?;
        if (camera != (Camera *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (camera->fields)._._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            pVVar7 = (Vector3 *)(*pcVar6)();
            return pVVar7;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            pVVar7 = (Vector3 *)(*pcVar6)();
            return pVVar7;
          }
          pcRam_? = pcVar6;
          iVar14 = (*pcRam_?)(pvVar5);
          pCVar1 = (this->fields).AttachedBubble;
          if ((pCVar1 != (ChatBubble *)0x0) &&
             (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
             pRVar2 != (RectTransform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_3 = 0;
            uStack_4 = 0;
            pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              pVVar7 = (Vector3 *)(*pcVar6)();
              return pVVar7;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              pVVar7 = (Vector3 *)(*pcVar6)();
              return pVVar7;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar5);
            pCVar1 = (this->fields).AttachedBubble;
            if ((pCVar1 != (ChatBubble *)0x0) &&
               (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
               pRVar2 != (RectTransform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_9 = 0;
              uStack_10 = 0;
              pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
              if (pvVar5 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                pVVar7 = (Vector3 *)(*pcVar6)();
                return pVVar7;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar6 = (code *)swi(3);
                pVVar7 = (Vector3 *)(*pcVar6)();
                return pVVar7;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pvVar5);
              pCVar1 = (this->fields).AttachedBubble;
              if ((pCVar1 != (ChatBubble *)0x0) &&
                 (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
                 pRVar2 != (RectTransform *)0x0)) {
                VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_pivot(pRVar2,(MethodInfo *)0x0);
                fVar15 = _UNK_?;
                pCVar1 = (this->fields).AttachedBubble;
                fStackX_8 = VVar11.x;
                fVar16 = ((float)iVar14 -
                         (float)uStack_4 * (float)uStack_9 * (_UNK_? - fStackX_8)) -
                         fVar12;
                if ((pCVar1 != (ChatBubble *)0x0) &&
                   (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
                   pRVar2 != (RectTransform *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_3 = 0;
                  uStack_4 = 0;
                  pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
                  if (pvVar5 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
                    pcVar6 = (code *)swi(3);
                    pVVar7 = (Vector3 *)(*pcVar6)();
                    return pVVar7;
                  }
                  pcVar6 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar6 = (code *)swi(3);
                    pVVar7 = (Vector3 *)(*pcVar6)();
                    return pVVar7;
                  }
                  pcRam_? = pcVar6;
                  (*pcRam_?)(pvVar5);
                  pCVar1 = (this->fields).AttachedBubble;
                  if ((pCVar1 != (ChatBubble *)0x0) &&
                     (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
                     pRVar2 != (RectTransform *)0x0)) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uStack_9 = 0;
                    uStack_10 = 0;
                    pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
                    if (pvVar5 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
                      pcVar6 = (code *)swi(3);
                      pVVar7 = (Vector3 *)(*pcVar6)();
                      return pVVar7;
                    }
                    pcVar6 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                      uVar8 = func_?(&UNK_?);
                      FUN_?(uVar8,0);
                      pcVar6 = (code *)swi(3);
                      pVVar7 = (Vector3 *)(*pcVar6)();
                      return pVVar7;
                    }
                    pcRam_? = pcVar6;
                    (*pcRam_?)(pvVar5);
                    pCVar1 = (this->fields).AttachedBubble;
                    if ((pCVar1 != (ChatBubble *)0x0) &&
                       (pRVar2 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
                       pRVar2 != (RectTransform *)0x0)) {
                      VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                              RectTransform_get_pivot(pRVar2,(MethodInfo *)0x0);
                      fStackX_c = VVar11.y;
                      fVar17 = uStack_4._4_4_ * uStack_9._4_4_ * fStackX_c + fVar12;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar5 = (camera->fields)._._._.m_CachedPtr;
                      if (pvVar5 == (void *)0x0) goto code_?;
                      pcVar6 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar6 = (code *)swi(3);
                        pVVar7 = (Vector3 *)(*pcVar6)();
                        return pVVar7;
                      }
                      pcRam_? = pcVar6;
                      iVar14 = (*pcRam_?)(pvVar5);
                      pCVar1 = (this->fields).AttachedBubble;
                      if ((pCVar1 != (ChatBubble *)0x0) &&
                         (pRVar2 = ChatBubble::ChatBubble_get_RectTransform
                                             (pCVar1,(MethodInfo *)0x0),
                         pRVar2 != (RectTransform *)0x0)) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        uStack_3 = 0;
                        uStack_4 = 0;
                        pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
                        if (pvVar5 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pRVar2,(MethodInfo *)0x0);
                          pcVar6 = (code *)swi(3);
                          pVVar7 = (Vector3 *)(*pcVar6)();
                          return pVVar7;
                        }
                        pcVar6 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                        {
                          uVar8 = func_?(&UNK_?);
                          FUN_?(uVar8,0);
                          pcVar6 = (code *)swi(3);
                          pVVar7 = (Vector3 *)(*pcVar6)();
                          return pVVar7;
                        }
                        pcRam_? = pcVar6;
                        (*pcRam_?)(pvVar5);
                        pCVar1 = (this->fields).AttachedBubble;
                        if ((pCVar1 != (ChatBubble *)0x0) &&
                           (pRVar2 = ChatBubble::ChatBubble_get_RectTransform
                                               (pCVar1,(MethodInfo *)0x0),
                           pRVar2 != (RectTransform *)0x0)) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          uStack_9 = 0;
                          uStack_10 = 0;
                          pvVar5 = (pRVar2->fields)._._._.m_CachedPtr;
                          if (pvVar5 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pRVar2,(MethodInfo *)0x0);
                            pcVar6 = (code *)swi(3);
                            pVVar7 = (Vector3 *)(*pcVar6)();
                            return pVVar7;
                          }
                          pcVar6 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)
                             ) {
                            uVar8 = func_?(&UNK_?);
                            FUN_?(uVar8,0);
                            pcVar6 = (code *)swi(3);
                            pVVar7 = (Vector3 *)(*pcVar6)();
                            return pVVar7;
                          }
                          pcRam_? = pcVar6;
                          (*pcRam_?)(pvVar5);
                          pCVar1 = (this->fields).AttachedBubble;
                          if ((pCVar1 != (ChatBubble *)0x0) &&
                             (pRVar2 = ChatBubble::ChatBubble_get_RectTransform
                                                 (pCVar1,(MethodInfo *)0x0),
                             pRVar2 != (RectTransform *)0x0)) {
                            VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                    RectTransform_get_pivot(pRVar2,(MethodInfo *)0x0);
                            fStackX_c = VVar11.y;
                            fVar12 = ((float)iVar14 -
                                     uStack_4._4_4_ * uStack_9._4_4_ * (fVar15 - fStackX_c)) -
                                     fVar12;
                            if ((this->fields).KeepInView != 0) {
                              fVar18 = adjustedPosition->x;
                              fVar19 = fVar13;
                              if ((fVar13 <= fVar18) && (fVar19 = fVar18, fVar16 < fVar18)) {
                                fVar19 = fVar16;
                              }
                              fVar18 = adjustedPosition->y;
                              adjustedPosition->x = fVar19;
                              fVar19 = fVar17;
                              if ((fVar17 <= fVar18) && (fVar19 = fVar18, fVar12 < fVar18)) {
                                fVar19 = fVar12;
                              }
                              adjustedPosition->y = fVar19;
                            }
                            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)this,(MethodInfo *)0x0);
                            if (obj != (Transform *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              uStack_9 = 0;
                              uStack_10 = 0;
                              pvVar5 = (obj->fields)._._.m_CachedPtr;
                              if (pvVar5 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)obj,(MethodInfo *)0x0);
                                pcVar6 = (code *)swi(3);
                                pVVar7 = (Vector3 *)(*pcVar6)();
                                return pVVar7;
                              }
                              pcVar6 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar6 = (code *)FUN_?(&UNK_?),
                                 pcVar6 == (code *)0x0)) {
                                uVar8 = func_?(&UNK_?);
                                FUN_?(uVar8,0);
                                pcVar6 = (code *)swi(3);
                                pVVar7 = (Vector3 *)(*pcVar6)();
                                return pVVar7;
                              }
                              pcRam_? = pcVar6;
                              (*pcRam_?)(pvVar5);
                              uStack_3 = uStack_9;
                              uStack_4 = CONCAT44(uStack_4._4_4_,uStack_10);
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              uStack_20 = 0;
                              fStack_21 = 0.0;
                              pvVar5 = (camera->fields)._._._.m_CachedPtr;
                              if (pvVar5 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)camera,(MethodInfo *)0x0);
                                pcVar6 = (code *)swi(3);
                                pVVar7 = (Vector3 *)(*pcVar6)();
                                return pVVar7;
                              }
                              pcVar6 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar6 = (code *)FUN_?(&UNK_?),
                                 pcVar6 == (code *)0x0)) {
                                uVar8 = func_?(&UNK_?);
                                FUN_?(uVar8,0);
                                pcVar6 = (code *)swi(3);
                                pVVar7 = (Vector3 *)(*pcVar6)();
                                return pVVar7;
                              }
                              pcRam_? = pcVar6;
                              (*pcRam_?)(pvVar5,&uStack_3,2,&uStack_20);
                              if ((((fStack_21 <= 0.0) || ((float)uStack_20 <= 0.0)) ||
                                  (fVar15 <= (float)uStack_20)) ||
                                 ((uStack_20._4_4_ <= 0.0 || (fVar15 <= uStack_20._4_4_)))) {
                                pCVar1 = (this->fields).AttachedBubble;
                                if (pCVar1 == (ChatBubble *)0x0) goto code_?;
                                iVar14 = (pCVar1->fields).ExtenderDock;
                                if (iVar14 == 0) {
                                  adjustedPosition->y = fVar17;
                                }
                                else if (iVar14 == 1) {
                                  adjustedPosition->x = fVar13;
                                }
                                else if (iVar14 == 2) {
                                  adjustedPosition->x = fVar16;
                                }
                                else if (iVar14 == 3) {
                                  adjustedPosition->y = fVar12;
                                }
                              }
                              fVar12 = adjustedPosition->z;
                              fVar13 = adjustedPosition->y;
                              __return_storage_ptr__->x = adjustedPosition->x;
                              __return_storage_ptr__->y = fVar13;
                              __return_storage_ptr__->z = fVar12;
                              return __return_storage_ptr__;
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
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Void HideChatBubble() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_HideChatBubble(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
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
  if (pCVar1 != (ChatBubble *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).AttachedBubble;
      if (pCVar1 == (ChatBubble *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ChatBubble::ChatBubble_HideBubble(pCVar1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize(Boolean, Avatar) */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_Initialize
               (ChatAnchor *this,bool isLocal,Avatar *avatar,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).isLocal = isLocal;
  (this->fields).avatar = avatar;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatar >> 0xc);
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
  return;
}


/* Void InterpolateToNewBubblePosition(Vector3) */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_InterpolateToNewBubblePosition
               (ChatAnchor *this,Vector3 *adjustedPosition,MethodInfo *method)

{
  uVar1 = adjustedPosition->x;
  uVar2 = adjustedPosition->y;
  (this->fields).previousAdjustedPosition.z = adjustedPosition->z;
  uVar3 = (this->fields).previousAdjustedPosition.x;
  uVar4 = (this->fields).previousAdjustedPosition.y;
  fVar5 = adjustedPosition->z - (this->fields).previousAdjustedPosition.z;
  if (_UNK_? <=
      ((float)uVar2 - (float)uVar4) * ((float)uVar2 - (float)uVar4) +
      ((float)uVar1 - (float)uVar3) * ((float)uVar1 - (float)uVar3) + fVar5 * fVar5) {
    (this->fields).currentInterpolationProgress = 0.0;
  }
  fVar5 = (this->fields).currentInterpolationProgress;
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
  fVar8 = (float)(*pcRam_?)();
  pCVar9 = (this->fields).AttachedBubble;
  (this->fields).currentInterpolationProgress = fVar8 * (this->fields).TrackingSpeed + fVar5;
  if (pCVar9 != (ChatBubble *)0x0) {
    pRVar10 = ChatBubble::ChatBubble_get_RectTransform(pCVar9,(MethodInfo *)0x0);
    pCVar9 = (this->fields).AttachedBubble;
    if ((pCVar9 != (ChatBubble *)0x0) &&
       (pRVar11 = ChatBubble::ChatBubble_get_RectTransform(pCVar9,(MethodInfo *)0x0),
       pRVar11 != (RectTransform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar12 = (pRVar11->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar11,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar12);
      if (pRVar10 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar12 = (pRVar10->fields)._._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar12);
        pCVar9 = (this->fields).AttachedBubble;
        if (pCVar9 != (ChatBubble *)0x0) {
          pRVar10 = ChatBubble::ChatBubble_get_RectTransform(pCVar9,(MethodInfo *)0x0);
          pCVar9 = (this->fields).AttachedBubble;
          if ((pCVar9 != (ChatBubble *)0x0) &&
             (pRVar11 = ChatBubble::ChatBubble_get_RectTransform(pCVar9,(MethodInfo *)0x0),
             pRVar11 != (RectTransform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (pRVar11->fields)._._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar11,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar12);
            if (pRVar10 == (RectTransform *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uStack_13 = 0;
            uStack_14 = 0;
            uStack_15 = 0;
            uStack_16 = 0;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (pRVar10->fields)._._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar10,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar12,&uStack_13);
            fVar8 = adjustedPosition->y;
            fVar5 = adjustedPosition->z;
            (this->fields).previousAdjustedPosition.x = adjustedPosition->x;
            (this->fields).previousAdjustedPosition.y = fVar8;
            (this->fields).previousAdjustedPosition.z = fVar5;
            return;
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_OnDestroy(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
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
  if (pCVar1 != (ChatBubble *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).AttachedBubble;
      if (pCVar1 == (ChatBubble *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pCVar1,(MethodInfo *)0x0);
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
  }
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_OnValidate(ChatAnchor *this,MethodInfo *method)

{
  pfVar1 = &(this->fields).AttachedRadius;
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    (this->fields).AttachedRadius = 0.0;
  }
  return;
}


/* Void SkipInterpolation() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_SkipInterpolation
               (ChatAnchor *this,MethodInfo *method)

{
  (this->fields).snapTracking = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_Update(ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
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
  if (pCVar1 != (ChatBubble *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if ((this->fields).isLocal != 0) {
        pAVar2 = (this->fields).avatar;
        if (((pAVar2 == (Avatar *)0x0) ||
            (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)) ||
           (pAVar4 = (pMVar3->fields).avatarPickupOwner, pAVar4 == (AvatarPickupOwner *)0x0))
        goto code_?;
        pPVar5 = (pAVar4->fields)._.currentItem;
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
        if (pPVar5 != (PickupItem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pPVar5->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pAVar2 = (this->fields).avatar;
            if (((pAVar2 == (Avatar *)0x0) ||
                (pMVar3 = (pAVar2->fields).mvAvatar, pMVar3 == (MVAvatar *)0x0)) ||
               ((pAVar4 = (pMVar3->fields).avatarPickupOwner, pAVar4 == (AvatarPickupOwner *)0x0 ||
                (pPVar5 = (pAVar4->fields)._.currentItem, pPVar5 == (PickupItem *)0x0)))) {
code_?:
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            cVar7 = (*(pPVar5->klass->vtable).get_FirstPerson.methodPtr)
                              (pPVar5,(pPVar5->klass->vtable).get_FirstPerson.method);
            if ((cVar7 != '\0') && ((pPVar5->fields)._IsHolstered_k__BackingField == 0)) {
              pCVar1 = (this->fields).AttachedBubble;
              if (pCVar1 != (ChatBubble *)0x0) {
                this_00 = (pCVar1->fields).CanvasGroup;
                if (this_00 == (CanvasGroup *)0x0) {
                  FUN_?(0,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_00,0.0,(MethodInfo *)0x0);
                if ((pCVar1->fields).animationCoroutine != (IEnumerator *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_StopCoroutine
                            ((MonoBehaviour *)pCVar1,(pCVar1->fields).animationCoroutine,
                             (MethodInfo *)0x0);
                  bVar8 = iRam_? != 0;
                  (pCVar1->fields).animationCoroutine = (IEnumerator *)0x0;
                  if (bVar8) {
                    uVar9 = (uint)((ulonglong)&(pCVar1->fields).animationCoroutine >> 0xc);
                    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
                    do {
                      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                      LOCK();
                      bVar8 = uVar11 == *puVar12;
                      if (bVar8) {
                        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar8);
                  }
                }
                return;
              }
              goto code_?;
            }
          }
        }
      }
      if ((this->fields).snapTracking != 0) {
        (this->fields).snapTracking = 0;
      }
    }
  }
  return;
}


/* Void UpdateAttachedBubblePosition() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor_UpdateAttachedBubblePosition
               (ChatAnchor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).AttachedBubble;
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
  if (pCVar1 != (ChatBubble *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      cVar4 = (*pcRam_?)();
      if (cVar4 == '\0') {
        (this->fields).snapTracking = 1;
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar5 != (MainCameraManager *)0x0) {
        camera = (pMVar5->fields).mainCamera;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar6 = (obj->fields)._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar6);
          if (camera != (Camera *)0x0) {
            aVStack_7[0].x = 0.0;
            aVStack_7[0].y = 0.0;
            aVStack_7[0].z = 0.0;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_8.x = 0.0;
            VStack_8.y = 0.0;
            VStack_8.z = 0.0;
            pvVar6 = (camera->fields)._._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar6,aVStack_7,2,&VStack_8);
            uVar3 = VStack_8._0_8_;
            pCVar1 = (this->fields).AttachedBubble;
            aVStack_7[0].z = VStack_8.z;
            if ((pCVar1 != (ChatBubble *)0x0) &&
               (obj_00 = ChatBubble::ChatBubble_get_RectTransform(pCVar1,(MethodInfo *)0x0),
               obj_00 != (RectTransform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStack_8.x = 0.0;
              VStack_8.y = 0.0;
              VStack_8.z = 0.0;
              pvVar6 = (obj_00->fields)._._._.m_CachedPtr;
              if (pvVar6 != (void *)0x0) {
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
                (*pcRam_?)(pvVar6,&VStack_8);
                uVar9 = VStack_8._0_8_;
                aVStack_7[0].z = VStack_8.z;
                VStack_8.x = (float)uVar3;
                VStack_8.y = SUB84(uVar3,4);
                aVStack_7[0].x = VStack_8.x;
                aVStack_7[0].y = VStack_8.y;
                VStack_8._0_8_ = uVar9;
                pVVar10 = ChatAnchor_HandleOffScreenChatBubble
                                   (&VStack_8,this,camera,aVStack_7,(MethodInfo *)0x0);
                aVStack_7[0].x = pVVar10->x;
                aVStack_7[0].y = pVVar10->y;
                aVStack_7[0].z = pVVar10->z;
                ChatAnchor_InterpolateToNewBubblePosition(this,aVStack_7,(MethodInfo *)0x0);
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* ChatAnchor() */

void Assembly-CSharp.dll::ChatAnchor::ChatAnchor__ctor(ChatAnchor *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).AttachedRadius = 1.0;
  (this->fields).AttachedAngle = 90.0;
  (this->fields).TrackingSpeed = 15.0;
  (this->fields).KeepInView = 1;
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
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
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

