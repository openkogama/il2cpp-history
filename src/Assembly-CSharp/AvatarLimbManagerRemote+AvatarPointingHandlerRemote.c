
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
  (this->fields)._.shouldPoint = 0;
  (this->fields).remotePitchRotation.x = fVar2;
  (this->fields).remotePitchRotation.y = fVar3;
  (this->fields).remotePitchRotation.z = fVar4;
  (this->fields).remotePitchRotation.w = fVar5;
  return;
}


/* Void SetRotationRemotely(Single, Single) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_SetRotationRemotely
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,float yaw,float pitch,
               MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
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
        pAVar6 = (this->fields)._.limbRotator;
        (this->fields)._.shouldPoint = 0;
        if (pAVar6 != (AvatarLimbManager_LimbRotator *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           );
            cRam_? = '\x01';
          }
          pDVar7 = (pAVar6->fields).limbControllers;
          if ((pDVar7 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
             (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,2,
                                   MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                                  ), pOVar8 != (Object *)0x0)) {
            if (*(char *)&pOVar8[0x11].klass == '\0') {
              *(undefined1 *)&pOVar8[0xf].klass = 0;
            }
            pAVar6 = (this->fields)._.limbRotator;
            if (pAVar6 != (AvatarLimbManager_LimbRotator *)0x0) {
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                               );
                cRam_? = '\x01';
              }
              pDVar7 = (pAVar6->fields).limbControllers;
              if ((pDVar7 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) &&
                 (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,3,
                                       MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                                      ), pOVar8 != (Object *)0x0)) {
                if (*(char *)&pOVar8[0x11].klass != '\0') {
                  return;
                }
                *(undefined1 *)&pOVar8[0xf].klass = 0;
                return;
              }
            }
          }
        }
        func_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uStack_10 = 0;
    auVar11._4_8_ = 0;
    auVar11._0_4_ = yaw * _UNK_?;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        (&QStack_2,(Vector3)(auVar11 << 0x20),(MethodInfo *)0x0);
    fVar13 = pitch * _UNK_?;
    uStack_10 = 0;
    fVar14 = pQVar12->y;
    fVar15 = pQVar12->z;
    fVar16 = pQVar12->w;
    (this->fields).remoteYawRotation.x = pQVar12->x;
    (this->fields).remoteYawRotation.y = fVar14;
    (this->fields).remoteYawRotation.z = fVar15;
    (this->fields).remoteYawRotation.w = fVar16;
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = fVar13;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
    fVar14 = pQVar12->y;
    fVar15 = pQVar12->z;
    fVar16 = pQVar12->w;
    (this->fields).remotePitchRotation.x = pQVar12->x;
    (this->fields).remotePitchRotation.y = fVar14;
    (this->fields).remotePitchRotation.z = fVar15;
    (this->fields).remotePitchRotation.w = fVar16;
    (this->fields)._.elapsedPointingTime = (this->fields)._.pointingDuration;
    (this->fields)._.shouldPoint = 1;
  }
  return;
}


/* Void UpdatePointing(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarPointingHandlerRemote::
     AvatarLimbManagerRemote_AvatarPointingHandlerRemote_UpdatePointing
               (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *this,Vector3 localLookDirection
               ,MethodInfo *method)

{
  if ((this->fields)._.shouldPoint == 0) {
code_?:
    fVar1 = (this->fields)._.elapsedPointingTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._.prevLookDirection.x = localLookDirection.x;
    (this->fields)._.prevLookDirection.y = localLookDirection.y;
    (this->fields)._.elapsedPointingTime = fVar1 - fVar2;
    (this->fields)._.prevLookDirection.z = localLookDirection.z;
    return;
  }
  pQVar3 = &(this->fields).remotePitchRotation;
  limbPitchRotation_00 = *pQVar3;
  limbPitchRotation = *pQVar3;
  pQVar3 = &(this->fields).remoteYawRotation;
  puStack_4 = (undefined *)pQVar3->x;
  ppMStack_5 = (MethodInfo **)(this->fields).remoteYawRotation.y;
  fStack_6 = (this->fields).remoteYawRotation.z;
  fStack_7 = (this->fields).remoteYawRotation.w;
  limbYawRotation_00 = *pQVar3;
  limbYawRotation = *pQVar3;
  iVar8 = func_?(auStack_9,&puStack_4,0);
  if (_UNK_? < *(float *)(iVar8 + 4) || _UNK_? == *(float *)(iVar8 + 4)) {
    iVar8 = func_?(auStack_9,&puStack_4,0);
    if (*(float *)(iVar8 + 4) <= _UNK_?) {
      pAVar10 = (this->fields)._.limbRotator;
      if (pAVar10 != (AvatarLimbManager_LimbRotator *)0x0) {
        AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_SetLimbRotation
                  (pAVar10,BodyData_PartIndex__Enum_LArm,limbYawRotation,limbPitchRotation,
                   (this->fields)._.elapsedPointingTime,(MethodInfo *)0x0);
        pAVar10 = (this->fields)._.limbRotator;
        if (pAVar10 != (AvatarLimbManager_LimbRotator *)0x0) {
          AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_StopLimbRotation
                    (pAVar10,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  pAVar10 = (this->fields)._.limbRotator;
  if (pAVar10 != (AvatarLimbManager_LimbRotator *)0x0) {
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_SetLimbRotation
              (pAVar10,BodyData_PartIndex__Enum_RArm,limbYawRotation_00,limbPitchRotation_00,
               (this->fields)._.elapsedPointingTime,(MethodInfo *)0x0);
    pAVar10 = (this->fields)._.limbRotator;
    if (pAVar10 != (AvatarLimbManager_LimbRotator *)0x0) {
      if (cRam_? == '\0') {
        ppMStack_5 = &
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
        ;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (pAVar10->fields).limbControllers;
      if (this_00 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) {
        pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,
                            MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                           );
        if (pOVar11 != (Object *)0x0) {
          if (*(char *)&pOVar11[0x11].klass == '\0') {
            *(undefined1 *)&pOVar11[0xf].klass = 0;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

