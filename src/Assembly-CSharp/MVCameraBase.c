
/* Void SimulateImpact(Vector3, AnimationCurve, Single, Space) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_SimulateImpact
               (MVCameraBase *this,Vector3 impactDirection,AnimationCurve *impactCurve,
               float forceMultiplier,Space__Enum impactSpace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (CameraImpact *)func_?(TypeInfo__CameraImpact);
  CameraImpact::CameraImpact__ctor
            (this_00,impactDirection,impactCurve,forceMultiplier,impactSpace,(MethodInfo *)0x0);
  (this->fields).cameraImpact = this_00;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar2 = (this->fields).cameraImpact;
  if ((pCVar2 != (CameraImpact *)0x0) && (impactCurve != (AnimationCurve *)0x0)) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (impactCurve,(pCVar2->fields).time,(MethodInfo *)0x0);
    if (impactSpace == Space__Enum_World) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
      uVar5._0_4_ = pVVar4->x;
      uVar5._4_4_ = pVVar4->y;
      this = (MVCameraBase *)pVVar4->z;
    }
    else {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
      this = (MVCameraBase *)pVVar4->z;
      uVar5._0_4_ = pVVar4->x;
      uVar5._4_4_ = pVVar4->y;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                       ((Vector3 *)&stack0xffffffe8,impactDirection,(MethodInfo *)0x0);
    VVar6.z = (float)this;
    VVar6.x = (float)(int)uVar5;
    VVar6.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                       ((Vector3 *)&stack0xffffffe8,*pVVar4,VVar6,(MethodInfo *)0x0);
    axis = *pVVar4;
    VVar6 = *pVVar4;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe8,impactDirection,fVar3 * forceMultiplier,
                        (MethodInfo *)0x0);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe8,*pVVar4,4.0,(MethodInfo *)0x0);
    if (targetTransform != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                (targetTransform,*pVVar4,impactSpace,(MethodInfo *)0x0);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                        (VVar6,*pVVar4,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                  (targetTransform,axis,fVar3 * forceMultiplier * _UNK_?,impactSpace,
                   (MethodInfo *)0x0);
      }
      pCVar2 = (pMVar1->fields).cameraImpact;
      if (pCVar2 != (CameraImpact *)0x0) {
        fVar3 = (pCVar2->fields).time;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pCVar2->fields).time = fVar8 + fVar3;
        pCVar2 = (pMVar1->fields).cameraImpact;
        if (pCVar2 != (CameraImpact *)0x0) {
          fVar3 = (pCVar2->fields).time;
          pKVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                             (impactCurve,(MethodInfo *)0x0);
          iVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_length
                            (impactCurve,(MethodInfo *)0x0);
          if (pKVar9 != (Keyframe__Array *)0x0) {
            if (iVar10 - 1U < pKVar9->max_length) {
              fVar11 = (float10)func_?();
              if ((float)fVar11 < fVar3) {
                (pMVar1->fields).cameraImpact = (CameraImpact *)0x0;
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
  func_?(0);
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase_UpdateCamera
               (MVCameraBase *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    if (targetTransform != (ProtectedTransform *)0x0) {
      ProtectedTransform::ProtectedTransform_set_position(targetTransform,*pVVar2,(MethodInfo *)0x0)
      ;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
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


/* MVCameraBase() */

void Assembly-CSharp.dll::MVCameraBase::MVCameraBase__ctor(MVCameraBase *this,MethodInfo *method)

{
  (this->fields).cameraRadius = 0.3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    cVar2 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
    if (cVar2 != '\0') {
      return 0;
    }
    return ~(byte)(this->fields).ignoreInputTypes & 1;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

