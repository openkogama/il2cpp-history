
/* Single DegreesBetween(Single, Single) */

float Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_DegreesBetween
                (AndroidFirstPersonCamera *this,float eulerA,float eulerB,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = (float)func_?(eulerA / _UNK_?);
  fVar2 = eulerA - fVar2 * fVar1;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  fVar3 = (float)func_?(eulerB / fVar1);
  fVar3 = eulerB - fVar3 * fVar1;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (fVar1 < fVar3) {
    fVar3 = fVar1;
  }
  fVar2 = (float)((uint)(fVar2 - fVar3) & _UNK_?);
  if (_UNK_? < fVar2) {
    fVar2 = fVar1 - fVar2;
  }
  return fVar2;
}


/* Single EulerClamp(Single, Single, Single) */

float Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_EulerClamp
                (AndroidFirstPersonCamera *this,float a,float min,float max,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = (float)func_?(a / _UNK_?);
  fVar2 = a - fVar2 * fVar1;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  fVar3 = (float)func_?(min / fVar1);
  fVar3 = min - fVar3 * fVar1;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (fVar1 < fVar3) {
    fVar3 = fVar1;
  }
  fVar4 = (float)func_?(max / fVar1);
  fVar4 = max - fVar4 * fVar1;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (fVar1 < fVar4) {
    fVar4 = fVar1;
  }
  if ((fVar2 < fVar3) && (fVar4 < fVar2)) {
    fVar1 = AndroidFirstPersonCamera_DegreesBetween(this,fVar2,fVar3,(MethodInfo *)0x0);
    fVar5 = AndroidFirstPersonCamera_DegreesBetween(this,fVar2,fVar4,(MethodInfo *)0x0);
    fVar2 = fVar4;
    if (fVar1 < fVar5) {
      fVar2 = fVar3;
    }
  }
  return fVar2;
}


/* Void UpdateCameraRotation() */

void Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_UpdateCameraRotation
               (AndroidFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    cVar1 = FUN_?(7);
    if (cVar1 != '\0') {
      return;
    }
    if (((this->fields)._._.ignoreInputTypes & 1) != 0) {
      return;
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar3 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    this_00 = (this->fields).inputMovementPrecisionModifier;
    if (this_00 != (InputMovementPrecisionModifier *)0x0) {
      QStack_4.y = fVar3;
      QStack_4.x = fVar2;
      QStack_4.z = 0.0;
      pVVar5 = InputMovementPrecisionModifier::InputMovementPrecisionModifier_GetPrecisionInput
                         ((Vector3 *)aQStack_6,this_00,(Vector3 *)&QStack_4,(MethodInfo *)0x0);
      QStack_4.x = pVVar5->x;
      QStack_4.y = pVVar5->y;
      QStack_4.z = pVVar5->z;
      this_01 = (this->fields).axisBias;
      if (this_01 != (AxisBias *)0x0) {
        QStack_4.z = 0.0;
        pVVar5 = AxisBias::AxisBias_GetBiasedVector
                           ((Vector3 *)aQStack_6,this_01,(Vector3 *)&QStack_4,(MethodInfo *)0x0);
        fVar7 = _UNK_?;
        QStack_4.x = pVVar5->x;
        QStack_4.y = pVVar5->y;
        QStack_4.z = pVVar5->z;
        (this->fields)._.targetRotation.x =
             QStack_4.x * (this->fields)._.pitchSensitivity + (this->fields)._.targetRotation.x;
        (this->fields)._.targetRotation.y =
             QStack_4.y * (this->fields)._.yawSensitivity + (this->fields)._.targetRotation.y;
        fVar2 = (this->fields)._.targetRotation.x;
        fVar3 = (this->fields)._.maxLookAngleUpward;
        fVar8 = (float)((uint)(this->fields)._.maxLookAngleDownward ^ _UNK_?);
        fVar9 = (float)func_?(fVar2 / fVar7);
        fVar2 = fVar2 - fVar9 * fVar7;
        if (fVar2 < 0.0) {
          fVar2 = 0.0;
        }
        else if (fVar7 < fVar2) {
          fVar2 = fVar7;
        }
        fVar9 = (float)func_?(fVar8 / fVar7);
        fVar8 = fVar8 - fVar9 * fVar7;
        if (fVar8 < 0.0) {
          fVar8 = 0.0;
        }
        else if (fVar7 < fVar8) {
          fVar8 = fVar7;
        }
        fVar9 = (float)func_?(fVar3 / fVar7);
        fVar3 = fVar3 - fVar9 * fVar7;
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (fVar7 < fVar3) {
          fVar3 = fVar7;
        }
        if ((fVar2 < fVar8) && (fVar3 < fVar2)) {
          fVar7 = AndroidFirstPersonCamera_DegreesBetween(this,fVar2,fVar8,(MethodInfo *)0x0);
          fVar9 = AndroidFirstPersonCamera_DegreesBetween(this,fVar2,fVar3,(MethodInfo *)0x0);
          fVar2 = fVar8;
          if (fVar9 <= fVar7) {
            fVar2 = fVar3;
          }
        }
        (this->fields)._.targetRotation.x = fVar2;
        pTVar10 = (this->fields)._.smoothRotation;
        fVar3 = (this->fields)._.targetRotation.y;
        if (pTVar10 != (TargetRotation *)0x0) {
          (pTVar10->fields).eulerAngles.x = fVar2;
          (pTVar10->fields).eulerAngles.y = fVar3;
          (pTVar10->fields).eulerAngles.z = 0.0;
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
          pTVar10 = (this->fields)._.smoothRotation;
          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (obj_00 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            aQStack_6[0].x = 0.0;
            aQStack_6[0].y = 0.0;
            aQStack_6[0].z = 0.0;
            aQStack_6[0].w = 0.0;
            pvVar11 = (obj_00->fields)._._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar11,aQStack_6);
            if (pTVar10 != (TargetRotation *)0x0) {
              pQVar14 = TargetRotation::TargetRotation_GetLerpRotation
                                 (&QStack_4,pTVar10,aQStack_6,(MethodInfo *)0x0);
              if (obj == (Transform *)0x0) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              aQStack_6[0].x = pQVar14->x;
              aQStack_6[0].y = pQVar14->y;
              aQStack_6[0].z = pQVar14->z;
              aQStack_6[0].w = pQVar14->w;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar11 = (obj->fields)._._.m_CachedPtr;
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
                (*pcRam_?)(pvVar11,aQStack_6);
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

