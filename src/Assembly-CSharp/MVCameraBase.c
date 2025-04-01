
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
  ppCVar1 = &(this->fields).cameraImpact;
  *ppCVar1 = this_00;
  func_?(ppCVar1,this_00);
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
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SimulateImpact(Transform, Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_SimulateImpact_2
               (MVCameraBase *this,Transform *targetTransform,Vector3 impactDirection,
               AnimationCurve *impactCurve,float forceMultiplier,Space__Enum impactSpace,
               MethodInfo *method)

{
  ppCVar1 = &(this->fields).cameraImpact;
  if ((*ppCVar1 != (CameraImpact *)0x0) && (impactCurve != (AnimationCurve *)0x0)) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (impactCurve,((*ppCVar1)->fields).time,(MethodInfo *)0x0);
    fVar2 = fVar2 * forceMultiplier;
    if (impactSpace == Space__Enum_World) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
      fVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
    }
    else {
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar5 == (Transform *)0x0) goto code_?;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
      uVar7 = pVVar6->x;
      fVar4 = pVVar6->z;
      fVar3 = (float)uVar7;
    }
    fVar8 = (float)((uint)impactDirection.x ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    fVar9 = (float)((uint)impactDirection.z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    fVar10 = impactDirection.x * fVar2 * _UNK_?;
    fVar11 = impactDirection.y * fVar2 * _UNK_?;
    if (targetTransform != (Transform *)0x0) {
      translation.y = fVar11;
      translation.x = fVar10;
      translation.z = impactDirection.z * fVar2 * _UNK_?;
      pTVar5 = targetTransform;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                (targetTransform,translation,impactSpace,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        targetTransform = (Transform *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar13 = (pVVar12->zeroVector).x;
      uVar14 = (pVVar12->zeroVector).y;
      fVar4 = (fVar3 * fVar9 - fVar4 * fVar8) - (float)uVar14;
      fVar3 = fVar11 - (pVVar12->zeroVector).z;
      if (_UNK_? <=
          fVar4 * fVar4 + ((float)pTVar5 - (float)uVar13) * ((float)pTVar5 - (float)uVar13) +
          fVar3 * fVar3) {
        axis.y = fVar10;
        axis.x = (float)pTVar5;
        axis.z = fVar11;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                  (targetTransform,axis,fVar2 * _UNK_?,impactSpace,(MethodInfo *)0x0);
      }
      pCVar15 = *ppCVar1;
      if (pCVar15 != (CameraImpact *)0x0) {
        fVar2 = (pCVar15->fields).time;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (pCVar15->fields).time = fVar3 + fVar2;
        if (*ppCVar1 != (CameraImpact *)0x0) {
          fVar2 = ((*ppCVar1)->fields).time;
          pKVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                             (impactCurve,(MethodInfo *)0x0);
          iVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                   AnimationCurve_get_length(impactCurve,(MethodInfo *)0x0);
          if (pKVar16 != (Keyframe__Array *)0x0) {
            if (iVar17 - 1U < pKVar16->max_length) {
              fVar3 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                      Single,System::Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                                ((KeyValuePair_2_System_Single_System_Single_ *)
                                 (pKVar16->vector + iVar17 + -1),(MethodInfo *)0x0);
              if (fVar3 < fVar2) {
                *ppCVar1 = (CameraImpact *)0x0;
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
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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

