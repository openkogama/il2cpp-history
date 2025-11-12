
/* IEnumerator AnimationEndTrack(Single) */

IEnumerator *
Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_AnimationEndTrack
          (AvatarAccessoryPreviewer *this,float resetDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)this;
  if (bVar2) {
    *(float *)&pIVar1[2].klass = resetDelay;
    return pIVar1;
  }
  uVar3 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
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
  *(float *)&pIVar1[2].klass = resetDelay;
  return pIVar1;
}


/* Void ChangeAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ChangeAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animations;
  iVar2 = (this->fields).currentAnimation + 1;
  (this->fields).currentAnimation = iVar2;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    if ((pLVar1->fields)._size <= iVar2) {
      (this->fields).currentAnimation = 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields).animations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      uVar3 = (this->fields).currentAnimation;
      if ((uint)(pLVar1->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 != (String__Array *)0x0) {
        if ((uint)pSVar5->max_length <= uVar3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pSVar6 = pSVar5->vector[(int)uVar3];
        pAVar7 = (this->fields).goAnimation;
        if (pAVar7 != (Animation *)0x0) {
          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                    (pAVar7,pSVar6,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
          pAVar8 = (this->fields).OnAnimationActivators;
          uVar3 = 0;
          if (pAVar8 != (ActivateOnAnimationBase__Array *)0x0) {
            lVar9 = 0x20;
            do {
              if ((int)pAVar8->max_length <= (int)uVar3) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar10 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar10 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                (*pcRam_?)(pvVar10);
                pAVar7 = (this->fields).goAnimation;
                if ((pAVar7 != (Animation *)0x0) &&
                   (obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                          Animation_GetState(pAVar7,pSVar6,(MethodInfo *)0x0),
                   obj != (AnimationState *)0x0)) {
                  pvVar10 = (obj->fields)._.m_Ptr;
                  if (pvVar10 != (void *)0x0) {
                    pcVar4 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                      uVar11 = func_?(&UNK_?);
                      FUN_?(uVar11,0);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pcRam_? = pcVar4;
                    fVar12 = (float)(*pcRam_?)(pvVar10);
                    pvVar10 = (obj->fields)._.m_Ptr;
                    if (pvVar10 != (void *)0x0) {
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                      {
                        uVar11 = func_?(&UNK_?);
                        FUN_?(uVar11,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                      fVar13 = (float)(*pcRam_?)(pvVar10);
                      pvVar10 = (obj->fields)._.m_Ptr;
                      if (pvVar10 != (void *)0x0) {
                        pcVar4 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)
                           ) {
                          uVar11 = func_?(&UNK_?);
                          FUN_?(uVar11,0);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcRam_? = pcVar4;
                        iVar2 = (*pcRam_?)(pvVar10);
                        fVar14 = _UNK_?;
                        if (iVar2 == 2) {
                          fVar14 = _UNK_?;
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        lVar9 = FUN_?(
                                              TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35
                                              );
                        bVar15 = iRam_? != 0;
                        *(undefined4 *)(lVar9 + 0x10) = 0;
                        *(AvatarAccessoryPreviewer **)(lVar9 + 0x28) = this;
                        if (bVar15) {
                          uVar3 = (uint)(lVar9 + 0x28U >> 0xc);
                          uVar16 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                          do {
                            uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
                            puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
                            LOCK();
                            bVar15 = uVar17 == *puVar18;
                            if (bVar15) {
                              *puVar18 = uVar17 | 1L << (uVar3 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar15);
                        }
                        *(float *)(lVar9 + 0x20) = (fVar12 / fVar13) * fVar14;
                        if (lVar9 == 0) {
                          uVar11 = func_?(&TypeInfo__System__NullReferenceException);
                          this_00 = (NullReferenceException *)func_?(uVar11);
                          pSVar6 = (String *)func_?(&StringLiteral_routine_is_null);
                          mscorlib.dll::System::NullReferenceException::
                          NullReferenceException__ctor_1(this_00,pSVar6,(MethodInfo *)0x0);
                          uVar11 = func_?(&
                                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                                  );
                          FUN_?(this_00,uVar11);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        bVar19 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                MonoBehaviour_IsObjectMonoBehaviour
                                          ((Object_1 *)this,(MethodInfo *)0x0);
                        if (bVar19 == 0) {
                          uVar11 = func_?(&TypeInfo__System__ArgumentException);
                          this_01 = (InvalidEnumArgumentException *)func_?(uVar11);
                          pSVar6 = (String *)
                                    func_?(&
                                                  StringLiteral_Coroutines_can_only_be_stopped_o);
                          System.dll::System::ComponentModel::InvalidEnumArgumentException::
                          InvalidEnumArgumentException__ctor_1(this_01,pSVar6,(MethodInfo *)0x0);
                          uVar11 = func_?(&
                                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                                  );
                          FUN_?(this_01,uVar11);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
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
                        if (this == (AvatarAccessoryPreviewer *)0x0) {
                          FUN_?();
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pvVar10 = (this->fields)._._._._.m_CachedPtr;
                        if (pvVar10 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)this,(MethodInfo *)0x0);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcVar4 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)
                           ) {
                          uVar11 = func_?(&UNK_?);
                          FUN_?(uVar11,0);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam_?)(pvVar10,lVar9);
                        return;
                      }
                    }
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                break;
              }
              if (pAVar8 == (ActivateOnAnimationBase__Array *)0x0) break;
              if ((uint)pAVar8->max_length <= uVar3) {
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              plVar20 = *(longlong **)((longlong)pAVar8->vector + lVar9 + -0x20);
              if (plVar20 == (longlong *)0x0) break;
              (**(code **)(*plVar20 + 0x188))(plVar20,pSVar6);
              pAVar8 = (this->fields).OnAnimationActivators;
              uVar3 = uVar3 + 1;
              lVar9 = lVar9 + 8;
            } while (pAVar8 != (ActivateOnAnimationBase__Array *)0x0);
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDestroy
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).avatarBody != (MVBody *)0x0) {
    MVBody::MVBody_DestroyClone((this->fields).avatarBody,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields).toPreviewer;
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
  if (pAVar1 != (AvatarPreviewer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).toPreviewer;
      if (pAVar1 == (AvatarPreviewer *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar1,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pTVar3 = (this->fields).avatarResetToTransform;
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
      pTVar3 = (this->fields).avatarResetToTransform;
      if (pTVar3 == (Transform *)0x0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).avatarResetToTransform = (Transform *)0x0;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).avatarResetToTransform >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
  }
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDrag
               (AvatarAccessoryPreviewer *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  (this->fields).pickedAccessory = 0;
  fVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  pAVar4 = (this->fields).toPreviewer;
  (this->fields).currentRotationSpeed =
       (float)((uint)fVar3 ^ _UNK_?) * (this->fields).rotationSensitivity;
  if ((pAVar4 != (AvatarPreviewer *)0x0) &&
     (pCVar5 = (pAVar4->fields).previewCam, pCVar5 != (Camera *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pCVar5->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar5,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    fVar8 = (float)(*pcRam_?)(pvVar6);
    fVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
            InputUnsafeUtility_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar3 = (this->fields).zoomSpeed;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    fVar10 = (float)(*pcRam_?)();
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (pCVar5,fVar3 * fVar9 * fVar10 + fVar8,(MethodInfo *)0x0);
    pAVar4 = (this->fields).toPreviewer;
    if (pAVar4 != (AvatarPreviewer *)0x0) {
      pCVar5 = (pAVar4->fields).previewCam;
      obj = (((this->fields).toPreviewer)->fields).previewCam;
      if (obj != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar1 = func_?(&UNK_?);
          FUN_?(uVar1,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        fVar8 = (float)(*pcRam_?)(pvVar6);
        fVar3 = _UNK_?;
        if ((fVar8 < _UNK_?) || (fVar3 = _UNK_?, _UNK_? < fVar8)) {
          fVar8 = fVar3;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                        ,fVar8,0,in_R9,uVar1,uVar2,unaff_RBX);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pCVar5 == (Camera *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pvVar6 = (pCVar5->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar5,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar1 = func_?(&UNK_?);
          FUN_?(uVar1,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,fVar8);
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPointerClick(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerClick
               (AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransformUtility);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0___OnPointerClick_b__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStackX_20.x = 0.0;
  VStackX_20.y = 0.0;
  pGStack_1 = (GameObject *)0x0;
  RStack_2.m_UV.x = 0.0;
  RStack_2.m_UV.y = 0.0;
  RStack_2.m_Collider = 0;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  uStack_4 = 0;
  RStack_2.m_Point.x = 0.0;
  RStack_2.m_Point.y = 0.0;
  RStack_2.m_Point.z = 0.0;
  RStack_2.m_Normal.x = 0.0;
  RStack_2.m_Normal.y = 0.0;
  RStack_2.m_Normal.z = 0.0;
  RStack_2.m_FaceID = 0;
  RStack_2.m_Distance = 0.0;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(&VStack_3);
  pRVar7 = (this->fields).toImage;
  fVar8 = VStack_3.y;
  if (pRVar7 != (RawImage *)0x0) {
    pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pRVar7,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__RectTransformUtility->_1).field_0x1c == 0) {
      FUN_?();
    }
    screenPoint.y = fVar8;
    screenPoint.x = VStack_3.x;
    UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::
    RectTransformUtility_ScreenPointToLocalPointInRectangle
              (pRVar9,screenPoint,(Camera *)0x0,&VStackX_20,(MethodInfo *)0x0);
    pRVar7 = (this->fields).toImage;
    if ((pRVar7 != (RawImage *)0x0) &&
       (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_10.m_Origin.x = 0.0;
      RStack_10.m_Origin.y = 0.0;
      RStack_10.m_Origin.z = 0.0;
      RStack_10.m_Direction.x = 0.0;
      pvVar11 = (pRVar9->fields)._._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar9,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar11);
      pRVar7 = (this->fields).toImage;
      if ((pRVar7 != (RawImage *)0x0) &&
         (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0))
      {
        VStack_12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                              (pRVar9,(MethodInfo *)0x0);
        pRVar7 = (this->fields).toImage;
        if ((pRVar7 != (RawImage *)0x0) &&
           (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0
           )) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_13._0_4_ = 0.0;
          auStack_13._4_4_ = 0.0;
          auStack_13._8_4_ = 0.0;
          fStack_14 = 0.0;
          pvVar11 = (pRVar9->fields)._._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar9,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar11);
          pRVar7 = (this->fields).toImage;
          if ((pRVar7 != (RawImage *)0x0) &&
             (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                 ((Graphic *)pRVar7,(MethodInfo *)0x0),
             pRVar9 != (RectTransform *)0x0)) {
            VStack_3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_pivot(pRVar9,(MethodInfo *)0x0);
            pAVar15 = (this->fields).toPreviewer;
            if ((pAVar15 != (AvatarPreviewer *)0x0) &&
               (obj = (pAVar15->fields).previewCam, obj != (Camera *)0x0)) {
              VStackX_20.y = fStack_14 / (_UNK_? / VStack_3.y) + VStackX_20.y;
              VStackX_20.x = RStack_10.m_Origin.z / (_UNK_? / VStack_12.x) + VStackX_20.x;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_13._0_4_ = 0.0;
              auStack_13._4_4_ = 0.0;
              auStack_13._8_4_ = 0.0;
              fStack_14 = 0.0;
              uStack_16._0_4_ = 0.0;
              uStack_16._4_4_ = 0.0;
              pvVar11 = (obj->fields)._._._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pcVar5 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pcRam_? = pcVar5;
              (*pcRam_?)(pvVar11,&VStackX_20,2,auStack_13);
              if ((this->fields).pickedAccessory != 0) {
                RStack_10.m_Origin.x = (float)auStack_13._0_4_;
                RStack_10.m_Origin.y = (float)auStack_13._4_4_;
                RStack_10.m_Origin.z = (float)auStack_13._8_4_;
                RStack_10.m_Direction.x = fStack_14;
                RStack_10.m_Direction.y = (float)uStack_16;
                RStack_10.m_Direction.z = uStack_16._4_4_;
                bVar17 = AvatarAccessoryPreviewer_PickAccessory
                                  (this,&RStack_10,&pGStack_1,&RStack_2,(MethodInfo *)0x0);
                if (bVar17 != 0) {
                  object = (Object *)
                           FUN_?(TypeInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0);
                  if (((pGStack_1 == (GameObject *)0x0) ||
                      (pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_GetComponentInChildren_3
                                           (pGStack_1,1,
                                            SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_
                                           ), pOVar18 == (Object *)0x0)) ||
                     (pOVar19 = (Object__Class *)
                                AccessoryDataManager::
                                AccessoryDataManager_GetAccessoryDataByStreamingAssetId
                                          (*(int32_t *)&pOVar18[3].klass,(MethodInfo *)0x0),
                     object == (Object *)0x0)) goto DAT_?;
                  bVar20 = iRam_? != 0;
                  object[1].klass = pOVar19;
                  if (bVar20) {
                    uVar21 = (uint)((ulonglong)(object + 1) >> 0xc);
                    uVar22 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
                    do {
                      uVar23 = *(ulonglong *)(uVar22 * 8 + 0xADDR);
                      puVar24 = (ulonglong *)(uVar22 * 8 + 0xADDR);
                      LOCK();
                      bVar20 = uVar23 == *puVar24;
                      if (bVar20) {
                        *puVar24 = uVar23 | 1L << (uVar21 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar20);
                  }
                  root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            (this_00,object,
                             MethodInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0___OnPointerClick_b__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (root,(BaseEventData *)0x0,this_00,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                            );
                }
              }
              return;
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerDown
               (AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).currentRotationSpeed = 0.0;
  (this->fields).pickedAccessory = 1;
  return;
}


/* Void OnRestartAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).goAnimation;
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
  if (pAVar1 != (Animation *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).goAnimation;
      if (pAVar1 == (Animation *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pAVar3 = (ActivateOnAnimationBase__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)pAVar1,
                          ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                         );
      bVar4 = iRam_? != 0;
      (this->fields).OnAnimationActivators = pAVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).OnAnimationActivators >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(this,(MethodInfo *)0x0);
      AvatarAccessoryPreviewer_PlayAnimation_1(this,StringLiteral_Idle,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Boolean PickAccessory(Ray, GameObject ByRef, RaycastHit ByRef) */

bool Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PickAccessory
               (AvatarAccessoryPreviewer *this,Ray *ray,GameObject **gameObject,
               RaycastHit *raycastHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = (ray->m_Direction).x;
  uVar4 = (ray->m_Direction).y;
  VStack_5.x = (ray->m_Origin).x;
  VStack_5.y = (ray->m_Origin).y;
  fVar6 = (float)uVar3 + VStack_5.x;
  fVar7 = (ray->m_Direction).z + (ray->m_Origin).z;
  fVar8 = (float)uVar4 + VStack_5.y;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_5.x = (ray->m_Origin).x;
  VStack_5.y = (ray->m_Origin).y;
  VStack_5.z = (ray->m_Origin).z;
  VStack_9.y = fVar8;
  VStack_9.x = fVar6;
  uStack_10 = uVar2;
  fStack_11 = (float)uVar1;
  fStack_12 = (float)((ulonglong)uVar1 >> 0x20);
  VStack_9.z = fVar7;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar13 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar13 = (code *)swi(3);
    bVar14 = (*pcVar13)();
    return bVar14;
  }
  pcRam_? = pcVar13;
  (*pcRam_?)(&VStack_5,&VStack_9,&uStack_10,_UNK_?,1);
  iVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Hidden,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2._0_4_ = (ray->m_Origin).x;
  uVar2._4_4_ = (ray->m_Origin).y;
  uStack_10._0_4_ = (ray->m_Origin).x;
  uStack_10._4_4_ = (ray->m_Origin).y;
  fVar8 = (ray->m_Origin).z;
  fStack_12 = (ray->m_Direction).x;
  uVar16 = (ray->m_Direction).y;
  uVar17 = (ray->m_Direction).z;
  fStack_11 = fVar8;
  fStack_18 = (float)uVar16;
  fStack_19 = (float)uVar17;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_5.y = fStack_18;
  VStack_5.x = fStack_12;
  VStack_5.z = fStack_19;
  VStack_9._0_8_ = uVar2;
  VStack_9.z = fVar8;
  pRVar20 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll
                      (&VStack_9,&VStack_5,_UNK_?,1 << ((byte)iVar15 & 0x1f),
                       QueryTriggerInteraction__Enum_UseGlobal,(MethodInfo *)0x0);
  uVar21 = 0;
  if (pRVar20 != (RaycastHit__Array *)0x0) {
    pRVar22 = pRVar20->vector;
    do {
      if ((int)pRVar20->max_length <= (int)uVar21) {
        bVar23 = iRam_? != 0;
        *gameObject = (GameObject *)0x0;
        if (bVar23) {
          uVar21 = (uint)((ulonglong)gameObject >> 0xc);
          uVar24 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
          do {
            uVar25 = *(ulonglong *)(uVar24 * 8 + 0xADDR);
            puVar26 = (ulonglong *)(uVar24 * 8 + 0xADDR);
            LOCK();
            bVar23 = uVar25 == *puVar26;
            if (bVar23) {
              *puVar26 = uVar25 | 1L << (uVar21 & 0x3f);
            }
            UNLOCK();
          } while (!bVar23);
        }
        (raycastHit->m_Point).x = 0.0;
        (raycastHit->m_Point).y = 0.0;
        *(undefined8 *)&(raycastHit->m_Point).z = 0;
        (raycastHit->m_Normal).y = 0.0;
        (raycastHit->m_Normal).z = 0.0;
        raycastHit->m_FaceID = 0;
        raycastHit->m_Distance = 0.0;
        (raycastHit->m_UV).x = 0.0;
        (raycastHit->m_UV).y = 0.0;
        raycastHit->m_Collider = 0;
        return 0;
      }
      if ((uint)pRVar20->max_length <= uVar21) {
code_?:
        FUN_?();
        pcVar13 = (code *)swi(3);
        bVar14 = (*pcVar13)();
        return bVar14;
      }
      this_00 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                          (pRVar20->vector + (int)uVar21,(MethodInfo *)0x0);
      if (this_00 == (Collider *)0x0) break;
      pGVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      bVar23 = iRam_? != 0;
      *gameObject = pGVar27;
      if (bVar23) {
        uVar28 = (uint)((ulonglong)gameObject >> 0xc);
        uVar24 = (ulonglong)((uVar28 & 0x1fffff) >> 6);
        do {
          uVar25 = *(ulonglong *)(uVar24 * 8 + 0xADDR);
          puVar26 = (ulonglong *)(uVar24 * 8 + 0xADDR);
          LOCK();
          bVar23 = uVar25 == *puVar26;
          if (bVar23) {
            *puVar26 = uVar25 | 1L << (uVar28 & 0x3f);
          }
          UNLOCK();
        } while (!bVar23);
      }
      if ((uint)pRVar20->max_length <= uVar21) goto code_?;
      fVar8 = (pRVar22->m_Point).y;
      uVar2 = *(undefined8 *)&(pRVar22->m_Point).z;
      iVar15 = pRVar22->m_Collider;
      fVar6 = (pRVar22->m_Normal).y;
      fVar7 = (pRVar22->m_Normal).z;
      uVar29 = pRVar22->m_FaceID;
      fVar30 = pRVar22->m_Distance;
      VVar31 = pRVar22->m_UV;
      (raycastHit->m_Point).x = (pRVar22->m_Point).x;
      (raycastHit->m_Point).y = fVar8;
      *(undefined8 *)&(raycastHit->m_Point).z = uVar2;
      (raycastHit->m_Normal).y = fVar6;
      (raycastHit->m_Normal).z = fVar7;
      raycastHit->m_FaceID = uVar29;
      raycastHit->m_Distance = fVar30;
      raycastHit->m_UV = VVar31;
      raycastHit->m_Collider = iVar15;
      if (*gameObject == (GameObject *)0x0) break;
      pOVar32 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (*gameObject,
                           SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__
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
      if (pOVar32 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar32[1].klass != (Object__Class *)0x0) {
          return 1;
        }
      }
      uVar21 = uVar21 + 1;
      pRVar22 = pRVar22 + 1;
    } while( true );
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Void PlayAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).animations;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    uVar2 = (this->fields).currentAnimation;
    if ((uint)(pLVar1->fields)._size <= uVar2) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar4 = (pLVar1->fields)._items;
    if (pSVar4 != (String__Array *)0x0) {
      if ((uint)pSVar4->max_length <= uVar2) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pSVar5 = pSVar4->vector[(int)uVar2];
      pAVar6 = (this->fields).goAnimation;
      if (pAVar6 != (Animation *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar6,pSVar5,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
        pAVar7 = (this->fields).OnAnimationActivators;
        uVar2 = 0;
        if (pAVar7 != (ActivateOnAnimationBase__Array *)0x0) {
          lVar8 = 0x20;
          do {
            if ((int)pAVar7->max_length <= (int)uVar2) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar9 = (this->fields)._._._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar9);
              pAVar6 = (this->fields).goAnimation;
              if ((pAVar6 != (Animation *)0x0) &&
                 (obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                  (pAVar6,pSVar5,(MethodInfo *)0x0), obj != (AnimationState *)0x0))
              {
                pvVar9 = (obj->fields)._.m_Ptr;
                if (pvVar9 != (void *)0x0) {
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                    uVar10 = func_?(&UNK_?);
                    FUN_?(uVar10,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcRam_? = pcVar3;
                  fVar11 = (float)(*pcRam_?)(pvVar9);
                  pvVar9 = (obj->fields)._.m_Ptr;
                  if (pvVar9 != (void *)0x0) {
                    pcVar3 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                      uVar10 = func_?(&UNK_?);
                      FUN_?(uVar10,0);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pcRam_? = pcVar3;
                    fVar12 = (float)(*pcRam_?)(pvVar9);
                    pvVar9 = (obj->fields)._.m_Ptr;
                    if (pvVar9 != (void *)0x0) {
                      pcVar3 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
                      {
                        uVar10 = func_?(&UNK_?);
                        FUN_?(uVar10,0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcRam_? = pcVar3;
                      iVar13 = (*pcRam_?)(pvVar9);
                      fVar14 = _UNK_?;
                      if (iVar13 == 2) {
                        fVar14 = _UNK_?;
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35)
                        ;
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      lVar8 = FUN_?(
                                            TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35
                                            );
                      bVar15 = iRam_? != 0;
                      *(undefined4 *)(lVar8 + 0x10) = 0;
                      *(AvatarAccessoryPreviewer **)(lVar8 + 0x28) = this;
                      if (bVar15) {
                        uVar2 = (uint)(lVar8 + 0x28U >> 0xc);
                        uVar16 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                        do {
                          uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
                          puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
                          LOCK();
                          bVar15 = uVar17 == *puVar18;
                          if (bVar15) {
                            *puVar18 = uVar17 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar15);
                      }
                      *(float *)(lVar8 + 0x20) = (fVar11 / fVar12) * fVar14;
                      if (lVar8 == 0) {
                        uVar10 = func_?(&TypeInfo__System__NullReferenceException);
                        this_00 = (NullReferenceException *)func_?(uVar10);
                        pSVar5 = (String *)func_?(&StringLiteral_routine_is_null);
                        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                                  (this_00,pSVar5,(MethodInfo *)0x0);
                        uVar10 = func_?(&
                                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                                  );
                        FUN_?(this_00,uVar10);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      bVar19 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                              MonoBehaviour_IsObjectMonoBehaviour
                                        ((Object_1 *)this,(MethodInfo *)0x0);
                      if (bVar19 == 0) {
                        uVar10 = func_?(&TypeInfo__System__ArgumentException);
                        this_01 = (InvalidEnumArgumentException *)func_?(uVar10);
                        pSVar5 = (String *)
                                  func_?(&
                                                  StringLiteral_Coroutines_can_only_be_stopped_o);
                        System.dll::System::ComponentModel::InvalidEnumArgumentException::
                        InvalidEnumArgumentException__ctor_1(this_01,pSVar5,(MethodInfo *)0x0);
                        uVar10 = func_?(&
                                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                                  );
                        FUN_?(this_01,uVar10);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
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
                      if (this == (AvatarAccessoryPreviewer *)0x0) {
                        FUN_?();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pvVar9 = (this->fields)._._._._.m_CachedPtr;
                      if (pvVar9 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcVar3 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
                      {
                        uVar10 = func_?(&UNK_?);
                        FUN_?(uVar10,0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam_?)(pvVar9,lVar8);
                      return;
                    }
                  }
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              break;
            }
            if (pAVar7 == (ActivateOnAnimationBase__Array *)0x0) break;
            if ((uint)pAVar7->max_length <= uVar2) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar20 = *(longlong **)((longlong)pAVar7->vector + lVar8 + -0x20);
            if (plVar20 == (longlong *)0x0) break;
            (**(code **)(*plVar20 + 0x188))(plVar20,pSVar5);
            pAVar7 = (this->fields).OnAnimationActivators;
            uVar2 = uVar2 + 1;
            lVar8 = lVar8 + 8;
          } while (pAVar7 != (ActivateOnAnimationBase__Array *)0x0);
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PlayAnimation(String) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation_1
               (AvatarAccessoryPreviewer *this,String *animationName,MethodInfo *method)

{
  pAVar1 = (this->fields).goAnimation;
  if (pAVar1 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
              (pAVar1,animationName,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
    pAVar2 = (this->fields).OnAnimationActivators;
    uVar3 = 0;
    if (pAVar2 != (ActivateOnAnimationBase__Array *)0x0) {
      lVar4 = 0x20;
      do {
        if ((int)pAVar2->max_length <= (int)uVar3) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (this->fields)._._._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
          pAVar1 = (this->fields).goAnimation;
          if ((pAVar1 != (Animation *)0x0) &&
             (obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar1,animationName,(MethodInfo *)0x0), obj != (AnimationState *)0x0
             )) {
            pvVar5 = (obj->fields)._.m_Ptr;
            if (pvVar5 != (void *)0x0) {
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
              fVar8 = (float)(*pcRam_?)(pvVar5);
              pvVar5 = (obj->fields)._.m_Ptr;
              if (pvVar5 != (void *)0x0) {
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
                fVar9 = (float)(*pcRam_?)(pvVar5);
                pvVar5 = (obj->fields)._.m_Ptr;
                if (pvVar5 != (void *)0x0) {
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
                  iVar10 = (*pcRam_?)(pvVar5);
                  fVar11 = _UNK_?;
                  if (iVar10 == 2) {
                    fVar11 = _UNK_?;
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  lVar4 = FUN_?(
                                        TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35
                                        );
                  bVar12 = iRam_? != 0;
                  *(undefined4 *)(lVar4 + 0x10) = 0;
                  *(AvatarAccessoryPreviewer **)(lVar4 + 0x28) = this;
                  if (bVar12) {
                    uVar3 = (uint)(lVar4 + 0x28U >> 0xc);
                    uVar13 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                    do {
                      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                      LOCK();
                      bVar12 = uVar14 == *puVar15;
                      if (bVar12) {
                        *puVar15 = uVar14 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar12);
                  }
                  *(float *)(lVar4 + 0x20) = (fVar8 / fVar9) * fVar11;
                  if (lVar4 == 0) {
                    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
                    this_00 = (NullReferenceException *)func_?(uVar7);
                    pSVar16 = (String *)func_?(&StringLiteral_routine_is_null);
                    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                              (this_00,pSVar16,(MethodInfo *)0x0);
                    uVar7 = func_?(&
                                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                                );
                    FUN_?(this_00,uVar7);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  bVar17 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
                  if (bVar17 == 0) {
                    uVar7 = func_?(&TypeInfo__System__ArgumentException);
                    this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
                    pSVar16 = (String *)
                              func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
                    System.dll::System::ComponentModel::InvalidEnumArgumentException::
                    InvalidEnumArgumentException__ctor_1(this_01,pSVar16,(MethodInfo *)0x0);
                    uVar7 = func_?(&
                                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                                );
                    FUN_?(this_01,uVar7);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
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
                  if (this == (AvatarAccessoryPreviewer *)0x0) {
                    FUN_?();
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pvVar5 = (this->fields)._._._._.m_CachedPtr;
                  if (pvVar5 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam_?)(pvVar5,lVar4);
                  return;
                }
              }
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          break;
        }
        if (pAVar2 == (ActivateOnAnimationBase__Array *)0x0) break;
        if ((uint)pAVar2->max_length <= uVar3) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar18 = *(longlong **)((longlong)pAVar2->vector + lVar4 + -0x20);
        if (plVar18 == (longlong *)0x0) break;
        (**(code **)(*plVar18 + 0x188))(plVar18,animationName);
        pAVar2 = (this->fields).OnAnimationActivators;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (pAVar2 != (ActivateOnAnimationBase__Array *)0x0);
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveSkinnedMeshOptimizers() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::
     AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
  ;
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    if ((
        SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                   );
    }
    p_Var4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
    uVar2 = 0;
    if (p_Var4 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var6 = p_Var4->vector;
      do {
        if ((int)p_Var4->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)p_Var4->max_length <= uVar2) goto code_?;
        p_Var1 = *pp_Var6;
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
        if (p_Var1 != (_Il2CppFullySharedGenericType *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (p_Var1[1].klass != (_Il2CppFullySharedGenericType__Class *)0x0) {
            if ((uint)p_Var4->max_length <= uVar2) {
code_?:
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((SkinnedMeshOptimizer *)*pp_Var6 == (SkinnedMeshOptimizer *)0x0) break;
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                      ((SkinnedMeshOptimizer *)*pp_Var6,(MethodInfo *)0x0);
            if ((uint)p_Var4->max_length <= uVar2) goto code_?;
            if ((SkinnedMeshOptimizer *)*pp_Var6 == (SkinnedMeshOptimizer *)0x0) break;
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                      ((SkinnedMeshOptimizer *)*pp_Var6,(MethodInfo *)0x0);
            if ((uint)p_Var4->max_length <= uVar2) goto code_?;
            obj = (Object_1 *)*pp_Var6;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      (obj,(MethodInfo *)0x0);
          }
        }
        uVar2 = uVar2 + 1;
        pp_Var6 = pp_Var6 + 1;
      } while( true );
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetPreviewTransform() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if ((this->fields).imagesReady == 0) {
    return;
  }
  this_00 = (this->fields).bodyClone;
  if (this_00 == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).x;
  fVar4 = (pQVar2->identityQuaternion).y;
  fVar5 = (pQVar2->identityQuaternion).z;
  fVar6 = (pQVar2->identityQuaternion).w;
  lStack_7 = (ulonglong)_UNK_? << 0x20;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&lStack_7);
  fStack_12 = ((float)uStack_9 * fVar6 + uStack_10._4_4_ * fVar3 + (float)uStack_10 * fVar4) -
              uStack_9._4_4_ * fVar5;
  fStack_13 = (uStack_9._4_4_ * fVar6 + uStack_10._4_4_ * fVar4 + (float)uStack_9 * fVar5) -
              (float)uStack_10 * fVar3;
  fStack_14 = ((float)uStack_10 * fVar6 + uStack_10._4_4_ * fVar5 + uStack_9._4_4_ * fVar3) -
              (float)uStack_9 * fVar4;
  fStack_15 = ((uStack_10._4_4_ * fVar6 - (float)uStack_9 * fVar3) - uStack_9._4_4_ * fVar4) -
              (float)uStack_10 * fVar5;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar16 = (obj->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar16,&fStack_12);
    pAVar17 = (this->fields).toPreviewer;
    if ((pAVar17 != (AvatarPreviewer *)0x0) &&
       (this_01 = (pAVar17->fields).previewCam, this_01 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (this_01,(this->fields).startFov,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetupPreviewer(MVBody) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_SetupPreviewer
               (AvatarAccessoryPreviewer *this,MVBody *avatarBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
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
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SETUP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_accessory_preview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_SETUP,(MethodInfo *)0x0);
  (this->fields).avatarBody = avatarBody;
  func_?(&(this->fields).avatarBody);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  lVar2._0_4_ = (pQVar1->identityQuaternion).x;
  lVar2._4_4_ = (pQVar1->identityQuaternion).y;
  uVar3._0_4_ = (pQVar1->identityQuaternion).z;
  uVar3._4_4_ = (pQVar1->identityQuaternion).w;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                      ((Quaternion *)aCStack_5,0.0,_UNK_?,0.0,
                       (MethodInfo *)CONCAT44(in_stack_6,in_stack_7));
  QStack_8.x = pQVar4->x;
  QStack_8.y = pQVar4->y;
  QStack_8.z = pQVar4->z;
  QStack_8.w = pQVar4->w;
  CStack_9._0_8_ = lVar2;
  CStack_9._8_8_ = uVar3;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                      ((Quaternion *)aCStack_5,(Quaternion *)&CStack_9,&QStack_8,in_R9);
  pGVar10 = (this->fields).bodyClone;
  fVar11 = pQVar4->x;
  fVar12 = pQVar4->y;
  fVar13 = pQVar4->z;
  fVar14 = pQVar4->w;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pGVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar15 != 0) {
    pGVar10 = (this->fields).bodyClone;
    if ((pGVar10 == (GameObject *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar10,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
    goto code_?;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)aCStack_5,pTVar16,(MethodInfo *)0x0);
    fVar11 = pQVar4->x;
    fVar12 = pQVar4->y;
    fVar13 = pQVar4->z;
    fVar14 = pQVar4->w;
  }
  if (avatarBody != (MVBody *)0x0) {
    pGVar10 = MVBody::MVBody_CreateClone(avatarBody,1,1,(MethodInfo *)0x0);
    (this->fields).bodyClone = pGVar10;
    func_?(&(this->fields).bodyClone);
    this_00 = (avatarBody->fields).bodyAccessoriesController;
    if (this_00 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                (this_00,0,(MethodInfo *)0x0);
      pTVar16 = (this->fields).avatarResetToTransform;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pTVar16,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        pTVar16 = (this->fields).avatarResetToTransform;
        if (pTVar16 == (Transform *)0x0) goto code_?;
        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar16,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar10,(MethodInfo *)0x0);
      }
      pAVar17 = (this->fields).toPreviewer;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pAVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        pAVar17 = (this->fields).toPreviewer;
        if (pAVar17 == (AvatarPreviewer *)0x0) goto code_?;
        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar17,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar10,(MethodInfo *)0x0);
      }
      pGVar10 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                (pGVar10,(MethodInfo *)0x0);
      if (pGVar10 != (GameObject *)0x0) {
        pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar10,(MethodInfo *)0x0);
        (this->fields).avatarResetToTransform = pTVar16;
        func_?(&(this->fields).avatarResetToTransform);
        pRVar18 = (this->fields).toImage;
        if (pRVar18 != (RawImage *)0x0) {
          QStack_8.x = (float)_UNK_?;
          QStack_8.y = (float)_UNK_?;
          QStack_8.z = _UNK_?;
          QStack_8.w = _UNK_?;
          (*(pRVar18->klass->vtable).set_color.methodPtr)();
          if ((this->fields).bodyClone != (GameObject *)0x0) {
            lVar2 = FUN_?();
            uVar19 = 0;
            if (lVar2 != 0) {
              puVar20 = (undefined8 *)(lVar2 + 0x20);
              for (uVar21 = uVar19; (int)uVar21 < *(int *)(lVar2 + 0x18); uVar21 = uVar21 + 1) {
                if (*(uint *)(lVar2 + 0x18) <= uVar21) goto code_?;
                if ((Behaviour *)*puVar20 == (Behaviour *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)*puVar20,0,(MethodInfo *)0x0);
                puVar20 = puVar20 + 1;
              }
              if (((this->fields).bodyClone != (GameObject *)0x0) &&
                 (lVar2 = FUN_?(), lVar2 != 0)) {
                puVar20 = (undefined8 *)(lVar2 + 0x20);
                for (uVar21 = uVar19; (int)uVar21 < *(int *)(lVar2 + 0x18); uVar21 = uVar21 + 1) {
                  if (*(uint *)(lVar2 + 0x18) <= uVar21) goto code_?;
                  if (((Component *)*puVar20 == (Component *)0x0) ||
                     (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)*puVar20,(MethodInfo *)0x0),
                     pGVar10 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,0,(MethodInfo *)0x0);
                  puVar20 = puVar20 + 1;
                }
                if (((this->fields).bodyClone != (GameObject *)0x0) &&
                   (lVar2 = FUN_?(), lVar2 != 0)) {
                  puVar20 = (undefined8 *)(lVar2 + 0x20);
                  for (uVar21 = uVar19; (int)uVar21 < *(int *)(lVar2 + 0x18); uVar21 = uVar21 + 1)
                  {
                    if (*(uint *)(lVar2 + 0x18) <= uVar21) goto code_?;
                    pOVar22 = (Object *)*puVar20;
                    if (pOVar22 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar23 = pOVar22[1].klass;
                    if (pOVar23 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException(pOVar22,(MethodInfo *)0x0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcVar24 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                      uVar3 = func_?(&UNK_?);
                      FUN_?(uVar3,0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcRam_? = pcVar24;
                    pvVar25 = (void *)(*pcRam_?)(pOVar23);
                    pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                              Unmarshal_UnmarshalUnityObject
                                        (pvVar25,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                        );
                    if (pOVar22 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar23 = pOVar22[1].klass;
                    if (pOVar23 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException(pOVar22,(MethodInfo *)0x0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcVar24 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                      uVar3 = func_?(&UNK_?);
                      FUN_?(uVar3,0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pcRam_? = pcVar24;
                    (*pcRam_?)(pOVar23);
                    puVar20 = puVar20 + 1;
                  }
                  pGVar10 = (this->fields).bodyClone;
                  if ((pGVar10 != (GameObject *)0x0) &&
                     (p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_4
                                          (pGVar10,1,
                                           SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                                          ), p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0)
                     ) {
                    pp_Var40 = p_Var26->vector;
                    for (uVar21 = uVar19; (int)uVar21 < (int)p_Var26->max_length;
                        uVar21 = uVar21 + 1) {
                      if ((uint)p_Var26->max_length <= uVar21) goto code_?;
                      if (((Component *)*pp_Var40 == (Component *)0x0) ||
                         (pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_GetComponent_1
                                              ((Component *)*pp_Var40,
                                               UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                              ), pOVar22 == (Object *)0x0))
                      goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar23 = pOVar22[1].klass;
                      if (pOVar23 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar22,(MethodInfo *)0x0);
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pcVar24 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0))
                      {
                        uVar3 = func_?(&UNK_?);
                        FUN_?(uVar3,0);
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pcRam_? = pcVar24;
                      (*pcRam_?)(pOVar23,1);
                      pp_Var40 = pp_Var40 + 1;
                    }
                    pGVar10 = (this->fields).bodyClone;
                    if ((pGVar10 != (GameObject *)0x0) &&
                       (p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentsInChildren_4
                                            (pGVar10,1,
                                             AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                            ),
                       p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                      pp_Var40 = p_Var26->vector;
                      for (uVar21 = uVar19; (int)uVar21 < (int)p_Var26->max_length;
                          uVar21 = uVar21 + 1) {
                        if ((uint)p_Var26->max_length <= uVar21) goto code_?;
                        pOVar22 = (Object *)*pp_Var40;
                        if (pOVar22 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar23 = pOVar22[1].klass;
                        if (pOVar23 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(pOVar22,(MethodInfo *)0x0);
                          pcVar24 = (code *)swi(3);
                          (*pcVar24)();
                          return;
                        }
                        pcVar24 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)
                           ) {
                          uVar3 = func_?(&UNK_?);
                          FUN_?(uVar3,0);
                          pcVar24 = (code *)swi(3);
                          (*pcVar24)();
                          return;
                        }
                        pcRam_? = pcVar24;
                        (*pcRam_?)(pOVar23);
                        pp_Var40 = pp_Var40 + 1;
                      }
                      pGVar10 = (this->fields).bodyClone;
                      if ((pGVar10 != (GameObject *)0x0) &&
                         (p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_4
                                              (pGVar10,1,
                                               AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                              ),
                         p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                        pp_Var40 = p_Var26->vector;
                        for (uVar21 = uVar19;
                            pMVar26 = 
                            SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                            , (int)uVar21 < (int)p_Var26->max_length; uVar21 = uVar21 + 1) {
                          if ((uint)p_Var26->max_length <= uVar21) goto code_?;
                          pOVar22 = (Object *)*pp_Var40;
                          if (pOVar22 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar23 = pOVar22[1].klass;
                          if (pOVar23 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar22,(MethodInfo *)0x0);
                            pcVar24 = (code *)swi(3);
                            (*pcVar24)();
                            return;
                          }
                          pcVar24 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar24 = (code *)FUN_?(&UNK_?),
                             pcVar24 == (code *)0x0)) {
                            uVar3 = func_?(&UNK_?);
                            FUN_?(uVar3,0);
                            pcVar24 = (code *)swi(3);
                            (*pcVar24)();
                            return;
                          }
                          pcRam_? = pcVar24;
                          (*pcRam_?)(pOVar23);
                          pp_Var40 = pp_Var40 + 1;
                        }
                        pGVar10 = (this->fields).bodyClone;
                        if (pGVar10 != (GameObject *)0x0) {
                          if ((
                              SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                            FUN_?(
                                         SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                         );
                          }
                          p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_4
                                              (pGVar10,0,((pMVar26->field7_0x38).rgctx_data)->method
                                              );
                          if (p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                            pp_Var40 = p_Var26->vector;
                            for (uVar21 = uVar19;
                                pMVar26 = 
                                InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                , (int)uVar21 < (int)p_Var26->max_length; uVar21 = uVar21 + 1) {
                              if ((uint)p_Var26->max_length <= uVar21) goto code_?;
                              pOVar22 = (Object *)*pp_Var40;
                              if (pOVar22 == (Object *)0x0) goto code_?;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                             );
                                LOCK();
                                UNLOCK();
                                FUN_?(&
                                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pOVar23 = pOVar22[1].klass;
                              if (pOVar23 == (Object__Class *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException(pOVar22,(MethodInfo *)0x0)
                                ;
                                pcVar24 = (code *)swi(3);
                                (*pcVar24)();
                                return;
                              }
                              pcVar24 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar24 = (code *)FUN_?(&UNK_?),
                                 pcVar24 == (code *)0x0)) {
                                uVar3 = func_?(&UNK_?);
                                FUN_?(uVar3,0);
                                pcVar24 = (code *)swi(3);
                                (*pcVar24)();
                                return;
                              }
                              pcRam_? = pcVar24;
                              pvVar25 = (void *)(*pcRam_?)(pOVar23);
                              obj = (Object_1 *)
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar25,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
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
                              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                                        (obj,0.0,(MethodInfo *)0x0);
                              pp_Var40 = pp_Var40 + 1;
                            }
                            pGVar10 = (this->fields).bodyClone;
                            if (pGVar10 != (GameObject *)0x0) {
                              if ((
                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                FUN_?(
                                             InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                             );
                              }
                              pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentInChildren_3
                                                  (pGVar10,0,
                                                   ((pMVar26->field7_0x38).rgctx_data)->method);
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
                              if (pOVar22 != (Object *)0x0) {
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                if (pOVar22[1].klass != (Object__Class *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    FUN_?(&
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar23 = pOVar22[1].klass;
                                  if (pOVar23 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              (pOVar22,(MethodInfo *)0x0);
                                    pcVar24 = (code *)swi(3);
                                    (*pcVar24)();
                                    return;
                                  }
                                  pcVar24 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar24 = (code *)FUN_?(&UNK_?),
                                     pcVar24 == (code *)0x0)) {
                                    uVar3 = func_?(&UNK_?);
                                    FUN_?(uVar3,0);
                                    pcVar24 = (code *)swi(3);
                                    (*pcVar24)();
                                    return;
                                  }
                                  pcRam_? = pcVar24;
                                  pvVar25 = (void *)(*pcRam_?)(pOVar23);
                                  pOVar22 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                            Unmarshal::Unmarshal_UnmarshalUnityObject
                                                      (pvVar25,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                  if (pOVar22 == (Object *)0x0) goto code_?;
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar23 = pOVar22[1].klass;
                                  if (pOVar23 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              (pOVar22,(MethodInfo *)0x0);
                                    pcVar24 = (code *)swi(3);
                                    (*pcVar24)();
                                    return;
                                  }
                                  pcVar24 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar24 = (code *)FUN_?(&UNK_?),
                                     pcVar24 == (code *)0x0)) {
                                    uVar3 = func_?(&UNK_?);
                                    FUN_?(uVar3,0);
                                    pcVar24 = (code *)swi(3);
                                    (*pcVar24)();
                                    return;
                                  }
                                  pcRam_? = pcVar24;
                                  (*pcRam_?)(pOVar23);
                                }
                              }
                              AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers
                                        (this,(MethodInfo *)0x0);
                              pMVar26 = 
                              UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                              ;
                              pGVar10 = (this->fields).bodyClone;
                              if (pGVar10 != (GameObject *)0x0) {
                                if ((
                                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                  FUN_?(
                                               UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                               );
                                }
                                p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_4
                                                    (pGVar10,0,
                                                     ((pMVar26->field7_0x38).rgctx_data)->method);
                                if (p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var40 = p_Var26->vector;
                                  lVar2 = 0x20;
                                  for (; pMVar26 = 
                                         UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                      , (int)uVar19 < (int)p_Var26->max_length; uVar19 = uVar19 + 1)
                                  {
                                    uVar21 = 0;
                                    lVar27 = 0x20;
                                    while( true ) {
                                      if ((uint)p_Var26->max_length <= uVar19)
                                      goto code_?;
                                      if (((Renderer *)*pp_Var40 == (Renderer *)0x0) ||
                                         (pMVar28 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Renderer::Renderer_get_materials
                                                              ((Renderer *)*pp_Var40,
                                                               (MethodInfo *)0x0),
                                         pMVar28 == (Material__Array *)0x0))
                                      goto code_?;
                                      if ((int)pMVar28->max_length <= (int)uVar21) break;
                                      if ((uint)p_Var26->max_length <= uVar19)
                                      goto code_?;
                                      if (((Renderer *)*pp_Var40 == (Renderer *)0x0) ||
                                         (pMVar28 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Renderer::Renderer_get_materials
                                                              ((Renderer *)*pp_Var40,
                                                               (MethodInfo *)0x0),
                                         pMVar28 == (Material__Array *)0x0))
                                      goto code_?;
                                      if ((uint)pMVar28->max_length <= uVar21)
                                      goto code_?;
                                      pMVar29 = *(Material **)
                                                ((longlong)pMVar28->vector + lVar27 + -0x20);
                                      if (pMVar29 == (Material *)0x0) goto code_?;
                                      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                               Material_HasProperty_1
                                                         (pMVar29,StringLiteral__Color,
                                                          (MethodInfo *)0x0);
                                      if (bVar15 != 0) {
                                        if ((uint)p_Var26->max_length <= uVar19)
                                        goto code_?;
                                        if (((Renderer *)*pp_Var40 == (Renderer *)0x0) ||
                                           (pMVar28 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Renderer::Renderer_get_materials
                                                                ((Renderer *)*pp_Var40,
                                                                 (MethodInfo *)0x0),
                                           pMVar28 == (Material__Array *)0x0))
                                        goto code_?;
                                        if ((uint)pMVar28->max_length <= uVar21)
                                        goto code_?;
                                        pMVar29 = *(Material **)
                                                  ((longlong)pMVar28->vector + lVar27 + -0x20);
                                        if (pMVar29 == (Material *)0x0) goto code_?;
                                        pCVar30 = UnityEngine.CoreModule.dll::UnityEngine::Material
                                                  ::Material_get_color
                                                            (aCStack_5,pMVar29,(MethodInfo *)0x0);
                                        lVar31._0_4_ = pCVar30->r;
                                        lVar31._4_4_ = pCVar30->g;
                                        fVar32 = pCVar30->b;
                                        if ((uint)p_Var26->max_length <= uVar19)
                                        goto code_?;
                                        if (((Renderer *)*pp_Var40 == (Renderer *)0x0) ||
                                           (pMVar28 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Renderer::Renderer_get_materials
                                                                ((Renderer *)*pp_Var40,
                                                                 (MethodInfo *)0x0),
                                           pMVar28 == (Material__Array *)0x0))
                                        goto code_?;
                                        if ((uint)pMVar28->max_length <= uVar21)
                                        goto code_?;
                                        pMVar29 = *(Material **)
                                                  ((longlong)pMVar28->vector + lVar27 + -0x20);
                                        QStack_8.w = 1.0;
                                        QStack_8.z = fVar32;
                                        QStack_8._0_8_ = lVar31;
                                        if (pMVar29 == (Material *)0x0) goto code_?;
                                        CStack_9.b = fVar32;
                                        CStack_9.a = 1.0;
                                        CStack_9._0_8_ = lVar31;
                                        UnityEngine.CoreModule.dll::UnityEngine::Material::
                                        Material_set_color(pMVar29,&CStack_9,(MethodInfo *)0x0);
                                      }
                                      uVar21 = uVar21 + 1;
                                      lVar27 = lVar27 + 8;
                                    }
                                    pp_Var40 = pp_Var40 + 1;
                                  }
                                  pGVar10 = (this->fields).bodyClone;
                                  if (pGVar10 != (GameObject *)0x0) {
                                    if ((
                                        UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?(
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                    }
                                    pAVar33 = (Animation *)
                                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentInChildren_3
                                                        (pGVar10,0,
                                                         ((pMVar26->field7_0x38).rgctx_data)->method
                                                        );
                                    bVar34 = iRam_? != 0;
                                    (this->fields).goAnimation = pAVar33;
                                    if (bVar34) {
                                      uVar19 = (uint)((ulonglong)&(this->fields).goAnimation >> 0xc)
                                      ;
                                      uVar35 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
                                      do {
                                        uVar36 = *(ulonglong *)(uVar35 * 8 + 0xADDR);
                                        puVar37 = (ulonglong *)(uVar35 * 8 + 0xADDR);
                                        LOCK();
                                        bVar34 = uVar36 == *puVar37;
                                        if (bVar34) {
                                          *puVar37 = uVar36 | 1L << (uVar19 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar34);
                                    }
                                    pLVar38 = (this->fields).animations;
                                    pAVar33 = (this->fields).goAnimation;
                                    if (pLVar38 != (List_1_System_String_ *)0x0) {
                                      uVar19 = (this->fields).currentAnimation;
                                      if ((uint)(pLVar38->fields)._size <= uVar19) {
code_?:
                                        mscorlib.dll::System::ThrowHelper::
                                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                                  ((MethodInfo *)0x0);
                                        pcVar24 = (code *)swi(3);
                                        (*pcVar24)();
                                        return;
                                      }
                                      pSVar39 = (pLVar38->fields)._items;
                                      if (pSVar39 != (String__Array *)0x0) {
                                        if ((uint)pSVar39->max_length <= uVar19) {
code_?:
                                          FUN_?();
                                          pcVar24 = (code *)swi(3);
                                          (*pcVar24)();
                                          return;
                                        }
                                        if (pAVar33 != (Animation *)0x0) {
                                          UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                                          Animation_Play_3(pAVar33,pSVar39->vector[(int)uVar19],
                                                           PlayMode__Enum_StopSameLayer,
                                                           (MethodInfo *)0x0);
                                          pAVar33 = (this->fields).goAnimation;
                                          if (pAVar33 != (Animation *)0x0) {
                                            pAVar40 = (ActivateOnAnimationBase__Array *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_GetComponentsInChildren
                                                                ((Component *)pAVar33,
                                                                                                                                  
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                            bVar34 = iRam_? != 0;
                                            (this->fields).OnAnimationActivators = pAVar40;
                                            if (bVar34) {
                                              uVar19 = (uint)((ulonglong)
                                                              &(this->fields).OnAnimationActivators
                                                             >> 0xc);
                                              uVar35 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
                                              do {
                                                uVar36 = *(ulonglong *)(uVar35 * 8 + 0xADDR);
                                                puVar37 = (ulonglong *)(uVar35 * 8 + 0xADDR);
                                                LOCK();
                                                bVar34 = uVar36 == *puVar37;
                                                if (bVar34) {
                                                  *puVar37 = uVar36 | 1L << (uVar19 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar34);
                                            }
                                            uVar19 = 0;
                                            pAVar40 = (this->fields).OnAnimationActivators;
                                            while (pAVar40 != (ActivateOnAnimationBase__Array *)0x0)
                                            {
                                              if ((int)pAVar40->max_length <= (int)uVar19) {
                                                pAVar17 = (this->fields).previewer;
                                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                             field_0x1c == 0) {
                                                  FUN_?();
                                                }
                                                pAVar17 = (AvatarPreviewer *)
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Object::Object_1_Instantiate_4
                                                                    ((Object *)pAVar17,
                                                                                                                                          
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                                bVar34 = iRam_? != 0;
                                                (this->fields).toPreviewer = pAVar17;
                                                if (bVar34) {
                                                  uVar19 = (uint)((ulonglong)
                                                                  &(this->fields).toPreviewer >> 0xc
                                                                 );
                                                  uVar35 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar36 = *(ulonglong *)(uVar35 * 8 + 0xADDR)
                                                    ;
                                                    puVar37 = (ulonglong *)(uVar35 * 8 + 0xADDR)
                                                    ;
                                                    LOCK();
                                                    bVar34 = uVar36 == *puVar37;
                                                    if (bVar34) {
                                                      *puVar37 = uVar36 | 1L << (uVar19 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar34);
                                                }
                                                pAVar17 = (this->fields).toPreviewer;
                                                textureWidth = (this->fields).previewDimensionsX;
                                                textureHeight = (this->fields).previewDimensionsY;
                                                if (cRam_? == '\0') {
                                                  FUN_?(&TypeInfo__MVGameControllerBase);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pMVar41 = TypeInfo__MVGameControllerBase->
                                                          static_fields->instance;
                                                if ((((pMVar41 != (MVGameControllerBase *)0x0) &&
                                                     (pMVar42 = (pMVar41->fields).game,
                                                     pMVar42 != (MVNetworkGame *)0x0)) &&
                                                    (pMVar43 = (pMVar42->fields).playerContainer,
                                                    pMVar43 != (MVPlayerContainer *)0x0)) &&
                                                   (pMVar44 = MVPlayerContainer::
                                                              MVPlayerContainer_get_LocalPlayer
                                                                        (pMVar43,(MethodInfo *)0x0),
                                                   pMVar44 != (MVLocalPlayer *)0x0)) {
                                                  if (cRam_? == '\0') {
                                                    FUN_?();
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar45 = MVGameControllerBase::
                                                            MVGameControllerBase_get_WOCM
                                                                      ((MethodInfo *)0x0);
                                                  if ((pMVar45 != (MVWorldObjectClientManager *)0x0)
                                                     && (pOVar22 = MVWorldObjectClientManager::
                                                                                                                                      
                                                  MVWorldObjectClientManager_GetWorldObjectClient_1
                                                            (pMVar45,(pMVar44->fields).
                                                                     defaultBodyWoId,
                                                                                                                          
                                                  MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                                  ), fVar46 = _UNK_?,
                                                  uVar19 = _UNK_?, fVar32 = _UNK_?,
                                                  pOVar22 != (Object *)0x0)) {
                                                    layersToRender =
                                                         *(LayerFlags__Enum *)&pOVar22[0x12].monitor
                                                    ;
                                                    pTVar16 = (this->fields).avatarResetToTransform;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__MVGameControllerBase)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pMVar41 = TypeInfo__MVGameControllerBase->
                                                              static_fields->instance;
                                                    if (((pMVar41 != (MVGameControllerBase *)0x0) &&
                                                        (pMVar42 = (pMVar41->fields).game,
                                                        pMVar42 != (MVNetworkGame *)0x0)) &&
                                                       ((pMVar43 = (pMVar42->fields).playerContainer
                                                        , pMVar43 != (MVPlayerContainer *)0x0 &&
                                                        (pMVar44 = MVPlayerContainer::
                                                                   MVPlayerContainer_get_LocalPlayer
                                                                             (pMVar43,(MethodInfo *)
                                                                                      0x0),
                                                        pMVar44 != (MVLocalPlayer *)0x0)))) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?();
                                                        LOCK();
                                                        UNLOCK();
                                                        cRam_? = '\x01';
                                                      }
                                                      pMVar45 = MVGameControllerBase::
                                                                MVGameControllerBase_get_WOCM
                                                                          ((MethodInfo *)0x0);
                                                      if ((pMVar45 !=
                                                           (MVWorldObjectClientManager *)0x0) &&
                                                         (wo = (MVWorldObjectClient *)
                                                               MVWorldObjectClientManager::
                                                                                                                              
                                                  MVWorldObjectClientManager_GetWorldObjectClient_1
                                                            (pMVar45,(pMVar44->fields).
                                                                     defaultBodyWoId,
                                                                                                                          
                                                  MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                                  ), pAVar17 != (AvatarPreviewer *)0x0)) {
                                                    VStack_47._0_8_ = ZEXT48(_UNK_?);
                                                    CStack_9._0_8_ = CONCAT44(fVar32,fVar32);
                                                    QStack_8._0_8_ = (ulonglong)uVar19 << 0x20;
                                                    VStack_47.z = 0.0;
                                                    CStack_9.b = fVar32;
                                                    QStack_8.z = fVar46;
                                                    AvatarPreviewer::AvatarPreviewer_Initialize
                                                              (pAVar17,textureWidth,textureHeight,
                                                               CameraClearFlags__Enum_Color,
                                                               layersToRender,(Vector3 *)&QStack_8,
                                                               pTVar16,(Vector3 *)&CStack_9,
                                                                                                                              
                                                  StringLiteral_Avatar_accessory_preview,wo,
                                                  (this->fields).bodyClone,&VStack_47,
                                                  (MethodInfo *)0x0);
                                                  pAVar17 = (this->fields).toPreviewer;
                                                  if ((pAVar17 != (AvatarPreviewer *)0x0) &&
                                                     (pCVar48 = (pAVar17->fields).previewCam,
                                                     pCVar48 != (Camera *)0x0)) {
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
                                                  pvVar25 = (pCVar48->fields)._._._.m_CachedPtr;
                                                  if (pvVar25 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar48,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  pvVar25 = (void *)(*pcRam_?)
                                                                              (pvVar25);
                                                  pOVar22 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar25,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar22 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  VStack_47.x = 0.0;
                                                  VStack_47.y = 0.0;
                                                  VStack_47.z = 0.0;
                                                  pOVar23 = pOVar22[1].klass;
                                                  if (pOVar23 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar22,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  (*pcRam_?)(pOVar23);
                                                  QStack_8.x = VStack_47.x + 0.0;
                                                  QStack_8.y = VStack_47.y + _UNK_?;
                                                  QStack_8.z = VStack_47.z + 0.0;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar23 = pOVar22[1].klass;
                                                  if (pOVar23 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar22,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  (*pcRam_?)(pOVar23);
                                                  pGVar10 = (this->fields).bodyClone;
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
                                                  pvVar25 = (pGVar10->fields)._.m_CachedPtr;
                                                  if (pvVar25 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar10,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  pvVar25 = (void *)(*pcRam_?)
                                                                              (pvVar25);
                                                  pOVar22 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar25,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar22 != (Object *)0x0) {
                                                    aCStack_5[0].r = fVar11;
                                                    aCStack_5[0].g = fVar12;
                                                    aCStack_5[0].b = fVar13;
                                                    aCStack_5[0].a = fVar14;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar23 = pOVar22[1].klass;
                                                  if (pOVar23 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar22,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  (*pcRam_?)(pOVar23);
                                                  pAVar17 = (this->fields).toPreviewer;
                                                  if ((pAVar17 != (AvatarPreviewer *)0x0) &&
                                                     (pCVar48 = (pAVar17->fields).previewCam,
                                                     pCVar48 != (Camera *)0x0)) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  if ((pCVar48->fields)._._._.m_CachedPtr ==
                                                      (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar48,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  fVar11 = (float)(*pcRam_?)();
                                                  bVar34 = cRam_? == '\0';
                                                  pGVar10 = (this->fields).bodyClone;
                                                  (this->fields).startFov = fVar11;
                                                  if (bVar34) {
                                                    FUN_?(&TypeInfo__UnityEngine__Debug);
                                                    LOCK();
                                                    UNLOCK();
                                                    FUN_?();
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  uVar19 = 0x40000;
                                                  layer = 0;
                                                  do {
                                                    layer = layer + 1;
                                                    uVar19 = (int)uVar19 >> 1;
                                                  } while ((uVar19 & 1) == 0);
                                                  LayerUtil::LayerUtil_SetLayerRecursively_4
                                                            (pGVar10,layer,(MethodInfo *)0x0);
                                                  pAVar17 = (this->fields).toPreviewer;
                                                  if ((pAVar17 != (AvatarPreviewer *)0x0) &&
                                                     (pRVar18 = (this->fields).toImage,
                                                     pRVar18 != (RawImage *)0x0)) {
                                                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                                    RawImage_set_texture
                                                              (pRVar18,(Texture *)
                                                                      (pAVar17->fields).
                                                                      previewTexture,
                                                               (MethodInfo *)0x0);
                                                    pOVar22 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Object::
                                                              Object_1_Instantiate_4
                                                                        ((Object *)
                                                                         (this->fields).
                                                                         dropShadowPlane,
                                                                                                                                                  
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if (pOVar22 != (Object *)0x0) {
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
                                                  pOVar23 = pOVar22[1].klass;
                                                  if (pOVar23 == (Object__Class *)0x0) {
code_?:
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar22,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  pvVar25 = (void *)(*pcRam_?)(pOVar23)
                                                  ;
                                                  pTVar16 = (Transform *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar25,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pTVar16 != (Transform *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_SetParent_1
                                                              (pTVar16,(this->fields).
                                                                       avatarResetToTransform,1,
                                                               (MethodInfo *)0x0);
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
                                                  pOVar23 = pOVar22[1].klass;
                                                  if (pOVar23 == (Object__Class *)0x0)
                                                  goto code_?;
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  pvVar25 = (void *)(*pcRam_?)(pOVar23)
                                                  ;
                                                  pOVar22 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar25,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  pAVar17 = (this->fields).toPreviewer;
                                                  if ((pAVar17 != (AvatarPreviewer *)0x0) &&
                                                     (pGVar10 = (pAVar17->fields).
                                                                _PreviewGameObject_k__BackingField,
                                                     pGVar10 != (GameObject *)0x0)) {
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
                                                  pvVar25 = (pGVar10->fields)._.m_CachedPtr;
                                                  if (pvVar25 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar10,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  pvVar25 = (void *)(*pcRam_?)
                                                                              (pvVar25);
                                                  obj_00 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           Bindings::Unmarshal::
                                                           Unmarshal_UnmarshalUnityObject
                                                                     (pvVar25,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (obj_00 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  VStack_47.x = 0.0;
                                                  VStack_47.y = 0.0;
                                                  VStack_47.z = 0.0;
                                                  pOVar23 = obj_00[1].klass;
                                                  if (pOVar23 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (obj_00,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  (*pcRam_?)(pOVar23);
                                                  uVar49._0_4_ = VStack_47.x + 0.0;
                                                  if (pOVar22 == (Object *)0x0) {
                                                    FUN_?();
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  uVar49._4_4_ = VStack_47.y - _UNK_?;
                                                  CStack_9.b = VStack_47.z + 0.0;
                                                  CStack_9._0_8_ = uVar49;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar23 = pOVar22[1].klass;
                                                  if (pOVar23 != (Object__Class *)0x0) {
                                                    pcVar24 = pcRam_?;
                                                    if ((pcRam_? == (code *)0x0) &&
                                                       (pcVar24 = (code *)FUN_?(&
                                                  UNK_?), pcVar24 == (code *)0x0)) {
                                                    uVar3 = func_?(&UNK_?);
                                                    FUN_?(uVar3,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  (*pcRam_?)(pOVar23,&CStack_9);
                                                  (this->fields).imagesReady = 1;
                                                  return;
                                                  }
                                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings
                                                  ::ThrowHelper::
                                                  ThrowHelper_2_ThrowNullReferenceException
                                                            (pOVar22,(MethodInfo *)0x0);
                                                  pcVar24 = (code *)swi(3);
                                                  (*pcVar24)();
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
                                                  pcVar24 = (code *)swi(3);
                                                  (*pcVar24)();
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                break;
                                              }
                                              pAVar40 = (this->fields).OnAnimationActivators;
                                              if (pAVar40 == (ActivateOnAnimationBase__Array *)0x0)
                                              break;
                                              if ((uint)pAVar40->max_length <= uVar19)
                                              goto code_?;
                                              pLVar38 = (this->fields).animations;
                                              if (pLVar38 == (List_1_System_String_ *)0x0) break;
                                              uVar21 = (this->fields).currentAnimation;
                                              if ((uint)(pLVar38->fields)._size <= uVar21)
                                              goto code_?;
                                              pSVar39 = (pLVar38->fields)._items;
                                              if (pSVar39 == (String__Array *)0x0) break;
                                              if ((uint)pSVar39->max_length <= uVar21)
                                              goto code_?;
                                              plVar50 = *(longlong **)
                                                        ((longlong)pAVar40->vector + lVar2 + -0x20)
                                              ;
                                              if (plVar50 == (longlong *)0x0) break;
                                              (**(code **)(*plVar50 + 0x188))
                                                        (plVar50,pSVar39->vector[(int)uVar21],
                                                         *(undefined8 *)(*plVar50 + 400));
                                              uVar19 = uVar19 + 1;
                                              lVar2 = lVar2 + 8;
                                              pAVar40 = (this->fields).OnAnimationActivators;
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
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Start
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarAccessoryPreviewer___Start_b__24_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).gameMode == 2) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__AvatarAccessoryPreviewer___Start_b__24_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar4 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
    ;
    if ((
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar4);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
              (pGVar3,(IList_1_UnityEngine_Transform_ *)
                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList,(MethodInfo *)0x0);
    pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
              s_InternalTransformList;
    if (pLVar5 != (List_1_UnityEngine_Transform_ *)0x0) {
      lVar6 = (longlong)(pLVar5->fields)._size;
      uVar7 = 0;
      if (0 < lVar6) {
        lVar8 = 0;
        lVar9 = 0x20;
        do {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList;
          if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar5->fields)._size <= uVar7) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar10 = (pLVar5->fields)._items;
          if (pTVar10 == (Transform__Array *)0x0) goto code_?;
          if ((uint)pTVar10->max_length <= uVar7) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_01 = *(Component **)((longlong)pTVar10->vector + lVar9 + -0x20);
          if (this_01 == (Component *)0x0) goto code_?;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (this_01,(MethodInfo *)0x0);
          bVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                   ExecuteEvents_Execute_18
                             (pGVar3,(BaseEventData *)0x0,this_03,
                              (pMVar4->field7_0x38).rgctx_data[1].method);
          if (bVar11 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_01,(MethodInfo *)0x0);
            return;
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (lVar8 < lVar6);
      }
      return;
    }
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if (extraout_RAX == 0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar12 == (MVWorldObjectClientManager *)0x0) goto DAT_?;
  this_02 = (MVBody *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                      (pMVar12,*(int32_t *)(extraout_RAX + 0xa8),
                       MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                      );
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                  ,this_02,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
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
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SETUP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_accessory_preview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_SETUP,(MethodInfo *)0x0);
  (this->fields).avatarBody = this_02;
  func_?(&(this->fields).avatarBody);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar13 = TypeInfo__UnityEngine__Quaternion->static_fields;
  lVar6._0_4_ = (pQVar13->identityQuaternion).x;
  lVar6._4_4_ = (pQVar13->identityQuaternion).y;
  uVar14._0_4_ = (pQVar13->identityQuaternion).z;
  uVar14._4_4_ = (pQVar13->identityQuaternion).w;
  pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                      ((Quaternion *)aCStack_16,0.0,_UNK_?,0.0,
                       (MethodInfo *)CONCAT44(in_stack_17,in_stack_18));
  QStack_19.x = pQVar15->x;
  QStack_19.y = pQVar15->y;
  QStack_19.z = pQVar15->z;
  QStack_19.w = pQVar15->w;
  CStack_20._0_8_ = lVar6;
  CStack_20._8_8_ = uVar14;
  pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                      ((Quaternion *)aCStack_16,(Quaternion *)&CStack_20,&QStack_19,in_R9);
  pGVar3 = (this->fields).bodyClone;
  fVar21 = pQVar15->x;
  fVar22 = pQVar15->y;
  fVar23 = pQVar15->z;
  fVar24 = pQVar15->w;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar11 != 0) {
    pGVar3 = (this->fields).bodyClone;
    if ((pGVar3 == (GameObject *)0x0) ||
       (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0), pTVar25 == (Transform *)0x0))
    goto code_?;
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)aCStack_16,pTVar25,(MethodInfo *)0x0);
    fVar21 = pQVar15->x;
    fVar22 = pQVar15->y;
    fVar23 = pQVar15->z;
    fVar24 = pQVar15->w;
  }
  if (this_02 != (MVBody *)0x0) {
    pGVar3 = MVBody::MVBody_CreateClone(this_02,1,1,(MethodInfo *)0x0);
    (this->fields).bodyClone = pGVar3;
    func_?(&(this->fields).bodyClone);
    this_00 = (this_02->fields).bodyAccessoriesController;
    if (this_00 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                (this_00,0,(MethodInfo *)0x0);
      pTVar25 = (this->fields).avatarResetToTransform;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pTVar25,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        pTVar25 = (this->fields).avatarResetToTransform;
        if (pTVar25 == (Transform *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar25,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      }
      pAVar26 = (this->fields).toPreviewer;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pAVar26,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        pAVar26 = (this->fields).toPreviewer;
        if (pAVar26 == (AvatarPreviewer *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar26,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      }
      pGVar3 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
                (pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar3,(MethodInfo *)0x0);
        (this->fields).avatarResetToTransform = pTVar25;
        func_?(&(this->fields).avatarResetToTransform);
        pRVar27 = (this->fields).toImage;
        if (pRVar27 != (RawImage *)0x0) {
          QStack_19.x = (float)_UNK_?;
          QStack_19.y = (float)_UNK_?;
          QStack_19.z = _UNK_?;
          QStack_19.w = _UNK_?;
          (*(pRVar27->klass->vtable).set_color.methodPtr)();
          if ((this->fields).bodyClone != (GameObject *)0x0) {
            lVar6 = FUN_?();
            uVar7 = 0;
            if (lVar6 != 0) {
              puVar28 = (undefined8 *)(lVar6 + 0x20);
              for (uVar29 = uVar7; (int)uVar29 < *(int *)(lVar6 + 0x18); uVar29 = uVar29 + 1) {
                if (*(uint *)(lVar6 + 0x18) <= uVar29) goto code_?;
                if ((Behaviour *)*puVar28 == (Behaviour *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)*puVar28,0,(MethodInfo *)0x0);
                puVar28 = puVar28 + 1;
              }
              if (((this->fields).bodyClone != (GameObject *)0x0) &&
                 (lVar6 = FUN_?(), lVar6 != 0)) {
                puVar28 = (undefined8 *)(lVar6 + 0x20);
                for (uVar29 = uVar7; (int)uVar29 < *(int *)(lVar6 + 0x18); uVar29 = uVar29 + 1) {
                  if (*(uint *)(lVar6 + 0x18) <= uVar29) goto code_?;
                  if (((Component *)*puVar28 == (Component *)0x0) ||
                     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)*puVar28,(MethodInfo *)0x0),
                     pGVar3 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,0,(MethodInfo *)0x0);
                  puVar28 = puVar28 + 1;
                }
                if (((this->fields).bodyClone != (GameObject *)0x0) &&
                   (lVar6 = FUN_?(), lVar6 != 0)) {
                  puVar28 = (undefined8 *)(lVar6 + 0x20);
                  for (uVar29 = uVar7; (int)uVar29 < *(int *)(lVar6 + 0x18); uVar29 = uVar29 + 1)
                  {
                    if (*(uint *)(lVar6 + 0x18) <= uVar29) goto code_?;
                    pOVar30 = (Object *)*puVar28;
                    if (pOVar30 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar31 = pOVar30[1].klass;
                    if (pOVar31 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar14 = func_?(&UNK_?);
                      FUN_?(uVar14,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcRam_? = pcVar2;
                    pvVar32 = (void *)(*pcRam_?)(pOVar31);
                    pOVar30 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                              Unmarshal_UnmarshalUnityObject
                                        (pvVar32,
                                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                        );
                    if (pOVar30 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar31 = pOVar30[1].klass;
                    if (pOVar31 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar14 = func_?(&UNK_?);
                      FUN_?(uVar14,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcRam_? = pcVar2;
                    (*pcRam_?)(pOVar31);
                    puVar28 = puVar28 + 1;
                  }
                  pGVar3 = (this->fields).bodyClone;
                  if ((pGVar3 != (GameObject *)0x0) &&
                     (p_Var28 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_4
                                          (pGVar3,1,
                                           SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                                          ), p_Var28 != (_Il2CppFullySharedGenericType__Array *)0x0)
                     ) {
                    pp_Var43 = p_Var28->vector;
                    for (uVar29 = uVar7; (int)uVar29 < (int)p_Var28->max_length;
                        uVar29 = uVar29 + 1) {
                      if ((uint)p_Var28->max_length <= uVar29) goto code_?;
                      if (((Component *)*pp_Var43 == (Component *)0x0) ||
                         (pOVar30 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_GetComponent_1
                                              ((Component *)*pp_Var43,
                                               UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                              ), pOVar30 == (Object *)0x0))
                      goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar31 = pOVar30[1].klass;
                      if (pOVar31 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pcVar2 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0))
                      {
                        uVar14 = func_?(&UNK_?);
                        FUN_?(uVar14,0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pcRam_? = pcVar2;
                      (*pcRam_?)(pOVar31,1);
                      pp_Var43 = pp_Var43 + 1;
                    }
                    pGVar3 = (this->fields).bodyClone;
                    if ((pGVar3 != (GameObject *)0x0) &&
                       (p_Var28 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentsInChildren_4
                                            (pGVar3,1,
                                             AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____
                                            ),
                       p_Var28 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                      pp_Var43 = p_Var28->vector;
                      for (uVar29 = uVar7; (int)uVar29 < (int)p_Var28->max_length;
                          uVar29 = uVar29 + 1) {
                        if ((uint)p_Var28->max_length <= uVar29) goto code_?;
                        pOVar30 = (Object *)*pp_Var43;
                        if (pOVar30 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar31 = pOVar30[1].klass;
                        if (pOVar31 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcVar2 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)
                           ) {
                          uVar14 = func_?(&UNK_?);
                          FUN_?(uVar14,0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcRam_? = pcVar2;
                        (*pcRam_?)(pOVar31);
                        pp_Var43 = pp_Var43 + 1;
                      }
                      pGVar3 = (this->fields).bodyClone;
                      if ((pGVar3 != (GameObject *)0x0) &&
                         (p_Var28 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_4
                                              (pGVar3,1,
                                               AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____
                                              ),
                         p_Var28 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                        pp_Var43 = p_Var28->vector;
                        for (uVar29 = uVar7;
                            pMVar4 = 
                            SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                            , (int)uVar29 < (int)p_Var28->max_length; uVar29 = uVar29 + 1) {
                          if ((uint)p_Var28->max_length <= uVar29) goto code_?;
                          pOVar30 = (Object *)*pp_Var43;
                          if (pOVar30 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar31 = pOVar30[1].klass;
                          if (pOVar31 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcVar2 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar2 = (code *)FUN_?(&UNK_?),
                             pcVar2 == (code *)0x0)) {
                            uVar14 = func_?(&UNK_?);
                            FUN_?(uVar14,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcRam_? = pcVar2;
                          (*pcRam_?)(pOVar31);
                          pp_Var43 = pp_Var43 + 1;
                        }
                        pGVar3 = (this->fields).bodyClone;
                        if (pGVar3 != (GameObject *)0x0) {
                          if ((
                              SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                            FUN_?(
                                         SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______
                                         );
                          }
                          p_Var28 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_4
                                              (pGVar3,0,((pMVar4->field7_0x38).rgctx_data)->method
                                              );
                          if (p_Var28 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                            pp_Var43 = p_Var28->vector;
                            for (uVar29 = uVar7;
                                pMVar4 = 
                                InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                , (int)uVar29 < (int)p_Var28->max_length; uVar29 = uVar29 + 1) {
                              if ((uint)p_Var28->max_length <= uVar29) goto code_?;
                              pOVar30 = (Object *)*pp_Var43;
                              if (pOVar30 == (Object *)0x0) goto code_?;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                             );
                                LOCK();
                                UNLOCK();
                                FUN_?(&
                                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pOVar31 = pOVar30[1].klass;
                              if (pOVar31 == (Object__Class *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException(pOVar30,(MethodInfo *)0x0)
                                ;
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pcVar2 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar2 = (code *)FUN_?(&UNK_?),
                                 pcVar2 == (code *)0x0)) {
                                uVar14 = func_?(&UNK_?);
                                FUN_?(uVar14,0);
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pcRam_? = pcVar2;
                              pvVar32 = (void *)(*pcRam_?)(pOVar31);
                              obj = (Object_1 *)
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                    Unmarshal_UnmarshalUnityObject
                                              (pvVar32,
                                               UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
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
                              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                                        (obj,0.0,(MethodInfo *)0x0);
                              pp_Var43 = pp_Var43 + 1;
                            }
                            pGVar3 = (this->fields).bodyClone;
                            if (pGVar3 != (GameObject *)0x0) {
                              if ((
                                  InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                FUN_?(
                                             InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__
                                             );
                              }
                              pOVar30 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_GetComponentInChildren_3
                                                  (pGVar3,0,
                                                   ((pMVar4->field7_0x38).rgctx_data)->method);
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
                              if (pOVar30 != (Object *)0x0) {
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                if (pOVar30[1].klass != (Object__Class *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    FUN_?(&
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar31 = pOVar30[1].klass;
                                  if (pOVar31 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              (pOVar30,(MethodInfo *)0x0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcVar2 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar2 = (code *)FUN_?(&UNK_?),
                                     pcVar2 == (code *)0x0)) {
                                    uVar14 = func_?(&UNK_?);
                                    FUN_?(uVar14,0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcRam_? = pcVar2;
                                  pvVar32 = (void *)(*pcRam_?)(pOVar31);
                                  pOVar30 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                            Unmarshal::Unmarshal_UnmarshalUnityObject
                                                      (pvVar32,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                                  );
                                  if (pOVar30 == (Object *)0x0) goto code_?;
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar31 = pOVar30[1].klass;
                                  if (pOVar31 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              (pOVar30,(MethodInfo *)0x0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcVar2 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar2 = (code *)FUN_?(&UNK_?),
                                     pcVar2 == (code *)0x0)) {
                                    uVar14 = func_?(&UNK_?);
                                    FUN_?(uVar14,0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcRam_? = pcVar2;
                                  (*pcRam_?)(pOVar31);
                                }
                              }
                              AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers
                                        (this,(MethodInfo *)0x0);
                              pMVar4 = 
                              UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                              ;
                              pGVar3 = (this->fields).bodyClone;
                              if (pGVar3 != (GameObject *)0x0) {
                                if ((
                                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                  FUN_?(
                                               UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                                               );
                                }
                                p_Var28 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_GetComponentsInChildren_4
                                                    (pGVar3,0,
                                                     ((pMVar4->field7_0x38).rgctx_data)->method);
                                if (p_Var28 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var43 = p_Var28->vector;
                                  lVar6 = 0x20;
                                  for (; pMVar4 = 
                                         UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                      , (int)uVar7 < (int)p_Var28->max_length; uVar7 = uVar7 + 1)
                                  {
                                    uVar29 = 0;
                                    lVar9 = 0x20;
                                    while( true ) {
                                      if ((uint)p_Var28->max_length <= uVar7)
                                      goto code_?;
                                      if (((Renderer *)*pp_Var43 == (Renderer *)0x0) ||
                                         (pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Renderer::Renderer_get_materials
                                                              ((Renderer *)*pp_Var43,
                                                               (MethodInfo *)0x0),
                                         pMVar33 == (Material__Array *)0x0))
                                      goto code_?;
                                      if ((int)pMVar33->max_length <= (int)uVar29) break;
                                      if ((uint)p_Var28->max_length <= uVar7)
                                      goto code_?;
                                      if (((Renderer *)*pp_Var43 == (Renderer *)0x0) ||
                                         (pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Renderer::Renderer_get_materials
                                                              ((Renderer *)*pp_Var43,
                                                               (MethodInfo *)0x0),
                                         pMVar33 == (Material__Array *)0x0))
                                      goto code_?;
                                      if ((uint)pMVar33->max_length <= uVar29)
                                      goto code_?;
                                      pMVar34 = *(Material **)
                                                ((longlong)pMVar33->vector + lVar9 + -0x20);
                                      if (pMVar34 == (Material *)0x0) goto code_?;
                                      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                               Material_HasProperty_1
                                                         (pMVar34,StringLiteral__Color,
                                                          (MethodInfo *)0x0);
                                      if (bVar11 != 0) {
                                        if ((uint)p_Var28->max_length <= uVar7)
                                        goto code_?;
                                        if (((Renderer *)*pp_Var43 == (Renderer *)0x0) ||
                                           (pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Renderer::Renderer_get_materials
                                                                ((Renderer *)*pp_Var43,
                                                                 (MethodInfo *)0x0),
                                           pMVar33 == (Material__Array *)0x0))
                                        goto code_?;
                                        if ((uint)pMVar33->max_length <= uVar29)
                                        goto code_?;
                                        pMVar34 = *(Material **)
                                                  ((longlong)pMVar33->vector + lVar9 + -0x20);
                                        if (pMVar34 == (Material *)0x0) goto code_?;
                                        pCVar35 = UnityEngine.CoreModule.dll::UnityEngine::Material
                                                  ::Material_get_color
                                                            (aCStack_16,pMVar34,(MethodInfo *)0x0);
                                        lVar8._0_4_ = pCVar35->r;
                                        lVar8._4_4_ = pCVar35->g;
                                        fVar36 = pCVar35->b;
                                        if ((uint)p_Var28->max_length <= uVar7)
                                        goto code_?;
                                        if (((Renderer *)*pp_Var43 == (Renderer *)0x0) ||
                                           (pMVar33 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Renderer::Renderer_get_materials
                                                                ((Renderer *)*pp_Var43,
                                                                 (MethodInfo *)0x0),
                                           pMVar33 == (Material__Array *)0x0))
                                        goto code_?;
                                        if ((uint)pMVar33->max_length <= uVar29)
                                        goto code_?;
                                        pMVar34 = *(Material **)
                                                  ((longlong)pMVar33->vector + lVar9 + -0x20);
                                        QStack_19.w = 1.0;
                                        QStack_19.z = fVar36;
                                        QStack_19._0_8_ = lVar8;
                                        if (pMVar34 == (Material *)0x0) goto code_?;
                                        CStack_20.b = fVar36;
                                        CStack_20.a = 1.0;
                                        CStack_20._0_8_ = lVar8;
                                        UnityEngine.CoreModule.dll::UnityEngine::Material::
                                        Material_set_color(pMVar34,&CStack_20,(MethodInfo *)0x0);
                                      }
                                      uVar29 = uVar29 + 1;
                                      lVar9 = lVar9 + 8;
                                    }
                                    pp_Var43 = pp_Var43 + 1;
                                  }
                                  pGVar3 = (this->fields).bodyClone;
                                  if (pGVar3 != (GameObject *)0x0) {
                                    if ((
                                        UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?(
                                                  UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__
                                                  );
                                    }
                                    pAVar37 = (Animation *)
                                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponentInChildren_3
                                                        (pGVar3,0,
                                                         ((pMVar4->field7_0x38).rgctx_data)->method
                                                        );
                                    bVar38 = iRam_? != 0;
                                    (this->fields).goAnimation = pAVar37;
                                    if (bVar38) {
                                      uVar7 = (uint)((ulonglong)&(this->fields).goAnimation >> 0xc)
                                      ;
                                      uVar39 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                                      do {
                                        uVar40 = *(ulonglong *)(uVar39 * 8 + 0xADDR);
                                        puVar41 = (ulonglong *)(uVar39 * 8 + 0xADDR);
                                        LOCK();
                                        bVar38 = uVar40 == *puVar41;
                                        if (bVar38) {
                                          *puVar41 = uVar40 | 1L << (uVar7 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar38);
                                    }
                                    pLVar42 = (this->fields).animations;
                                    pAVar37 = (this->fields).goAnimation;
                                    if (pLVar42 != (List_1_System_String_ *)0x0) {
                                      uVar7 = (this->fields).currentAnimation;
                                      if ((uint)(pLVar42->fields)._size <= uVar7) {
code_?:
                                        mscorlib.dll::System::ThrowHelper::
                                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                                  ((MethodInfo *)0x0);
                                        pcVar2 = (code *)swi(3);
                                        (*pcVar2)();
                                        return;
                                      }
                                      pSVar43 = (pLVar42->fields)._items;
                                      if (pSVar43 != (String__Array *)0x0) {
                                        if ((uint)pSVar43->max_length <= uVar7) {
code_?:
                                          FUN_?();
                                          pcVar2 = (code *)swi(3);
                                          (*pcVar2)();
                                          return;
                                        }
                                        if (pAVar37 != (Animation *)0x0) {
                                          UnityEngine.AnimationModule.dll::UnityEngine::Animation::
                                          Animation_Play_3(pAVar37,pSVar43->vector[(int)uVar7],
                                                           PlayMode__Enum_StopSameLayer,
                                                           (MethodInfo *)0x0);
                                          pAVar37 = (this->fields).goAnimation;
                                          if (pAVar37 != (Animation *)0x0) {
                                            pAVar44 = (ActivateOnAnimationBase__Array *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_GetComponentsInChildren
                                                                ((Component *)pAVar37,
                                                                                                                                  
                                                  ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______
                                                  );
                                            bVar38 = iRam_? != 0;
                                            (this->fields).OnAnimationActivators = pAVar44;
                                            if (bVar38) {
                                              uVar7 = (uint)((ulonglong)
                                                              &(this->fields).OnAnimationActivators
                                                             >> 0xc);
                                              uVar39 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                                              do {
                                                uVar40 = *(ulonglong *)(uVar39 * 8 + 0xADDR);
                                                puVar41 = (ulonglong *)(uVar39 * 8 + 0xADDR);
                                                LOCK();
                                                bVar38 = uVar40 == *puVar41;
                                                if (bVar38) {
                                                  *puVar41 = uVar40 | 1L << (uVar7 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar38);
                                            }
                                            uVar7 = 0;
                                            pAVar44 = (this->fields).OnAnimationActivators;
                                            while (pAVar44 != (ActivateOnAnimationBase__Array *)0x0)
                                            {
                                              if ((int)pAVar44->max_length <= (int)uVar7) {
                                                pAVar26 = (this->fields).previewer;
                                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                             field_0x1c == 0) {
                                                  FUN_?();
                                                }
                                                pAVar26 = (AvatarPreviewer *)
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          Object::Object_1_Instantiate_4
                                                                    ((Object *)pAVar26,
                                                                                                                                          
                                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                                  );
                                                bVar38 = iRam_? != 0;
                                                (this->fields).toPreviewer = pAVar26;
                                                if (bVar38) {
                                                  uVar7 = (uint)((ulonglong)
                                                                  &(this->fields).toPreviewer >> 0xc
                                                                 );
                                                  uVar39 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar40 = *(ulonglong *)(uVar39 * 8 + 0xADDR)
                                                    ;
                                                    puVar41 = (ulonglong *)(uVar39 * 8 + 0xADDR)
                                                    ;
                                                    LOCK();
                                                    bVar38 = uVar40 == *puVar41;
                                                    if (bVar38) {
                                                      *puVar41 = uVar40 | 1L << (uVar7 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar38);
                                                }
                                                pAVar26 = (this->fields).toPreviewer;
                                                textureWidth = (this->fields).previewDimensionsX;
                                                textureHeight = (this->fields).previewDimensionsY;
                                                if (cRam_? == '\0') {
                                                  FUN_?(&TypeInfo__MVGameControllerBase);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pMVar45 = TypeInfo__MVGameControllerBase->
                                                          static_fields->instance;
                                                if ((((pMVar45 != (MVGameControllerBase *)0x0) &&
                                                     (pMVar46 = (pMVar45->fields).game,
                                                     pMVar46 != (MVNetworkGame *)0x0)) &&
                                                    (pMVar47 = (pMVar46->fields).playerContainer,
                                                    pMVar47 != (MVPlayerContainer *)0x0)) &&
                                                   (pMVar48 = MVPlayerContainer::
                                                              MVPlayerContainer_get_LocalPlayer
                                                                        (pMVar47,(MethodInfo *)0x0),
                                                   pMVar48 != (MVLocalPlayer *)0x0)) {
                                                  if (cRam_? == '\0') {
                                                    FUN_?();
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar12 = MVGameControllerBase::
                                                            MVGameControllerBase_get_WOCM
                                                                      ((MethodInfo *)0x0);
                                                  if ((pMVar12 != (MVWorldObjectClientManager *)0x0)
                                                     && (pOVar30 = MVWorldObjectClientManager::
                                                                                                                                      
                                                  MVWorldObjectClientManager_GetWorldObjectClient_1
                                                            (pMVar12,(pMVar48->fields).
                                                                     defaultBodyWoId,
                                                                                                                          
                                                  MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                                  ), fVar49 = _UNK_?,
                                                  uVar7 = _UNK_?, fVar36 = _UNK_?,
                                                  pOVar30 != (Object *)0x0)) {
                                                    layersToRender =
                                                         *(LayerFlags__Enum *)&pOVar30[0x12].monitor
                                                    ;
                                                    pTVar25 = (this->fields).avatarResetToTransform;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__MVGameControllerBase)
                                                      ;
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pMVar45 = TypeInfo__MVGameControllerBase->
                                                              static_fields->instance;
                                                    if (((pMVar45 != (MVGameControllerBase *)0x0) &&
                                                        (pMVar46 = (pMVar45->fields).game,
                                                        pMVar46 != (MVNetworkGame *)0x0)) &&
                                                       ((pMVar47 = (pMVar46->fields).playerContainer
                                                        , pMVar47 != (MVPlayerContainer *)0x0 &&
                                                        (pMVar48 = MVPlayerContainer::
                                                                   MVPlayerContainer_get_LocalPlayer
                                                                             (pMVar47,(MethodInfo *)
                                                                                      0x0),
                                                        pMVar48 != (MVLocalPlayer *)0x0)))) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?();
                                                        LOCK();
                                                        UNLOCK();
                                                        cRam_? = '\x01';
                                                      }
                                                      pMVar12 = MVGameControllerBase::
                                                                MVGameControllerBase_get_WOCM
                                                                          ((MethodInfo *)0x0);
                                                      if ((pMVar12 !=
                                                           (MVWorldObjectClientManager *)0x0) &&
                                                         (wo = (MVWorldObjectClient *)
                                                               MVWorldObjectClientManager::
                                                                                                                              
                                                  MVWorldObjectClientManager_GetWorldObjectClient_1
                                                            (pMVar12,(pMVar48->fields).
                                                                     defaultBodyWoId,
                                                                                                                          
                                                  MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                                  ), pAVar26 != (AvatarPreviewer *)0x0)) {
                                                    VStack_50._0_8_ = ZEXT48(_UNK_?);
                                                    CStack_20._0_8_ = CONCAT44(fVar36,fVar36);
                                                    QStack_19._0_8_ = (ulonglong)uVar7 << 0x20;
                                                    VStack_50.z = 0.0;
                                                    CStack_20.b = fVar36;
                                                    QStack_19.z = fVar49;
                                                    AvatarPreviewer::AvatarPreviewer_Initialize
                                                              (pAVar26,textureWidth,textureHeight,
                                                               CameraClearFlags__Enum_Color,
                                                               layersToRender,(Vector3 *)&QStack_19,
                                                               pTVar25,(Vector3 *)&CStack_20,
                                                                                                                              
                                                  StringLiteral_Avatar_accessory_preview,wo,
                                                  (this->fields).bodyClone,&VStack_50,
                                                  (MethodInfo *)0x0);
                                                  pAVar26 = (this->fields).toPreviewer;
                                                  if ((pAVar26 != (AvatarPreviewer *)0x0) &&
                                                     (pCVar51 = (pAVar26->fields).previewCam,
                                                     pCVar51 != (Camera *)0x0)) {
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
                                                  pvVar32 = (pCVar51->fields)._._._.m_CachedPtr;
                                                  if (pvVar32 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar51,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  pvVar32 = (void *)(*pcRam_?)
                                                                              (pvVar32);
                                                  pOVar30 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar30 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  VStack_50.x = 0.0;
                                                  VStack_50.y = 0.0;
                                                  VStack_50.z = 0.0;
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  (*pcRam_?)(pOVar31);
                                                  QStack_19.x = VStack_50.x + 0.0;
                                                  QStack_19.y = VStack_50.y + _UNK_?;
                                                  QStack_19.z = VStack_50.z + 0.0;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  (*pcRam_?)(pOVar31);
                                                  pGVar3 = (this->fields).bodyClone;
                                                  if (pGVar3 != (GameObject *)0x0) {
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
                                                  pvVar32 = (pGVar3->fields)._.m_CachedPtr;
                                                  if (pvVar32 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar3,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  pvVar32 = (void *)(*pcRam_?)
                                                                              (pvVar32);
                                                  pOVar30 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pOVar30 != (Object *)0x0) {
                                                    aCStack_16[0].r = fVar21;
                                                    aCStack_16[0].g = fVar22;
                                                    aCStack_16[0].b = fVar23;
                                                    aCStack_16[0].a = fVar24;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  (*pcRam_?)(pOVar31);
                                                  pAVar26 = (this->fields).toPreviewer;
                                                  if ((pAVar26 != (AvatarPreviewer *)0x0) &&
                                                     (pCVar51 = (pAVar26->fields).previewCam,
                                                     pCVar51 != (Camera *)0x0)) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  if ((pCVar51->fields)._._._.m_CachedPtr ==
                                                      (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pCVar51,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  fVar21 = (float)(*pcRam_?)();
                                                  bVar38 = cRam_? == '\0';
                                                  pGVar3 = (this->fields).bodyClone;
                                                  (this->fields).startFov = fVar21;
                                                  if (bVar38) {
                                                    FUN_?(&TypeInfo__UnityEngine__Debug);
                                                    LOCK();
                                                    UNLOCK();
                                                    FUN_?();
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  uVar7 = 0x40000;
                                                  layer = 0;
                                                  do {
                                                    layer = layer + 1;
                                                    uVar7 = (int)uVar7 >> 1;
                                                  } while ((uVar7 & 1) == 0);
                                                  LayerUtil::LayerUtil_SetLayerRecursively_4
                                                            (pGVar3,layer,(MethodInfo *)0x0);
                                                  pAVar26 = (this->fields).toPreviewer;
                                                  if ((pAVar26 != (AvatarPreviewer *)0x0) &&
                                                     (pRVar27 = (this->fields).toImage,
                                                     pRVar27 != (RawImage *)0x0)) {
                                                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                                    RawImage_set_texture
                                                              (pRVar27,(Texture *)
                                                                      (pAVar26->fields).
                                                                      previewTexture,
                                                               (MethodInfo *)0x0);
                                                    pOVar30 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Object::
                                                              Object_1_Instantiate_4
                                                                        ((Object *)
                                                                         (this->fields).
                                                                         dropShadowPlane,
                                                                                                                                                  
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                                  if (pOVar30 != (Object *)0x0) {
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
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
code_?:
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  pvVar32 = (void *)(*pcRam_?)(pOVar31)
                                                  ;
                                                  pTVar25 = (Transform *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (pTVar25 != (Transform *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_SetParent_1
                                                              (pTVar25,(this->fields).
                                                                       avatarResetToTransform,1,
                                                               (MethodInfo *)0x0);
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
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0)
                                                  goto code_?;
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  pvVar32 = (void *)(*pcRam_?)(pOVar31)
                                                  ;
                                                  pOVar30 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Bindings::Unmarshal::
                                                            Unmarshal_UnmarshalUnityObject
                                                                      (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  pAVar26 = (this->fields).toPreviewer;
                                                  if ((pAVar26 != (AvatarPreviewer *)0x0) &&
                                                     (pGVar3 = (pAVar26->fields).
                                                                _PreviewGameObject_k__BackingField,
                                                     pGVar3 != (GameObject *)0x0)) {
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
                                                  pvVar32 = (pGVar3->fields)._.m_CachedPtr;
                                                  if (pvVar32 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar3,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  pvVar32 = (void *)(*pcRam_?)
                                                                              (pvVar32);
                                                  obj_00 = UnityEngine.CoreModule.dll::UnityEngine::
                                                           Bindings::Unmarshal::
                                                           Unmarshal_UnmarshalUnityObject
                                                                     (pvVar32,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                                  if (obj_00 != (Object *)0x0) {
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  VStack_50.x = 0.0;
                                                  VStack_50.y = 0.0;
                                                  VStack_50.z = 0.0;
                                                  pOVar31 = obj_00[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (obj_00,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  (*pcRam_?)(pOVar31);
                                                  uVar52._0_4_ = VStack_50.x + 0.0;
                                                  if (pOVar30 == (Object *)0x0) {
                                                    FUN_?();
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  uVar52._4_4_ = VStack_50.y - _UNK_?;
                                                  CStack_20.b = VStack_50.z + 0.0;
                                                  CStack_20._0_8_ = uVar52;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pOVar31 = pOVar30[1].klass;
                                                  if (pOVar31 == (Object__Class *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              (pOVar30,(MethodInfo *)0x0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcVar2 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar2 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar2 == (code *)0x0)) {
                                                    uVar14 = func_?(&UNK_?);
                                                    FUN_?(uVar14,0);
                                                    pcVar2 = (code *)swi(3);
                                                    (*pcVar2)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar2;
                                                  (*pcRam_?)(pOVar31,&CStack_20);
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
                                                  FUN_?();
                                                  pcVar2 = (code *)swi(3);
                                                  (*pcVar2)();
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                break;
                                              }
                                              pAVar44 = (this->fields).OnAnimationActivators;
                                              if (pAVar44 == (ActivateOnAnimationBase__Array *)0x0)
                                              break;
                                              if ((uint)pAVar44->max_length <= uVar7)
                                              goto code_?;
                                              pLVar42 = (this->fields).animations;
                                              if (pLVar42 == (List_1_System_String_ *)0x0) break;
                                              uVar29 = (this->fields).currentAnimation;
                                              if ((uint)(pLVar42->fields)._size <= uVar29)
                                              goto code_?;
                                              pSVar43 = (pLVar42->fields)._items;
                                              if (pSVar43 == (String__Array *)0x0) break;
                                              if ((uint)pSVar43->max_length <= uVar29)
                                              goto code_?;
                                              plVar53 = *(longlong **)
                                                        ((longlong)pAVar44->vector + lVar6 + -0x20)
                                              ;
                                              if (plVar53 == (longlong *)0x0) break;
                                              (**(code **)(*plVar53 + 0x188))
                                                        (plVar53,pSVar43->vector[(int)uVar29],
                                                         *(undefined8 *)(*plVar53 + 400));
                                              uVar7 = uVar7 + 1;
                                              lVar6 = lVar6 + 8;
                                              pAVar44 = (this->fields).OnAnimationActivators;
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
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Update
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  if ((this->fields).imagesReady != 0) {
    this_00 = (this->fields).toPreviewer;
    if (this_00 == (AvatarPreviewer *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AvatarPreviewer::AvatarPreviewer_UpdateRotation
              (this_00,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
    (this->fields).currentRotationSpeed = 0.0;
  }
  return;
}


/* Void <Start>b__24_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__Start_b__24_0
               (AvatarAccessoryPreviewer *this,IGetCurrentBody *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarAccessoryPreviewer__SetupPreviewer_MVBody_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,MethodInfo__AvatarAccessoryPreviewer__SetupPreviewer_MVBody_,
             (MethodInfo *)0x0);
  if (x == (IGetCurrentBody *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        pIVar5 = &pIVar2->vtable + pIVar2->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IGetCurrentBody__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0,this_00,unaff_RDI)
  ;
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->GetCurrentBody).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,this_00,(pIVar5->GetCurrentBody).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* AvatarAccessoryPreviewer() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__ctor
               (AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dead);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Jump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Walk);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Swim);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).previewDimensionsX = 0x200;
  (this->fields).previewDimensionsY = 0x400;
  (this->fields).rotationSensitivity = 15.0;
  (this->fields).zoomSpeed = 1.5;
  this_00 = (List_1_System_String_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pSVar1 = StringLiteral_Idle;
  pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  if (this_00 != (List_1_System_String_ *)0x0) {
    piVar3 = &(this_00->fields)._version;
    *piVar3 = *piVar3 + 1;
    pSVar4 = (this_00->fields)._items;
    if (pSVar4 != (String__Array *)0x0) {
      uVar5 = (this_00->fields)._size;
      if (uVar5 < (uint)pSVar4->max_length) {
        (this_00->fields)._size = uVar5 + 1;
        FUN_?(pSVar4,(longlong)(int)uVar5,pSVar1);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,(Object *)pSVar1,
                   pMVar2->klass->rgctx_data[0xe].method);
      }
      pSVar1 = StringLiteral_Walk;
      pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      piVar3 = &(this_00->fields)._version;
      *piVar3 = *piVar3 + 1;
      pSVar4 = (this_00->fields)._items;
      if (pSVar4 != (String__Array *)0x0) {
        uVar5 = (this_00->fields)._size;
        if (uVar5 < (uint)pSVar4->max_length) {
          (this_00->fields)._size = uVar5 + 1;
          FUN_?(pSVar4,(longlong)(int)uVar5,pSVar1);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_00,(Object *)pSVar1,
                     pMVar2->klass->rgctx_data[0xe].method);
        }
        pSVar1 = StringLiteral_Jump;
        pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
        ;
        piVar3 = &(this_00->fields)._version;
        *piVar3 = *piVar3 + 1;
        pSVar4 = (this_00->fields)._items;
        if (pSVar4 != (String__Array *)0x0) {
          uVar5 = (this_00->fields)._size;
          if (uVar5 < (uint)pSVar4->max_length) {
            (this_00->fields)._size = uVar5 + 1;
            FUN_?(pSVar4,(longlong)(int)uVar5,pSVar1);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_00,(Object *)pSVar1,
                       pMVar2->klass->rgctx_data[0xe].method);
          }
          pSVar1 = StringLiteral_Swim;
          pMVar2 = 
          MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
          piVar3 = &(this_00->fields)._version;
          *piVar3 = *piVar3 + 1;
          pSVar4 = (this_00->fields)._items;
          if (pSVar4 != (String__Array *)0x0) {
            uVar5 = (this_00->fields)._size;
            if (uVar5 < (uint)pSVar4->max_length) {
              (this_00->fields)._size = uVar5 + 1;
              FUN_?(pSVar4,(longlong)(int)uVar5,pSVar1);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)this_00,(Object *)pSVar1,
                         pMVar2->klass->rgctx_data[0xe].method);
            }
            pSVar1 = StringLiteral_Dead;
            pMVar2 = 
            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
            piVar3 = &(this_00->fields)._version;
            *piVar3 = *piVar3 + 1;
            pSVar4 = (this_00->fields)._items;
            if (pSVar4 != (String__Array *)0x0) {
              uVar5 = (this_00->fields)._size;
              if (uVar5 < (uint)pSVar4->max_length) {
                (this_00->fields)._size = uVar5 + 1;
                FUN_?(pSVar4,(longlong)(int)uVar5,pSVar1);
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)this_00,(Object *)pSVar1,
                           pMVar2->klass->rgctx_data[0xe].method);
              }
              bVar6 = iRam_? != 0;
              (this->fields).animations = this_00;
              if (bVar6) {
                uVar5 = (uint)((ulonglong)&(this->fields).animations >> 0xc);
                uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                do {
                  uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                  puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                  LOCK();
                  bVar6 = uVar8 == *puVar9;
                  if (bVar6) {
                    *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar6);
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

