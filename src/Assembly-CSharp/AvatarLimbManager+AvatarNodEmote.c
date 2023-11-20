
/* Void HandleRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_HandleRotation
               (AvatarLimbManager_AvatarNodEmote *this,MethodInfo *method)

{
  dVar1 = (double)(((((this->fields)._.duration / (this->fields)._.lifeTime) * _UNK_?) /
                   _UNK_?) * _UNK_?);
  func_?(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  fVar2 = (float10)func_?();
  uVar3 = _UNK_?;
  if ((float)fVar2 != 0.0) {
    uVar3 = _UNK_?;
  }
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = (float)uVar3;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  fVar5 = pQVar4->x;
  this_01 = (this->fields).headController;
  if (this_01 != (LimbController *)0x0) {
    if (_UNK_? <
        pQVar4->y * (this_01->fields).interpolateTowardsPitchRotation.y +
        fVar5 * (this_01->fields).interpolateTowardsPitchRotation.x +
        pQVar4->z * (this_01->fields).interpolateTowardsPitchRotation.z +
        pQVar4->w * (this_01->fields).interpolateTowardsPitchRotation.w) {
      return;
    }
    if (this_01 != (LimbController *)0x0) {
      fVar6 = 0.0;
      puVar7 = &UNK_?;
      LimbController::LimbController_ResetInterpolation(this_01,(MethodInfo *)0x0);
      this_00 = (this->fields).headController;
      if (this_00 != (LimbController *)0x0) {
        PitchRotation.y = (float)puVar7;
        PitchRotation.x = fVar5;
        PitchRotation.z = (float)this_01;
        PitchRotation.w = fVar6;
        LimbController::LimbController_SetNewRotation
                  (this_00,(this_00->fields).interpolateTowardsYawRotation,PitchRotation,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_Initialize
               (AvatarLimbManager_AvatarNodEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  (this->fields)._.limbRotator = limbRotator;
  func_?(&(this->fields)._.limbRotator,limbRotator);
  (this->fields)._.lifeTime = lifeTime;
  if (limbRotator != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
      cRam_? = '\x01';
    }
    bVar1 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (limbRotator,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pLVar2 = (LimbController *)0x0;
    }
    else {
      this_00 = (limbRotator->fields).limbControllers;
      if (this_00 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) goto code_?;
      pLVar2 = (LimbController *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
    }
    (this->fields).headController = pLVar2;
    func_?(&(this->fields).headController,pLVar2);
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      (this->fields).originalInterpolationSpeed = (pLVar2->fields).interpolationSpeed;
      (this->fields)._.emote = 2;
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RotateHead(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_RotateHead
               (AvatarLimbManager_AvatarNodEmote *this,Quaternion pitchRotation,MethodInfo *method)

{
  pLVar1 = (this->fields).headController;
  if (pLVar1 != (LimbController *)0x0) {
    if (_UNK_? <
        (pLVar1->fields).interpolateTowardsPitchRotation.y * pitchRotation.y +
        (pLVar1->fields).interpolateTowardsPitchRotation.x * pitchRotation.x +
        (pLVar1->fields).interpolateTowardsPitchRotation.z * pitchRotation.z +
        (pLVar1->fields).interpolateTowardsPitchRotation.w * pitchRotation.w) {
      return;
    }
    if (pLVar1 != (LimbController *)0x0) {
      LimbController::LimbController_ResetInterpolation(pLVar1,(MethodInfo *)0x0);
      pLVar1 = (this->fields).headController;
      if (pLVar1 != (LimbController *)0x0) {
        LimbController::LimbController_SetNewRotation
                  (pLVar1,(pLVar1->fields).interpolateTowardsYawRotation,pitchRotation,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::AvatarLimbManager_AvatarNodEmote_Update
               (AvatarLimbManager_AvatarNodEmote *this,MethodInfo *method)

{
  if ((this->fields)._.isActive == 0) {
    return;
  }
  fVar1 = (this->fields)._.duration;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  (this->fields)._.duration = fVar1;
  if (fVar1 < 0.0) {
    (*(code *)(this->klass->vtable).StopEmote.method)(this,this->klass[1]._0.image);
  }
  func_?((double)(((((this->fields)._.duration / (this->fields)._.lifeTime) * _UNK_?
                            ) / _UNK_?) * _UNK_?));
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  fVar3 = (float10)func_?();
  uVar4 = _UNK_?;
  if ((float)fVar3 != 0.0) {
    uVar4 = _UNK_?;
  }
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = (float)uVar4;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  fVar1 = pQVar5->x;
  fVar2 = pQVar5->y;
  pLVar6 = (this->fields).headController;
  if (pLVar6 != (LimbController *)0x0) {
    if (_UNK_? <
        fVar2 * (pLVar6->fields).interpolateTowardsPitchRotation.y +
        fVar1 * (pLVar6->fields).interpolateTowardsPitchRotation.x +
        pQVar5->z * (pLVar6->fields).interpolateTowardsPitchRotation.z +
        pQVar5->w * (pLVar6->fields).interpolateTowardsPitchRotation.w) {
      return;
    }
    if (pLVar6 != (LimbController *)0x0) {
      auVar7._4_4_ = pLVar6;
      auVar7._0_4_ = &UNK_?;
      auVar7._8_4_ = 0;
      LimbController::LimbController_ResetInterpolation(pLVar6,(MethodInfo *)0x0);
      pLVar6 = (this->fields).headController;
      if (pLVar6 != (LimbController *)0x0) {
        PitchRotation.y = fVar2;
        PitchRotation.x = fVar1;
        PitchRotation.z = auVar7._0_4_;
        PitchRotation.w = auVar7._4_4_;
        LimbController::LimbController_SetNewRotation
                  (pLVar6,(pLVar6->fields).interpolateTowardsYawRotation,PitchRotation,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

