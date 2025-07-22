
/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator, AvatarEnabledChangeHandler) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_Initialize
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,
               AvatarLimbManager *limbManager,AvatarLimbManager_LimbRotator *limbRotator,
               AvatarEnabledChangeHandler *enableChangeHandler,MethodInfo *method)

{
  AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_Initialize
            ((AvatarLimbManager_AvatarPointingHandler *)this,limbManager,limbRotator,
             enableChangeHandler,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).y;
  fVar3 = (pQVar1->identityQuaternion).z;
  fVar4 = (pQVar1->identityQuaternion).w;
  (this->fields).remoteYawRotation.x = (pQVar1->identityQuaternion).x;
  (this->fields).remoteYawRotation.y = fVar2;
  (this->fields).remoteYawRotation.z = fVar3;
  (this->fields).remoteYawRotation.w = fVar4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).x;
  fVar3 = (pQVar1->identityQuaternion).y;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  (this->fields)._.pointingDuration = 1.5;
  (this->fields)._.pointState = 0;
  (this->fields).remotePitchRotation.x = fVar2;
  (this->fields).remotePitchRotation.y = fVar3;
  (this->fields).remotePitchRotation.z = fVar4;
  (this->fields).remotePitchRotation.w = fVar5;
  return;
}


/* Void SetRotationRemotely(Single, Single, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_SetRotationRemotely
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,float yaw,float pitch,
               bool isPointingWeapon,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    (this->fields)._.pointState = isPointingWeapon + 1;
    if (isPointingWeapon == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
      QStack_2.x = (pQVar1->identityQuaternion).x;
      QStack_2.y = (pQVar1->identityQuaternion).y;
      QStack_2.z = (pQVar1->identityQuaternion).z;
      QStack_2.w = (pQVar1->identityQuaternion).w;
      iVar3 = func_?(auStack_4,&QStack_2,0);
      if (yaw == *(float *)(iVar3 + 4)) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
        QStack_2.x = (pQVar1->identityQuaternion).x;
        QStack_2.y = (pQVar1->identityQuaternion).y;
        QStack_2.z = (pQVar1->identityQuaternion).z;
        QStack_2.w = (pQVar1->identityQuaternion).w;
        pfVar5 = (float *)func_?(auStack_4,&QStack_2,0);
        if (pitch == *pfVar5) {
          (this->fields)._.pointState = 0;
          return;
        }
      }
    }
    uStack_6 = 0;
    auVar7._4_8_ = 0;
    auVar7._0_4_ = yaw * _UNK_?;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       (&QStack_2,(Vector3)(auVar7 << 0x20),(MethodInfo *)0x0);
    fVar9 = pitch * _UNK_?;
    uStack_6 = 0;
    fVar10 = pQVar8->y;
    fVar11 = pQVar8->z;
    fVar12 = pQVar8->w;
    (this->fields).remoteYawRotation.x = pQVar8->x;
    (this->fields).remoteYawRotation.y = fVar10;
    (this->fields).remoteYawRotation.z = fVar11;
    (this->fields).remoteYawRotation.w = fVar12;
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = fVar9;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
    fVar10 = pQVar8->y;
    fVar11 = pQVar8->z;
    fVar12 = pQVar8->w;
    (this->fields).remotePitchRotation.x = pQVar8->x;
    (this->fields).remotePitchRotation.y = fVar10;
    (this->fields).remotePitchRotation.z = fVar11;
    (this->fields).remotePitchRotation.w = fVar12;
    (this->fields)._.elapsedPointingTime = (this->fields)._.pointingDuration;
  }
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_UpdatePointing
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,Vector3 localLookDirection
               ,MethodInfo *method)

{
  if ((this->fields)._.pointState == 2) {
    pAVar1 = (this->fields)._.limbRotator;
    if (pAVar1 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
    duration = (undefined1 *)(this->fields)._.elapsedPointingTime;
    method_00 = (MethodInfo *)0x0;
    fVar2 = (this->fields).remotePitchRotation.x;
    fVar3 = (this->fields).remotePitchRotation.y;
    puStack_4 = (undefined *)(this->fields).remotePitchRotation.z;
    puVar5 = (undefined1 *)(this->fields).remotePitchRotation.w;
    fVar6 = (this->fields).remoteYawRotation.x;
    fVar7 = (this->fields).remoteYawRotation.y;
    fVar8 = (this->fields).remoteYawRotation.z;
    fVar9 = (this->fields).remoteYawRotation.w;
code_?:
    QVar10.y = fVar7;
    QVar10.x = fVar6;
    QVar10.z = fVar8;
    QVar10.w = fVar9;
    limbPitchRotation_00.y = fVar3;
    limbPitchRotation_00.x = fVar2;
    limbPitchRotation_00.z = (float)puStack_4;
    limbPitchRotation_00.w = (float)puVar5;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_SetLimbRotation
              (pAVar1,BodyData_PartIndex__Enum_RArm,QVar10,limbPitchRotation_00,(float)duration,
               method_00);
  }
  else {
    if ((this->fields)._.pointState == 1) {
      pQVar11 = &(this->fields).remotePitchRotation;
      fVar2 = pQVar11->x;
      fVar3 = (this->fields).remotePitchRotation.y;
      uVar12 = pQVar11->x;
      uVar13 = pQVar11->y;
      limbPitchRotation.y = (float)uVar13;
      limbPitchRotation.x = (float)uVar12;
      puStack_4 = (undefined *)(this->fields).remotePitchRotation.z;
      puVar5 = (undefined1 *)(this->fields).remotePitchRotation.w;
      method_00 = (MethodInfo *)0x0;
      duration = &stack0xffffffe0;
      pQVar11 = &(this->fields).remoteYawRotation;
      fVar6 = pQVar11->x;
      fVar7 = (this->fields).remoteYawRotation.y;
      fVar8 = (this->fields).remoteYawRotation.z;
      fVar9 = (this->fields).remoteYawRotation.w;
      QVar10 = *pQVar11;
      iVar14 = func_?(&stack0xfffffff0);
      if (_UNK_? < *(float *)(iVar14 + 4) || _UNK_? == *(float *)(iVar14 + 4)) {
        puVar5 = &stack0xfffffff0;
        iVar14 = func_?();
        if (*(float *)(iVar14 + 4) <= _UNK_?) {
          pAVar1 = (this->fields)._.limbRotator;
          if (pAVar1 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
          limbPitchRotation.z = (float)&UNK_?;
          limbPitchRotation.w = (float)puVar5;
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_SetLimbRotation
                    (pAVar1,BodyData_PartIndex__Enum_LArm,QVar10,limbPitchRotation,
                     (this->fields)._.elapsedPointingTime,(MethodInfo *)0x0);
          pAVar1 = (this->fields)._.limbRotator;
          if (pAVar1 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_StopLimbRotation
                    (pAVar1,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      pAVar1 = (this->fields)._.limbRotator;
      if (pAVar1 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
      goto code_?;
    }
    pAVar1 = (this->fields)._.limbRotator;
    if (pAVar1 == (AvatarLimbManager_LimbRotator *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
      cRam_? = '\x01';
    }
    pDVar15 = (pAVar1->fields).limbControllers;
    if ((pDVar15 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) ||
       (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,2,
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           ), pOVar16 == (Object *)0x0)) goto code_?;
    if (*(char *)&pOVar16[0x11].klass == '\0') {
      *(undefined1 *)&pOVar16[0xf].klass = 0;
    }
  }
  pAVar1 = (this->fields)._.limbRotator;
  if (pAVar1 != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar15 = (pAVar1->fields).limbControllers;
    if ((pDVar15 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
       (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,3,
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           ), pOVar16 != (Object *)0x0)) {
      if (*(char *)&pOVar16[0x11].klass == '\0') {
        *(undefined1 *)&pOVar16[0xf].klass = 0;
      }
code_?:
      fVar2 = (this->fields)._.elapsedPointingTime;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields)._.prevLookDirection.x = localLookDirection.x;
      (this->fields)._.prevLookDirection.y = localLookDirection.y;
      (this->fields)._.elapsedPointingTime = fVar2 - fVar3;
      (this->fields)._.prevLookDirection.z = localLookDirection.z;
      return;
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

