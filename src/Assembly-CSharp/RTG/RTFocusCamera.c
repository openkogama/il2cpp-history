
/* Void AdjustOrthoSizeForFocusPt() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_AdjustOrthoSizeForFocusPt
               (RTFocusCamera *this,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx,method,in_R8,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  camera = (this->fields)._targetCamera;
  fVar3 = (this->fields)._focusPointOffset;
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar4 = CameraEx::CameraEx_GetFrustumHeightFromDistance(camera,fVar3,(MethodInfo *)0x0);
  fVar3 = fVar4 * _UNK_?;
  if (fVar4 * _UNK_? <= _UNK_?) {
    fVar3 = _UNK_?;
  }
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                  ,fVar3,0,in_R9,uVar1,uVar2,unaff_RBX);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar6 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar6,fVar3);
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Awake
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionBegin_RTG__CameraPrjSwitchTransition__Type_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionEnd_RTG__CameraPrjSwitchTransition__Type_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionUpate_RTG__CameraPrjSwitchTransition__Type_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RTCamera__No_target_camera_was_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._targetCamera;
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
    if ((pCVar1->fields)._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
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
  (*pcRam_?)();
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_RTCamera__No_target_camera_was_s,(MethodInfo *)0x0);
code_?:
  RTFocusCamera_SetTargetCamera(this,(this->fields)._targetCamera,(MethodInfo *)0x0);
  this_00 = (this->fields)._worldTransformSnapshot;
  if (this_00 != (WorldTransformSnapshot *)0x0) {
    WorldTransformSnapshot::WorldTransformSnapshot_Snaphot
              (this_00,(this->fields)._targetTransform,(MethodInfo *)0x0);
    pCVar4 = (this->fields)._prjSwitchTranstion;
    if (pCVar4 != (CameraPrjSwitchTransition *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pCVar4->fields)._transitionType == 0) {
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
        if (((this->fields)._._._._._.m_CachedPtr != (void *)0x0) &&
           (bVar5 = iRam_? != 0, (pCVar4->fields)._targetMono = (MonoBehaviour *)this
           , bVar5)) {
          uVar6 = (uint)((ulonglong)&(pCVar4->fields)._targetMono >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
      }
      pCVar4 = (this->fields)._prjSwitchTranstion;
      pUVar10 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar10,(Object *)this,
                 MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionBegin_RTG__CameraPrjSwitchTransition__Type_
                 ,(MethodInfo *)0x0);
      if (pCVar4 != (CameraPrjSwitchTransition *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pCVar11 = &pCVar4->fields;
        pCVar12 = (pCVar4->fields).TransitionBegin;
        do {
          pCVar13 = (CameraProjectionSwitchBeginHandler *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pCVar12,(Delegate *)pUVar10,(MethodInfo *)0x0);
          pCVar14 = (CameraProjectionSwitchBeginHandler *)0x0;
          if (pCVar13 != (CameraProjectionSwitchBeginHandler *)0x0) {
            if (pCVar13->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
              pCVar14 = pCVar13;
            }
            if (pCVar14 == (CameraProjectionSwitchBeginHandler *)0x0) {
              FUN_?(pCVar13);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          LOCK();
          pCVar13 = pCVar11->TransitionBegin;
          bVar5 = pCVar12 == pCVar13;
          if (bVar5) {
            pCVar11->TransitionBegin = pCVar14;
            pCVar13 = pCVar12;
          }
          UNLOCK();
          pCVar14 = pCVar12;
          if (!bVar5) {
            pCVar14 = pCVar13;
          }
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)pCVar11 >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar5 = uVar8 == *puVar9;
              if (bVar5) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar5);
          }
          bVar5 = pCVar14 != pCVar12;
          pCVar12 = pCVar14;
        } while (bVar5);
        pCVar4 = (this->fields)._prjSwitchTranstion;
        b = (Delegate *)FUN_?(TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
        pMVar15 = 
        MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionUpate_RTG__CameraPrjSwitchTransition__Type_
        ;
        bVar5 = iRam_? != 0;
        (b->fields).method_ptr =
             MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionUpate_RTG__CameraPrjSwitchTransition__Type_
             ->virtualMethodPointer;
        (b->fields).method = pMVar15;
        (b->fields).m_target = (Object *)this;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        uVar16 = pMVar15->parameters_count;
        (b->fields).method_code = b;
        if (((pMVar15->flags & 0x10) == 0) || (uVar16 != 1)) {
          (b->fields).method_code = (b->fields).m_target;
          puVar17 = (b->fields).method_ptr;
        }
        else {
          puVar17 = &UNK_?;
        }
        (b->fields).invoke_impl = puVar17;
        (b->fields).extra_arg = FUN_?;
        if (pCVar4 != (CameraPrjSwitchTransition *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          ppCVar18 = &(pCVar4->fields).TransitionUpdate;
          a = (pCVar4->fields).TransitionUpdate;
          do {
            pCVar19 = (CameraProjectionSwitchUpdateHandler *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)a,b,(MethodInfo *)0x0);
            pCVar20 = (CameraProjectionSwitchUpdateHandler *)0x0;
            if (pCVar19 != (CameraProjectionSwitchUpdateHandler *)0x0) {
              if (pCVar19->klass == TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
                pCVar20 = pCVar19;
              }
              if (pCVar20 == (CameraProjectionSwitchUpdateHandler *)0x0) {
                FUN_?(pCVar19);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            LOCK();
            pCVar19 = *ppCVar18;
            bVar5 = a == pCVar19;
            if (bVar5) {
              *ppCVar18 = pCVar20;
              pCVar19 = a;
            }
            UNLOCK();
            pCVar20 = a;
            if (!bVar5) {
              pCVar20 = pCVar19;
            }
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)ppCVar18 >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            bVar5 = pCVar20 != a;
            a = pCVar20;
          } while (bVar5);
          pCVar4 = (this->fields)._prjSwitchTranstion;
          pUVar10 = (UnityAction_1_System_Int32Enum_ *)
                    FUN_?(TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (pUVar10,(Object *)this,
                     MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionEnd_RTG__CameraPrjSwitchTransition__Type_
                     ,(MethodInfo *)0x0);
          if (pCVar4 != (CameraPrjSwitchTransition *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            ppCVar21 = &(pCVar4->fields).TransitionEnd;
            pCVar12 = (pCVar4->fields).TransitionEnd;
            do {
              pCVar13 = (CameraProjectionSwitchBeginHandler *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pCVar12,(Delegate *)pUVar10,(MethodInfo *)0x0);
              pCVar14 = (CameraProjectionSwitchBeginHandler *)0x0;
              if (pCVar13 != (CameraProjectionSwitchBeginHandler *)0x0) {
                if (pCVar13->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
                  pCVar14 = pCVar13;
                }
                if (pCVar14 == (CameraProjectionSwitchBeginHandler *)0x0) {
                  FUN_?(pCVar13);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              LOCK();
              pCVar13 = *ppCVar21;
              bVar5 = pCVar12 == pCVar13;
              if (bVar5) {
                *ppCVar21 = pCVar14;
                pCVar13 = pCVar12;
              }
              UNLOCK();
              pCVar14 = pCVar12;
              if (!bVar5) {
                pCVar14 = pCVar13;
              }
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)ppCVar21 >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar5 = uVar8 == *puVar9;
                  if (bVar5) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              bVar5 = pCVar14 != pCVar12;
              pCVar12 = pCVar14;
            } while (bVar5);
            return;
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


/* Vector2 CalculateLookAroundRotation(Single, Single) */

Vector2 Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CalculateLookAroundRotation
                  (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._lookAroundSettings;
  if (pCVar1 != (CameraLookAroundSettings *)0x0) {
    lVar2 = 0x2c;
    lVar3 = 0x2c;
    if ((pCVar1->fields)._lookAroundMode != 0) {
      lVar3 = 0x30;
    }
    fVar4 = (float)((uint)deviceAxisY ^ _UNK_?) *
            *(float *)((longlong)&pCVar1->klass + lVar3);
    if ((pCVar1->fields)._invertY != 0) {
      fVar4 = fVar4 * _UNK_?;
    }
    if ((pCVar1->fields)._lookAroundMode != 0) {
      lVar2 = 0x30;
    }
    fVar5 = deviceAxisX * *(float *)((longlong)&pCVar1->klass + lVar2);
    if ((pCVar1->fields)._invertX != 0) {
      fVar5 = fVar5 * _UNK_?;
    }
    VVar6.y = fVar5;
    VVar6.x = fVar4;
    return VVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  VVar6 = (Vector2)(*pcVar7)();
  return VVar6;
}


/* Vector2 CalculateOrbitRotation(Single, Single) */

Vector2 Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CalculateOrbitRotation
                  (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._orbitSettings;
  if (pCVar1 != (CameraOrbitSettings *)0x0) {
    lVar2 = 0x30;
    lVar3 = 0x30;
    if ((pCVar1->fields)._orbitMode != 1) {
      lVar3 = 0x2c;
    }
    fVar4 = (float)((uint)deviceAxisY ^ _UNK_?) *
            *(float *)((longlong)&pCVar1->klass + lVar3);
    if ((pCVar1->fields)._invertY != 0) {
      fVar4 = fVar4 * _UNK_?;
    }
    if ((pCVar1->fields)._orbitMode != 1) {
      lVar2 = 0x2c;
    }
    fVar5 = deviceAxisX * *(float *)((longlong)&pCVar1->klass + lVar2);
    if ((pCVar1->fields)._invertX != 0) {
      fVar5 = fVar5 * _UNK_?;
    }
    VVar6.y = fVar5;
    VVar6.x = fVar4;
    return VVar6;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  VVar6 = (Vector2)(*pcVar7)();
  return VVar6;
}


/* Vector2 CalculatePanAmount(Single, Single) */

Vector2 Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CalculatePanAmount
                  (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._panSettings;
  if (pCVar1 != (CameraPanSettings *)0x0) {
    lVar2 = 0x2c;
    lVar3 = 0x2c;
    if ((pCVar1->fields)._panMode != 0) {
      lVar3 = 0x30;
    }
    fVar4 = (float)((uint)deviceAxisX ^ _UNK_?) *
            *(float *)((longlong)&pCVar1->klass + lVar3);
    if ((pCVar1->fields)._invertX != 0) {
      fVar4 = fVar4 * _UNK_?;
    }
    if ((pCVar1->fields)._panMode != 0) {
      lVar2 = 0x30;
    }
    fVar5 = (float)((uint)deviceAxisY ^ _UNK_?) *
            *(float *)((longlong)&pCVar1->klass + lVar2);
    if ((pCVar1->fields)._invertY != 0) {
      fVar5 = fVar5 * _UNK_?;
    }
    camera = (this->fields)._targetCamera;
    uVar6._0_4_ = (this->fields)._lastFocusPoint.x;
    uVar6._4_4_ = (this->fields)._lastFocusPoint.y;
    fVar7 = (this->fields)._lastFocusPoint.z;
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    aVStack_8[0]._0_8_ = uVar6;
    aVStack_8[0].z = fVar7;
    fVar7 = CameraEx::CameraEx_EstimateZoomFactorSpherical(camera,aVStack_8,(MethodInfo *)0x0);
    VVar9.y = (float)((uint)fVar7 & _UNK_?) * fVar5;
    VVar9.x = (float)((uint)fVar7 & _UNK_?) * fVar4;
    return VVar9;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  VVar9 = (Vector2)(*pcVar10)();
  return VVar9;
}


/* Single CalculateScrollZoomAmount(Single) */

float Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CalculateScrollZoomAmount
                (RTFocusCamera *this,float deviceScroll,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._zoomSettings;
  pCVar2 = (this->fields)._targetCamera;
  if (pCVar1 != (CameraZoomSettings *)0x0) {
    if ((pCVar1->fields)._zoomMode == 0) {
      if (pCVar2 == (Camera *)0x0) goto code_?;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (pCVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        fVar4 = (pCVar1->fields)._perspStandardZoomSensitivity;
      }
      else {
        fVar4 = (pCVar1->fields)._orthoStandardZoomSensitivity;
      }
    }
    else if ((pCVar1->fields)._zoomMode == 1) {
      if (pCVar2 == (Camera *)0x0) goto code_?;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (pCVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        fVar4 = (pCVar1->fields)._perspSmoothZoomSensitivity;
      }
      else {
        fVar4 = (pCVar1->fields)._orthoSmoothZoomSensitivity;
      }
    }
    else {
      fVar4 = 0.0;
    }
    pCVar1 = (this->fields)._zoomSettings;
    fVar4 = fVar4 * deviceScroll;
    if (pCVar1 != (CameraZoomSettings *)0x0) {
      if ((pCVar1->fields)._invertZoomAxis != 0) {
        fVar4 = fVar4 * _UNK_?;
      }
      pCVar2 = (this->fields)._targetCamera;
      uVar5._0_4_ = (this->fields)._lastFocusPoint.x;
      uVar5._4_4_ = (this->fields)._lastFocusPoint.y;
      fVar6 = (this->fields)._lastFocusPoint.z;
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      aVStack_7[0]._0_8_ = uVar5;
      aVStack_7[0].z = fVar6;
      fVar6 = CameraEx::CameraEx_EstimateZoomFactorSpherical(pCVar2,aVStack_7,(MethodInfo *)0x0);
      return fVar6 * fVar4;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  fVar4 = (float)(*pcVar8)();
  return fVar4;
}


/* Boolean CanCameraProcessInput() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CanCameraProcessInput
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__YesNoAnswer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._settings;
  if (pCVar1 != (CameraSettings *)0x0) {
    if (((pCVar1->fields)._canProcessInput == 0) || ((this->fields)._isDoingFocus != 0)) {
      return 0;
    }
    pCVar2 = (this->fields)._prjSwitchTranstion;
    if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
      if ((pCVar2->fields)._transitionType != 0) {
        return 0;
      }
      if ((this->fields)._isDoingRotationSwitch != 0) {
        return 0;
      }
      if ((this->fields).CanProcessInput == (CameraCanProcessInputHandler *)0x0) {
        return 1;
      }
      lVar3 = FUN_?(TypeInfo__RTG__YesNoAnswer);
      pCVar4 = (this->fields).CanProcessInput;
      if ((pCVar4 != (CameraCanProcessInputHandler *)0x0) &&
         ((*(pCVar4->fields)._._.invoke_impl)
                    ((pCVar4->fields)._._.method_code,lVar3,(pCVar4->fields)._._.method), lVar3 != 0
         )) {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          return 0;
        }
        return *(char *)(lVar3 + 0x11) == '\0';
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean CanUseMouseScrollWheel() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CanUseMouseScrollWheel
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__YesNoAnswer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).CanUseScrollWheel != (CameraCanUseScrollWheelHandler *)0x0) {
    lVar1 = FUN_?(TypeInfo__RTG__YesNoAnswer);
    pCVar2 = (this->fields).CanUseScrollWheel;
    if (pCVar2 != (CameraCanUseScrollWheelHandler *)0x0) {
      (*(pCVar2->fields)._._.invoke_impl)
                ((pCVar2->fields)._._.method_code,lVar1,(pCVar2->fields)._._.method);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x10) == '\0') {
          return 0;
        }
        return *(char *)(lVar1 + 0x11) == '\0';
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  return 1;
}


/* IEnumerator DoConstantFocus(CameraFocus+Data) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoConstantFocus
          (RTFocusCamera *this,CameraFocus_Data *focusData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].monitor = (MonitorData *)focusData;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* IEnumerator DoConstantRotationSwitch(Quaternion) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoConstantRotationSwitch
          (RTFocusCamera *this,Quaternion *targetRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133);
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
  pIVar7 = *(IEnumerator__Class **)&targetRotation->z;
  pIVar1[2].monitor = *(MonitorData **)targetRotation;
  pIVar1[3].klass = pIVar7;
  return pIVar1;
}


/* IEnumerator DoSmoothFocus(CameraFocus+Data) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothFocus
          (RTFocusCamera *this,CameraFocus_Data *focusData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].monitor = (MonitorData *)focusData;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* IEnumerator DoSmoothLookAround(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothLookAround
          (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  *(float *)&pIVar1[2].monitor = deviceAxisX;
  *(float *)((longlong)&pIVar1[2].monitor + 4) = deviceAxisY;
  return pIVar1;
}


/* IEnumerator DoSmoothOrbit(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothOrbit
          (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  *(float *)&pIVar1[2].monitor = deviceAxisX;
  *(float *)((longlong)&pIVar1[2].monitor + 4) = deviceAxisY;
  return pIVar1;
}


/* IEnumerator DoSmoothPan(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothPan
          (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  *(float *)&pIVar1[2].monitor = deviceAxisX;
  *(float *)((longlong)&pIVar1[2].monitor + 4) = deviceAxisY;
  return pIVar1;
}


/* IEnumerator DoSmoothRotationSwitch(Quaternion) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothRotationSwitch
          (RTFocusCamera *this,Quaternion *targetRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134);
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
  pIVar7 = *(IEnumerator__Class **)&targetRotation->z;
  pIVar1[2].monitor = *(MonitorData **)targetRotation;
  pIVar1[3].klass = pIVar7;
  return pIVar1;
}


/* IEnumerator DoSmoothZoom(Single) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothZoom
          (RTFocusCamera *this,float deviceScroll,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    *(float *)&pIVar1[2].monitor = deviceScroll;
    return pIVar1;
  }
  uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  *(float *)&pIVar1[2].monitor = deviceScroll;
  return pIVar1;
}


/* Void Focus(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Focus
               (RTFocusCamera *this,List_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  AStack_3._size.y = (float)uVar2 * _UNK_?;
  AStack_3._size.x = 9.80909e-45;
  AStack_3._center.x = (pVVar1->oneVector).z * _UNK_?;
  AStack_3._size.z = (pVVar1->oneVector).y * _UNK_?;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar4 = ObjectBounds::ObjectBounds_CalcObjectCollectionWorldAABB
                     (&AStack_5,(IEnumerable_1_UnityEngine_GameObject_ *)gameObjects,
                      (ObjectBounds_QueryConfig *)&AStack_3,(MethodInfo *)0x0);
  AStack_3._size.x = (pAVar4->_size).x;
  AStack_3._size.y = (pAVar4->_size).y;
  AStack_3._8_8_ = *(undefined8 *)&(pAVar4->_size).z;
  AStack_3._center.y = (pAVar4->_center).y;
  AStack_3._center.z = (pAVar4->_center).z;
  if (pAVar4->_isValid != 0) {
    AStack_3._isValid = pAVar4->_isValid;
    AStack_3._25_3_ = *(undefined3 *)&pAVar4->field_0x19;
    RTFocusCamera_Focus_1(this,&AStack_3,(MethodInfo *)0x0);
  }
  return;
}


/* Void Focus(AABB) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Focus_1
               (RTFocusCamera *this,AABB *focusAABB,MethodInfo *method)

{
  if ((this->fields)._isDoingFocus != 0) {
    return;
  }
  pCVar1 = (this->fields)._prjSwitchTranstion;
  if (pCVar1 != (CameraPrjSwitchTransition *)0x0) {
    if ((pCVar1->fields)._transitionType != 0) {
      return;
    }
    if ((this->fields)._isDoingRotationSwitch != 0) {
      return;
    }
    if (focusAABB->_isValid == 0) {
      return;
    }
    RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
    AStack_2._size.x = (focusAABB->_size).x;
    AStack_2._size.y = (focusAABB->_size).y;
    AStack_2._8_8_ = *(undefined8 *)&(focusAABB->_size).z;
    AStack_2._isValid = focusAABB->_isValid;
    AStack_2._25_3_ = *(undefined3 *)&focusAABB->field_0x19;
    AStack_2._center.y = (focusAABB->_center).y;
    AStack_2._center.z = (focusAABB->_center).z;
    pCVar3 = CameraFocus::CameraFocus_CalculateFocusData
                        ((this->fields)._targetCamera,&AStack_2,(this->fields)._focusSettings,
                         (MethodInfo *)0x0);
    pCVar4 = (this->fields)._focusSettings;
    if (pCVar4 != (CameraFocusSettings *)0x0) {
      if ((pCVar4->fields)._focusMode != 0) {
        if ((pCVar4->fields)._focusMode == 1) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar5 = (IEnumerator *)
                    FUN_?(TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135);
          *(undefined4 *)&pIVar5[1].klass = 0;
          pIVar5[2].klass = (IEnumerator__Class *)this;
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)(pIVar5 + 2) >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          iVar11 = iRam_?;
          pIVar5[2].monitor = (MonitorData *)pCVar3;
          if (iVar11 != 0) {
            uVar6 = (uint)((ulonglong)&pIVar5[2].monitor >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
        else {
          if ((pCVar4->fields)._focusMode != 2) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar5 = (IEnumerator *)
                    FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136);
          *(undefined4 *)&pIVar5[1].klass = 0;
          pIVar5[2].klass = (IEnumerator__Class *)this;
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)(pIVar5 + 2) >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          iVar11 = iRam_?;
          pIVar5[2].monitor = (MonitorData *)pCVar3;
          if (iVar11 != 0) {
            uVar6 = (uint)((ulonglong)&pIVar5[2].monitor >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
        (this->fields)._focusCrtn = pIVar5;
        func_?(&(this->fields)._focusCrtn);
        if (pIVar5 == (IEnumerator *)0x0) {
          auStack_12._8_8_ = &UNK_?;
          uVar13 = func_?(&TypeInfo__System__NullReferenceException);
          auStack_12._8_8_ = &UNK_?;
          this_00 = (NullReferenceException *)func_?(uVar13);
          auStack_12._8_8_ = &UNK_?;
          pSVar14 = (String *)func_?(&StringLiteral_routine_is_null);
          auStack_12._8_8_ = &UNK_?;
          mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                    (this_00,pSVar14,(MethodInfo *)0x0);
          auStack_12._8_8_ = &UNK_?;
          uVar13 = func_?(&
                                       MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                      );
          auStack_12._8_8_ = &UNK_?;
          FUN_?(this_00,uVar13);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        auStack_12._8_8_ = &UNK_?;
        bVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                 MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
        if (bVar16 == 0) {
          auStack_12._8_8_ = &UNK_?;
          uVar13 = func_?(&TypeInfo__System__ArgumentException);
          auStack_12._8_8_ = &UNK_?;
          this_01 = (InvalidEnumArgumentException *)func_?(uVar13);
          auStack_12._8_8_ = &UNK_?;
          pSVar14 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
          auStack_12._8_8_ = &UNK_?;
          System.dll::System::ComponentModel::InvalidEnumArgumentException::
          InvalidEnumArgumentException__ctor_1(this_01,pSVar14,(MethodInfo *)0x0);
          auStack_12._8_8_ = &UNK_?;
          uVar13 = func_?(&
                                       MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                      );
          auStack_12._8_8_ = &UNK_?;
          FUN_?(this_01,uVar13);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if (cRam_? == '\0') {
          auStack_12._8_8_ = &UNK_?;
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this != (RTFocusCamera *)0x0) {
          pvVar17 = (this->fields)._._._._._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            auStack_12._8_8_ = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pcVar15 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            auStack_12._8_8_ = &UNK_?;
            pcVar15 = (code *)FUN_?(&UNK_?);
            if (pcVar15 == (code *)0x0) {
              auStack_12._8_8_ = &UNK_?;
              uVar13 = func_?(&UNK_?);
              auStack_12._8_8_ = &UNK_?;
              FUN_?(uVar13,0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          pcRam_? = pcVar15;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar17,pIVar5);
          return;
        }
        auStack_12._8_8_ = &UNK_?;
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if (pCVar3 != (CameraFocus_Data *)0x0) {
        obj = (this->fields)._targetTransform;
        if (obj == (Transform *)0x0) {
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        auStack_12._0_4_ = (pCVar3->fields)._cameraWorldPosition.x;
        auStack_12._4_4_ = (pCVar3->fields)._cameraWorldPosition.y;
        auStack_12._8_4_ = (pCVar3->fields)._cameraWorldPosition.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar17 = (obj->fields)._._.m_CachedPtr;
        if (pvVar17 != (void *)0x0) {
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pcRam_? = pcVar15;
          (*pcRam_?)(pvVar17,auStack_12);
          auStack_12._0_4_ = (pCVar3->fields)._focusPoint.x;
          auStack_12._4_4_ = (pCVar3->fields)._focusPoint.y;
          auStack_12._8_4_ = (pCVar3->fields)._focusPoint.z;
          RTFocusCamera_SetFocusPoint(this,(Vector3 *)auStack_12,(MethodInfo *)0x0);
          fVar18 = (pCVar3->fields)._focusPoint.y;
          fVar19 = (pCVar3->fields)._focusPoint.z;
          (this->fields)._lastFocusPoint.x = (pCVar3->fields)._focusPoint.x;
          (this->fields)._lastFocusPoint.y = fVar18;
          (this->fields)._lastFocusPoint.z = fVar19;
          RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Vector3 GetFocusPoint() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_GetFocusPoint
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    fStack_3 = 0.0;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar5)();
      return pVVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_2);
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (aVStack_8,pTVar1,(MethodInfo *)0x0);
      fVar9 = (this->fields)._focusPointOffset;
      uVar10 = pVVar6->x;
      uVar11 = pVVar6->y;
      fVar12 = pVVar6->z;
      __return_storage_ptr__->x = fVar9 * (float)uVar10 + (float)uStack_2;
      __return_storage_ptr__->y = fVar9 * (float)uVar11 + uStack_2._4_4_;
      __return_storage_ptr__->z = fVar9 * fVar12 + fStack_3;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* Void GetVisibleObjects(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_GetVisibleObjects
               (RTFocusCamera *this,List_1_UnityEngine_GameObject_ *visibleObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraViewVolume);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (visibleObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    iVar1 = (visibleObjects->fields)._size;
    piVar2 = &(visibleObjects->fields)._version;
    *piVar2 = *piVar2 + 1;
    (visibleObjects->fields)._size = 0;
    if (0 < iVar1) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(visibleObjects->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    if ((this->fields)._isObjectVisibilityDirty != 0) {
      camera = (this->fields)._targetCamera;
      this_00 = (CameraViewVolume *)FUN_?(TypeInfo__RTG__CameraViewVolume);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Plane);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
      bVar4 = iRam_? != 0;
      (this_00->fields)._worldPoints = pVVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&this_00->fields >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pPVar9 = (Plane__Array *)FUN_?(TypeInfo__UnityEngine__Plane,6);
      bVar4 = iRam_? != 0;
      (this_00->fields)._worldPlanes = pPVar9;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this_00->fields)._worldPlanes >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector2);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      cVar10 = cRam_?;
      fVar11 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
      (this_00->fields)._farPlaneSize.x =
           (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      (this_00->fields)._farPlaneSize.y = fVar11;
      if (cVar10 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector2);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar11 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
      (this_00->fields)._nearPlaneSize.x =
           (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      (this_00->fields)._nearPlaneSize.y = fVar11;
      CameraViewVolume::CameraViewVolume_FromCamera(this_00,camera,(MethodInfo *)0x0);
      pLVar12 = (this->fields)._visibleObjects;
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      CameraEx::CameraEx_GetVisibleObjects(camera,this_00,pLVar12,(MethodInfo *)0x0);
      (this->fields)._isObjectVisibilityDirty = 0;
    }
    pLVar12 = (this->fields)._visibleObjects;
    if (pLVar12 != (List_1_UnityEngine_GameObject_ *)0x0) {
      if ((pLVar12->fields)._size == 0) {
        return;
      }
      pLVar12 = (this->fields)._visibleObjects;
      uVar5 = (visibleObjects->fields)._size;
      pMVar13 = MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
               ->klass->rgctx_data[0x12].method;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__IDisposable);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      alStack_14[0] = 0;
      if (pLVar12 == (List_1_UnityEngine_GameObject_ *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                  (ExceptionArgument__Enum_collection,(MethodInfo *)0x0);
code_?:
        FUN_?();
code_?:
        FUN_?();
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if ((uint)(visibleObjects->fields)._size < uVar5) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pvVar16 = pMVar13->klass->rgctx_data[5].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
        pvVar16 = (void *)FUN_?(pvVar16);
      }
      pLVar17 = (List_1_UnityEngine_GameObject_ *)FUN_?(pLVar12,pvVar16);
      if (pLVar17 == (List_1_UnityEngine_GameObject_ *)0x0) {
        if ((int)uVar5 < (visibleObjects->fields)._size) {
          pvVar16 = pMVar13->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
            pvVar16 = (void *)FUN_?(pvVar16);
          }
          alStack_14[0] = FUN_?(0,pvVar16,pLVar12);
          uStack_18 = 0;
          plStack_19 = alStack_14;
          while (alStack_14[0] != 0) {
            cVar10 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
            lVar6 = alStack_14[0];
            if (cVar10 == '\0') {
              if (alStack_14[0] != 0) {
                FUN_?(0,TypeInfo__System__IDisposable,alStack_14[0]);
              }
              goto code_?;
            }
            if (alStack_14[0] == 0) goto code_?;
            pvVar16 = pMVar13->klass->rgctx_data[0x25].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
              pvVar16 = (void *)FUN_?(pvVar16);
            }
            item = (Object *)FUN_?(0,pvVar16,lVar6);
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Insert
                      ((List_1_System_Object_ *)visibleObjects,uVar5,item,
                       pMVar13->klass->rgctx_data[0x28].method);
            uVar5 = uVar5 + 1;
          }
          goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddEnumerable
                  ((List_1_System_Object_ *)visibleObjects,(IEnumerable_1_System_Object_ *)pLVar12,
                   pMVar13->klass->rgctx_data[8].method);
      }
      else {
        pvVar16 = pMVar13->klass->rgctx_data[5].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
          pvVar16 = (void *)FUN_?(pvVar16);
        }
        iVar1 = FUN_?(0,pvVar16,pLVar17);
        if (0 < iVar1) {
          FUN_?(visibleObjects,(visibleObjects->fields)._size + iVar1,
                        pMVar13->klass->rgctx_data[0xf].rgctxDataDummy);
          if ((int)uVar5 < (visibleObjects->fields)._size) {
            pGVar20 = (visibleObjects->fields)._items;
            mscorlib.dll::System::Array::Array_Copy_3
                      ((Array *)pGVar20,uVar5,(Array *)pGVar20,iVar1 + uVar5,
                       (visibleObjects->fields)._size - uVar5,(MethodInfo *)0x0);
          }
          pGVar20 = (visibleObjects->fields)._items;
          if (visibleObjects == pLVar17) {
            mscorlib.dll::System::Array::Array_Copy_3
                      ((Array *)pGVar20,0,(Array *)pGVar20,uVar5,uVar5,(MethodInfo *)0x0);
            pGVar20 = (visibleObjects->fields)._items;
            mscorlib.dll::System::Array::Array_Copy_3
                      ((Array *)pGVar20,iVar1 + uVar5,(Array *)pGVar20,uVar5 * 2,
                       (visibleObjects->fields)._size - uVar5,(MethodInfo *)0x0);
          }
          else {
            pvVar16 = pMVar13->klass->rgctx_data[5].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
              FUN_?(pvVar16);
            }
            FUN_?();
          }
          piVar2 = &(visibleObjects->fields)._size;
          *piVar2 = *piVar2 + iVar1;
        }
      }
code_?:
      piVar2 = &(visibleObjects->fields)._version;
      *piVar2 = *piVar2 + 1;
      return;
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void HandleMouseAndKeyboardInput() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_HandleMouseAndKeyboardInput
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._moveSettings;
  if (pCVar1 == (CameraMoveSettings *)0x0) goto code_?;
  fVar2 = (pCVar1->fields)._moveSpeed;
  uVar3._0_4_ = (this->fields)._currentAcceleration;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  fVar5 = (float)(*pcRam_?)();
  fVar5 = fVar5 * ((float)uVar3 + fVar2);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar6 = (this->fields)._moveDirFlags;
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3._0_4_ = (pVVar7->zeroVector).x;
  uVar3._4_4_ = (pVVar7->zeroVector).y;
  fVar2 = (pVVar7->zeroVector).z;
  pCVar8 = (this->fields)._hotkeys;
  VStack_9._0_8_ = uVar3;
  if (((pCVar8 == (CameraHotkeys *)0x0) ||
      (pHVar10 = (pCVar8->fields)._moveForward, pHVar10 == (Hotkeys *)0x0)) ||
     (bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0),
     pBVar6 == (Boolean__Array *)0x0)) goto code_?;
  if ((uint)pBVar6->max_length < 5) goto code_?;
  pBVar6->vector[4] = bVar11;
  pBVar6 = (this->fields)._moveDirFlags;
  if (pBVar6 == (Boolean__Array *)0x0) goto code_?;
  if ((uint)pBVar6->max_length < 5) goto code_?;
  if (pBVar6->vector[4] == 0) {
    pCVar8 = (this->fields)._hotkeys;
    if ((pCVar8 == (CameraHotkeys *)0x0) ||
       (pHVar10 = (pCVar8->fields)._moveBack, pHVar10 == (Hotkeys *)0x0))
    goto code_?;
    bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
  }
  else {
    bVar11 = 0;
  }
  if ((uint)pBVar6->max_length < 6) goto code_?;
  pBVar6->vector[5] = bVar11;
  pCVar8 = (this->fields)._hotkeys;
  pBVar6 = (this->fields)._moveDirFlags;
  if (((pCVar8 == (CameraHotkeys *)0x0) ||
      (pHVar10 = (pCVar8->fields)._strafeLeft, pHVar10 == (Hotkeys *)0x0)) ||
     (bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0),
     pBVar6 == (Boolean__Array *)0x0)) goto code_?;
  if ((int)pBVar6->max_length == 0) goto code_?;
  pBVar6->vector[0] = bVar11;
  pBVar6 = (this->fields)._moveDirFlags;
  if (pBVar6 == (Boolean__Array *)0x0) goto code_?;
  if ((int)pBVar6->max_length == 0) goto code_?;
  if (pBVar6->vector[0] == 0) {
    pCVar8 = (this->fields)._hotkeys;
    if ((pCVar8 == (CameraHotkeys *)0x0) ||
       (pHVar10 = (pCVar8->fields)._strafeRight, pHVar10 == (Hotkeys *)0x0))
    goto code_?;
    bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
  }
  else {
    bVar11 = 0;
  }
  if ((uint)pBVar6->max_length < 2) goto code_?;
  pBVar6->vector[1] = bVar11;
  pCVar8 = (this->fields)._hotkeys;
  pBVar6 = (this->fields)._moveDirFlags;
  if (((pCVar8 == (CameraHotkeys *)0x0) ||
      (pHVar10 = (pCVar8->fields)._moveUp, pHVar10 == (Hotkeys *)0x0)) ||
     (bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0),
     pBVar6 == (Boolean__Array *)0x0)) goto code_?;
  if ((uint)pBVar6->max_length < 3) goto code_?;
  pBVar6->vector[2] = bVar11;
  pBVar6 = (this->fields)._moveDirFlags;
  if (pBVar6 == (Boolean__Array *)0x0) goto code_?;
  if ((uint)pBVar6->max_length < 3) goto code_?;
  if (pBVar6->vector[2] == 0) {
    pCVar8 = (this->fields)._hotkeys;
    if ((pCVar8 == (CameraHotkeys *)0x0) ||
       (pHVar10 = (pCVar8->fields)._moveDown, pHVar10 == (Hotkeys *)0x0))
    goto code_?;
    bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
  }
  else {
    bVar11 = 0;
  }
  if ((uint)pBVar6->max_length < 4) goto code_?;
  pBVar6->vector[3] = bVar11;
  pBVar6 = (this->fields)._moveDirFlags;
  if (pBVar6 == (Boolean__Array *)0x0) goto code_?;
  if ((uint)pBVar6->max_length < 5) goto code_?;
  bVar12 = false;
  zoomAmount = fVar5;
  if (pBVar6->vector[4] == 0) {
    if ((uint)pBVar6->max_length < 6) goto code_?;
    bVar13 = bVar12;
    if (pBVar6->vector[5] != 0) {
      zoomAmount = (float)((uint)fVar5 ^ _UNK_?);
      goto code_?;
    }
  }
  else {
code_?:
    RTFocusCamera_Zoom(this,zoomAmount,(MethodInfo *)0x0);
    bVar13 = true;
  }
  pBVar6 = (this->fields)._moveDirFlags;
  if (pBVar6 == (Boolean__Array *)0x0) goto code_?;
  if ((int)pBVar6->max_length == 0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pBVar6->vector[0] == 0) {
    if ((uint)pBVar6->max_length < 2) goto code_?;
    if (pBVar6->vector[1] != 0) {
      pTVar14 = (this->fields)._targetTransform;
      if (pTVar14 == (Transform *)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                          (&VStack_9,pTVar14,(MethodInfo *)0x0);
      uVar16 = pVVar15->x;
      uVar17 = pVVar15->y;
      uVar3._0_4_ = (float)uVar16 * fVar5 + (float)uVar3;
      uVar3._4_4_ = (float)uVar17 * fVar5 + uVar3._4_4_;
      fVar2 = pVVar15->z * fVar5 + fVar2;
    }
  }
  else {
    pTVar14 = (this->fields)._targetTransform;
    if (pTVar14 == (Transform *)0x0) goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (&VStack_9,pTVar14,(MethodInfo *)0x0);
    uVar18 = pVVar15->x;
    uVar19 = pVVar15->y;
    uVar3._0_4_ = (float)uVar3 - (float)uVar18 * fVar5;
    uVar3._4_4_ = uVar3._4_4_ - (float)uVar19 * fVar5;
    fVar2 = fVar2 - pVVar15->z * fVar5;
  }
  pBVar6 = (this->fields)._moveDirFlags;
  if (pBVar6 == (Boolean__Array *)0x0) goto code_?;
  if ((uint)pBVar6->max_length < 3) goto code_?;
  if (pBVar6->vector[2] == 0) {
    if ((uint)pBVar6->max_length < 4) goto code_?;
    if (pBVar6->vector[3] != 0) {
      pTVar14 = (this->fields)._targetTransform;
      if (pTVar14 == (Transform *)0x0) goto code_?;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (aVStack_20,pTVar14,(MethodInfo *)0x0);
      uVar21 = pVVar15->x;
      uVar22 = pVVar15->y;
      uVar3._0_4_ = (float)uVar3 - (float)uVar21 * fVar5;
      uVar3._4_4_ = uVar3._4_4_ - (float)uVar22 * fVar5;
      fVar2 = fVar2 - pVVar15->z * fVar5;
    }
  }
  else {
    pTVar14 = (this->fields)._targetTransform;
    if (pTVar14 == (Transform *)0x0) goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (aVStack_20,pTVar14,(MethodInfo *)0x0);
    uVar23 = pVVar15->x;
    uVar24 = pVVar15->y;
    uVar3._0_4_ = (float)uVar23 * fVar5 + (float)uVar3;
    uVar3._4_4_ = (float)uVar24 * fVar5 + uVar3._4_4_;
    fVar2 = pVVar15->z * fVar5 + fVar2;
  }
  if ((float)uVar3 * (float)uVar3 + uVar3._4_4_ * uVar3._4_4_ + fVar2 * fVar2 != 0.0) {
    pTVar14 = (this->fields)._targetTransform;
    if (pTVar14 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar25 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar25 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar25);
    VStack_9.z = fVar2 + 0.0;
    VStack_9.y = uVar3._4_4_ + 0.0;
    VStack_9.x = (float)uVar3 + 0.0;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar25 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar25 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar25);
    bVar12 = true;
  }
  if (bVar12 || bVar13) {
    pCVar1 = (this->fields)._moveSettings;
    if (pCVar1 == (CameraMoveSettings *)0x0) goto code_?;
    fVar2 = (pCVar1->fields)._accelerationRate;
    camera = (this->fields)._targetCamera;
    uVar26._0_4_ = (this->fields)._lastFocusPoint.x;
    uVar26._4_4_ = (this->fields)._lastFocusPoint.y;
    uVar3._0_4_ = (this->fields)._lastFocusPoint.z;
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_9._0_8_ = uVar26;
    VStack_9.z = (float)uVar3;
    uVar3._0_4_ = CameraEx::CameraEx_EstimateZoomFactor(camera,&VStack_9,(MethodInfo *)0x0);
    uVar3._0_4_ = (float)((uint)(float)uVar3 & _UNK_?);
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar5 = (float)(*pcRam_?)();
    fVar2 = fVar5 * (float)uVar3 * fVar2 + (this->fields)._currentAcceleration;
  }
  else {
    fVar2 = 0.0;
  }
  (this->fields)._currentAcceleration = fVar2;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
           InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3._0_4_ = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
                 InputUnsafeUtility_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
  if ((fVar2 != 0.0) || ((float)uVar3 != 0.0)) {
    pCVar27 = (this->fields)._panSettings;
    if (pCVar27 == (CameraPanSettings *)0x0) goto code_?;
    if ((pCVar27->fields)._isPanningEnabled == 0) {
code_?:
      pCVar28 = (this->fields)._orbitSettings;
      if (pCVar28 == (CameraOrbitSettings *)0x0) goto code_?;
      if ((pCVar28->fields)._isOrbitEnabled != 0) {
        pCVar8 = (this->fields)._hotkeys;
        if ((pCVar8 == (CameraHotkeys *)0x0) ||
           (pHVar10 = (pCVar8->fields)._orbit, pHVar10 == (Hotkeys *)0x0))
        goto code_?;
        bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pCVar28 = (this->fields)._orbitSettings;
          if (pCVar28 == (CameraOrbitSettings *)0x0) goto code_?;
          if ((pCVar28->fields)._orbitMode == 0) {
            VVar29 = RTFocusCamera_CalculateOrbitRotation
                               (this,fVar2,(float)uVar3,(MethodInfo *)0x0);
            fStackX_c = VVar29.y;
            fStackX_8 = VVar29.x;
            RTFocusCamera_Orbit(this,fStackX_8,fStackX_c,(MethodInfo *)0x0);
            goto code_?;
          }
          RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar30 = (IEnumerator *)
                    FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131);
          bVar12 = iRam_? != 0;
          *(undefined4 *)&pIVar30[1].klass = 0;
          pIVar30[2].klass = (IEnumerator__Class *)this;
          if (bVar12) {
            uVar31 = (uint)((ulonglong)(pIVar30 + 2) >> 0xc);
            uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
            do {
              uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
              puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar33 == *puVar34;
              if (bVar12) {
                *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          goto code_?;
        }
      }
      pCVar35 = (this->fields)._lookAroundSettings;
      if (pCVar35 == (CameraLookAroundSettings *)0x0) goto code_?;
      if ((pCVar35->fields)._isLookAroundEnabled != 0) {
        pCVar8 = (this->fields)._hotkeys;
        if ((pCVar8 == (CameraHotkeys *)0x0) ||
           (pHVar10 = (pCVar8->fields)._lookAround, pHVar10 == (Hotkeys *)0x0))
        goto code_?;
        bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pCVar35 = (this->fields)._lookAroundSettings;
          if (pCVar35 == (CameraLookAroundSettings *)0x0) goto code_?;
          if ((pCVar35->fields)._lookAroundMode != 0) {
            RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pIVar30 = (IEnumerator *)
                      FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130);
            bVar12 = iRam_? != 0;
            *(undefined4 *)&pIVar30[1].klass = 0;
            pIVar30[2].klass = (IEnumerator__Class *)this;
            if (bVar12) {
              uVar31 = (uint)((ulonglong)(pIVar30 + 2) >> 0xc);
              uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
              do {
                uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
                puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
                LOCK();
                bVar12 = uVar33 == *puVar34;
                if (bVar12) {
                  *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
                }
                UNLOCK();
              } while (!bVar12);
            }
            goto code_?;
          }
          VVar29 = RTFocusCamera_CalculateLookAroundRotation
                             (this,fVar2,(float)uVar3,(MethodInfo *)0x0);
          fStackX_c = VVar29.y;
          fStackX_8 = VVar29.x;
          RTFocusCamera_LookAround(this,fStackX_8,fStackX_c,(MethodInfo *)0x0);
        }
      }
    }
    else {
      pCVar8 = (this->fields)._hotkeys;
      if ((pCVar8 == (CameraHotkeys *)0x0) ||
         (pHVar10 = (pCVar8->fields)._pan, pHVar10 == (Hotkeys *)0x0)) goto code_?;
      bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
      if (bVar11 == 0) goto code_?;
      pCVar27 = (this->fields)._panSettings;
      if (pCVar27 == (CameraPanSettings *)0x0) goto code_?;
      if ((pCVar27->fields)._panMode == 0) {
        VVar29 = RTFocusCamera_CalculatePanAmount(this,fVar2,(float)uVar3,(MethodInfo *)0x0);
        RTFocusCamera_Pan(this,VVar29,(MethodInfo *)0x0);
        goto code_?;
      }
      RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar30 = (IEnumerator *)FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129);
      bVar12 = iRam_? != 0;
      *(undefined4 *)&pIVar30[1].klass = 0;
      pIVar30[2].klass = (IEnumerator__Class *)this;
      if (bVar12) {
        uVar31 = (uint)((ulonglong)(pIVar30 + 2) >> 0xc);
        uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
        do {
          uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
          puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar33 == *puVar34;
          if (bVar12) {
            *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
code_?:
      *(float *)&pIVar30[2].monitor = fVar2;
      *(float *)((longlong)&pIVar30[2].monitor + 4) = (float)uVar3;
      (this->fields)._genricCamTransformCrtn = pIVar30;
      func_?(&(this->fields)._genricCamTransformCrtn);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                ((MonoBehaviour *)this,pIVar30,(MethodInfo *)0x0);
    }
  }
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__YesNoAnswer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).CanUseScrollWheel != (CameraCanUseScrollWheelHandler *)0x0) {
    lVar36 = FUN_?(TypeInfo__RTG__YesNoAnswer);
    pCVar37 = (this->fields).CanUseScrollWheel;
    if ((pCVar37 == (CameraCanUseScrollWheelHandler *)0x0) ||
       ((*(pCVar37->fields)._._.invoke_impl)((pCVar37->fields)._._.method_code), lVar36 == 0))
    goto code_?;
    if (*(char *)(lVar36 + 0x10) == '\0') {
      bVar12 = false;
    }
    else {
      bVar12 = *(char *)(lVar36 + 0x11) == '\0';
    }
    if (!bVar12) {
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_ScrollWheel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
           InputUnsafeUtility_GetAxis(StringLiteral_Mouse_ScrollWheel,(MethodInfo *)0x0);
  if (fVar2 != 0.0) {
    pCVar38 = (this->fields)._zoomSettings;
    if (pCVar38 == (CameraZoomSettings *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pCVar38->fields)._isZoomEnabled != 0) {
      if ((pCVar38->fields)._zoomMode == 0) {
        fVar2 = RTFocusCamera_CalculateScrollZoomAmount(this,fVar2,(MethodInfo *)0x0);
        RTFocusCamera_Zoom(this,fVar2,(MethodInfo *)0x0);
      }
      else {
        RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar30 = (IEnumerator *)FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132);
        bVar12 = iRam_? != 0;
        *(undefined4 *)&pIVar30[1].klass = 0;
        pIVar30[2].klass = (IEnumerator__Class *)this;
        if (bVar12) {
          uVar31 = (uint)((ulonglong)(pIVar30 + 2) >> 0xc);
          uVar32 = (ulonglong)((uVar31 & 0x1fffff) >> 6);
          do {
            uVar33 = *(ulonglong *)(uVar32 * 8 + 0xADDR);
            puVar34 = (ulonglong *)(uVar32 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar33 == *puVar34;
            if (bVar12) {
              *puVar34 = uVar33 | 1L << (uVar31 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        *(float *)&pIVar30[2].monitor = fVar2;
        (this->fields)._genricCamTransformCrtn = pIVar30;
        func_?(&(this->fields)._genricCamTransformCrtn);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,pIVar30,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Boolean IsViewportHoveredByDevice() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_IsViewportHoveredByDevice
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__IInputDevice);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) {
    puVar2 = (undefined8 *)FUN_?(auStack_3,7,TypeInfo__RTG__IInputDevice);
    uStack_4 = *puVar2;
    uStack_5 = *(undefined4 *)(puVar2 + 1);
    obj = (this->fields)._targetCamera;
    if (obj != (Camera *)0x0) {
      uStack_5 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6 = 0;
      uStack_7 = 0;
      pvVar8 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar8,&uStack_4,&uStack_6);
      if (((0.0 <= (float)uStack_6) && ((float)uStack_6 <= _UNK_?)) &&
         (0.0 <= uStack_6._4_4_)) {
        return uStack_6._4_4_ <= _UNK_?;
      }
      return 0;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void LookAround(Single, Single) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_LookAround
               (RTFocusCamera *this,float degreesLocalX,float degreesWorldY,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTransform;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (pTVar1 != (Transform *)0x0) {
    uStack_3._0_4_ = (pVVar2->upVector).x;
    uStack_3._4_4_ = (pVVar2->upVector).y;
    fStack_4 = (pVVar2->upVector).z;
    fVar5 = degreesWorldY * _UNK_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&uStack_3,fVar5);
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (aVStack_10,pTVar1,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar9->x;
      uStack_3._4_4_ = pVVar9->y;
      fStack_4 = pVVar9->z;
      fVar5 = degreesLocalX * _UNK_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6,&uStack_3,fVar5);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPrjSwitchTransitionBegin(CameraPrjSwitchTransition+Type) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
               (RTFocusCamera *this,CameraPrjSwitchTransition_Type__Enum transitionType,
               MethodInfo *method)

{
  if ((this->fields).PrjSwitchTransitionBegin != (CameraProjectionSwitchBeginHandler *)0x0) {
    pCVar1 = (this->fields).PrjSwitchTransitionBegin;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pCVar1->fields)._._.invoke_impl)
              ((pCVar1->fields)._._.method_code,transitionType,(pCVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void OnPrjSwitchTransitionEnd(CameraPrjSwitchTransition+Type) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionEnd
               (RTFocusCamera *this,CameraPrjSwitchTransition_Type__Enum transitionType,
               MethodInfo *method)

{
  if ((this->fields).PrjSwitchTransitionEnd != (CameraProjectionSwitchBeginHandler *)0x0) {
    pCVar1 = (this->fields).PrjSwitchTransitionEnd;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pCVar1->fields)._._.invoke_impl)
              ((pCVar1->fields)._._.method_code,transitionType,(pCVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void OnPrjSwitchTransitionUpate(CameraPrjSwitchTransition+Type) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionUpate
               (RTFocusCamera *this,CameraPrjSwitchTransition_Type__Enum transitionType,
               MethodInfo *method)

{
  if ((this->fields).PrjSwitchTransitionUpdate != (CameraProjectionSwitchUpdateHandler *)0x0) {
    pCVar1 = (this->fields).PrjSwitchTransitionUpdate;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pCVar1->fields)._._.invoke_impl)
              ((pCVar1->fields)._._.method_code,transitionType,(pCVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void Orbit(Single, Single) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Orbit
               (RTFocusCamera *this,float degreesLocalX,float degreesWorldY,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    VStack_2.z = 0.0;
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
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
    (*pcRam_?)(pvVar3,&VStack_2);
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_7,pTVar1,(MethodInfo *)0x0);
      fVar8 = (this->fields)._focusPointOffset;
      aVStack_9[0].x = pVVar6->x;
      aVStack_9[0].y = pVVar6->y;
      fVar10 = fVar8 * aVStack_9[0].x + VStack_2.x;
      fVar11 = fVar8 * pVVar6->z + VStack_2.z;
      fVar8 = fVar8 * aVStack_9[0].y + VStack_2.y;
      pTVar1 = (this->fields)._targetTransform;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (pTVar1 != (Transform *)0x0) {
        VStack_2.x = (pVVar12->upVector).x;
        VStack_2.y = (pVVar12->upVector).y;
        VStack_2.z = (pVVar12->upVector).z;
        VStack_7.y = fVar8;
        VStack_7.x = fVar10;
        VStack_7.z = fVar11;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                  (pTVar1,&VStack_7,&VStack_2,degreesWorldY,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._targetTransform;
        if ((pTVar1 != (Transform *)0x0) &&
           (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                               (aVStack_9,pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
          VStack_7.x = pVVar6->x;
          VStack_7.y = pVVar6->y;
          VStack_7.z = pVVar6->z;
          VStack_2.y = fVar8;
          VStack_2.x = fVar10;
          VStack_2.z = fVar11;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                    (pTVar1,&VStack_2,&VStack_7,degreesLocalX,(MethodInfo *)0x0);
          pTVar1 = (this->fields)._targetTransform;
          if (pTVar1 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                               (aVStack_9,pTVar1,(MethodInfo *)0x0);
            VStack_7.x = pVVar6->x;
            VStack_7.y = pVVar6->y;
            VStack_7.z = pVVar6->z;
            VStack_2.z = fVar11;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
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
            (*pcRam_?)(pvVar3,&VStack_2,&VStack_7);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Pan(Vector2) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Pan
               (RTFocusCamera *this,Vector2 panAmount,MethodInfo *method)

{
  obj = (this->fields)._targetTransform;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                    ,panAmount,method,in_XMM3_Da,panAmount);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_1 = 0;
    fStack_2 = 0.0;
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
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
    (*pcRam_?)(pvVar3,&uStack_1);
    pTVar6 = (this->fields)._targetTransform;
    if (pTVar6 != (Transform *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_8,pTVar6,(MethodInfo *)0x0);
      fVar9 = panAmount.x;
      aVStack_10[0].x = pVVar7->x;
      aVStack_10[0].y = pVVar7->y;
      fVar11 = pVVar7->z;
      fVar12 = aVStack_10[0].y * fVar9;
      fVar13 = aVStack_10[0].x * fVar9;
      pTVar6 = (this->fields)._targetTransform;
      if (pTVar6 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           (aVStack_10,pTVar6,(MethodInfo *)0x0);
        VStack_8.x = pVVar7->x;
        VStack_8.y = pVVar7->y;
        fVar14 = panAmount.y;
        fStack_2 = pVVar7->z * fVar14 + fVar11 * fVar9 + fStack_2;
        uStack_1 = CONCAT44(VStack_8.y * fVar14 + fVar12 + uStack_1._4_4_,
                             VStack_8.x * fVar14 + fVar13 + (float)uStack_1);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
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
        (*pcRam_?)(pvVar3,&uStack_1);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PerformInstantFocus(CameraFocus+Data) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_PerformInstantFocus
               (RTFocusCamera *this,CameraFocus_Data *focusData,MethodInfo *method)

{
  if (focusData == (CameraFocus_Data *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = (this->fields)._targetTransform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  VStack_2.x = (focusData->fields)._cameraWorldPosition.x;
  VStack_2.y = (focusData->fields)._cameraWorldPosition.y;
  stack0xfffffffffffffff0 = CONCAT44(uStack_3,(focusData->fields)._cameraWorldPosition.z);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&VStack_2);
  VStack_2.x = (focusData->fields)._focusPoint.x;
  VStack_2.y = (focusData->fields)._focusPoint.y;
  stack0xfffffffffffffff0 = CONCAT44(uStack_3,(focusData->fields)._focusPoint.z);
  RTFocusCamera_SetFocusPoint(this,&VStack_2,(MethodInfo *)0x0);
  fVar6 = (focusData->fields)._focusPoint.y;
  fVar7 = (focusData->fields)._focusPoint.z;
  (this->fields)._lastFocusPoint.x = (focusData->fields)._focusPoint.x;
  (this->fields)._lastFocusPoint.y = fVar6;
  (this->fields)._lastFocusPoint.z = fVar7;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  camera = (this->fields)._targetCamera;
  fVar7 = (this->fields)._focusPointOffset;
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar6 = CameraEx::CameraEx_GetFrustumHeightFromDistance(camera,fVar7,(MethodInfo *)0x0);
  fVar7 = fVar6 * _UNK_?;
  if (fVar6 * _UNK_? <= _UNK_?) {
    fVar7 = _UNK_?;
  }
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                  ,fVar7,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,fVar7);
  return;
}


/* Void PerformInstantProjectionSwitch() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_PerformInstantProjectionSwitch
               (RTFocusCamera *this,MethodInfo *method)

{
  obj = (this->fields)._targetCamera;
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
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
  cVar4 = (*pcRam_?)(pvVar2);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                  ,cVar4 == '\0',0,in_R9,unaff_RSI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,cVar4 == '\0');
  return;
}


/* Void PerformProjectionSwitch() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_PerformProjectionSwitch
               (RTFocusCamera *this,MethodInfo *method)

{
  RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
  RTFocusCamera_StopFocus(this,(MethodInfo *)0x0);
  pCVar1 = (this->fields)._projectionSwitchSettings;
  if (pCVar1 != (CameraProjectionSwitchSettings *)0x0) {
    obj = (this->fields)._targetCamera;
    if ((pCVar1->fields)._switchMode == 0) {
      pCVar2 = (this->fields)._prjSwitchTranstion;
      if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pCVar2->fields)._transitionType == 0) {
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
          if (obj != (Camera *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (((obj->fields)._._._.m_CachedPtr != (void *)0x0) &&
               (bVar3 = iRam_? != 0, (pCVar2->fields)._targetCamera = obj, bVar3)) {
              uVar4 = (uint)((ulonglong)&(pCVar2->fields)._targetCamera >> 0xc);
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
          }
        }
        pCVar2 = (this->fields)._prjSwitchTranstion;
        if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
          if ((pCVar2->fields)._transitionType == 0) {
            (pCVar2->fields)._camFieldOfView =
                 (float)((uint)(this->fields)._fieldOfView & _UNK_?);
          }
          pCVar2 = (this->fields)._prjSwitchTranstion;
          pVVar8 = RTFocusCamera_GetFocusPoint(&VStack_9,this,(MethodInfo *)0x0);
          if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
            if ((pCVar2->fields)._transitionType == 0) {
              fVar10 = pVVar8->y;
              fVar11 = pVVar8->z;
              (pCVar2->fields)._camFocusPoint.x = pVVar8->x;
              (pCVar2->fields)._camFocusPoint.y = fVar10;
              (pCVar2->fields)._camFocusPoint.z = fVar11;
            }
            pCVar1 = (this->fields)._projectionSwitchSettings;
            if ((pCVar1 != (CameraProjectionSwitchSettings *)0x0) &&
               (pCVar2 = (this->fields)._prjSwitchTranstion,
               pCVar2 != (CameraPrjSwitchTransition *)0x0)) {
              if ((pCVar2->fields)._transitionType == 0) {
                fVar10 = (float)((uint)(pCVar1->fields)._transitionDurationInSeconds &
                                _UNK_?);
                fVar11 = _UNK_?;
                if (_UNK_? <= fVar10) {
                  fVar11 = fVar10;
                }
                (pCVar2->fields)._durationInSeconds = fVar11;
              }
              pIVar12 = (IEnumerator__Class *)(this->fields)._prjSwitchTranstion;
              if (pIVar12 != (IEnumerator__Class *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Object,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pIVar13 = (pIVar12->_0).this_arg.data.array;
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
                if (pIVar13 != (Il2CppArrayType *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pIVar13->sizes != (int *)0x0) {
                    lVar14 = *(longlong *)&(pIVar12->_0).this_arg.attrs;
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
                    if (lVar14 != 0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if (*(longlong *)(lVar14 + 0x10) != 0) {
                        if (*(int *)((longlong)&(pIVar12->_0).parent + 4) != 0) {
                          pMVar15 = (MonoBehaviour *)(pIVar12->_0).this_arg.data.typeHandle;
                          if (pMVar15 == (MonoBehaviour *)0x0) {
code_?:
                            FUN_?();
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                          MonoBehaviour_StopCoroutine
                                    (pMVar15,*(IEnumerator **)&(pIVar12->_0).byval_arg.attrs,
                                     (MethodInfo *)0x0);
                          (pIVar12->_0).byval_arg.attrs = 0;
                          (pIVar12->_0).byval_arg.type = 0;
                          *(undefined5 *)&(pIVar12->_0).byval_arg.field_0xb = 0;
                          func_?(&(pIVar12->_0).byval_arg.attrs);
                          this_00 = *(Component **)&(pIVar12->_0).this_arg.attrs;
                          if ((this_00 == (Component *)0x0) ||
                             (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_transform(this_00,(MethodInfo *)0x0),
                             obj_00 == (Transform *)0x0)) goto code_?;
                          VStack_9._0_8_ = (pIVar12->_0).declaringType;
                          VStack_9.z = *(float *)&(pIVar12->_0).parent;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar17 = (obj_00->fields)._._.m_CachedPtr;
                          if (pvVar17 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)obj_00,(MethodInfo *)0x0);
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          pcVar16 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar16 = (code *)FUN_?(&UNK_?),
                             pcVar16 == (code *)0x0)) {
                            uVar18 = func_?(&UNK_?);
                            FUN_?(uVar18,0);
                            pcVar16 = (code *)swi(3);
                            (*pcVar16)();
                            return;
                          }
                          pcRam_? = pcVar16;
                          (*pcRam_?)(pvVar17,&VStack_9);
                        }
                        pMVar15 = (MonoBehaviour *)(pIVar12->_0).this_arg.data.typeHandle;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        routine = (IEnumerator *)
                                  FUN_?(
                                               TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41
                                               );
                        iVar19 = iRam_?;
                        *(undefined4 *)&routine[1].klass = 0;
                        routine[2].klass = pIVar12;
                        if (iVar19 != 0) {
                          uVar4 = (uint)((ulonglong)(routine + 2) >> 0xc);
                          lVar14 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                            puVar7 = (ulonglong *)(lVar14 + 0xADDR);
                            LOCK();
                            bVar3 = uVar5 == *puVar7;
                            if (bVar3) {
                              *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
                            }
                            UNLOCK();
                            iVar19 = iRam_?;
                          } while (!bVar3);
                        }
                        *(IEnumerator **)&(pIVar12->_0).byval_arg.attrs = routine;
                        if (iVar19 != 0) {
                          uVar4 = (uint)((ulonglong)&(pIVar12->_0).byval_arg.attrs >> 0xc);
                          lVar14 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                            puVar7 = (ulonglong *)(lVar14 + 0xADDR);
                            LOCK();
                            bVar3 = uVar5 == *puVar7;
                            if (bVar3) {
                              *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar3);
                        }
                        if (pMVar15 == (MonoBehaviour *)0x0) {
                          FUN_?();
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                        MonoBehaviour_StartCoroutine_2(pMVar15,routine,(MethodInfo *)0x0);
                      }
                    }
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
    else if (obj != (Camera *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar17 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar17 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18,0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcRam_? = pcVar16;
      cVar20 = (*pcRam_?)(pvVar17);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                      ,cVar20 == '\0',0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Camera *)0x0) {
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pvVar17 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar17 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar18 = func_?(&UNK_?);
        FUN_?(uVar18,0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcRam_? = pcVar16;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar17,cVar20 == '\0');
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void PerformRotationSwitch(Quaternion) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_PerformRotationSwitch
               (RTFocusCamera *this,Quaternion *targetRotation,MethodInfo *method)

{
  pCVar1 = (this->fields)._prjSwitchTranstion;
  if (pCVar1 != (CameraPrjSwitchTransition *)0x0) {
    if ((pCVar1->fields)._transitionType != 0) {
      return;
    }
    RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
    RTFocusCamera_StopFocus(this,(MethodInfo *)0x0);
    pCVar2 = (this->fields)._rotationSwitchSettings;
    if (pCVar2 != (CameraRotationSwitchSettings *)0x0) {
      if ((pCVar2->fields)._switchMode == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar3 = (IEnumerator *)
                  FUN_?(TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133);
        *(undefined4 *)&pIVar3[1].klass = 0;
        pIVar3[2].klass = (IEnumerator__Class *)this;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pIVar3 + 2) >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        iVar9 = iRam_?;
        fVar10 = targetRotation->y;
        fVar11 = targetRotation->z;
        fVar12 = targetRotation->w;
        *(float *)&pIVar3[2].monitor = targetRotation->x;
        *(float *)((longlong)&pIVar3[2].monitor + 4) = fVar10;
        *(float *)&pIVar3[3].klass = fVar11;
        *(float *)((longlong)&pIVar3[3].klass + 4) = fVar12;
        (this->fields)._genricCamTransformCrtn = pIVar3;
        if (iVar9 != 0) {
          uVar4 = (uint)((ulonglong)&(this->fields)._genricCamTransformCrtn >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      else {
        if ((pCVar2->fields)._switchMode != 1) {
          if ((pCVar2->fields)._switchType == 0) {
            pTVar13 = (this->fields)._targetTransform;
            if (pTVar13 == (Transform *)0x0) {
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            fStack_15 = targetRotation->x;
            fStack_16 = targetRotation->y;
            fStack_17 = targetRotation->z;
            fStack_18 = targetRotation->w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar19 = (pTVar13->fields)._._.m_CachedPtr;
            if (pvVar19 != (void *)0x0) {
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar20 = func_?(&UNK_?);
                FUN_?(uVar20,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pvVar19,&fStack_15);
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pVVar21 = RTFocusCamera_GetFocusPoint((Vector3 *)auStack_22,this,(MethodInfo *)0x0);
          pTVar13 = (this->fields)._targetTransform;
          uStack_23._0_4_ = pVVar21->x;
          uStack_23._4_4_ = pVVar21->y;
          fVar10 = pVVar21->z;
          if (pTVar13 != (Transform *)0x0) {
            fStack_15 = targetRotation->x;
            fStack_16 = targetRotation->y;
            fStack_17 = targetRotation->z;
            fStack_18 = targetRotation->w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar19 = (pTVar13->fields)._._.m_CachedPtr;
            if (pvVar19 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar20 = func_?(&UNK_?);
              FUN_?(uVar20,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar19,&fStack_15);
            pTVar13 = (this->fields)._targetTransform;
            if (pTVar13 != (Transform *)0x0) {
              pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  ((Vector3 *)auStack_22,pTVar13,(MethodInfo *)0x0);
              fVar11 = (this->fields)._focusPointOffset;
              uVar24 = pVVar21->x;
              uVar25 = pVVar21->y;
              fStack_26 = fVar10 - fVar11 * pVVar21->z;
              uStack_23 = CONCAT44(uStack_23._4_4_ - fVar11 * (float)uVar25,
                                   (float)uStack_23 - fVar11 * (float)uVar24);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar19 = (pTVar13->fields)._._.m_CachedPtr;
              if (pvVar19 != (void *)0x0) {
                pcVar14 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                  uVar20 = func_?(&UNK_?);
                  FUN_?(uVar20,0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pcRam_? = pcVar14;
                (*pcRam_?)(pvVar19,&uStack_23);
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar3 = (IEnumerator *)
                  FUN_?(TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134);
        bVar8 = iRam_? != 0;
        *(undefined4 *)&pIVar3[1].klass = 0;
        pIVar3[2].klass = (IEnumerator__Class *)this;
        if (bVar8) {
          uVar4 = (uint)((ulonglong)(pIVar3 + 2) >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        fVar10 = targetRotation->y;
        fVar11 = targetRotation->z;
        fVar12 = targetRotation->w;
        *(float *)&pIVar3[2].monitor = targetRotation->x;
        *(float *)((longlong)&pIVar3[2].monitor + 4) = fVar10;
        *(float *)&pIVar3[3].klass = fVar11;
        *(float *)((longlong)&pIVar3[3].klass + 4) = fVar12;
        (this->fields)._genricCamTransformCrtn = pIVar3;
        func_?(&(this->fields)._genricCamTransformCrtn);
      }
      if (pIVar3 == (IEnumerator *)0x0) {
        auStack_22._8_8_ = &UNK_?;
        uVar20 = func_?(&TypeInfo__System__NullReferenceException);
        auStack_22._8_8_ = &UNK_?;
        this_00 = (NullReferenceException *)func_?(uVar20);
        auStack_22._8_8_ = &UNK_?;
        pSVar27 = (String *)func_?(&StringLiteral_routine_is_null);
        auStack_22._8_8_ = &UNK_?;
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_00,pSVar27,(MethodInfo *)0x0);
        auStack_22._8_8_ = &UNK_?;
        uVar20 = func_?(&
                                     MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                    );
        auStack_22._8_8_ = &UNK_?;
        FUN_?(this_00,uVar20);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      auStack_22._8_8_ = &UNK_?;
      bVar28 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
               MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
      if (bVar28 != 0) {
        if (cRam_? == '\0') {
          auStack_22._8_8_ = &UNK_?;
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this != (RTFocusCamera *)0x0) {
          pvVar19 = (this->fields)._._._._._.m_CachedPtr;
          if (pvVar19 == (void *)0x0) {
            auStack_22._8_8_ = &UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcVar14 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            auStack_22._8_8_ = &UNK_?;
            pcVar14 = (code *)FUN_?(&UNK_?);
            if (pcVar14 == (code *)0x0) {
              auStack_22._8_8_ = &UNK_?;
              uVar20 = func_?(&UNK_?);
              auStack_22._8_8_ = &UNK_?;
              FUN_?(uVar20,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          pcRam_? = pcVar14;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar19,pIVar3);
          return;
        }
        auStack_22._8_8_ = &UNK_?;
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      auStack_22._8_8_ = &UNK_?;
      uVar20 = func_?(&TypeInfo__System__ArgumentException);
      auStack_22._8_8_ = &UNK_?;
      this_01 = (InvalidEnumArgumentException *)func_?(uVar20);
      auStack_22._8_8_ = &UNK_?;
      pSVar27 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      auStack_22._8_8_ = &UNK_?;
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_01,pSVar27,(MethodInfo *)0x0);
      auStack_22._8_8_ = &UNK_?;
      uVar20 = func_?(&
                                   MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                  );
      auStack_22._8_8_ = &UNK_?;
      FUN_?(this_01,uVar20);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetFieldOfView(Single) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_SetFieldOfView
               (RTFocusCamera *this,float fov,MethodInfo *method)

{
  this_00 = (this->fields)._targetCamera;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (this_00,fov,(MethodInfo *)0x0);
    (this->fields)._fieldOfView = fov;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetFocusPoint(Vector3) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_SetFocusPoint
               (RTFocusCamera *this,Vector3 *focusPoint,MethodInfo *method)

{
  obj = (this->fields)._targetTransform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  uVar6 = focusPoint->x;
  fStack_3 = focusPoint->z - fStack_3;
  uStack_2 = CONCAT44(focusPoint->y - uStack_2._4_4_,(float)uVar6 - (float)uStack_2);
  fVar7 = (float)FUN_?(&uStack_2);
  (this->fields)._focusPointOffset = fVar7;
  return;
}


/* Void SetObjectVisibilityDirty() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_SetObjectVisibilityDirty
               (RTFocusCamera *this,MethodInfo *method)

{
  (this->fields)._isObjectVisibilityDirty = 1;
  return;
}


/* Void SetTargetCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_SetTargetCamera
               (RTFocusCamera *this,Camera *camera,MethodInfo *method)

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
  if (camera != (Camera *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((camera->fields)._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      cVar3 = (*pcRam_?)();
      if ((cVar3 != '\0') && ((this->fields)._isDoingFocus == 0)) {
        pCVar4 = (this->fields)._prjSwitchTranstion;
        if (pCVar4 == (CameraPrjSwitchTransition *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (((pCVar4->fields)._transitionType == 0) && ((this->fields)._isDoingRotationSwitch == 0))
        {
          (this->fields)._targetCamera = camera;
          func_?(&(this->fields)._targetCamera);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)camera,(MethodInfo *)0x0);
          (this->fields)._targetTransform = pTVar5;
          func_?(&(this->fields)._targetTransform);
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                            (camera,(MethodInfo *)0x0);
          (this->fields)._fieldOfView = fVar6;
          pVVar7 = RTFocusCamera_GetFocusPoint(&VStack_8,this,(MethodInfo *)0x0);
          VStack_9.x = pVVar7->x;
          VStack_9.y = pVVar7->y;
          VStack_9.z = pVVar7->z;
          RTFocusCamera_SetFocusPoint(this,&VStack_9,(MethodInfo *)0x0);
          RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
          (this->fields)._isObjectVisibilityDirty = 1;
        }
      }
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Start
               (RTFocusCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    VStack_2.z = 0.0;
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
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
    (*pcRam_?)(pvVar3,&VStack_2);
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (aVStack_7,pTVar1,(MethodInfo *)0x0);
      fVar8 = (this->fields)._focusPointOffset;
      uVar9 = pVVar6->x;
      uVar10 = pVVar6->y;
      VStack_2.z = fVar8 * pVVar6->z + VStack_2.z;
      fVar11 = fVar8 * (float)uVar10 + VStack_2.y;
      VStack_2.x = fVar8 * (float)uVar9 + VStack_2.x;
      (this->fields)._lastFocusPoint.x = VStack_2.x;
      (this->fields)._lastFocusPoint.y = fVar11;
      (this->fields)._lastFocusPoint.z = VStack_2.z;
      VStack_2.y = fVar11;
      RTFocusCamera_SetFocusPoint(this,&VStack_2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__CameraEx);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      camera = (this->fields)._targetCamera;
      fVar8 = (this->fields)._focusPointOffset;
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar11 = CameraEx::CameraEx_GetFrustumHeightFromDistance(camera,fVar8,(MethodInfo *)0x0);
      fVar8 = fVar11 * _UNK_?;
      if (fVar11 * _UNK_? <= _UNK_?) {
        fVar8 = _UNK_?;
      }
      if (camera == (Camera *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                      ,CONCAT44(extraout_XMM0_Db,fVar8),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (camera == (Camera *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar3 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
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
      (*pcRam_?)(pvVar3,CONCAT44(extraout_XMM0_Db,fVar8));
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StopCamTransform() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_StopCamTransform
               (RTFocusCamera *this,MethodInfo *method)

{
  if ((this->fields)._genricCamTransformCrtn != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields)._genricCamTransformCrtn,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._genricCamTransformCrtn = (IEnumerator *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._genricCamTransformCrtn >> 0xc);
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
  }
  return;
}


/* Void StopFocus() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_StopFocus
               (RTFocusCamera *this,MethodInfo *method)

{
  if ((this->fields)._focusCrtn != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields)._focusCrtn,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._focusCrtn = (IEnumerator *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._focusCrtn >> 0xc);
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
  }
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Update_SystemCall
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__YesNoAnswer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._settings;
  if (pCVar1 == (CameraSettings *)0x0) goto code_?;
  if (((pCVar1->fields)._canProcessInput != 0) && ((this->fields)._isDoingFocus == 0)) {
    pCVar2 = (this->fields)._prjSwitchTranstion;
    if (pCVar2 == (CameraPrjSwitchTransition *)0x0) goto code_?;
    if (((pCVar2->fields)._transitionType == 0) && ((this->fields)._isDoingRotationSwitch == 0)) {
      if ((this->fields).CanProcessInput != (CameraCanProcessInputHandler *)0x0) {
        lVar3 = FUN_?(TypeInfo__RTG__YesNoAnswer);
        pCVar4 = (this->fields).CanProcessInput;
        if (pCVar4 == (CameraCanProcessInputHandler *)0x0) goto code_?;
        (*(pCVar4->fields)._._.invoke_impl)((pCVar4->fields)._._.method_code,lVar3);
        if (lVar3 == 0) goto code_?;
        if (*(char *)(lVar3 + 0x10) == '\0') {
          bVar5 = false;
        }
        else {
          bVar5 = *(char *)(lVar3 + 0x11) == '\0';
        }
        if (!bVar5) goto code_?;
      }
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar6 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                         (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if (pOVar6 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__RTG__IInputDevice);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar6[2].klass == (Object__Class *)0x0) goto code_?;
      iVar7 = FUN_?(5);
      if (iVar7 == 0) {
        RTFocusCamera_HandleMouseAndKeyboardInput(this,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  pWVar8 = (this->fields)._worldTransformSnapshot;
  if (pWVar8 != (WorldTransformSnapshot *)0x0) {
    bVar9 = WorldTransformSnapshot::WorldTransformSnapshot_SameAs
                      (pWVar8,(this->fields)._targetTransform,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      pWVar8 = (this->fields)._worldTransformSnapshot;
      (this->fields)._isObjectVisibilityDirty = 1;
      if (pWVar8 == (WorldTransformSnapshot *)0x0) goto code_?;
      WorldTransformSnapshot::WorldTransformSnapshot_Snaphot
                (pWVar8,(this->fields)._targetTransform,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Zoom(Single) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Zoom
               (RTFocusCamera *this,float zoomAmount,MethodInfo *method)

{
  pVVar1 = RTFocusCamera_GetFocusPoint(&VStack_2,this,(MethodInfo *)0x0);
  pTVar3 = (this->fields)._targetTransform;
  uVar4._0_4_ = pVVar1->x;
  uVar4._4_4_ = pVVar1->y;
  fVar5 = pVVar1->z;
  VStack_6._0_8_ = uVar4;
  if (pTVar3 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_7 = 0;
    fStack_8 = 0.0;
    pvVar9 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar9,&uStack_7);
    this_00 = (this->fields)._targetTransform;
    if (this_00 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (aVStack_11,this_00,(MethodInfo *)0x0);
      uVar12 = pVVar1->x;
      uVar13 = pVVar1->y;
      VStack_2.z = pVVar1->z * zoomAmount + fStack_8;
      VStack_2.y = (float)uVar13 * zoomAmount + uStack_7._4_4_;
      VStack_2.x = (float)uVar12 * zoomAmount + (float)uStack_7;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      pCVar14 = (this->fields)._targetCamera;
      if (pCVar14 == (Camera *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pCVar14->fields)._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar14,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      cVar15 = (*pcRam_?)(pvVar9);
      if (cVar15 == '\0') goto code_?;
      pTVar3 = (this->fields)._targetTransform;
      if (pTVar3 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = 0;
        fStack_8 = 0.0;
        pvVar9 = (pTVar3->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9,&uStack_7);
        fVar16 = VStack_6.x;
        fVar17 = VStack_6.y;
        fVar18 = VStack_6.x - (float)uStack_7;
        fVar19 = VStack_6.y - uStack_7._4_4_;
        fVar20 = fVar5 - fStack_8;
        pTVar3 = (this->fields)._targetTransform;
        if (pTVar3 != (Transform *)0x0) {
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              (aVStack_11,pTVar3,(MethodInfo *)0x0);
          VStack_6.x = pVVar1->x;
          VStack_6.y = pVVar1->y;
          if (VStack_6.x * fVar18 + VStack_6.y * fVar19 + pVVar1->z * fVar20 < _UNK_?) {
            pTVar3 = (this->fields)._targetTransform;
            if (pTVar3 == (Transform *)0x0) goto code_?;
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (aVStack_11,pTVar3,(MethodInfo *)0x0);
            uVar21 = pVVar1->x;
            uVar22 = pVVar1->y;
            VStack_6.z = fVar5 - pVVar1->z * _UNK_?;
            VStack_6.y = fVar17 - (float)uVar22 * _UNK_?;
            VStack_6.x = fVar16 - (float)uVar21 * _UNK_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar9 = (pTVar3->fields)._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)(pvVar9,&VStack_6);
          }
code_?:
          VStack_6._0_8_ = uVar4;
          VStack_6.z = fVar5;
          RTFocusCamera_SetFocusPoint(this,&VStack_6,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__RTG__CameraEx);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pCVar14 = (this->fields)._targetCamera;
          fVar5 = (this->fields)._focusPointOffset;
          if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar16 = CameraEx::CameraEx_GetFrustumHeightFromDistance(pCVar14,fVar5,(MethodInfo *)0x0);
          fVar5 = fVar16 * _UNK_?;
          if (fVar16 * _UNK_? <= _UNK_?) {
            fVar5 = _UNK_?;
          }
          if (pCVar14 == (Camera *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                          ,CONCAT44(extraout_XMM0_Db,fVar5),0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pCVar14 == (Camera *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pvVar9 = (pCVar14->fields)._._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar14,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if (pcRam_? == (code *)0x0) {
            pcVar10 = (code *)FUN_?(&UNK_?);
            if (pcVar10 == (code *)0x0) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar9,CONCAT44(extraout_XMM0_Db,fVar5));
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* RTFocusCamera() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera__ctor
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraFocusSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraHotkeys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraLookAroundSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraMoveSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraOrbitSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraPanSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraPrjSwitchTransition);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraRotationSwitchSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__CameraZoomSettings);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__MonoSingleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__RTG__RTFocusCamera__MoveDirection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__WorldTransformSnapshot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WorldTransformSnapshot *)FUN_?(TypeInfo__RTG__WorldTransformSnapshot);
  bVar2 = iRam_? != 0;
  (this->fields)._worldTransformSnapshot = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._worldTransformSnapshot >> 0xc);
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
  pCVar7 = (CameraPrjSwitchTransition *)FUN_?(TypeInfo__RTG__CameraPrjSwitchTransition);
  bVar2 = iRam_? != 0;
  (pCVar7->fields)._camFieldOfView = 60.0;
  (pCVar7->fields)._durationInSeconds = 0.23;
  (this->fields)._prjSwitchTranstion = pCVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._prjSwitchTranstion >> 0xc);
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
  (this->fields)._isObjectVisibilityDirty = 1;
  this_00 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._visibleObjects = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._visibleObjects >> 0xc);
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
  (this->fields)._focusPointOffset = 5.0;
  pIVar8 = TypeRef__RTG__RTFocusCamera__MoveDirection;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar9 = (longlong *)0x0;
  if (pIVar8 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar10 = FUN_?(pIVar8,1);
    plVar9 = (longlong *)FUN_?(lVar10 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar9 == (longlong *)0x0) {
    uVar11 = func_?(&TypeInfo__System__ArgumentNullException);
    this_12 = (ArgumentNullException *)func_?(uVar11);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_12,paramName,(MethodInfo *)0x0);
    uVar11 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_12,uVar11);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_01 = (Array *)(**(code **)(*plVar9 + 0x888))(plVar9);
  if (this_01 == (Array *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  mscorlib.dll::System::Array::Array_get_Length(this_01,(MethodInfo *)0x0);
  pBVar13 = (Boolean__Array *)FUN_?(TypeInfo__System__Boolean);
  bVar2 = iRam_? != 0;
  (this->fields)._moveDirFlags = pBVar13;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._moveDirFlags >> 0xc);
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
  this_02 = (CameraSettings *)FUN_?(TypeInfo__RTG__CameraSettings);
  (this_02->fields)._canProcessInput = 1;
  Settings::Settings__ctor((Settings *)this_02,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._settings = this_02;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._settings >> 0xc);
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
  this_03 = (CameraMoveSettings *)FUN_?(TypeInfo__RTG__CameraMoveSettings);
  (this_03->fields)._moveSpeed = 6.0;
  (this_03->fields)._accelerationRate = 15.0;
  Settings::Settings__ctor((Settings *)this_03,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._moveSettings = this_03;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._moveSettings >> 0xc);
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
  this_04 = (CameraPanSettings *)FUN_?(TypeInfo__RTG__CameraPanSettings);
  (this_04->fields)._standardPanSensitivity = 1.0;
  (this_04->fields)._smoothPanSensitivity = 0.7;
  (this_04->fields)._smoothValue = 4.0;
  (this_04->fields)._isPanningEnabled = 1;
  Settings::Settings__ctor((Settings *)this_04,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._panSettings = this_04;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._panSettings >> 0xc);
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
  this_05 = (CameraLookAroundSettings *)FUN_?(TypeInfo__RTG__CameraLookAroundSettings);
  (this_05->fields)._standardLookAroundSensitivity = 5.0;
  (this_05->fields)._smoothLookAroundSensitivity = 5.0;
  (this_05->fields).smoothValue = 4.0;
  (this_05->fields)._isLookAroundEnabled = 1;
  Settings::Settings__ctor((Settings *)this_05,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._lookAroundSettings = this_05;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._lookAroundSettings >> 0xc);
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
  this_06 = (CameraOrbitSettings *)FUN_?(TypeInfo__RTG__CameraOrbitSettings);
  (this_06->fields)._standardOrbitSensitivity = 5.0;
  (this_06->fields)._smoothOrbitSensitivity = 5.0;
  (this_06->fields)._smoothValue = 8.0;
  (this_06->fields)._isOrbitEnabled = 1;
  Settings::Settings__ctor((Settings *)this_06,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._orbitSettings = this_06;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._orbitSettings >> 0xc);
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
  this_07 = (CameraZoomSettings *)FUN_?(TypeInfo__RTG__CameraZoomSettings);
  (this_07->fields)._orthoStandardZoomSensitivity = 10.0;
  (this_07->fields)._perspStandardZoomSensitivity = 10.0;
  (this_07->fields)._orthoSmoothZoomSensitivity = 5.0;
  (this_07->fields)._perspSmoothZoomSensitivity = 5.0;
  (this_07->fields)._orthoZoomSmoothValue = 5.0;
  (this_07->fields)._perspZoomSmoothValue = 5.0;
  (this_07->fields)._isZoomEnabled = 1;
  Settings::Settings__ctor((Settings *)this_07,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._zoomSettings = this_07;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._zoomSettings >> 0xc);
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
  this_08 = (CameraFocusSettings *)FUN_?(TypeInfo__RTG__CameraFocusSettings);
  (this_08->fields)._focusMode = 2;
  (this_08->fields)._constantSpeed = 10.0;
  (this_08->fields)._smoothTime = 1.5;
  (this_08->fields)._focusDistanceAdd = 1.2;
  Settings::Settings__ctor((Settings *)this_08,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._focusSettings = this_08;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._focusSettings >> 0xc);
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
  this_09 = (CameraRotationSwitchSettings *)
            FUN_?(TypeInfo__RTG__CameraRotationSwitchSettings);
  (this_09->fields)._switchMode = 1;
  (this_09->fields)._constantSwitchDurationInSeconds = 0.3;
  (this_09->fields)._smoothValue = 8.0;
  Settings::Settings__ctor((Settings *)this_09,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._rotationSwitchSettings = this_09;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._rotationSwitchSettings >> 0xc);
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
  this_10 = (CameraProjectionSwitchSettings *)
            FUN_?(TypeInfo__RTG__CameraProjectionSwitchSettings);
  (this_10->fields)._transitionDurationInSeconds = 0.23;
  Settings::Settings__ctor((Settings *)this_10,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._projectionSwitchSettings = this_10;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._projectionSwitchSettings >> 0xc);
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
  this_11 = (CameraHotkeys *)FUN_?(TypeInfo__RTG__CameraHotkeys);
  CameraHotkeys::CameraHotkeys__ctor(this_11,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._hotkeys = this_11;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._hotkeys >> 0xc);
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
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).field_0x1c == 0) {
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
  return;
}


/* Void add_CanProcessInput(CameraCanProcessInputHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_CanProcessInput
               (RTFocusCamera *this,CameraCanProcessInputHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraCanProcessInputHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).CanProcessInput;
  a = (this->fields).CanProcessInput;
  do {
    pCVar2 = (CameraCanProcessInputHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraCanProcessInputHandler *)0x0;
    if (pCVar2 != (CameraCanProcessInputHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraCanProcessInputHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraCanProcessInputHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Void add_CanUseScrollWheel(CameraCanUseScrollWheelHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_CanUseScrollWheel
               (RTFocusCamera *this,CameraCanUseScrollWheelHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraCanUseScrollWheelHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).CanUseScrollWheel;
  a = (this->fields).CanUseScrollWheel;
  do {
    pCVar2 = (CameraCanUseScrollWheelHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraCanUseScrollWheelHandler *)0x0;
    if (pCVar2 != (CameraCanUseScrollWheelHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraCanUseScrollWheelHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraCanUseScrollWheelHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Void add_PrjSwitchTransitionBegin(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_PrjSwitchTransitionBegin
               (RTFocusCamera *this,CameraProjectionSwitchBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).PrjSwitchTransitionBegin;
  a = (this->fields).PrjSwitchTransitionBegin;
  do {
    pCVar2 = (CameraProjectionSwitchBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchBeginHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Void add_PrjSwitchTransitionEnd(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_PrjSwitchTransitionEnd
               (RTFocusCamera *this,CameraProjectionSwitchBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).PrjSwitchTransitionEnd;
  a = (this->fields).PrjSwitchTransitionEnd;
  do {
    pCVar2 = (CameraProjectionSwitchBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchBeginHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Void add_PrjSwitchTransitionUpdate(CameraProjectionSwitchUpdateHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_PrjSwitchTransitionUpdate
               (RTFocusCamera *this,CameraProjectionSwitchUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).PrjSwitchTransitionUpdate;
  a = (this->fields).PrjSwitchTransitionUpdate;
  do {
    pCVar2 = (CameraProjectionSwitchUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchUpdateHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchUpdateHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchUpdateHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Boolean get_IsDoingProjectionSwitch() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsDoingProjectionSwitch
               (RTFocusCamera *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._prjSwitchTranstion;
  if (pCVar1 != (CameraPrjSwitchTransition *)0x0) {
    return (pCVar1->fields)._transitionType != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsMovingBackwards() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingBackwards
               (RTFocusCamera *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._moveDirFlags;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (5 < (uint)pBVar1->max_length) {
    return pBVar1->vector[5] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsMovingDown() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingDown
               (RTFocusCamera *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._moveDirFlags;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (3 < (uint)pBVar1->max_length) {
    return pBVar1->vector[3] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsMovingForward() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingForward
               (RTFocusCamera *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._moveDirFlags;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (4 < (uint)pBVar1->max_length) {
    return pBVar1->vector[4] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsMovingLeft() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingLeft
               (RTFocusCamera *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._moveDirFlags;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((int)pBVar1->max_length != 0) {
    return pBVar1->vector[0] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsMovingRight() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingRight
               (RTFocusCamera *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._moveDirFlags;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (1 < (uint)pBVar1->max_length) {
    return pBVar1->vector[1] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsMovingUp() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingUp
               (RTFocusCamera *this,MethodInfo *method)

{
  pBVar1 = (this->fields)._moveDirFlags;
  if (pBVar1 == (Boolean__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (2 < (uint)pBVar1->max_length) {
    return pBVar1->vector[2] != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_Look
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Single get_PrjSwitchDurationInSeconds() */

float Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_PrjSwitchDurationInSeconds
                (RTFocusCamera *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._projectionSwitchSettings;
  if (pCVar1 != (CameraProjectionSwitchSettings *)0x0) {
    return (pCVar1->fields)._transitionDurationInSeconds;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_PrjSwitchProgress() */

float Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress
                (RTFocusCamera *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._prjSwitchTranstion;
  if (pCVar1 != (CameraPrjSwitchTransition *)0x0) {
    return (pCVar1->fields)._progress;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* CameraPrjSwitchTransition+Type get_PrjSwitchTransitionType() */

CameraPrjSwitchTransition_Type__Enum
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_PrjSwitchTransitionType
          (RTFocusCamera *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._prjSwitchTranstion;
  if (pCVar1 != (CameraPrjSwitchTransition *)0x0) {
    return (pCVar1->fields)._transitionType;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  CVar3 = (*pcVar2)();
  return CVar3;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_Right
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_Up
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_WorldPosition() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_WorldPosition
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  obj = (this->fields)._targetTransform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}


/* Quaternion get_WorldRotation() */

Quaternion *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_WorldRotation
          (Quaternion *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  obj = (this->fields)._targetTransform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
}


/* Void remove_CanProcessInput(CameraCanProcessInputHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_CanProcessInput
               (RTFocusCamera *this,CameraCanProcessInputHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraCanProcessInputHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).CanProcessInput;
  source = (this->fields).CanProcessInput;
  do {
    pCVar2 = (CameraCanProcessInputHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraCanProcessInputHandler *)0x0;
    if (pCVar2 != (CameraCanProcessInputHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraCanProcessInputHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraCanProcessInputHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void remove_CanUseScrollWheel(CameraCanUseScrollWheelHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_CanUseScrollWheel
               (RTFocusCamera *this,CameraCanUseScrollWheelHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraCanUseScrollWheelHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).CanUseScrollWheel;
  source = (this->fields).CanUseScrollWheel;
  do {
    pCVar2 = (CameraCanUseScrollWheelHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraCanUseScrollWheelHandler *)0x0;
    if (pCVar2 != (CameraCanUseScrollWheelHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraCanUseScrollWheelHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraCanUseScrollWheelHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void remove_PrjSwitchTransitionBegin(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_PrjSwitchTransitionBegin
               (RTFocusCamera *this,CameraProjectionSwitchBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).PrjSwitchTransitionBegin;
  source = (this->fields).PrjSwitchTransitionBegin;
  do {
    pCVar2 = (CameraProjectionSwitchBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchBeginHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void remove_PrjSwitchTransitionEnd(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_PrjSwitchTransitionEnd
               (RTFocusCamera *this,CameraProjectionSwitchBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).PrjSwitchTransitionEnd;
  source = (this->fields).PrjSwitchTransitionEnd;
  do {
    pCVar2 = (CameraProjectionSwitchBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchBeginHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void remove_PrjSwitchTransitionUpdate(CameraProjectionSwitchUpdateHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_PrjSwitchTransitionUpdate
               (RTFocusCamera *this,CameraProjectionSwitchUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).PrjSwitchTransitionUpdate;
  source = (this->fields).PrjSwitchTransitionUpdate;
  do {
    pCVar2 = (CameraProjectionSwitchUpdateHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (CameraProjectionSwitchUpdateHandler *)0x0;
    if (pCVar2 != (CameraProjectionSwitchUpdateHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (CameraProjectionSwitchUpdateHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
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
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void set_WorldPosition(Vector3) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_set_WorldPosition
               (RTFocusCamera *this,Vector3 *value,MethodInfo *method)

{
  pVVar1 = RTFocusCamera_GetFocusPoint(&VStack_2,this,(MethodInfo *)0x0);
  obj = (this->fields)._targetTransform;
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_6._0_4_ = value->x;
  uStack_6._4_4_ = value->y;
  fStack_7 = value->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(pvVar8,&uStack_6);
  VStack_2._0_8_ = uVar3;
  VStack_2.z = fVar4;
  RTFocusCamera_SetFocusPoint(this,&VStack_2,(MethodInfo *)0x0);
  return;
}


/* Void set_WorldRotation(Quaternion) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_set_WorldRotation
               (RTFocusCamera *this,Quaternion *value,MethodInfo *method)

{
  obj = (this->fields)._targetTransform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fStack_2 = value->x;
  fStack_3 = value->y;
  fStack_4 = value->z;
  fStack_5 = value->w;
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
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
  (*pcRam_?)(pvVar6,&fStack_2);
  return;
}

