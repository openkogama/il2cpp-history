
/* IEnumerator AnimationEndTrack(Single) */

IEnumerator * Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_AnimationEndTrack(AvatarAccessoryPreviewer *this,float resetDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ChangeAnimation(AvatarAccessoryPreviewer *this,MethodInfo *method)

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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3(pAVar7,pSVar6,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
          pAVar8 = (this->fields).OnAnimationActivators;
          uVar3 = 0;
          if (pAVar8 != (ActivateOnAnimationBase__Array *)0x0) {
            lVar9 = 0x20;
            do {
              if ((int)pAVar8->max_length <= (int)uVar3) {
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar10 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar10 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                (*pcRam_?)(pvVar10);
                pAVar7 = (this->fields).goAnimation;
                if ((pAVar7 != (Animation *)0x0) && (obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState(pAVar7,pSVar6,(MethodInfo *)0x0), obj != (AnimationState *)0x0)) {
                  pvVar10 = (obj->fields)._.m_Ptr;
                  if (pvVar10 != (void *)0x0) {
                    pcVar4 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
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
                      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
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
                        if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                          uVar11 = func_?(&UNK_?);
                          FUN_?(uVar11,0);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcRam_? = pcVar4;
                        iVar2 = (*pcRam_?)(pvVar10);
                        if (iVar2 == 2) {
                          fVar14 = 3.0;
                        }
                        else {
                          fVar14 = 1.0;
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        lVar9 = FUN_?(TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
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
                          mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1(this_00,pSVar6,(MethodInfo *)0x0);
                          uVar11 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
                          FUN_?(this_00,uVar11);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        bVar19 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
                        if (bVar19 == 0) {
                          uVar11 = func_?(&TypeInfo__System__ArgumentException);
                          this_01 = (InvalidEnumArgumentException *)func_?(uVar11);
                          pSVar6 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
                          System.dll::System::ComponentModel::InvalidEnumArgumentException::InvalidEnumArgumentException__ctor_1(this_01,pSVar6,(MethodInfo *)0x0);
                          uVar11 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
                          FUN_?(this_01,uVar11);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
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
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcVar4 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
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
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDestroy(AvatarAccessoryPreviewer *this,MethodInfo *method)

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
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
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
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar3,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnDrag(AvatarAccessoryPreviewer *this,PointerEventData *data,MethodInfo *method)

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
  fVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  pAVar4 = (this->fields).toPreviewer;
  (this->fields).currentRotationSpeed = -fVar3 * (this->fields).rotationSensitivity;
  if ((pAVar4 != (AvatarPreviewer *)0x0) && (pCVar5 = (pAVar4->fields).previewCam, pCVar5 != (Camera *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pCVar5->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar5,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    fVar8 = (float)(*pcRam_?)(pvVar6);
    fVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::InputUnsafeUtility_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar3 = (this->fields).zoomSpeed;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    fVar10 = (float)(*pcRam_?)();
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(pCVar5,fVar3 * fVar9 * fVar10 + fVar8,(MethodInfo *)0x0);
    pAVar4 = (this->fields).toPreviewer;
    if (pAVar4 != (AvatarPreviewer *)0x0) {
      pCVar5 = (pAVar4->fields).previewCam;
      obj = (((this->fields).toPreviewer)->fields).previewCam;
      if (obj != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar1 = func_?(&UNK_?);
          FUN_?(uVar1,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        fVar8 = (float)(*pcRam_?)(pvVar6);
        fVar3 = 20.0;
        if ((fVar8 < 20.0) || (fVar3 = 60.0, 60.0 < fVar8)) {
          fVar8 = fVar3;
        }
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_,fVar8,0,in_R9,uVar1,uVar2,unaff_RBX);
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
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar5,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerClick(AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransformUtility);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0___OnPointerClick_b__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_);
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
  if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
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
    pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar7,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__RectTransformUtility->_1).field_0x1c == 0) {
      FUN_?();
    }
    screenPoint.y = fVar8;
    screenPoint.x = VStack_3.x;
    UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::RectTransformUtility_ScreenPointToLocalPointInRectangle(pRVar9,screenPoint,(Camera *)0x0,&VStackX_20,(MethodInfo *)0x0);
    pRVar7 = (this->fields).toImage;
    if ((pRVar7 != (RawImage *)0x0) && (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_);
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
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar9,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar11);
      pRVar7 = (this->fields).toImage;
      if ((pRVar7 != (RawImage *)0x0) && (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0)) {
        VStack_12 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot(pRVar9,(MethodInfo *)0x0);
        pRVar7 = (this->fields).toImage;
        if ((pRVar7 != (RawImage *)0x0) && (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_);
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
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar9,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar11);
          pRVar7 = (this->fields).toImage;
          if ((pRVar7 != (RawImage *)0x0) && (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pRVar7,(MethodInfo *)0x0), pRVar9 != (RectTransform *)0x0)) {
            VStack_3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot(pRVar9,(MethodInfo *)0x0);
            pAVar15 = (this->fields).toPreviewer;
            if ((pAVar15 != (AvatarPreviewer *)0x0) && (obj = (pAVar15->fields).previewCam, obj != (Camera *)0x0)) {
              VStackX_20.y = fStack_14 / (1.0 / VStack_3.y) + VStackX_20.y;
              VStackX_20.x = RStack_10.m_Origin.z / (1.0 / VStack_12.x) + VStackX_20.x;
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
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
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pcVar5 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
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
                bVar17 = AvatarAccessoryPreviewer_PickAccessory(this,&RStack_10,&pGStack_1,&RStack_2,(MethodInfo *)0x0);
                if (bVar17 != 0) {
                  object = (Object *)FUN_?(TypeInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0);
                  if (((pGStack_1 == (GameObject *)0x0) || (pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(pGStack_1,1,SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<SelectionHelperAvatarAccessory>_bool_), pOVar18 == (Object *)0x0)) || (pOVar19 = (Object__Class *)AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByStreamingAssetId(*(int32_t *)&pOVar18[3].klass,(MethodInfo *)0x0), object == (Object *)0x0)) goto DAT_?;
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
                  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>);
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor(this_00,object,MethodInfo__AvatarAccessoryPreviewer____c__DisplayClass30_0___OnPointerClick_b__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(root,(BaseEventData *)0x0,this_00,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_);
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnPointerDown(AvatarAccessoryPreviewer *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).currentRotationSpeed = 0.0;
  (this->fields).pickedAccessory = 1;
  return;
}


/* Void OnRestartAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
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
      pAVar3 = (ActivateOnAnimationBase__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren((Component *)pAVar1,ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
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

bool Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PickAccessory(AvatarAccessoryPreviewer *this,Ray *ray,GameObject **gameObject,RaycastHit *raycastHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__);
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
  uVar1 = (ray->m_Direction).x;
  uVar2 = (ray->m_Direction).y;
  VStack_3.x = (ray->m_Origin).x;
  VStack_3.y = (ray->m_Origin).y;
  fVar4 = (float)uVar1 + VStack_3.x;
  fVar5 = (ray->m_Direction).z + (ray->m_Origin).z;
  fVar6 = (float)uVar2 + VStack_3.y;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_3.x = (ray->m_Origin).x;
  VStack_3.y = (ray->m_Origin).y;
  VStack_3.z = (ray->m_Origin).z;
  VStack_7.y = fVar6;
  VStack_7.x = fVar4;
  uStack_8 = 0x3f800000;
  fStack_9 = 0.0;
  fStack_10 = 1.0;
  VStack_7.z = fVar5;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar11 = (code *)swi(3);
    bVar13 = (*pcVar11)();
    return bVar13;
  }
  pcRam_? = pcVar11;
  (*pcRam_?)(&VStack_3,&VStack_7,&uStack_8,0x41200000,1);
  iVar14 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Hidden,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar12._0_4_ = (ray->m_Origin).x;
  uVar12._4_4_ = (ray->m_Origin).y;
  uStack_8._0_4_ = (ray->m_Origin).x;
  uStack_8._4_4_ = (ray->m_Origin).y;
  fVar6 = (ray->m_Origin).z;
  fStack_10 = (ray->m_Direction).x;
  uVar15 = (ray->m_Direction).y;
  uVar16 = (ray->m_Direction).z;
  fStack_9 = fVar6;
  fStack_17 = (float)uVar15;
  fStack_18 = (float)uVar16;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_3.y = fStack_17;
  VStack_3.x = fStack_10;
  VStack_3.z = fStack_18;
  VStack_7._0_8_ = uVar12;
  VStack_7.z = fVar6;
  pRVar19 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_RaycastAll(&VStack_7,&VStack_3,INFINITY,1 << ((byte)iVar14 & 0x1f),QueryTriggerInteraction__Enum_UseGlobal,(MethodInfo *)0x0);
  uVar20 = 0;
  if (pRVar19 != (RaycastHit__Array *)0x0) {
    pRVar21 = pRVar19->vector;
    do {
      if ((int)pRVar19->max_length <= (int)uVar20) {
        bVar22 = iRam_? != 0;
        *gameObject = (GameObject *)0x0;
        if (bVar22) {
          uVar20 = (uint)((ulonglong)gameObject >> 0xc);
          uVar23 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
          do {
            uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
            puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
            LOCK();
            bVar22 = uVar24 == *puVar25;
            if (bVar22) {
              *puVar25 = uVar24 | 1L << (uVar20 & 0x3f);
            }
            UNLOCK();
          } while (!bVar22);
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
      if ((uint)pRVar19->max_length <= uVar20) {
code_?:
        FUN_?();
        pcVar11 = (code *)swi(3);
        bVar13 = (*pcVar11)();
        return bVar13;
      }
      this_00 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider(pRVar19->vector + (int)uVar20,(MethodInfo *)0x0);
      if (this_00 == (Collider *)0x0) break;
      pGVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
      bVar22 = iRam_? != 0;
      *gameObject = pGVar26;
      if (bVar22) {
        uVar27 = (uint)((ulonglong)gameObject >> 0xc);
        uVar23 = (ulonglong)((uVar27 & 0x1fffff) >> 6);
        do {
          uVar24 = *(ulonglong *)(uVar23 * 8 + 0xADDR);
          puVar25 = (ulonglong *)(uVar23 * 8 + 0xADDR);
          LOCK();
          bVar22 = uVar24 == *puVar25;
          if (bVar22) {
            *puVar25 = uVar24 | 1L << (uVar27 & 0x3f);
          }
          UNLOCK();
        } while (!bVar22);
      }
      if ((uint)pRVar19->max_length <= uVar20) goto code_?;
      fVar6 = (pRVar21->m_Point).y;
      uVar12 = *(undefined8 *)&(pRVar21->m_Point).z;
      iVar14 = pRVar21->m_Collider;
      fVar4 = (pRVar21->m_Normal).y;
      fVar5 = (pRVar21->m_Normal).z;
      uVar28 = pRVar21->m_FaceID;
      fVar29 = pRVar21->m_Distance;
      VVar30 = pRVar21->m_UV;
      (raycastHit->m_Point).x = (pRVar21->m_Point).x;
      (raycastHit->m_Point).y = fVar6;
      *(undefined8 *)&(raycastHit->m_Point).z = uVar12;
      (raycastHit->m_Normal).y = fVar4;
      (raycastHit->m_Normal).z = fVar5;
      raycastHit->m_FaceID = uVar28;
      raycastHit->m_Distance = fVar29;
      raycastHit->m_UV = VVar30;
      raycastHit->m_Collider = iVar14;
      if (*gameObject == (GameObject *)0x0) break;
      pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(*gameObject,SelectionHelperAvatarAccessory_MethodInfo__UnityEngine__GameObject__GetComponent<SelectionHelperAvatarAccessory>__);
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
      if (pOVar31 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar31[1].klass != (Object__Class *)0x0) {
          return 1;
        }
      }
      uVar20 = uVar20 + 1;
      pRVar21 = pRVar21 + 1;
    } while( true );
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar13 = (*pcVar11)();
  return bVar13;
}


/* Void PlayAnimation() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation(AvatarAccessoryPreviewer *this,MethodInfo *method)

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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3(pAVar6,pSVar5,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
        pAVar7 = (this->fields).OnAnimationActivators;
        uVar2 = 0;
        if (pAVar7 != (ActivateOnAnimationBase__Array *)0x0) {
          lVar8 = 0x20;
          do {
            if ((int)pAVar7->max_length <= (int)uVar2) {
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar9 = (this->fields)._._._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar9);
              pAVar6 = (this->fields).goAnimation;
              if ((pAVar6 != (Animation *)0x0) && (obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState(pAVar6,pSVar5,(MethodInfo *)0x0), obj != (AnimationState *)0x0)) {
                pvVar9 = (obj->fields)._.m_Ptr;
                if (pvVar9 != (void *)0x0) {
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
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
                    if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
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
                      if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                        uVar10 = func_?(&UNK_?);
                        FUN_?(uVar10,0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcRam_? = pcVar3;
                      iVar13 = (*pcRam_?)(pvVar9);
                      if (iVar13 == 2) {
                        fVar14 = 3.0;
                      }
                      else {
                        fVar14 = 1.0;
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      lVar8 = FUN_?(TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
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
                        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1(this_00,pSVar5,(MethodInfo *)0x0);
                        uVar10 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
                        FUN_?(this_00,uVar10);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      bVar19 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
                      if (bVar19 == 0) {
                        uVar10 = func_?(&TypeInfo__System__ArgumentException);
                        this_01 = (InvalidEnumArgumentException *)func_?(uVar10);
                        pSVar5 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
                        System.dll::System::ComponentModel::InvalidEnumArgumentException::InvalidEnumArgumentException__ctor_1(this_01,pSVar5,(MethodInfo *)0x0);
                        uVar10 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
                        FUN_?(this_01,uVar10);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
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
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcVar3 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
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
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation_1(AvatarAccessoryPreviewer *this,String *animationName,MethodInfo *method)

{
  pAVar1 = (this->fields).goAnimation;
  if (pAVar1 != (Animation *)0x0) {
    UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3(pAVar1,animationName,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
    pAVar2 = (this->fields).OnAnimationActivators;
    uVar3 = 0;
    if (pAVar2 != (ActivateOnAnimationBase__Array *)0x0) {
      lVar4 = 0x20;
      do {
        if ((int)pAVar2->max_length <= (int)uVar3) {
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (this->fields)._._._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar5);
          pAVar1 = (this->fields).goAnimation;
          if ((pAVar1 != (Animation *)0x0) && (obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState(pAVar1,animationName,(MethodInfo *)0x0), obj != (AnimationState *)0x0)) {
            pvVar5 = (obj->fields)._.m_Ptr;
            if (pvVar5 != (void *)0x0) {
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
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
                if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
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
                  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar7 = func_?(&UNK_?);
                    FUN_?(uVar7,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  iVar10 = (*pcRam_?)(pvVar5);
                  if (iVar10 == 2) {
                    fVar11 = 3.0;
                  }
                  else {
                    fVar11 = 1.0;
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  lVar4 = FUN_?(TypeInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35);
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
                    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1(this_00,pSVar16,(MethodInfo *)0x0);
                    uVar7 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
                    FUN_?(this_00,uVar7);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  bVar17 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
                  if (bVar17 == 0) {
                    uVar7 = func_?(&TypeInfo__System__ArgumentException);
                    this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
                    pSVar16 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
                    System.dll::System::ComponentModel::InvalidEnumArgumentException::InvalidEnumArgumentException__ctor_1(this_01,pSVar16,(MethodInfo *)0x0);
                    uVar7 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
                    FUN_?(this_01,uVar7);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
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
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcVar6 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
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
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______;
  this_00 = (this->fields).bodyClone;
  if (this_00 != (GameObject *)0x0) {
    if ((SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    }
    p_Var4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
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
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer((SkinnedMeshOptimizer *)*pp_Var6,(MethodInfo *)0x0);
            if ((uint)p_Var4->max_length <= uVar2) goto code_?;
            if ((SkinnedMeshOptimizer *)*pp_Var6 == (SkinnedMeshOptimizer *)0x0) break;
            SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)*pp_Var6,(MethodInfo *)0x0);
            if ((uint)p_Var4->max_length <= uVar2) goto code_?;
            obj = (Object_1 *)*pp_Var6;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform(AvatarAccessoryPreviewer *this,MethodInfo *method)

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
  obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
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
  uStack_7 = 0x40490fdb00000000;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&uStack_7);
  fStack_12 = ((float)uStack_9 * fVar6 + uStack_10._4_4_ * fVar3 + (float)uStack_10 * fVar4) - uStack_9._4_4_ * fVar5;
  fStack_13 = (uStack_9._4_4_ * fVar6 + uStack_10._4_4_ * fVar4 + (float)uStack_9 * fVar5) - (float)uStack_10 * fVar3;
  fStack_14 = ((float)uStack_10 * fVar6 + uStack_10._4_4_ * fVar5 + uStack_9._4_4_ * fVar3) - (float)uStack_9 * fVar4;
  fStack_15 = ((uStack_10._4_4_ * fVar6 - (float)uStack_9 * fVar3) - uStack_9._4_4_ * fVar4) - (float)uStack_10 * fVar5;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar16 = (obj->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar16,&fStack_12);
    pAVar17 = (this->fields).toPreviewer;
    if ((pAVar17 != (AvatarPreviewer *)0x0) && (this_01 = (pAVar17->fields).previewCam, this_01 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView(this_01,(this->fields).startFov,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetupPreviewer(MVBody) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_SetupPreviewer(AvatarAccessoryPreviewer *this,MVBody *avatarBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__);
    LOCK();
    UNLOCK();
    FUN_?(&ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
    LOCK();
    UNLOCK();
    FUN_?(&InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
    LOCK();
    UNLOCK();
    FUN_?(&AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
    LOCK();
    UNLOCK();
    FUN_?(&PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
    LOCK();
    UNLOCK();
    FUN_?(&SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
    LOCK();
    UNLOCK();
    FUN_?(&SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)StringLiteral_SETUP,(MethodInfo *)0x0);
  (this->fields).avatarBody = avatarBody;
  func_?(&(this->fields).avatarBody);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar2._0_4_ = (pQVar1->identityQuaternion).x;
  uVar2._4_4_ = (pQVar1->identityQuaternion).y;
  uVar3._0_4_ = (pQVar1->identityQuaternion).z;
  uVar3._4_4_ = (pQVar1->identityQuaternion).w;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler((Quaternion *)aCStack_5,0.0,180.0,0.0,(MethodInfo *)CONCAT44(in_stack_6,in_stack_7));
  CStack_8.r = pQVar4->x;
  CStack_8.g = pQVar4->y;
  CStack_8.b = pQVar4->z;
  CStack_8.a = pQVar4->w;
  CStack_9._0_8_ = uVar2;
  CStack_9._8_8_ = uVar3;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply((Quaternion *)aCStack_5,(Quaternion *)&CStack_9,(Quaternion *)&CStack_8,in_R9);
  pGVar10 = (this->fields).bodyClone;
  fVar11 = pQVar4->x;
  fVar12 = pQVar4->y;
  fVar13 = pQVar4->z;
  fVar14 = pQVar4->w;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pGVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar15 != 0) {
    pGVar10 = (this->fields).bodyClone;
    if ((pGVar10 == (GameObject *)0x0) || (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar10,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0)) goto code_?;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)aCStack_5,pTVar16,(MethodInfo *)0x0);
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
      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride(this_00,0,(MethodInfo *)0x0);
      pTVar16 = (this->fields).avatarResetToTransform;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pTVar16,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        pTVar16 = (this->fields).avatarResetToTransform;
        if (pTVar16 == (Transform *)0x0) goto code_?;
        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar16,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar10,(MethodInfo *)0x0);
      }
      pAVar17 = (this->fields).toPreviewer;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pAVar17,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        pAVar17 = (this->fields).toPreviewer;
        if (pAVar17 == (AvatarPreviewer *)0x0) goto code_?;
        pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar17,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar10,(MethodInfo *)0x0);
      }
      pGVar10 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar10,(MethodInfo *)0x0);
      if (pGVar10 != (GameObject *)0x0) {
        pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar10,(MethodInfo *)0x0);
        (this->fields).avatarResetToTransform = pTVar16;
        func_?(&(this->fields).avatarResetToTransform);
        pRVar18 = (this->fields).toImage;
        if (pRVar18 != (RawImage *)0x0) {
          CStack_8.r = 1.0;
          CStack_8.g = 1.0;
          CStack_8.b = 1.0;
          CStack_8.a = 1.0;
          (*(pRVar18->klass->vtable).set_color.methodPtr)();
          if ((this->fields).bodyClone != (GameObject *)0x0) {
            lVar19 = FUN_?();
            uVar20 = 0;
            if (lVar19 != 0) {
              puVar21 = (undefined8 *)(lVar19 + 0x20);
              for (uVar22 = uVar20; (int)uVar22 < *(int *)(lVar19 + 0x18); uVar22 = uVar22 + 1) {
                if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_?;
                if ((Behaviour *)*puVar21 == (Behaviour *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*puVar21,0,(MethodInfo *)0x0);
                puVar21 = puVar21 + 1;
              }
              if (((this->fields).bodyClone != (GameObject *)0x0) && (lVar19 = FUN_?(), lVar19 != 0)) {
                puVar21 = (undefined8 *)(lVar19 + 0x20);
                for (uVar22 = uVar20; (int)uVar22 < *(int *)(lVar19 + 0x18); uVar22 = uVar22 + 1) {
                  if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_?;
                  if (((Component *)*puVar21 == (Component *)0x0) || (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*puVar21,(MethodInfo *)0x0), pGVar10 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar10,0,(MethodInfo *)0x0);
                  puVar21 = puVar21 + 1;
                }
                if (((this->fields).bodyClone != (GameObject *)0x0) && (lVar19 = FUN_?(), lVar19 != 0)) {
                  puVar21 = (undefined8 *)(lVar19 + 0x20);
                  for (uVar22 = uVar20; (int)uVar22 < *(int *)(lVar19 + 0x18); uVar22 = uVar22 + 1) {
                    if (*(uint *)(lVar19 + 0x18) <= uVar22) goto code_?;
                    pOVar23 = (Object *)*puVar21;
                    if (pOVar23 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                      LOCK();
                      UNLOCK();
                      FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar24 = pOVar23[1].klass;
                    if (pOVar24 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                      pcVar25 = (code *)swi(3);
                      (*pcVar25)();
                      return;
                    }
                    pcVar25 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                      uVar2 = func_?(&UNK_?);
                      FUN_?(uVar2,0);
                      pcVar25 = (code *)swi(3);
                      (*pcVar25)();
                      return;
                    }
                    pcRam_? = pcVar25;
                    pvVar26 = (void *)(*pcRam_?)(pOVar24);
                    pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar26,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                    if (pOVar23 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar24 = pOVar23[1].klass;
                    if (pOVar24 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                      pcVar25 = (code *)swi(3);
                      (*pcVar25)();
                      return;
                    }
                    pcVar25 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                      uVar2 = func_?(&UNK_?);
                      FUN_?(uVar2,0);
                      pcVar25 = (code *)swi(3);
                      (*pcVar25)();
                      return;
                    }
                    pcRam_? = pcVar25;
                    (*pcRam_?)(pOVar24);
                    puVar21 = puVar21 + 1;
                  }
                  pGVar10 = (this->fields).bodyClone;
                  if ((pGVar10 != (GameObject *)0x0) && (p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar10,1,SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____), p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                    pp_Var40 = p_Var26->vector;
                    for (uVar22 = uVar20; (int)uVar22 < (int)p_Var26->max_length; uVar22 = uVar22 + 1) {
                      if ((uint)p_Var26->max_length <= uVar22) goto code_?;
                      if (((Component *)*pp_Var40 == (Component *)0x0) || (pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)*pp_Var40,UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__), pOVar23 == (Object *)0x0)) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar24 = pOVar23[1].klass;
                      if (pOVar24 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                        pcVar25 = (code *)swi(3);
                        (*pcVar25)();
                        return;
                      }
                      pcVar25 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                        uVar2 = func_?(&UNK_?);
                        FUN_?(uVar2,0);
                        pcVar25 = (code *)swi(3);
                        (*pcVar25)();
                        return;
                      }
                      pcRam_? = pcVar25;
                      (*pcRam_?)(pOVar24,1);
                      pp_Var40 = pp_Var40 + 1;
                    }
                    pGVar10 = (this->fields).bodyClone;
                    if ((pGVar10 != (GameObject *)0x0) && (p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar10,1,AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____), p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                      pp_Var40 = p_Var26->vector;
                      for (uVar22 = uVar20; (int)uVar22 < (int)p_Var26->max_length; uVar22 = uVar22 + 1) {
                        if ((uint)p_Var26->max_length <= uVar22) goto code_?;
                        pOVar23 = (Object *)*pp_Var40;
                        if (pOVar23 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar24 = pOVar23[1].klass;
                        if (pOVar24 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                          pcVar25 = (code *)swi(3);
                          (*pcVar25)();
                          return;
                        }
                        pcVar25 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                          uVar2 = func_?(&UNK_?);
                          FUN_?(uVar2,0);
                          pcVar25 = (code *)swi(3);
                          (*pcVar25)();
                          return;
                        }
                        pcRam_? = pcVar25;
                        (*pcRam_?)(pOVar24);
                        pp_Var40 = pp_Var40 + 1;
                      }
                      pGVar10 = (this->fields).bodyClone;
                      if ((pGVar10 != (GameObject *)0x0) && (p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar10,1,AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____), p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                        pp_Var40 = p_Var26->vector;
                        for (uVar22 = uVar20; pMVar27 = SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______, (int)uVar22 < (int)p_Var26->max_length; uVar22 = uVar22 + 1) {
                          if ((uint)p_Var26->max_length <= uVar22) goto code_?;
                          pOVar23 = (Object *)*pp_Var40;
                          if (pOVar23 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar24 = pOVar23[1].klass;
                          if (pOVar24 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                            pcVar25 = (code *)swi(3);
                            (*pcVar25)();
                            return;
                          }
                          pcVar25 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                            uVar2 = func_?(&UNK_?);
                            FUN_?(uVar2,0);
                            pcVar25 = (code *)swi(3);
                            (*pcVar25)();
                            return;
                          }
                          pcRam_? = pcVar25;
                          (*pcRam_?)(pOVar24);
                          pp_Var40 = pp_Var40 + 1;
                        }
                        pGVar10 = (this->fields).bodyClone;
                        if (pGVar10 != (GameObject *)0x0) {
                          if ((SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                            FUN_?(SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
                          }
                          p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar10,0,((pMVar27->field7_0x38).rgctx_data)->method);
                          if (p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                            pp_Var40 = p_Var26->vector;
                            for (uVar22 = uVar20; pMVar27 = InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__, (int)uVar22 < (int)p_Var26->max_length; uVar22 = uVar22 + 1) {
                              if ((uint)p_Var26->max_length <= uVar22) goto code_?;
                              pOVar23 = (Object *)*pp_Var40;
                              if (pOVar23 == (Object *)0x0) goto code_?;
                              if (cRam_? == '\0') {
                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                LOCK();
                                UNLOCK();
                                FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pOVar24 = pOVar23[1].klass;
                              if (pOVar24 == (Object__Class *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                                pcVar25 = (code *)swi(3);
                                (*pcVar25)();
                                return;
                              }
                              pcVar25 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                uVar2 = func_?(&UNK_?);
                                FUN_?(uVar2,0);
                                pcVar25 = (code *)swi(3);
                                (*pcVar25)();
                                return;
                              }
                              pcRam_? = pcVar25;
                              pvVar26 = (void *)(*pcRam_?)(pOVar24);
                              obj = (Object_1 *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar26,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
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
                              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
                              pp_Var40 = pp_Var40 + 1;
                            }
                            pGVar10 = (this->fields).bodyClone;
                            if (pGVar10 != (GameObject *)0x0) {
                              if ((InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                FUN_?(InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
                              }
                              pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(pGVar10,0,((pMVar27->field7_0x38).rgctx_data)->method);
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
                                  if (cRam_? == '\0') {
                                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                    LOCK();
                                    UNLOCK();
                                    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar24 = pOVar23[1].klass;
                                  if (pOVar24 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                                    pcVar25 = (code *)swi(3);
                                    (*pcVar25)();
                                    return;
                                  }
                                  pcVar25 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                    uVar2 = func_?(&UNK_?);
                                    FUN_?(uVar2,0);
                                    pcVar25 = (code *)swi(3);
                                    (*pcVar25)();
                                    return;
                                  }
                                  pcRam_? = pcVar25;
                                  pvVar26 = (void *)(*pcRam_?)(pOVar24);
                                  pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar26,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                  if (pOVar23 == (Object *)0x0) goto code_?;
                                  if (cRam_? == '\0') {
                                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar24 = pOVar23[1].klass;
                                  if (pOVar24 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                                    pcVar25 = (code *)swi(3);
                                    (*pcVar25)();
                                    return;
                                  }
                                  pcVar25 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                    uVar2 = func_?(&UNK_?);
                                    FUN_?(uVar2,0);
                                    pcVar25 = (code *)swi(3);
                                    (*pcVar25)();
                                    return;
                                  }
                                  pcRam_? = pcVar25;
                                  (*pcRam_?)(pOVar24);
                                }
                              }
                              AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(this,(MethodInfo *)0x0);
                              pMVar27 = UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______;
                              pGVar10 = (this->fields).bodyClone;
                              if (pGVar10 != (GameObject *)0x0) {
                                if ((UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                  FUN_?(UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
                                }
                                p_Var26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar10,0,((pMVar27->field7_0x38).rgctx_data)->method);
                                if (p_Var26 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var40 = p_Var26->vector;
                                  lVar19 = 0x20;
                                  for (; pMVar27 = UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__, (int)uVar20 < (int)p_Var26->max_length; uVar20 = uVar20 + 1) {
                                    uVar22 = 0;
                                    lVar28 = 0x20;
                                    while( true ) {
                                      if ((uint)p_Var26->max_length <= uVar20) goto code_?;
                                      if (((Renderer *)*pp_Var40 == (Renderer *)0x0) || (pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var40,(MethodInfo *)0x0), pMVar29 == (Material__Array *)0x0)) goto code_?;
                                      if ((int)pMVar29->max_length <= (int)uVar22) break;
                                      if ((uint)p_Var26->max_length <= uVar20) goto code_?;
                                      if (((Renderer *)*pp_Var40 == (Renderer *)0x0) || (pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var40,(MethodInfo *)0x0), pMVar29 == (Material__Array *)0x0)) goto code_?;
                                      if ((uint)pMVar29->max_length <= uVar22) goto code_?;
                                      pMVar30 = *(Material **)((longlong)pMVar29->vector + lVar28 + -0x20);
                                      if (pMVar30 == (Material *)0x0) goto code_?;
                                      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1(pMVar30,StringLiteral__Color,(MethodInfo *)0x0);
                                      if (bVar15 != 0) {
                                        if ((uint)p_Var26->max_length <= uVar20) goto code_?;
                                        if (((Renderer *)*pp_Var40 == (Renderer *)0x0) || (pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var40,(MethodInfo *)0x0), pMVar29 == (Material__Array *)0x0)) goto code_?;
                                        if ((uint)pMVar29->max_length <= uVar22) goto code_?;
                                        pMVar30 = *(Material **)((longlong)pMVar29->vector + lVar28 + -0x20);
                                        if (pMVar30 == (Material *)0x0) goto code_?;
                                        pCVar31 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color(aCStack_5,pMVar30,(MethodInfo *)0x0);
                                        uVar32._0_4_ = pCVar31->r;
                                        uVar32._4_4_ = pCVar31->g;
                                        fVar33 = pCVar31->b;
                                        if ((uint)p_Var26->max_length <= uVar20) goto code_?;
                                        if (((Renderer *)*pp_Var40 == (Renderer *)0x0) || (pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var40,(MethodInfo *)0x0), pMVar29 == (Material__Array *)0x0)) goto code_?;
                                        if ((uint)pMVar29->max_length <= uVar22) goto code_?;
                                        pMVar30 = *(Material **)((longlong)pMVar29->vector + lVar28 + -0x20);
                                        CStack_8.a = 1.0;
                                        CStack_8.b = fVar33;
                                        CStack_8._0_8_ = uVar32;
                                        if (pMVar30 == (Material *)0x0) goto code_?;
                                        CStack_9.b = fVar33;
                                        CStack_9.a = 1.0;
                                        CStack_9._0_8_ = uVar32;
                                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color(pMVar30,&CStack_9,(MethodInfo *)0x0);
                                      }
                                      uVar22 = uVar22 + 1;
                                      lVar28 = lVar28 + 8;
                                    }
                                    pp_Var40 = pp_Var40 + 1;
                                  }
                                  pGVar10 = (this->fields).bodyClone;
                                  if (pGVar10 != (GameObject *)0x0) {
                                    if ((UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?(UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
                                    }
                                    pAVar34 = (Animation *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(pGVar10,0,((pMVar27->field7_0x38).rgctx_data)->method);
                                    bVar35 = iRam_? != 0;
                                    (this->fields).goAnimation = pAVar34;
                                    if (bVar35) {
                                      uVar20 = (uint)((ulonglong)&(this->fields).goAnimation >> 0xc);
                                      uVar36 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
                                      do {
                                        uVar37 = *(ulonglong *)(uVar36 * 8 + 0xADDR);
                                        puVar38 = (ulonglong *)(uVar36 * 8 + 0xADDR);
                                        LOCK();
                                        bVar35 = uVar37 == *puVar38;
                                        if (bVar35) {
                                          *puVar38 = uVar37 | 1L << (uVar20 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar35);
                                    }
                                    pLVar39 = (this->fields).animations;
                                    pAVar34 = (this->fields).goAnimation;
                                    if (pLVar39 != (List_1_System_String_ *)0x0) {
                                      uVar20 = (this->fields).currentAnimation;
                                      if ((uint)(pLVar39->fields)._size <= uVar20) {
code_?:
                                        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                                        pcVar25 = (code *)swi(3);
                                        (*pcVar25)();
                                        return;
                                      }
                                      pSVar40 = (pLVar39->fields)._items;
                                      if (pSVar40 != (String__Array *)0x0) {
                                        if ((uint)pSVar40->max_length <= uVar20) {
code_?:
                                          FUN_?();
                                          pcVar25 = (code *)swi(3);
                                          (*pcVar25)();
                                          return;
                                        }
                                        if (pAVar34 != (Animation *)0x0) {
                                          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3(pAVar34,pSVar40->vector[(int)uVar20],PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
                                          pAVar34 = (this->fields).goAnimation;
                                          if (pAVar34 != (Animation *)0x0) {
                                            pAVar41 = (ActivateOnAnimationBase__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren((Component *)pAVar34,ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
                                            bVar35 = iRam_? != 0;
                                            (this->fields).OnAnimationActivators = pAVar41;
                                            if (bVar35) {
                                              uVar20 = (uint)((ulonglong)&(this->fields).OnAnimationActivators >> 0xc);
                                              uVar36 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
                                              do {
                                                uVar37 = *(ulonglong *)(uVar36 * 8 + 0xADDR);
                                                puVar38 = (ulonglong *)(uVar36 * 8 + 0xADDR);
                                                LOCK();
                                                bVar35 = uVar37 == *puVar38;
                                                if (bVar35) {
                                                  *puVar38 = uVar37 | 1L << (uVar20 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar35);
                                            }
                                            uVar20 = 0;
                                            pAVar41 = (this->fields).OnAnimationActivators;
                                            while (pAVar41 != (ActivateOnAnimationBase__Array *)0x0) {
                                              if ((int)pAVar41->max_length <= (int)uVar20) {
                                                pAVar17 = (this->fields).previewer;
                                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                                  FUN_?();
                                                }
                                                pAVar17 = (AvatarPreviewer *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pAVar17,AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
                                                bVar35 = iRam_? != 0;
                                                (this->fields).toPreviewer = pAVar17;
                                                if (bVar35) {
                                                  uVar20 = (uint)((ulonglong)&(this->fields).toPreviewer >> 0xc);
                                                  uVar36 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar37 = *(ulonglong *)(uVar36 * 8 + 0xADDR);
                                                    puVar38 = (ulonglong *)(uVar36 * 8 + 0xADDR);
                                                    LOCK();
                                                    bVar35 = uVar37 == *puVar38;
                                                    if (bVar35) {
                                                      *puVar38 = uVar37 | 1L << (uVar20 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar35);
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
                                                pMVar42 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                                if ((((pMVar42 != (MVGameControllerBase *)0x0) && (pMVar43 = (pMVar42->fields).game, pMVar43 != (MVNetworkGame *)0x0)) && (pMVar44 = (pMVar43->fields).playerContainer, pMVar44 != (MVPlayerContainer *)0x0)) && (pMVar45 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar44,(MethodInfo *)0x0), pMVar45 != (MVLocalPlayer *)0x0)) {
                                                  if (cRam_? == '\0') {
                                                    FUN_?();
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar46 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                                  if ((pMVar46 != (MVWorldObjectClientManager *)0x0) && (pOVar23 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar46,(pMVar45->fields).defaultBodyWoId,MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_), pOVar23 != (Object *)0x0)) {
                                                    layersToRender = *(LayerFlags__Enum *)&pOVar23[0x12].monitor;
                                                    pTVar16 = (this->fields).avatarResetToTransform;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__MVGameControllerBase);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pMVar42 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                                    if (((pMVar42 != (MVGameControllerBase *)0x0) && (pMVar43 = (pMVar42->fields).game, pMVar43 != (MVNetworkGame *)0x0)) && ((pMVar44 = (pMVar43->fields).playerContainer, pMVar44 != (MVPlayerContainer *)0x0 && (pMVar45 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar44,(MethodInfo *)0x0), pMVar45 != (MVLocalPlayer *)0x0)))) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?();
                                                        LOCK();
                                                        UNLOCK();
                                                        cRam_? = '\x01';
                                                      }
                                                      pMVar46 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                                      if ((pMVar46 != (MVWorldObjectClientManager *)0x0) && (wo = (MVWorldObjectClient *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar46,(pMVar45->fields).defaultBodyWoId,MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_), pAVar17 != (AvatarPreviewer *)0x0)) {
                                                        VStack_47.x = 15.0;
                                                        VStack_47.y = 0.0;
                                                        CStack_9.r = 100.0;
                                                        CStack_9.g = 100.0;
                                                        VStack_47.z = 0.0;
                                                        CStack_9.b = 100.0;
                                                        CStack_8.b = -1.0;
                                                        CStack_8.r = 0.0;
                                                        CStack_8.g = -0.5;
                                                        AvatarPreviewer::AvatarPreviewer_Initialize(pAVar17,textureWidth,textureHeight,CameraClearFlags__Enum_Color,layersToRender,(Vector3 *)&CStack_8,pTVar16,(Vector3 *)&CStack_9,StringLiteral_Avatar_accessory_preview,wo,(this->fields).bodyClone,&VStack_47,(MethodInfo *)0x0);
                                                        pAVar17 = (this->fields).toPreviewer;
                                                        if ((pAVar17 != (AvatarPreviewer *)0x0) && (pCVar48 = (pAVar17->fields).previewCam, pCVar48 != (Camera *)0x0)) {
                                                          if (cRam_? == '\0') {
                                                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                                            LOCK();
                                                            UNLOCK();
                                                            FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                            LOCK();
                                                            UNLOCK();
                                                            cRam_? = '\x01';
                                                          }
                                                          pvVar26 = (pCVar48->fields)._._._.m_CachedPtr;
                                                          if (pvVar26 == (void *)0x0) {
                                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar48,(MethodInfo *)0x0);
                                                            pcVar25 = (code *)swi(3);
                                                            (*pcVar25)();
                                                            return;
                                                          }
                                                          pcVar25 = pcRam_?;
                                                          if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                            uVar2 = func_?(&UNK_?);
                                                            FUN_?(uVar2,0);
                                                            pcVar25 = (code *)swi(3);
                                                            (*pcVar25)();
                                                            return;
                                                          }
                                                          pcRam_? = pcVar25;
                                                          pvVar26 = (void *)(*pcRam_?)(pvVar26);
                                                          pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar26,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                          if (pOVar23 != (Object *)0x0) {
                                                            if (cRam_? == '\0') {
                                                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                              LOCK();
                                                              UNLOCK();
                                                              cRam_? = '\x01';
                                                            }
                                                            VStack_47.x = 0.0;
                                                            VStack_47.y = 0.0;
                                                            VStack_47.z = 0.0;
                                                            pOVar24 = pOVar23[1].klass;
                                                            if (pOVar24 == (Object__Class *)0x0) {
                                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                                                              pcVar25 = (code *)swi(3);
                                                              (*pcVar25)();
                                                              return;
                                                            }
                                                            pcVar25 = pcRam_?;
                                                            if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                              uVar2 = func_?(&UNK_?);
                                                              FUN_?(uVar2,0);
                                                              pcVar25 = (code *)swi(3);
                                                              (*pcVar25)();
                                                              return;
                                                            }
                                                            pcRam_? = pcVar25;
                                                            (*pcRam_?)(pOVar24);
                                                            CStack_8.r = VStack_47.x + 0.0;
                                                            CStack_8.g = VStack_47.y + 1.22;
                                                            CStack_8.b = VStack_47.z + 0.0;
                                                            if (cRam_? == '\0') {
                                                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                              LOCK();
                                                              UNLOCK();
                                                              cRam_? = '\x01';
                                                            }
                                                            pOVar24 = pOVar23[1].klass;
                                                            if (pOVar24 == (Object__Class *)0x0) {
                                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                                                              pcVar25 = (code *)swi(3);
                                                              (*pcVar25)();
                                                              return;
                                                            }
                                                            pcVar25 = pcRam_?;
                                                            if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                              uVar2 = func_?(&UNK_?);
                                                              FUN_?(uVar2,0);
                                                              pcVar25 = (code *)swi(3);
                                                              (*pcVar25)();
                                                              return;
                                                            }
                                                            pcRam_? = pcVar25;
                                                            (*pcRam_?)(pOVar24);
                                                            pGVar10 = (this->fields).bodyClone;
                                                            if (pGVar10 != (GameObject *)0x0) {
                                                              if (cRam_? == '\0') {
                                                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                LOCK();
                                                                UNLOCK();
                                                                FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                LOCK();
                                                                UNLOCK();
                                                                cRam_? = '\x01';
                                                              }
                                                              pvVar26 = (pGVar10->fields)._.m_CachedPtr;
                                                              if (pvVar26 == (void *)0x0) {
                                                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar10,(MethodInfo *)0x0);
                                                                pcVar25 = (code *)swi(3);
                                                                (*pcVar25)();
                                                                return;
                                                              }
                                                              pcVar25 = pcRam_?;
                                                              if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                                uVar2 = func_?(&UNK_?);
                                                                FUN_?(uVar2,0);
                                                                pcVar25 = (code *)swi(3);
                                                                (*pcVar25)();
                                                                return;
                                                              }
                                                              pcRam_? = pcVar25;
                                                              pvVar26 = (void *)(*pcRam_?)(pvVar26);
                                                              pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar26,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                              if (pOVar23 != (Object *)0x0) {
                                                                aCStack_5[0].r = fVar11;
                                                                aCStack_5[0].g = fVar12;
                                                                aCStack_5[0].b = fVar13;
                                                                aCStack_5[0].a = fVar14;
                                                                if (cRam_? == '\0') {
                                                                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                                  LOCK();
                                                                  UNLOCK();
                                                                  cRam_? = '\x01';
                                                                }
                                                                pOVar24 = pOVar23[1].klass;
                                                                if (pOVar24 == (Object__Class *)0x0) {
                                                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                                                                  pcVar25 = (code *)swi(3);
                                                                  (*pcVar25)();
                                                                  return;
                                                                }
                                                                pcVar25 = pcRam_?;
                                                                if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                                  uVar2 = func_?(&UNK_?);
                                                                  FUN_?(uVar2,0);
                                                                  pcVar25 = (code *)swi(3);
                                                                  (*pcVar25)();
                                                                  return;
                                                                }
                                                                pcRam_? = pcVar25;
                                                                (*pcRam_?)(pOVar24);
                                                                pAVar17 = (this->fields).toPreviewer;
                                                                if ((pAVar17 != (AvatarPreviewer *)0x0) && (pCVar48 = (pAVar17->fields).previewCam, pCVar48 != (Camera *)0x0)) {
                                                                  if (cRam_? == '\0') {
                                                                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    cRam_? = '\x01';
                                                                  }
                                                                  if ((pCVar48->fields)._._._.m_CachedPtr == (void *)0x0) {
                                                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar48,(MethodInfo *)0x0);
                                                                    pcVar25 = (code *)swi(3);
                                                                    (*pcVar25)();
                                                                    return;
                                                                  }
                                                                  pcVar25 = pcRam_?;
                                                                  if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                                    uVar2 = func_?(&UNK_?);
                                                                    FUN_?(uVar2,0);
                                                                    pcVar25 = (code *)swi(3);
                                                                    (*pcVar25)();
                                                                    return;
                                                                  }
                                                                  pcRam_? = pcVar25;
                                                                  fVar11 = (float)(*pcRam_?)();
                                                                  bVar35 = cRam_? == '\0';
                                                                  pGVar10 = (this->fields).bodyClone;
                                                                  (this->fields).startFov = fVar11;
                                                                  if (bVar35) {
                                                                    FUN_?(&TypeInfo__UnityEngine__Debug);
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    FUN_?();
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    cRam_? = '\x01';
                                                                  }
                                                                  uVar20 = 0x40000;
                                                                  layer = 0;
                                                                  do {
                                                                    layer = layer + 1;
                                                                    uVar20 = (int)uVar20 >> 1;
                                                                  } while ((uVar20 & 1) == 0);
                                                                  LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar10,layer,(MethodInfo *)0x0);
                                                                  pAVar17 = (this->fields).toPreviewer;
                                                                  if ((pAVar17 != (AvatarPreviewer *)0x0) && (pRVar18 = (this->fields).toImage, pRVar18 != (RawImage *)0x0)) {
                                                                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture(pRVar18,(Texture *)(pAVar17->fields).previewTexture,(MethodInfo *)0x0);
                                                                    pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)(this->fields).dropShadowPlane,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                    if (pOVar23 != (Object *)0x0) {
                                                                      if (cRam_? == '\0') {
                                                                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                        LOCK();
                                                                        UNLOCK();
                                                                        FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                        LOCK();
                                                                        UNLOCK();
                                                                        cRam_? = '\x01';
                                                                      }
                                                                      pOVar24 = pOVar23[1].klass;
                                                                      if (pOVar24 == (Object__Class *)0x0) {
code_?:
                                                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                                                                        pcVar25 = (code *)swi(3);
                                                                        (*pcVar25)();
                                                                        return;
                                                                      }
                                                                      pcVar25 = pcRam_?;
                                                                      if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                                        uVar2 = func_?(&UNK_?);
                                                                        FUN_?(uVar2,0);
                                                                        pcVar25 = (code *)swi(3);
                                                                        (*pcVar25)();
                                                                        return;
                                                                      }
                                                                      pcRam_? = pcVar25;
                                                                      pvVar26 = (void *)(*pcRam_?)(pOVar24);
                                                                      pTVar16 = (Transform *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar26,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                      if (pTVar16 != (Transform *)0x0) {
                                                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar16,(this->fields).avatarResetToTransform,1,(MethodInfo *)0x0);
                                                                        if (cRam_? == '\0') {
                                                                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                          LOCK();
                                                                          UNLOCK();
                                                                          FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                          LOCK();
                                                                          UNLOCK();
                                                                          cRam_? = '\x01';
                                                                        }
                                                                        pOVar24 = pOVar23[1].klass;
                                                                        if (pOVar24 == (Object__Class *)0x0) goto code_?;
                                                                        pcVar25 = pcRam_?;
                                                                        if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                                          uVar2 = func_?(&UNK_?);
                                                                          FUN_?(uVar2,0);
                                                                          pcVar25 = (code *)swi(3);
                                                                          (*pcVar25)();
                                                                          return;
                                                                        }
                                                                        pcRam_? = pcVar25;
                                                                        pvVar26 = (void *)(*pcRam_?)(pOVar24);
                                                                        pOVar23 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar26,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                        pAVar17 = (this->fields).toPreviewer;
                                                                        if ((pAVar17 != (AvatarPreviewer *)0x0) && (pGVar10 = (pAVar17->fields)._PreviewGameObject_k__BackingField, pGVar10 != (GameObject *)0x0)) {
                                                                          if (cRam_? == '\0') {
                                                                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                            LOCK();
                                                                            UNLOCK();
                                                                            FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                            LOCK();
                                                                            UNLOCK();
                                                                            cRam_? = '\x01';
                                                                          }
                                                                          pvVar26 = (pGVar10->fields)._.m_CachedPtr;
                                                                          if (pvVar26 == (void *)0x0) {
                                                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar10,(MethodInfo *)0x0);
                                                                            pcVar25 = (code *)swi(3);
                                                                            (*pcVar25)();
                                                                            return;
                                                                          }
                                                                          pcVar25 = pcRam_?;
                                                                          if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                                            uVar2 = func_?(&UNK_?);
                                                                            FUN_?(uVar2,0);
                                                                            pcVar25 = (code *)swi(3);
                                                                            (*pcVar25)();
                                                                            return;
                                                                          }
                                                                          pcRam_? = pcVar25;
                                                                          pvVar26 = (void *)(*pcRam_?)(pvVar26);
                                                                          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar26,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                          if (obj_00 != (Object *)0x0) {
                                                                            if (cRam_? == '\0') {
                                                                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                                              LOCK();
                                                                              UNLOCK();
                                                                              cRam_? = '\x01';
                                                                            }
                                                                            VStack_47.x = 0.0;
                                                                            VStack_47.y = 0.0;
                                                                            VStack_47.z = 0.0;
                                                                            pOVar24 = obj_00[1].klass;
                                                                            if (pOVar24 == (Object__Class *)0x0) {
                                                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
                                                                              pcVar25 = (code *)swi(3);
                                                                              (*pcVar25)();
                                                                              return;
                                                                            }
                                                                            pcVar25 = pcRam_?;
                                                                            if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                                              uVar2 = func_?(&UNK_?);
                                                                              FUN_?(uVar2,0);
                                                                              pcVar25 = (code *)swi(3);
                                                                              (*pcVar25)();
                                                                              return;
                                                                            }
                                                                            pcRam_? = pcVar25;
                                                                            (*pcRam_?)(pOVar24);
                                                                            uVar49._0_4_ = VStack_47.x + 0.0;
                                                                            if (pOVar23 == (Object *)0x0) {
                                                                              FUN_?();
                                                                              pcVar25 = (code *)swi(3);
                                                                              (*pcVar25)();
                                                                              return;
                                                                            }
                                                                            uVar49._4_4_ = VStack_47.y - 0.1;
                                                                            CStack_9.b = VStack_47.z + 0.0;
                                                                            CStack_9._0_8_ = uVar49;
                                                                            if (cRam_? == '\0') {
                                                                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                                              LOCK();
                                                                              UNLOCK();
                                                                              cRam_? = '\x01';
                                                                            }
                                                                            pOVar24 = pOVar23[1].klass;
                                                                            if (pOVar24 != (Object__Class *)0x0) {
                                                                              pcVar25 = pcRam_?;
                                                                              if ((pcRam_? == (code *)0x0) && (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0)) {
                                                                                uVar2 = func_?(&UNK_?);
                                                                                FUN_?(uVar2,0);
                                                                                pcVar25 = (code *)swi(3);
                                                                                (*pcVar25)();
                                                                                return;
                                                                              }
                                                                              pcRam_? = pcVar25;
                                                                              (*pcRam_?)(pOVar24,&CStack_9);
                                                                              (this->fields).imagesReady = 1;
                                                                              return;
                                                                            }
                                                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar23,(MethodInfo *)0x0);
                                                                            pcVar25 = (code *)swi(3);
                                                                            (*pcVar25)();
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
                                                            pcVar25 = (code *)swi(3);
                                                            (*pcVar25)();
                                                            return;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                break;
                                              }
                                              pAVar41 = (this->fields).OnAnimationActivators;
                                              if (pAVar41 == (ActivateOnAnimationBase__Array *)0x0) break;
                                              if ((uint)pAVar41->max_length <= uVar20) goto code_?;
                                              pLVar39 = (this->fields).animations;
                                              if (pLVar39 == (List_1_System_String_ *)0x0) break;
                                              uVar22 = (this->fields).currentAnimation;
                                              if ((uint)(pLVar39->fields)._size <= uVar22) goto code_?;
                                              pSVar40 = (pLVar39->fields)._items;
                                              if (pSVar40 == (String__Array *)0x0) break;
                                              if ((uint)pSVar40->max_length <= uVar22) goto code_?;
                                              plVar50 = *(longlong **)((longlong)pAVar41->vector + lVar19 + -0x20);
                                              if (plVar50 == (longlong *)0x0) break;
                                              (**(code **)(*plVar50 + 0x188))(plVar50,pSVar40->vector[(int)uVar22],*(undefined8 *)(*plVar50 + 400));
                                              uVar20 = uVar20 + 1;
                                              lVar19 = lVar19 + 8;
                                              pAVar41 = (this->fields).OnAnimationActivators;
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
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Start(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarAccessoryPreviewer___Start_b__24_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_);
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
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor(this_03,(Object *)this,MethodInfo__AvatarAccessoryPreviewer___Start_b__24_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar4 = UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_;
    if ((UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_);
      LOCK();
      UNLOCK();
      if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar4);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain(pGVar3,(IList_1_UnityEngine_Transform_ *)TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList,(MethodInfo *)0x0);
    pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList;
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
          pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->s_InternalTransformList;
          if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
          if ((uint)(pLVar5->fields)._size <= uVar7) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_01,(MethodInfo *)0x0);
          bVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_Execute_18(pGVar3,(BaseEventData *)0x0,this_03,(pMVar4->field7_0x38).rgctx_data[1].method);
          if (bVar11 != 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(this_01,(MethodInfo *)0x0);
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
  this_02 = (MVBody *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar12,*(int32_t *)(extraout_RAX + 0xa8),MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_);
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__,this_02,0);
    LOCK();
    UNLOCK();
    FUN_?(&ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
    LOCK();
    UNLOCK();
    FUN_?(&InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
    LOCK();
    UNLOCK();
    FUN_?(&AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&AvatarModifier__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarModifier>______);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______);
    LOCK();
    UNLOCK();
    FUN_?(&PickupItem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<PickupItem>______);
    LOCK();
    UNLOCK();
    FUN_?(&SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
    LOCK();
    UNLOCK();
    FUN_?(&SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)StringLiteral_SETUP,(MethodInfo *)0x0);
  (this->fields).avatarBody = this_02;
  func_?(&(this->fields).avatarBody);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar13 = TypeInfo__UnityEngine__Quaternion->static_fields;
  uVar14._0_4_ = (pQVar13->identityQuaternion).x;
  uVar14._4_4_ = (pQVar13->identityQuaternion).y;
  uVar15._0_4_ = (pQVar13->identityQuaternion).z;
  uVar15._4_4_ = (pQVar13->identityQuaternion).w;
  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler((Quaternion *)aCStack_17,0.0,180.0,0.0,(MethodInfo *)CONCAT44(in_stack_18,in_stack_19));
  CStack_20.r = pQVar16->x;
  CStack_20.g = pQVar16->y;
  CStack_20.b = pQVar16->z;
  CStack_20.a = pQVar16->w;
  CStack_21._0_8_ = uVar14;
  CStack_21._8_8_ = uVar15;
  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply((Quaternion *)aCStack_17,(Quaternion *)&CStack_21,(Quaternion *)&CStack_20,in_R9);
  pGVar3 = (this->fields).bodyClone;
  fVar22 = pQVar16->x;
  fVar23 = pQVar16->y;
  fVar24 = pQVar16->z;
  fVar25 = pQVar16->w;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar11 != 0) {
    pGVar3 = (this->fields).bodyClone;
    if ((pGVar3 == (GameObject *)0x0) || (pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0), pTVar26 == (Transform *)0x0)) goto code_?;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)aCStack_17,pTVar26,(MethodInfo *)0x0);
    fVar22 = pQVar16->x;
    fVar23 = pQVar16->y;
    fVar24 = pQVar16->z;
    fVar25 = pQVar16->w;
  }
  if (this_02 != (MVBody *)0x0) {
    pGVar3 = MVBody::MVBody_CreateClone(this_02,1,1,(MethodInfo *)0x0);
    (this->fields).bodyClone = pGVar3;
    func_?(&(this->fields).bodyClone);
    this_00 = (this_02->fields).bodyAccessoriesController;
    if (this_00 != (BodyAccessoriesController *)0x0) {
      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride(this_00,0,(MethodInfo *)0x0);
      pTVar26 = (this->fields).avatarResetToTransform;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pTVar26,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        pTVar26 = (this->fields).avatarResetToTransform;
        if (pTVar26 == (Transform *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar26,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
      }
      pAVar27 = (this->fields).toPreviewer;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pAVar27,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        pAVar27 = (this->fields).toPreviewer;
        if (pAVar27 == (AvatarPreviewer *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pAVar27,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
      }
      pGVar3 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1(pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
        (this->fields).avatarResetToTransform = pTVar26;
        func_?(&(this->fields).avatarResetToTransform);
        pRVar28 = (this->fields).toImage;
        if (pRVar28 != (RawImage *)0x0) {
          CStack_20.r = 1.0;
          CStack_20.g = 1.0;
          CStack_20.b = 1.0;
          CStack_20.a = 1.0;
          (*(pRVar28->klass->vtable).set_color.methodPtr)();
          if ((this->fields).bodyClone != (GameObject *)0x0) {
            lVar6 = FUN_?();
            uVar7 = 0;
            if (lVar6 != 0) {
              puVar29 = (undefined8 *)(lVar6 + 0x20);
              for (uVar30 = uVar7; (int)uVar30 < *(int *)(lVar6 + 0x18); uVar30 = uVar30 + 1) {
                if (*(uint *)(lVar6 + 0x18) <= uVar30) goto code_?;
                if ((Behaviour *)*puVar29 == (Behaviour *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)*puVar29,0,(MethodInfo *)0x0);
                puVar29 = puVar29 + 1;
              }
              if (((this->fields).bodyClone != (GameObject *)0x0) && (lVar6 = FUN_?(), lVar6 != 0)) {
                puVar29 = (undefined8 *)(lVar6 + 0x20);
                for (uVar30 = uVar7; (int)uVar30 < *(int *)(lVar6 + 0x18); uVar30 = uVar30 + 1) {
                  if (*(uint *)(lVar6 + 0x18) <= uVar30) goto code_?;
                  if (((Component *)*puVar29 == (Component *)0x0) || (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)*puVar29,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar3,0,(MethodInfo *)0x0);
                  puVar29 = puVar29 + 1;
                }
                if (((this->fields).bodyClone != (GameObject *)0x0) && (lVar6 = FUN_?(), lVar6 != 0)) {
                  puVar29 = (undefined8 *)(lVar6 + 0x20);
                  for (uVar30 = uVar7; (int)uVar30 < *(int *)(lVar6 + 0x18); uVar30 = uVar30 + 1) {
                    if (*(uint *)(lVar6 + 0x18) <= uVar30) goto code_?;
                    pOVar31 = (Object *)*puVar29;
                    if (pOVar31 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                      LOCK();
                      UNLOCK();
                      FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar32 = pOVar31[1].klass;
                    if (pOVar32 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar14 = func_?(&UNK_?);
                      FUN_?(uVar14,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcRam_? = pcVar2;
                    pvVar33 = (void *)(*pcRam_?)(pOVar32);
                    pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                    if (pOVar31 == (Object *)0x0) goto code_?;
                    if (cRam_? == '\0') {
                      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pOVar32 = pOVar31[1].klass;
                    if (pOVar32 == (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar14 = func_?(&UNK_?);
                      FUN_?(uVar14,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcRam_? = pcVar2;
                    (*pcRam_?)(pOVar32);
                    puVar29 = puVar29 + 1;
                  }
                  pGVar3 = (this->fields).bodyClone;
                  if ((pGVar3 != (GameObject *)0x0) && (p_Var29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar3,1,SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____), p_Var29 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                    pp_Var44 = p_Var29->vector;
                    for (uVar30 = uVar7; (int)uVar30 < (int)p_Var29->max_length; uVar30 = uVar30 + 1) {
                      if ((uint)p_Var29->max_length <= uVar30) goto code_?;
                      if (((Component *)*pp_Var44 == (Component *)0x0) || (pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)*pp_Var44,UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__), pOVar31 == (Object *)0x0)) goto code_?;
                      if (cRam_? == '\0') {
                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar32 = pOVar31[1].klass;
                      if (pOVar32 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pcVar2 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                        uVar14 = func_?(&UNK_?);
                        FUN_?(uVar14,0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pcRam_? = pcVar2;
                      (*pcRam_?)(pOVar32,1);
                      pp_Var44 = pp_Var44 + 1;
                    }
                    pGVar3 = (this->fields).bodyClone;
                    if ((pGVar3 != (GameObject *)0x0) && (p_Var29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar3,1,AnimatedSpriteSheetTexture__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedSpriteSheetTexture>_bool_____), p_Var29 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                      pp_Var44 = p_Var29->vector;
                      for (uVar30 = uVar7; (int)uVar30 < (int)p_Var29->max_length; uVar30 = uVar30 + 1) {
                        if ((uint)p_Var29->max_length <= uVar30) goto code_?;
                        pOVar31 = (Object *)*pp_Var44;
                        if (pOVar31 == (Object *)0x0) goto code_?;
                        if (cRam_? == '\0') {
                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar32 = pOVar31[1].klass;
                        if (pOVar32 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcVar2 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                          uVar14 = func_?(&UNK_?);
                          FUN_?(uVar14,0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcRam_? = pcVar2;
                        (*pcRam_?)(pOVar32);
                        pp_Var44 = pp_Var44 + 1;
                      }
                      pGVar3 = (this->fields).bodyClone;
                      if ((pGVar3 != (GameObject *)0x0) && (p_Var29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar3,1,AnimatedTextureOffset__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AnimatedTextureOffset>_bool_____), p_Var29 != (_Il2CppFullySharedGenericType__Array *)0x0)) {
                        pp_Var44 = p_Var29->vector;
                        for (uVar30 = uVar7; pMVar4 = SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______, (int)uVar30 < (int)p_Var29->max_length; uVar30 = uVar30 + 1) {
                          if ((uint)p_Var29->max_length <= uVar30) goto code_?;
                          pOVar31 = (Object *)*pp_Var44;
                          if (pOVar31 == (Object *)0x0) goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pOVar32 = pOVar31[1].klass;
                          if (pOVar32 == (Object__Class *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcVar2 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                            uVar14 = func_?(&UNK_?);
                            FUN_?(uVar14,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pcRam_? = pcVar2;
                          (*pcRam_?)(pOVar32);
                          pp_Var44 = pp_Var44 + 1;
                        }
                        pGVar3 = (this->fields).bodyClone;
                        if (pGVar3 != (GameObject *)0x0) {
                          if ((SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                            FUN_?(SelectionBox__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionBox>______);
                          }
                          p_Var29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar3,0,((pMVar4->field7_0x38).rgctx_data)->method);
                          if (p_Var29 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                            pp_Var44 = p_Var29->vector;
                            for (uVar30 = uVar7; pMVar4 = InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__, (int)uVar30 < (int)p_Var29->max_length; uVar30 = uVar30 + 1) {
                              if ((uint)p_Var29->max_length <= uVar30) goto code_?;
                              pOVar31 = (Object *)*pp_Var44;
                              if (pOVar31 == (Object *)0x0) goto code_?;
                              if (cRam_? == '\0') {
                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                LOCK();
                                UNLOCK();
                                FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pOVar32 = pOVar31[1].klass;
                              if (pOVar32 == (Object__Class *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pcVar2 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                uVar14 = func_?(&UNK_?);
                                FUN_?(uVar14,0);
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pcRam_? = pcVar2;
                              pvVar33 = (void *)(*pcRam_?)(pOVar32);
                              obj = (Object_1 *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
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
                              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
                              pp_Var44 = pp_Var44 + 1;
                            }
                            pGVar3 = (this->fields).bodyClone;
                            if (pGVar3 != (GameObject *)0x0) {
                              if ((InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                FUN_?(InvulnerabilityBubble_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<InvulnerabilityBubble>__);
                              }
                              pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(pGVar3,0,((pMVar4->field7_0x38).rgctx_data)->method);
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
                              if (pOVar31 != (Object *)0x0) {
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                if (pOVar31[1].klass != (Object__Class *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                    LOCK();
                                    UNLOCK();
                                    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar32 = pOVar31[1].klass;
                                  if (pOVar32 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcVar2 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                    uVar14 = func_?(&UNK_?);
                                    FUN_?(uVar14,0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcRam_? = pcVar2;
                                  pvVar33 = (void *)(*pcRam_?)(pOVar32);
                                  pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
                                  if (pOVar31 == (Object *)0x0) goto code_?;
                                  if (cRam_? == '\0') {
                                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pOVar32 = pOVar31[1].klass;
                                  if (pOVar32 == (Object__Class *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcVar2 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                    uVar14 = func_?(&UNK_?);
                                    FUN_?(uVar14,0);
                                    pcVar2 = (code *)swi(3);
                                    (*pcVar2)();
                                    return;
                                  }
                                  pcRam_? = pcVar2;
                                  (*pcRam_?)(pOVar32);
                                }
                              }
                              AvatarAccessoryPreviewer_RemoveSkinnedMeshOptimizers(this,(MethodInfo *)0x0);
                              pMVar4 = UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______;
                              pGVar3 = (this->fields).bodyClone;
                              if (pGVar3 != (GameObject *)0x0) {
                                if ((UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                  FUN_?(UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______);
                                }
                                p_Var29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar3,0,((pMVar4->field7_0x38).rgctx_data)->method);
                                if (p_Var29 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                                  pp_Var44 = p_Var29->vector;
                                  lVar6 = 0x20;
                                  for (; pMVar4 = UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__, (int)uVar7 < (int)p_Var29->max_length; uVar7 = uVar7 + 1) {
                                    uVar30 = 0;
                                    lVar9 = 0x20;
                                    while( true ) {
                                      if ((uint)p_Var29->max_length <= uVar7) goto code_?;
                                      if (((Renderer *)*pp_Var44 == (Renderer *)0x0) || (pMVar34 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var44,(MethodInfo *)0x0), pMVar34 == (Material__Array *)0x0)) goto code_?;
                                      if ((int)pMVar34->max_length <= (int)uVar30) break;
                                      if ((uint)p_Var29->max_length <= uVar7) goto code_?;
                                      if (((Renderer *)*pp_Var44 == (Renderer *)0x0) || (pMVar34 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var44,(MethodInfo *)0x0), pMVar34 == (Material__Array *)0x0)) goto code_?;
                                      if ((uint)pMVar34->max_length <= uVar30) goto code_?;
                                      pMVar35 = *(Material **)((longlong)pMVar34->vector + lVar9 + -0x20);
                                      if (pMVar35 == (Material *)0x0) goto code_?;
                                      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1(pMVar35,StringLiteral__Color,(MethodInfo *)0x0);
                                      if (bVar11 != 0) {
                                        if ((uint)p_Var29->max_length <= uVar7) goto code_?;
                                        if (((Renderer *)*pp_Var44 == (Renderer *)0x0) || (pMVar34 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var44,(MethodInfo *)0x0), pMVar34 == (Material__Array *)0x0)) goto code_?;
                                        if ((uint)pMVar34->max_length <= uVar30) goto code_?;
                                        pMVar35 = *(Material **)((longlong)pMVar34->vector + lVar9 + -0x20);
                                        if (pMVar35 == (Material *)0x0) goto code_?;
                                        pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color(aCStack_17,pMVar35,(MethodInfo *)0x0);
                                        uVar37._0_4_ = pCVar36->r;
                                        uVar37._4_4_ = pCVar36->g;
                                        fVar38 = pCVar36->b;
                                        if ((uint)p_Var29->max_length <= uVar7) goto code_?;
                                        if (((Renderer *)*pp_Var44 == (Renderer *)0x0) || (pMVar34 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials((Renderer *)*pp_Var44,(MethodInfo *)0x0), pMVar34 == (Material__Array *)0x0)) goto code_?;
                                        if ((uint)pMVar34->max_length <= uVar30) goto code_?;
                                        pMVar35 = *(Material **)((longlong)pMVar34->vector + lVar9 + -0x20);
                                        CStack_20.a = 1.0;
                                        CStack_20.b = fVar38;
                                        CStack_20._0_8_ = uVar37;
                                        if (pMVar35 == (Material *)0x0) goto code_?;
                                        CStack_21.b = fVar38;
                                        CStack_21.a = 1.0;
                                        CStack_21._0_8_ = uVar37;
                                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color(pMVar35,&CStack_21,(MethodInfo *)0x0);
                                      }
                                      uVar30 = uVar30 + 1;
                                      lVar9 = lVar9 + 8;
                                    }
                                    pp_Var44 = pp_Var44 + 1;
                                  }
                                  pGVar3 = (this->fields).bodyClone;
                                  if (pGVar3 != (GameObject *)0x0) {
                                    if ((UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?(UnityEngine__Animation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::Animation>__);
                                    }
                                    pAVar39 = (Animation *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(pGVar3,0,((pMVar4->field7_0x38).rgctx_data)->method);
                                    bVar40 = iRam_? != 0;
                                    (this->fields).goAnimation = pAVar39;
                                    if (bVar40) {
                                      uVar7 = (uint)((ulonglong)&(this->fields).goAnimation >> 0xc);
                                      uVar41 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                                      do {
                                        uVar42 = *(ulonglong *)(uVar41 * 8 + 0xADDR);
                                        puVar43 = (ulonglong *)(uVar41 * 8 + 0xADDR);
                                        LOCK();
                                        bVar40 = uVar42 == *puVar43;
                                        if (bVar40) {
                                          *puVar43 = uVar42 | 1L << (uVar7 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar40);
                                    }
                                    pLVar44 = (this->fields).animations;
                                    pAVar39 = (this->fields).goAnimation;
                                    if (pLVar44 != (List_1_System_String_ *)0x0) {
                                      uVar7 = (this->fields).currentAnimation;
                                      if ((uint)(pLVar44->fields)._size <= uVar7) {
code_?:
                                        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                                        pcVar2 = (code *)swi(3);
                                        (*pcVar2)();
                                        return;
                                      }
                                      pSVar45 = (pLVar44->fields)._items;
                                      if (pSVar45 != (String__Array *)0x0) {
                                        if ((uint)pSVar45->max_length <= uVar7) {
code_?:
                                          FUN_?();
                                          pcVar2 = (code *)swi(3);
                                          (*pcVar2)();
                                          return;
                                        }
                                        if (pAVar39 != (Animation *)0x0) {
                                          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3(pAVar39,pSVar45->vector[(int)uVar7],PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
                                          pAVar39 = (this->fields).goAnimation;
                                          if (pAVar39 != (Animation *)0x0) {
                                            pAVar46 = (ActivateOnAnimationBase__Array *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren((Component *)pAVar39,ActivateOnAnimationBase__MethodInfo__UnityEngine__Component__GetComponentsInChildren<ActivateOnAnimationBase>______);
                                            bVar40 = iRam_? != 0;
                                            (this->fields).OnAnimationActivators = pAVar46;
                                            if (bVar40) {
                                              uVar7 = (uint)((ulonglong)&(this->fields).OnAnimationActivators >> 0xc);
                                              uVar41 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                                              do {
                                                uVar42 = *(ulonglong *)(uVar41 * 8 + 0xADDR);
                                                puVar43 = (ulonglong *)(uVar41 * 8 + 0xADDR);
                                                LOCK();
                                                bVar40 = uVar42 == *puVar43;
                                                if (bVar40) {
                                                  *puVar43 = uVar42 | 1L << (uVar7 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar40);
                                            }
                                            uVar7 = 0;
                                            pAVar46 = (this->fields).OnAnimationActivators;
                                            while (pAVar46 != (ActivateOnAnimationBase__Array *)0x0) {
                                              if ((int)pAVar46->max_length <= (int)uVar7) {
                                                pAVar27 = (this->fields).previewer;
                                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                                  FUN_?();
                                                }
                                                pAVar27 = (AvatarPreviewer *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pAVar27,AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_);
                                                bVar40 = iRam_? != 0;
                                                (this->fields).toPreviewer = pAVar27;
                                                if (bVar40) {
                                                  uVar7 = (uint)((ulonglong)&(this->fields).toPreviewer >> 0xc);
                                                  uVar41 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar42 = *(ulonglong *)(uVar41 * 8 + 0xADDR);
                                                    puVar43 = (ulonglong *)(uVar41 * 8 + 0xADDR);
                                                    LOCK();
                                                    bVar40 = uVar42 == *puVar43;
                                                    if (bVar40) {
                                                      *puVar43 = uVar42 | 1L << (uVar7 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar40);
                                                }
                                                pAVar27 = (this->fields).toPreviewer;
                                                textureWidth = (this->fields).previewDimensionsX;
                                                textureHeight = (this->fields).previewDimensionsY;
                                                if (cRam_? == '\0') {
                                                  FUN_?(&TypeInfo__MVGameControllerBase);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pMVar47 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                                if ((((pMVar47 != (MVGameControllerBase *)0x0) && (pMVar48 = (pMVar47->fields).game, pMVar48 != (MVNetworkGame *)0x0)) && (pMVar49 = (pMVar48->fields).playerContainer, pMVar49 != (MVPlayerContainer *)0x0)) && (pMVar50 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar49,(MethodInfo *)0x0), pMVar50 != (MVLocalPlayer *)0x0)) {
                                                  if (cRam_? == '\0') {
                                                    FUN_?();
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                                  if ((pMVar12 != (MVWorldObjectClientManager *)0x0) && (pOVar31 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar12,(pMVar50->fields).defaultBodyWoId,MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_), pOVar31 != (Object *)0x0)) {
                                                    layersToRender = *(LayerFlags__Enum *)&pOVar31[0x12].monitor;
                                                    pTVar26 = (this->fields).avatarResetToTransform;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&TypeInfo__MVGameControllerBase);
                                                      LOCK();
                                                      UNLOCK();
                                                      cRam_? = '\x01';
                                                    }
                                                    pMVar47 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                                    if (((pMVar47 != (MVGameControllerBase *)0x0) && (pMVar48 = (pMVar47->fields).game, pMVar48 != (MVNetworkGame *)0x0)) && ((pMVar49 = (pMVar48->fields).playerContainer, pMVar49 != (MVPlayerContainer *)0x0 && (pMVar50 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar49,(MethodInfo *)0x0), pMVar50 != (MVLocalPlayer *)0x0)))) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?();
                                                        LOCK();
                                                        UNLOCK();
                                                        cRam_? = '\x01';
                                                      }
                                                      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                                                      if ((pMVar12 != (MVWorldObjectClientManager *)0x0) && (wo = (MVWorldObjectClient *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar12,(pMVar50->fields).defaultBodyWoId,MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_), pAVar27 != (AvatarPreviewer *)0x0)) {
                                                        VStack_51.x = 15.0;
                                                        VStack_51.y = 0.0;
                                                        CStack_21.r = 100.0;
                                                        CStack_21.g = 100.0;
                                                        VStack_51.z = 0.0;
                                                        CStack_21.b = 100.0;
                                                        CStack_20.b = -1.0;
                                                        CStack_20.r = 0.0;
                                                        CStack_20.g = -0.5;
                                                        AvatarPreviewer::AvatarPreviewer_Initialize(pAVar27,textureWidth,textureHeight,CameraClearFlags__Enum_Color,layersToRender,(Vector3 *)&CStack_20,pTVar26,(Vector3 *)&CStack_21,StringLiteral_Avatar_accessory_preview,wo,(this->fields).bodyClone,&VStack_51,(MethodInfo *)0x0);
                                                        pAVar27 = (this->fields).toPreviewer;
                                                        if ((pAVar27 != (AvatarPreviewer *)0x0) && (pCVar52 = (pAVar27->fields).previewCam, pCVar52 != (Camera *)0x0)) {
                                                          if (cRam_? == '\0') {
                                                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
                                                            LOCK();
                                                            UNLOCK();
                                                            FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                            LOCK();
                                                            UNLOCK();
                                                            cRam_? = '\x01';
                                                          }
                                                          pvVar33 = (pCVar52->fields)._._._.m_CachedPtr;
                                                          if (pvVar33 == (void *)0x0) {
                                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar52,(MethodInfo *)0x0);
                                                            pcVar2 = (code *)swi(3);
                                                            (*pcVar2)();
                                                            return;
                                                          }
                                                          pcVar2 = pcRam_?;
                                                          if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                            uVar14 = func_?(&UNK_?);
                                                            FUN_?(uVar14,0);
                                                            pcVar2 = (code *)swi(3);
                                                            (*pcVar2)();
                                                            return;
                                                          }
                                                          pcRam_? = pcVar2;
                                                          pvVar33 = (void *)(*pcRam_?)(pvVar33);
                                                          pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                          if (pOVar31 != (Object *)0x0) {
                                                            if (cRam_? == '\0') {
                                                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                              LOCK();
                                                              UNLOCK();
                                                              cRam_? = '\x01';
                                                            }
                                                            VStack_51.x = 0.0;
                                                            VStack_51.y = 0.0;
                                                            VStack_51.z = 0.0;
                                                            pOVar32 = pOVar31[1].klass;
                                                            if (pOVar32 == (Object__Class *)0x0) {
                                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                              pcVar2 = (code *)swi(3);
                                                              (*pcVar2)();
                                                              return;
                                                            }
                                                            pcVar2 = pcRam_?;
                                                            if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                              uVar14 = func_?(&UNK_?);
                                                              FUN_?(uVar14,0);
                                                              pcVar2 = (code *)swi(3);
                                                              (*pcVar2)();
                                                              return;
                                                            }
                                                            pcRam_? = pcVar2;
                                                            (*pcRam_?)(pOVar32);
                                                            CStack_20.r = VStack_51.x + 0.0;
                                                            CStack_20.g = VStack_51.y + 1.22;
                                                            CStack_20.b = VStack_51.z + 0.0;
                                                            if (cRam_? == '\0') {
                                                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                              LOCK();
                                                              UNLOCK();
                                                              cRam_? = '\x01';
                                                            }
                                                            pOVar32 = pOVar31[1].klass;
                                                            if (pOVar32 == (Object__Class *)0x0) {
                                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                              pcVar2 = (code *)swi(3);
                                                              (*pcVar2)();
                                                              return;
                                                            }
                                                            pcVar2 = pcRam_?;
                                                            if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                              uVar14 = func_?(&UNK_?);
                                                              FUN_?(uVar14,0);
                                                              pcVar2 = (code *)swi(3);
                                                              (*pcVar2)();
                                                              return;
                                                            }
                                                            pcRam_? = pcVar2;
                                                            (*pcRam_?)(pOVar32);
                                                            pGVar3 = (this->fields).bodyClone;
                                                            if (pGVar3 != (GameObject *)0x0) {
                                                              if (cRam_? == '\0') {
                                                                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                LOCK();
                                                                UNLOCK();
                                                                FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                LOCK();
                                                                UNLOCK();
                                                                cRam_? = '\x01';
                                                              }
                                                              pvVar33 = (pGVar3->fields)._.m_CachedPtr;
                                                              if (pvVar33 == (void *)0x0) {
                                                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
                                                                pcVar2 = (code *)swi(3);
                                                                (*pcVar2)();
                                                                return;
                                                              }
                                                              pcVar2 = pcRam_?;
                                                              if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                                uVar14 = func_?(&UNK_?);
                                                                FUN_?(uVar14,0);
                                                                pcVar2 = (code *)swi(3);
                                                                (*pcVar2)();
                                                                return;
                                                              }
                                                              pcRam_? = pcVar2;
                                                              pvVar33 = (void *)(*pcRam_?)(pvVar33);
                                                              pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                              if (pOVar31 != (Object *)0x0) {
                                                                aCStack_17[0].r = fVar22;
                                                                aCStack_17[0].g = fVar23;
                                                                aCStack_17[0].b = fVar24;
                                                                aCStack_17[0].a = fVar25;
                                                                if (cRam_? == '\0') {
                                                                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                                  LOCK();
                                                                  UNLOCK();
                                                                  cRam_? = '\x01';
                                                                }
                                                                pOVar32 = pOVar31[1].klass;
                                                                if (pOVar32 == (Object__Class *)0x0) {
                                                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                                  pcVar2 = (code *)swi(3);
                                                                  (*pcVar2)();
                                                                  return;
                                                                }
                                                                pcVar2 = pcRam_?;
                                                                if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                                  uVar14 = func_?(&UNK_?);
                                                                  FUN_?(uVar14,0);
                                                                  pcVar2 = (code *)swi(3);
                                                                  (*pcVar2)();
                                                                  return;
                                                                }
                                                                pcRam_? = pcVar2;
                                                                (*pcRam_?)(pOVar32);
                                                                pAVar27 = (this->fields).toPreviewer;
                                                                if ((pAVar27 != (AvatarPreviewer *)0x0) && (pCVar52 = (pAVar27->fields).previewCam, pCVar52 != (Camera *)0x0)) {
                                                                  if (cRam_? == '\0') {
                                                                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
                                                                    LOCK();
                                                                    UNLOCK();
                                                                    cRam_? = '\x01';
                                                                  }
                                                                  if ((pCVar52->fields)._._._.m_CachedPtr == (void *)0x0) {
                                                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar52,(MethodInfo *)0x0);
                                                                    pcVar2 = (code *)swi(3);
                                                                    (*pcVar2)();
                                                                    return;
                                                                  }
                                                                  pcVar2 = pcRam_?;
                                                                  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                                    uVar14 = func_?(&UNK_?);
                                                                    FUN_?(uVar14,0);
                                                                    pcVar2 = (code *)swi(3);
                                                                    (*pcVar2)();
                                                                    return;
                                                                  }
                                                                  pcRam_? = pcVar2;
                                                                  fVar22 = (float)(*pcRam_?)();
                                                                  bVar40 = cRam_? == '\0';
                                                                  pGVar3 = (this->fields).bodyClone;
                                                                  (this->fields).startFov = fVar22;
                                                                  if (bVar40) {
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
                                                                  LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar3,layer,(MethodInfo *)0x0);
                                                                  pAVar27 = (this->fields).toPreviewer;
                                                                  if ((pAVar27 != (AvatarPreviewer *)0x0) && (pRVar28 = (this->fields).toImage, pRVar28 != (RawImage *)0x0)) {
                                                                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture(pRVar28,(Texture *)(pAVar27->fields).previewTexture,(MethodInfo *)0x0);
                                                                    pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)(this->fields).dropShadowPlane,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                    if (pOVar31 != (Object *)0x0) {
                                                                      if (cRam_? == '\0') {
                                                                        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                        LOCK();
                                                                        UNLOCK();
                                                                        FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                        LOCK();
                                                                        UNLOCK();
                                                                        cRam_? = '\x01';
                                                                      }
                                                                      pOVar32 = pOVar31[1].klass;
                                                                      if (pOVar32 == (Object__Class *)0x0) {
code_?:
                                                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                                        pcVar2 = (code *)swi(3);
                                                                        (*pcVar2)();
                                                                        return;
                                                                      }
                                                                      pcVar2 = pcRam_?;
                                                                      if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                                        uVar14 = func_?(&UNK_?);
                                                                        FUN_?(uVar14,0);
                                                                        pcVar2 = (code *)swi(3);
                                                                        (*pcVar2)();
                                                                        return;
                                                                      }
                                                                      pcRam_? = pcVar2;
                                                                      pvVar33 = (void *)(*pcRam_?)(pOVar32);
                                                                      pTVar26 = (Transform *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                      if (pTVar26 != (Transform *)0x0) {
                                                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar26,(this->fields).avatarResetToTransform,1,(MethodInfo *)0x0);
                                                                        if (cRam_? == '\0') {
                                                                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                          LOCK();
                                                                          UNLOCK();
                                                                          FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                          LOCK();
                                                                          UNLOCK();
                                                                          cRam_? = '\x01';
                                                                        }
                                                                        pOVar32 = pOVar31[1].klass;
                                                                        if (pOVar32 == (Object__Class *)0x0) goto code_?;
                                                                        pcVar2 = pcRam_?;
                                                                        if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                                          uVar14 = func_?(&UNK_?);
                                                                          FUN_?(uVar14,0);
                                                                          pcVar2 = (code *)swi(3);
                                                                          (*pcVar2)();
                                                                          return;
                                                                        }
                                                                        pcRam_? = pcVar2;
                                                                        pvVar33 = (void *)(*pcRam_?)(pOVar32);
                                                                        pOVar31 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                        pAVar27 = (this->fields).toPreviewer;
                                                                        if ((pAVar27 != (AvatarPreviewer *)0x0) && (pGVar3 = (pAVar27->fields)._PreviewGameObject_k__BackingField, pGVar3 != (GameObject *)0x0)) {
                                                                          if (cRam_? == '\0') {
                                                                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_);
                                                                            LOCK();
                                                                            UNLOCK();
                                                                            FUN_?(&UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                            LOCK();
                                                                            UNLOCK();
                                                                            cRam_? = '\x01';
                                                                          }
                                                                          pvVar33 = (pGVar3->fields)._.m_CachedPtr;
                                                                          if (pvVar33 == (void *)0x0) {
                                                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
                                                                            pcVar2 = (code *)swi(3);
                                                                            (*pcVar2)();
                                                                            return;
                                                                          }
                                                                          pcVar2 = pcRam_?;
                                                                          if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                                            uVar14 = func_?(&UNK_?);
                                                                            FUN_?(uVar14,0);
                                                                            pcVar2 = (code *)swi(3);
                                                                            (*pcVar2)();
                                                                            return;
                                                                          }
                                                                          pcRam_? = pcVar2;
                                                                          pvVar33 = (void *)(*pcRam_?)(pvVar33);
                                                                          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(pvVar33,UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__);
                                                                          if (obj_00 != (Object *)0x0) {
                                                                            if (cRam_? == '\0') {
                                                                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                                              LOCK();
                                                                              UNLOCK();
                                                                              cRam_? = '\x01';
                                                                            }
                                                                            VStack_51.x = 0.0;
                                                                            VStack_51.y = 0.0;
                                                                            VStack_51.z = 0.0;
                                                                            pOVar32 = obj_00[1].klass;
                                                                            if (pOVar32 == (Object__Class *)0x0) {
                                                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
                                                                              pcVar2 = (code *)swi(3);
                                                                              (*pcVar2)();
                                                                              return;
                                                                            }
                                                                            pcVar2 = pcRam_?;
                                                                            if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                                              uVar14 = func_?(&UNK_?);
                                                                              FUN_?(uVar14,0);
                                                                              pcVar2 = (code *)swi(3);
                                                                              (*pcVar2)();
                                                                              return;
                                                                            }
                                                                            pcRam_? = pcVar2;
                                                                            (*pcRam_?)(pOVar32);
                                                                            uVar53._0_4_ = VStack_51.x + 0.0;
                                                                            if (pOVar31 == (Object *)0x0) {
                                                                              FUN_?();
                                                                              pcVar2 = (code *)swi(3);
                                                                              (*pcVar2)();
                                                                              return;
                                                                            }
                                                                            uVar53._4_4_ = VStack_51.y - 0.1;
                                                                            CStack_21.b = VStack_51.z + 0.0;
                                                                            CStack_21._0_8_ = uVar53;
                                                                            if (cRam_? == '\0') {
                                                                              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                                                                              LOCK();
                                                                              UNLOCK();
                                                                              cRam_? = '\x01';
                                                                            }
                                                                            pOVar32 = pOVar31[1].klass;
                                                                            if (pOVar32 == (Object__Class *)0x0) {
                                                                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar31,(MethodInfo *)0x0);
                                                                              pcVar2 = (code *)swi(3);
                                                                              (*pcVar2)();
                                                                              return;
                                                                            }
                                                                            pcVar2 = pcRam_?;
                                                                            if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                                                                              uVar14 = func_?(&UNK_?);
                                                                              FUN_?(uVar14,0);
                                                                              pcVar2 = (code *)swi(3);
                                                                              (*pcVar2)();
                                                                              return;
                                                                            }
                                                                            pcRam_? = pcVar2;
                                                                            (*pcRam_?)(pOVar32,&CStack_21);
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
                                              pAVar46 = (this->fields).OnAnimationActivators;
                                              if (pAVar46 == (ActivateOnAnimationBase__Array *)0x0) break;
                                              if ((uint)pAVar46->max_length <= uVar7) goto code_?;
                                              pLVar44 = (this->fields).animations;
                                              if (pLVar44 == (List_1_System_String_ *)0x0) break;
                                              uVar30 = (this->fields).currentAnimation;
                                              if ((uint)(pLVar44->fields)._size <= uVar30) goto code_?;
                                              pSVar45 = (pLVar44->fields)._items;
                                              if (pSVar45 == (String__Array *)0x0) break;
                                              if ((uint)pSVar45->max_length <= uVar30) goto code_?;
                                              plVar54 = *(longlong **)((longlong)pAVar46->vector + lVar6 + -0x20);
                                              if (plVar54 == (longlong *)0x0) break;
                                              (**(code **)(*plVar54 + 0x188))(plVar54,pSVar45->vector[(int)uVar30],*(undefined8 *)(*plVar54 + 400));
                                              uVar7 = uVar7 + 1;
                                              lVar6 = lVar6 + 8;
                                              pAVar46 = (this->fields).OnAnimationActivators;
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

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_Update(AvatarAccessoryPreviewer *this,MethodInfo *method)

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
    AvatarPreviewer::AvatarPreviewer_UpdateRotation(this_00,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
    (this->fields).currentRotationSpeed = 0.0;
  }
  return;
}


/* Void <Start>b__24_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__Start_b__24_0(AvatarAccessoryPreviewer *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

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
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::UnityAction_1_System_Object___ctor(this_00,(Object *)this,MethodInfo__AvatarAccessoryPreviewer__SetupPreviewer_MVBody_,(MethodInfo *)0x0);
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
      if (pIVar2->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        pIVar5 = &pIVar2->vtable + pIVar2->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IGetCurrentBody__VTable *)FUN_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0,this_00,unaff_RDI);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->GetCurrentBody).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,this_00,(pIVar5->GetCurrentBody).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* AvatarAccessoryPreviewer() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer::AvatarAccessoryPreviewer__ctor(AvatarAccessoryPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
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
  this_00 = (List_1_System_String_ *)FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,MethodInfo__System__Collections__Generic__List<System::String>__List__);
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
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize((List_1_System_Object_ *)this_00,(Object *)pSVar1,pMVar2->klass->rgctx_data[0xe].method);
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
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize((List_1_System_Object_ *)this_00,(Object *)pSVar1,pMVar2->klass->rgctx_data[0xe].method);
        }
        pSVar1 = StringLiteral_Jump;
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
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize((List_1_System_Object_ *)this_00,(Object *)pSVar1,pMVar2->klass->rgctx_data[0xe].method);
          }
          pSVar1 = StringLiteral_Swim;
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
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize((List_1_System_Object_ *)this_00,(Object *)pSVar1,pMVar2->klass->rgctx_data[0xe].method);
            }
            pSVar1 = StringLiteral_Dead;
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
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__AddWithResize((List_1_System_Object_ *)this_00,(Object *)pSVar1,pMVar2->klass->rgctx_data[0xe].method);
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

