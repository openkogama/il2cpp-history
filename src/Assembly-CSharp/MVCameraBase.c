
/* Void SimulateImpact(Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_SimulateImpact
               (MVCameraBase *this,Vector3 impactDirection,AnimationCurve *impactCurve,
               float forceMultiplier,Space__Enum impactSpace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CameraImpact);
    cRam_? = '\x01';
  }
  this_00 = (CameraImpact *)func_?(TypeInfo__CameraImpact);
  CameraImpact::CameraImpact__ctor
            (this_00,impactDirection,impactCurve,forceMultiplier,impactSpace,(MethodInfo *)0x0);
  (this->fields).cameraImpact = this_00;
  func_?(&(this->fields).cameraImpact,this_00);
  return;
}


/* Void SimulateImpact(Transform) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_SimulateImpact_1
               (MVCameraBase *this,Transform *targetTransform,MethodInfo *method)

{
  pCVar1 = (this->fields).cameraImpact;
  if (pCVar1 != (CameraImpact *)0x0) {
    MVCameraBase_SimulateImpact_2
              (this,targetTransform,(pCVar1->fields).impactDirection,(pCVar1->fields).impactCurve,
               (pCVar1->fields).forceMultiplier,(pCVar1->fields).impactSpace,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SimulateImpact(Transform, Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_SimulateImpact_2
               (MVCameraBase *this,Transform *targetTransform,Vector3 impactDirection,
               AnimationCurve *impactCurve,float forceMultiplier,Space__Enum impactSpace,
               MethodInfo *method)

{
  pMVar1 = this;
  pCVar2 = (this->fields).cameraImpact;
  if ((pCVar2 != (CameraImpact *)0x0) && (impactCurve != (AnimationCurve *)0x0)) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (impactCurve,(pCVar2->fields).time,(MethodInfo *)0x0);
    fVar3 = fVar3 * forceMultiplier;
    if (impactSpace == Space__Enum_World) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar5._0_4_ = (pVVar4->upVector).x;
      uVar5._4_4_ = (pVVar4->upVector).y;
      fVar6 = (pVVar4->upVector).z;
    }
    else {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar7 == (Transform *)0x0) goto code_?;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         ((Vector3 *)&stack0xffffffdc,pTVar7,(MethodInfo *)0x0);
      uVar5._0_4_ = pVVar8->x;
      uVar5._4_4_ = pVVar8->y;
      fVar6 = pVVar8->z;
    }
    fVar9 = (float)((ulonglong)uVar5 >> 0x20);
    fVar10 = (float)((uint)impactDirection.y ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    fVar11 = (float)((uint)impactDirection.z ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    this = (MVCameraBase *)
           ((float)uVar5 * fVar11 -
           fVar6 * (float)((uint)impactDirection.x ^
                           __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field)
           );
    fVar12 = fVar9 * (float)((uint)impactDirection.x ^
                             __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                             ) - (float)uVar5 * fVar10;
    fVar13 = impactDirection.x * fVar3 * _UNK_?;
    fVar14 = impactDirection.y * fVar3 * _UNK_?;
    if (targetTransform != (Transform *)0x0) {
      translation.y = fVar14;
      translation.x = fVar13;
      translation.z = impactDirection.z * fVar3 * _UNK_?;
      pTVar7 = targetTransform;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                (targetTransform,translation,impactSpace,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        targetTransform = (Transform *)&TypeInfo__UnityEngine__Vector3;
        this = (MVCameraBase *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar15 = (pVVar4->zeroVector).x;
      uVar16 = (pVVar4->zeroVector).y;
      fVar6 = (fVar6 * fVar10 - fVar9 * fVar11) - (float)uVar15;
      fVar12 = fVar12 - (pVVar4->zeroVector).z;
      if (_UNK_? <=
          ((float)this - (float)uVar16) * ((float)this - (float)uVar16) + fVar6 * fVar6 +
          fVar12 * fVar12) {
        axis.y = fVar13;
        axis.x = (float)pTVar7;
        axis.z = fVar14;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                  (targetTransform,axis,fVar3 * _UNK_?,impactSpace,(MethodInfo *)0x0);
      }
      pCVar2 = (pMVar1->fields).cameraImpact;
      if (pCVar2 != (CameraImpact *)0x0) {
        fVar3 = (pCVar2->fields).time;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pCVar2->fields).time = fVar6 + fVar3;
        pCVar2 = (pMVar1->fields).cameraImpact;
        if (pCVar2 != (CameraImpact *)0x0) {
          fVar3 = (pCVar2->fields).time;
          pKVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                             (impactCurve,(MethodInfo *)0x0);
          iVar18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                   AnimationCurve_get_length(impactCurve,(MethodInfo *)0x0);
          if (pKVar17 != (Keyframe__Array *)0x0) {
            if (iVar18 - 1U < pKVar17->max_length) {
              fVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                       Single,System::Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                                 ((KeyValuePair_2_System_Single_System_Single_ *)
                                  (pKVar17->vector + iVar18 + -1),(MethodInfo *)0x0);
              if (fVar6 < fVar3) {
                (pMVar1->fields).cameraImpact = (CameraImpact *)0x0;
                func_?();
              }
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    if (targetTransform != (ProtectedTransform *)0x0) {
      ProtectedTransform::ProtectedTransform_set_position(targetTransform,*pVVar2,(MethodInfo *)0x0)
      ;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
        fStack4 = pQVar3->z;
        fStack5 = pQVar3->w;
        ProtectedTransform::ProtectedTransform_set_rotation
                  (targetTransform,*pQVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void camController_onIgnoreInputTypes(Object, OnIgnoreInputTypesArgs) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_camController_onIgnoreInputTypes
               (MVCameraBase *this,Object *sender,OnIgnoreInputTypesArgs *e,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (e != (OnIgnoreInputTypesArgs *)0x0) {
    (this->fields).ignoreInputTypes = (e->fields).inputTypes;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    pIStack_1 = (IPlayModeUI *)&TypeInfo__IPlayModeUI;
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    pIStack_1 = (IPlayModeUI *)&TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pIStack_1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIStack_1 != (IPlayModeUI *)0x0) {
    pIStack_2 = TypeInfo__IPlayModeUI;
    uStack_3 = 3;
    cVar4 = func_?();
    if (cVar4 != '\0') {
      return 0;
    }
    return ~(byte)(this->fields).ignoreInputTypes & 1;
  }
  pIStack_1 = (IPlayModeUI *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

