
/* Quaternion ApplyYawOffset(Quaternion) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,Quaternion newYawRotation,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = &(this->fields).yawRotation;
  iVar2 = func_?(&QStack_3.y,pQVar1,0);
  uVar4 = _UNK_?;
  if ((_UNK_? < *(float *)(iVar2 + 4) || _UNK_? == *(float *)(iVar2 + 4)) &&
     (iVar2 = func_?(&QStack_3.y,pQVar1,0), uVar4 = _UNK_?,
     *(float *)(iVar2 + 4) <= _UNK_?)) {
    uVar4 = _UNK_?;
  }
  QStack_3.w = 0.0;
  auVar5._4_8_ = 0;
  auVar5._0_4_ = uVar4;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_3,(Vector3)(auVar5 << 0x20),(MethodInfo *)0x0);
  fVar6 = pQVar1->x;
  fVar7 = pQVar1->y;
  fVar8 = pQVar1->z;
  fVar9 = pQVar1->w;
  __return_storage_ptr__->x =
       (fVar6 * newYawRotation.w + fVar9 * newYawRotation.x + fVar8 * newYawRotation.y) -
       fVar7 * newYawRotation.z;
  __return_storage_ptr__->y =
       (fVar7 * newYawRotation.w + fVar9 * newYawRotation.y + fVar6 * newYawRotation.z) -
       fVar8 * newYawRotation.x;
  __return_storage_ptr__->z =
       (fVar8 * newYawRotation.w + fVar9 * newYawRotation.z + fVar7 * newYawRotation.x) -
       fVar6 * newYawRotation.y;
  __return_storage_ptr__->w =
       ((fVar9 * newYawRotation.w - fVar6 * newYawRotation.x) - fVar7 * newYawRotation.y) -
       fVar8 * newYawRotation.z;
  return __return_storage_ptr__;
}


/* Void HandleResult(AvatarLimbManagerLocal+PointingRotationCalculationResult) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_HandleResult
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,
               AvatarLimbManagerLocal_PointingRotationCalculationResult result,MethodInfo *method)

{
  pQVar1 = AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
                     (&QStack_2,this,result.YawRotation,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  (this->fields)._.shouldPoint = result.ShouldPoint;
  (this->fields).yawRotation.x = fVar3;
  (this->fields).yawRotation.y = fVar4;
  (this->fields).yawRotation.z = fVar5;
  (this->fields).yawRotation.w = fVar6;
  (this->fields).pitchRotation.x = result.PitchRotation.x;
  (this->fields).pitchRotation.y = result.PitchRotation.y;
  (this->fields).pitchRotation.z = result.PitchRotation.z;
  (this->fields).pitchRotation.w = result.PitchRotation.w;
  return;
}


/* Void StartPointing() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_StartPointing
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.prevLookDirection.x;
    fVar2 = (this->fields)._.prevLookDirection.y;
    (this->fields)._.elapsedPointingTime = (this->fields)._.pointingDuration;
    fVar3 = (this->fields)._.prevLookDirection.z;
    (this->fields)._.pointingDirection.x = fVar1;
    (this->fields)._.pointingDirection.y = fVar2;
    (this->fields)._.pointingDirection.z = fVar3;
    pAVar4 = (this->fields).OnIsPointingChange;
    if (pAVar4 != (Action_1_Boolean_ *)0x0) {
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,1,(pAVar4->fields)._._.method);
    }
  }
  return;
}


/* Void UpdateNetworkMessage(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_UpdateNetworkMessage
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,Quaternion rotation,
               MethodInfo *method)

{
  fVar1 = (this->fields).networkMessageCooldown;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  (this->fields).networkMessageCooldown = fVar1;
  if (fVar1 <= 0.0) {
    pAVar3 = (this->fields).OnUpdatePointingValue;
    if (pAVar3 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      if ((this->fields)._.shouldPoint == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
        rotation.x = (pQVar4->identityQuaternion).x;
        rotation.y = (pQVar4->identityQuaternion).y;
        rotation.z = (pQVar4->identityQuaternion).z;
        rotation.w = (pQVar4->identityQuaternion).w;
      }
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,rotation.x,rotation.y,rotation.z,rotation.w,
                 (pAVar3->fields)._._.method);
    }
    (this->fields).networkMessageCooldown = (this->fields)._.pointingDuration;
  }
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_UpdatePointing
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,Vector3 localLookDirection,
               MethodInfo *method)

{
  if (_UNK_? < (this->fields)._.elapsedPointingTime) {
    fVar1 = (this->fields).pitchRotation.x;
    fVar2 = (this->fields).pitchRotation.y;
    fVar3 = (this->fields).pitchRotation.z;
    fVar4 = (this->fields).pitchRotation.w;
    fVar5 = (this->fields).yawRotation.y;
    fVar6 = (this->fields).yawRotation.z;
    fVar7 = (this->fields).yawRotation.w;
    fVar8 = (fVar4 * (this->fields).yawRotation.x + fVar1 * fVar7 + fVar3 * fVar5) -
             fVar2 * fVar6;
    fVar9 = (fVar5 * fVar4 + fVar2 * fVar7 + fVar6 * fVar1) -
             fVar3 * (this->fields).yawRotation.x;
    fVar10 = (fVar6 * fVar4 + fVar3 * fVar7 + fVar2 * (this->fields).yawRotation.x) -
            fVar5 * (this->fields).pitchRotation.x;
    fVar2 = ((fVar4 * fVar7 - (this->fields).yawRotation.x * (this->fields).pitchRotation.x) -
             fVar2 * fVar5) - fVar6 * fVar3;
    fVar1 = (this->fields).networkMessageCooldown;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar3;
    (this->fields).networkMessageCooldown = fVar1;
    if (fVar1 <= 0.0) {
      pAVar11 = (this->fields).OnUpdatePointingValue;
      if (pAVar11 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
        if ((this->fields)._.shouldPoint == 0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Quaternion);
            cRam_? = '\x01';
          }
          pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
          fVar8 = (pQVar12->identityQuaternion).x;
          fVar9 = (pQVar12->identityQuaternion).y;
          fVar10 = (pQVar12->identityQuaternion).z;
          fVar2 = (pQVar12->identityQuaternion).w;
        }
        (*(pAVar11->fields)._._.invoke_impl)
                  ((pAVar11->fields)._._.method_code,fVar8,fVar9,fVar10,fVar2,
                   (pAVar11->fields)._._.method);
      }
      (this->fields).networkMessageCooldown = (this->fields)._.pointingDuration;
    }
    if ((this->fields)._.shouldPoint == 0) {
      AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_StopPointing
                ((AvatarLimbManager_AvatarPointingHandler *)this,(MethodInfo *)0x0);
    }
    else {
      AvatarLimbManager+AvatarPointingHandler::
      AvatarLimbManager_AvatarPointingHandler_HandlePointing
                ((AvatarLimbManager_AvatarPointingHandler *)this,(this->fields).yawRotation,
                 (this->fields).pitchRotation,(MethodInfo *)0x0);
    }
  }
  else {
    pAVar11 = (this->fields).OnUpdatePointingValue;
    if (pAVar11 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
      (*(pAVar11->fields)._._.invoke_impl)
                ((pAVar11->fields)._._.method_code,(pQVar12->identityQuaternion).x,
                 (pQVar12->identityQuaternion).y,(pQVar12->identityQuaternion).z,
                 (pQVar12->identityQuaternion).w,(pAVar11->fields)._._.method);
    }
    pAVar13 = (this->fields).OnIsPointingChange;
    if (pAVar13 != (Action_1_Boolean_ *)0x0) {
      (*(pAVar13->fields)._._.invoke_impl)
                ((pAVar13->fields)._._.method_code,0,(pAVar13->fields)._._.method);
    }
  }
  AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_UpdatePointing
            ((AvatarLimbManager_AvatarPointingHandler *)this,localLookDirection,(MethodInfo *)0x0);
  return;
}


/* AvatarLimbManagerLocal+AvatarPointingHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields).yawRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields).yawRotation.y = fVar2;
  (this->fields).yawRotation.z = fVar3;
  (this->fields).yawRotation.w = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields).pitchRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields).pitchRotation.y = fVar2;
  (this->fields).pitchRotation.z = fVar3;
  (this->fields).pitchRotation.w = fVar4;
  AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler__ctor
            ((AvatarLimbManager_AvatarPointingHandler *)this,(MethodInfo *)0x0);
  return;
}


/* Vector3 get_PointingDirection() */

Vector3 * Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
          AvatarLimbManagerLocal_AvatarPointingHandlerLocal_get_PointingDirection
                    (Vector3 *__return_storage_ptr__,
                    AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,MethodInfo *method)

{
  fVar1 = (this->fields)._.pointingDirection.y;
  fVar2 = (this->fields)._.pointingDirection.z;
  __return_storage_ptr__->x = (this->fields)._.pointingDirection.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}

