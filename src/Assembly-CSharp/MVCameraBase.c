
/* Void SimulateImpact(Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_SimulateImpact
               (MVCameraBase *this,Vector3 *impactDirection,AnimationCurve *impactCurve,
               float forceMultiplier,Space__Enum impactSpace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CameraImpact);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (CameraImpact *)FUN_?(TypeInfo__CameraImpact);
  fVar2 = impactDirection->z;
  fVar3 = impactDirection->y;
  (pCVar1->fields).impactDirection.x = impactDirection->x;
  (pCVar1->fields).impactDirection.y = fVar3;
  (pCVar1->fields).impactDirection.z = fVar2;
  iVar4 = iRam_?;
  (pCVar1->fields).impactCurve = impactCurve;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(pCVar1->fields).impactCurve >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar4 = iRam_?;
    } while (!bVar9);
  }
  (pCVar1->fields).impactSpace = impactSpace;
  (pCVar1->fields).forceMultiplier = forceMultiplier;
  (this->fields).cameraImpact = pCVar1;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).cameraImpact >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}


/* Void SimulateImpact(Transform) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_SimulateImpact_1
               (MVCameraBase *this,Transform *targetTransform,MethodInfo *method)

{
  pCVar1 = (this->fields).cameraImpact;
  if (pCVar1 != (CameraImpact *)0x0) {
    aVStack_2[0].x = (pCVar1->fields).impactDirection.x;
    aVStack_2[0].y = (pCVar1->fields).impactDirection.y;
    aVStack_2[0].z = (pCVar1->fields).impactDirection.z;
    MVCameraBase_SimulateImpact_2
              (this,targetTransform,aVStack_2,(pCVar1->fields).impactCurve,
               (pCVar1->fields).forceMultiplier,(pCVar1->fields).impactSpace,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SimulateImpact(Transform, Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_SimulateImpact_2
               (MVCameraBase *this,Transform *targetTransform,Vector3 *impactDirection,
               AnimationCurve *impactCurve,float forceMultiplier,Space__Enum impactSpace,
               MethodInfo *method)

{
  pCVar1 = (this->fields).cameraImpact;
  if ((pCVar1 != (CameraImpact *)0x0) && (impactCurve != (AnimationCurve *)0x0)) {
    pvVar2 = (impactCurve->fields).m_Ptr;
    if (pvVar2 == (void *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)impactCurve,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar4 = (pCVar1->fields).time;
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
    fVar4 = (float)(*pcRam_?)(pvVar2,fVar4);
    fVar4 = fVar4 * forceMultiplier;
    if (impactSpace == Space__Enum_World) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_7.x = (pVVar6->upVector).x;
      VStack_7.y = (pVVar6->upVector).y;
      fVar8 = (pVVar6->upVector).z;
    }
    else {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                          (aVStack_10,this_00,(MethodInfo *)0x0);
      VStack_7.x = pVVar9->x;
      VStack_7.y = pVVar9->y;
      fVar8 = pVVar9->z;
    }
    uVar11 = impactDirection->x;
    uVar12 = impactDirection->y;
    fVar13 = (float)((uint)impactDirection->z ^ _UNK_?);
    fVar14 = fVar8 * (float)(uVar12 ^ _UNK_?) - VStack_7.y * fVar13;
    fVar13 = VStack_7.x * fVar13 - fVar8 * (float)(uVar11 ^ _UNK_?);
    fVar8 = VStack_7.y * (float)(uVar11 ^ _UNK_?) -
             VStack_7.x * (float)(uVar12 ^ _UNK_?);
    aVStack_10[0].x = impactDirection->x;
    aVStack_10[0].y = impactDirection->y;
    if (targetTransform != (Transform *)0x0) {
      VStack_7.y = aVStack_10[0].y * fVar4 * _UNK_?;
      VStack_7.x = aVStack_10[0].x * fVar4 * _UNK_?;
      VStack_7.z = impactDirection->z * fVar4 * _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                (targetTransform,&VStack_7,impactSpace,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
      aVStack_10[0].x = (pVVar6->zeroVector).x;
      aVStack_10[0].y = (pVVar6->zeroVector).y;
      fVar15 = fVar14 - aVStack_10[0].x;
      fVar16 = fVar13 - aVStack_10[0].y;
      fVar17 = fVar8 - (pVVar6->zeroVector).z;
      if (_UNK_? <= fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17) {
        VStack_7.y = fVar13;
        VStack_7.x = fVar14;
        VStack_7.z = fVar8;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                  (targetTransform,&VStack_7,fVar4 * _UNK_?,impactSpace,(MethodInfo *)0x0)
        ;
      }
      pCVar1 = (this->fields).cameraImpact;
      if (pCVar1 != (CameraImpact *)0x0) {
        fVar4 = (pCVar1->fields).time;
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
        fVar8 = (float)(*pcRam_?)();
        (pCVar1->fields).time = fVar8 + fVar4;
        pCVar1 = (this->fields).cameraImpact;
        if (pCVar1 != (CameraImpact *)0x0) {
          fVar4 = (pCVar1->fields).time;
          pKVar18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                              (impactCurve,(MethodInfo *)0x0);
          pvVar2 = (impactCurve->fields).m_Ptr;
          if (pvVar2 == (void *)0x0) goto code_?;
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
          iVar19 = (*pcRam_?)(pvVar2);
          if (pKVar18 != (Keyframe__Array *)0x0) {
            if ((uint)pKVar18->max_length <= iVar19 - 1U) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((pKVar18->vector[(longlong)iVar19 + -1].m_Time <= fVar4 &&
                 fVar4 != pKVar18->vector[(longlong)iVar19 + -1].m_Time) &&
               (bVar20 = iRam_? != 0,
               (this->fields).cameraImpact = (CameraImpact *)0x0, bVar20)) {
              uVar21 = (uint)((ulonglong)&(this->fields).cameraImpact >> 0xc);
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
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_UpdateCamera
               (MVCameraBase *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_2.x = 0.0;
    QStack_2.y = 0.0;
    QStack_2.z = 0.0;
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
    (*pcRam_?)(pvVar3,&QStack_2);
    if (targetTransform != (ProtectedTransform *)0x0) {
      QStack_6.x = QStack_2.x;
      QStack_6.y = QStack_2.y;
      QStack_6.z = QStack_2.z;
      ProtectedTransform::ProtectedTransform_set_position
                (targetTransform,(Vector3 *)&QStack_6,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_6.x = 0.0;
        QStack_6.y = 0.0;
        QStack_6.z = 0.0;
        QStack_6.w = 0.0;
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
        (*pcRam_?)(pvVar3,&QStack_6);
        ProtectedTransform::ProtectedTransform_set_rotation
                  (targetTransform,&QStack_6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void camController_onIgnoreInputTypes(Object, OnIgnoreInputTypesArgs) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_camController_onIgnoreInputTypes
               (MVCameraBase *this,Object *sender,OnIgnoreInputTypesArgs *e,MethodInfo *method)

{
  if (e != (OnIgnoreInputTypesArgs *)0x0) {
    (this->fields).ignoreInputTypes = (e->fields).inputTypes;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Single get_FieldOfView() */

float Assembly-CSharp.dll::MVCameraBase::MVCameraBase_get_FieldOfView
                (MVCameraBase *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Boolean get_InputActive() */

bool Assembly-CSharp.dll::MVCameraBase::MVCameraBase_get_InputActive
               (MVCameraBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    cVar1 = FUN_?(7,TypeInfo__IPlayModeUI);
    if (cVar1 != '\0') {
      return 0;
    }
    return ~(byte)(this->fields).ignoreInputTypes & 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

