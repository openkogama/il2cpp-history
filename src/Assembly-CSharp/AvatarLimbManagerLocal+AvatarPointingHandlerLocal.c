
/* Quaternion ApplyYawOffset(Quaternion) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,Quaternion *newYawRotation,
          MethodInfo *method)

{
  method_00 = (MethodInfo *)newYawRotation;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((((this->fields)._.pointState == 2) || ((this->fields)._.pointState == 3)) ||
      (pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                          ((Vector3 *)auStack_2,&(this->fields).yawRotation,method_00),
      pVVar1->y <= _UNK_? && _UNK_? != pVVar1->y)) ||
     (pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                         (&VStack_3,&(this->fields).yawRotation,method_00),
     _UNK_? < pVVar1->y)) {
    lStack_4 = (ulonglong)_UNK_? << 0x20;
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pQVar10 = (Quaternion *)(*pcVar8)();
      return pQVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&lStack_4,&uStack_6);
    auStack_2._0_4_ = (float)uStack_6;
    auStack_2._4_4_ = uStack_6._4_4_;
    auStack_2._8_4_ = (float)uStack_7;
    fStack_11 = uStack_7._4_4_;
  }
  else {
    lStack_4 = (ulonglong)_UNK_? << 0x20;
    uStack_5 = 0;
    auStack_2._0_4_ = 0.0;
    auStack_2._4_4_ = 0.0;
    stack0xffffffffffffff60 = 0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pQVar10 = (Quaternion *)(*pcVar8)();
      return pQVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&lStack_4,auStack_2);
  }
  fVar12 = newYawRotation->x;
  fVar13 = newYawRotation->y;
  fVar14 = newYawRotation->z;
  fVar15 = newYawRotation->w;
  __return_storage_ptr__->x =
       ((float)auStack_2._0_4_ * fVar15 + fStack_11 * fVar12 + (float)auStack_2._8_4_ * fVar13) -
       (float)auStack_2._4_4_ * fVar14;
  __return_storage_ptr__->y =
       (fStack_11 * fVar13 + (float)auStack_2._4_4_ * fVar15 + (float)auStack_2._0_4_ * fVar14) -
       (float)auStack_2._8_4_ * fVar12;
  __return_storage_ptr__->z =
       (fStack_11 * fVar14 + (float)auStack_2._8_4_ * fVar15 + (float)auStack_2._4_4_ * fVar12) -
       (float)auStack_2._0_4_ * fVar13;
  __return_storage_ptr__->w =
       ((fStack_11 * fVar15 - (float)auStack_2._0_4_ * fVar12) - (float)auStack_2._4_4_ * fVar13) -
       (float)auStack_2._8_4_ * fVar14;
  return __return_storage_ptr__;
}


/* Void HandleResult(AvatarLimbManagerLocal+PointingRotationCalculationResult) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_HandleResult
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,
               AvatarLimbManagerLocal_PointingRotationCalculationResult *result,MethodInfo *method)

{
  QStack_1.x = (result->YawRotation).x;
  QStack_1.y = (result->YawRotation).y;
  QStack_1.z = (result->YawRotation).z;
  QStack_1.w = (result->YawRotation).w;
  pQVar2 = AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
                     (aQStack_3,this,&QStack_1,(MethodInfo *)0x0);
  bVar4 = result->ShouldPoint;
  fVar5 = (result->PitchRotation).y;
  fVar6 = (result->PitchRotation).z;
  fVar7 = (result->PitchRotation).w;
  fVar8 = pQVar2->x;
  fVar9 = pQVar2->y;
  fVar10 = pQVar2->z;
  fVar11 = pQVar2->w;
  (this->fields).pitchRotation.x = (result->PitchRotation).x;
  (this->fields).pitchRotation.y = fVar5;
  (this->fields).pitchRotation.z = fVar6;
  (this->fields).pitchRotation.w = fVar7;
  (this->fields).yawRotation.x = fVar8;
  (this->fields).yawRotation.y = fVar9;
  (this->fields).yawRotation.z = fVar10;
  (this->fields).yawRotation.w = fVar11;
  if (bVar4 != 0) {
    (this->fields)._.pointState = (this->fields).storedState;
    return;
  }
  (this->fields)._.pointState = 0;
  return;
}


/* Void SetHandEquipableItem(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_SetHandEquipableItem
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,bool hasHandEquipableItem,
               MethodInfo *method)

{
  pAVar1 = (this->fields).OnHasHandEquippableItemChange;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,hasHandEquipableItem,(pAVar1->fields)._._.method);
    return;
  }
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
    (this->fields).storedState = 1;
    pAVar4 = (this->fields).OnIsPointingChange;
    if (pAVar4 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,1,(pAVar4->fields)._._.method);
      return;
    }
  }
  return;
}


/* Void StartPointingWeapon() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_StartPointingWeapon
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
    (this->fields).storedState = 2;
  }
  return;
}


/* Void StartPointingWeaponOnlyNetworked() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_StartPointingWeaponOnlyNetworked
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
    (this->fields).storedState = 3;
  }
  return;
}


/* Void UpdateNetworkMessage(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_UpdateNetworkMessage
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,Quaternion *rotation,
               MethodInfo *method)

{
  fVar1 = (this->fields).networkMessageCooldown;
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
  fVar4 = (float)(*pcRam_?)();
  fVar1 = fVar1 - fVar4;
  (this->fields).networkMessageCooldown = fVar1;
  if (fVar1 <= 0.0) {
    if ((this->fields).OnUpdatePointingValue != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      pAVar5 = (this->fields).OnUpdatePointingValue;
      if ((this->fields)._.pointState == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
        fStack_7 = (pQVar6->identityQuaternion).x;
        fStack_8 = (pQVar6->identityQuaternion).y;
        fStack_9 = (pQVar6->identityQuaternion).z;
        fStack_10 = (pQVar6->identityQuaternion).w;
      }
      else {
        fStack_7 = rotation->x;
        fStack_8 = rotation->y;
        fStack_9 = rotation->z;
        fStack_10 = rotation->w;
      }
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,&fStack_7,(pAVar5->fields)._._.method);
    }
    (this->fields).networkMessageCooldown = (this->fields)._.pointingDuration;
  }
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_UpdatePointing
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,Vector3 *localLookDirection,
               MethodInfo *method)

{
  if (0.0 < (this->fields)._.elapsedPointingTime) {
    fVar1 = (this->fields).yawRotation.x;
    fVar2 = (this->fields).yawRotation.y;
    fVar3 = (this->fields).yawRotation.z;
    fVar4 = (this->fields).yawRotation.w;
    fVar5 = (this->fields).pitchRotation.x;
    fVar6 = (this->fields).pitchRotation.y;
    fVar7 = (this->fields).pitchRotation.z;
    fVar8 = (this->fields).pitchRotation.w;
    fVar9 = (this->fields).networkMessageCooldown;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    fVar12 = (float)(*pcRam_?)();
    fVar9 = fVar9 - fVar12;
    (this->fields).networkMessageCooldown = fVar9;
    if (fVar9 <= 0.0) {
      if ((this->fields).OnUpdatePointingValue != (Action_1_UnityEngine_Quaternion_ *)0x0) {
        pAVar13 = (this->fields).OnUpdatePointingValue;
        if ((this->fields)._.pointState == 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar14 = TypeInfo__UnityEngine__Quaternion->static_fields;
          QStack_15.x = (pQVar14->identityQuaternion).x;
          QStack_15.y = (pQVar14->identityQuaternion).y;
          QStack_15.z = (pQVar14->identityQuaternion).z;
          QStack_15.w = (pQVar14->identityQuaternion).w;
        }
        else {
          QStack_15.y = (fVar8 * fVar2 + fVar6 * fVar4 + fVar5 * fVar3) - fVar7 * fVar1;
          QStack_15.x = (fVar5 * fVar4 + fVar8 * fVar1 + fVar7 * fVar2) - fVar6 * fVar3;
          QStack_15.w = ((fVar8 * fVar4 - fVar5 * fVar1) - fVar6 * fVar2) - fVar7 * fVar3;
          QStack_15.z = (fVar8 * fVar3 + fVar7 * fVar4 + fVar6 * fVar1) - fVar5 * fVar2;
        }
        (*(pAVar13->fields)._._.invoke_impl)
                  ((pAVar13->fields)._._.method_code,&QStack_15,(pAVar13->fields)._._.method);
      }
      (this->fields).networkMessageCooldown = (this->fields)._.pointingDuration;
    }
    if ((this->fields)._.pointState == 2) {
      aQStack_16[0].x = (this->fields).pitchRotation.x;
      aQStack_16[0].y = (this->fields).pitchRotation.y;
      aQStack_16[0].z = (this->fields).pitchRotation.z;
      aQStack_16[0].w = (this->fields).pitchRotation.w;
      QStack_15.x = (this->fields).yawRotation.x;
      QStack_15.y = (this->fields).yawRotation.y;
      QStack_15.z = (this->fields).yawRotation.z;
      QStack_15.w = (this->fields).yawRotation.w;
      AvatarLimbManager+AvatarPointingHandler::
      AvatarLimbManager_AvatarPointingHandler_HandleWeaponPointing
                ((AvatarLimbManager_AvatarPointingHandler *)this,&QStack_15,aQStack_16,
                 (MethodInfo *)0x0);
    }
    else if ((this->fields)._.pointState == 1) {
      QStack_15.x = (this->fields).pitchRotation.x;
      QStack_15.y = (this->fields).pitchRotation.y;
      QStack_15.z = (this->fields).pitchRotation.z;
      QStack_15.w = (this->fields).pitchRotation.w;
      aQStack_16[0].x = (this->fields).yawRotation.x;
      aQStack_16[0].y = (this->fields).yawRotation.y;
      aQStack_16[0].z = (this->fields).yawRotation.z;
      aQStack_16[0].w = (this->fields).yawRotation.w;
      AvatarLimbManager+AvatarPointingHandler::
      AvatarLimbManager_AvatarPointingHandler_HandlePointing
                ((AvatarLimbManager_AvatarPointingHandler *)this,aQStack_16,&QStack_15,
                 (MethodInfo *)0x0);
    }
    else {
      AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_StopPointing
                ((AvatarLimbManager_AvatarPointingHandler *)this,(MethodInfo *)0x0);
    }
  }
  else {
    pAVar13 = (this->fields).OnUpdatePointingValue;
    if (pAVar13 != (Action_1_UnityEngine_Quaternion_ *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar14 = TypeInfo__UnityEngine__Quaternion->static_fields;
      QStack_15.x = (pQVar14->identityQuaternion).x;
      QStack_15.y = (pQVar14->identityQuaternion).y;
      QStack_15.z = (pQVar14->identityQuaternion).z;
      QStack_15.w = (pQVar14->identityQuaternion).w;
      (*(pAVar13->fields)._._.invoke_impl)
                ((pAVar13->fields)._._.method_code,&QStack_15,(pAVar13->fields)._._.method);
    }
    pAVar17 = (this->fields).OnIsPointingChange;
    if (pAVar17 != (Action_1_Boolean_ *)0x0) {
      (*(pAVar17->fields)._._.invoke_impl)
                ((pAVar17->fields)._._.method_code,0,(pAVar17->fields)._._.method);
    }
  }
  fVar9 = (this->fields)._.elapsedPointingTime;
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  fVar3 = (float)(*pcRam_?)();
  fVar1 = localLookDirection->z;
  fVar2 = localLookDirection->y;
  (this->fields)._.prevLookDirection.x = localLookDirection->x;
  (this->fields)._.prevLookDirection.y = fVar2;
  (this->fields)._.elapsedPointingTime = fVar9 - fVar3;
  (this->fields)._.prevLookDirection.z = fVar1;
  return;
}


/* AvatarLimbManagerLocal+AvatarPointingHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (this->fields).yawRotation.x = (pQVar2->identityQuaternion).x;
  (this->fields).yawRotation.y = fVar3;
  (this->fields).yawRotation.z = fVar4;
  (this->fields).yawRotation.w = fVar5;
  if (cVar1 == '\0') {
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
  (this->fields)._.pointingDuration = 0.8;
  (this->fields)._.pointState = 1;
  (this->fields).pitchRotation.x = fVar3;
  (this->fields).pitchRotation.y = fVar4;
  (this->fields).pitchRotation.z = fVar5;
  (this->fields).pitchRotation.w = fVar6;
  (this->fields)._.isActive = 1;
  return;
}

