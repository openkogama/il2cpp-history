
/* Void HandleRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_HandleRotation
               (AvatarLimbManager_AvatarNodEmote *this,MethodInfo *method)

{
  unique0x1000008d =
       (double)(((((this->fields)._.duration / (this->fields)._.lifeTime) * _UNK_?) /
                _UNK_?) * _UNK_?);
  fVar1 = (float10)func_?(unique0x1000008d);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  unique0x10000095 = (double)((float)fVar1 + _UNK_?);
  fVar1 = (float10)func_?();
  stack0xfffffff4 = (double)((ulonglong)(double)fVar1 & 0xffffffff);
  uVar2 = _UNK_?;
  if ((float)fVar1 != 0.0) {
    uVar2 = _UNK_?;
  }
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = (float)uVar2;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)auStack_4,euler,(MethodInfo *)0x0);
  fVar5 = pQVar3->x;
  fVar6 = pQVar3->y;
  fVar7 = pQVar3->z;
  fVar8 = pQVar3->w;
  pLVar9 = (this->fields).headController;
  if (pLVar9 == (LimbController *)0x0) {
code_?:
    func_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (fVar6 * (pLVar9->fields).interpolateTowardsPitchRotation.y +
      fVar5 * (pLVar9->fields).interpolateTowardsPitchRotation.x +
      fVar7 * (pLVar9->fields).interpolateTowardsPitchRotation.z +
      fVar8 * (pLVar9->fields).interpolateTowardsPitchRotation.w <= _UNK_?) {
    (pLVar9->fields).elapsedInterpolationTime = 0.0;
    (pLVar9->fields).elapsedInterpolateAnimationTime = 0.0;
    (pLVar9->fields).shouldRotate = 1;
    (pLVar9->fields).rotationDuration = 0.0;
    pLVar9 = (this->fields).headController;
    if (pLVar9 == (LimbController *)0x0) goto code_?;
    fVar11 = (pLVar9->fields).interpolateTowardsYawRotation.x;
    fVar12 = (pLVar9->fields).interpolateTowardsYawRotation.y;
    fVar13 = (pLVar9->fields).interpolateTowardsYawRotation.z;
    fVar14 = (pLVar9->fields).interpolateTowardsYawRotation.w;
    (pLVar9->fields).elapsedInterpolationTime = 0.0;
    (pLVar9->fields).elapsedInterpolateAnimationTime = 0.0;
    (pLVar9->fields).shouldRotate = 1;
    (pLVar9->fields).rotationDuration = 0.0;
    (pLVar9->fields).interpolateTowardsYawRotation.x = fVar11;
    (pLVar9->fields).interpolateTowardsYawRotation.y = fVar12;
    (pLVar9->fields).interpolateTowardsYawRotation.z = fVar13;
    (pLVar9->fields).interpolateTowardsYawRotation.w = fVar14;
    (pLVar9->fields).interpolateTowardsPitchRotation.x = fVar5;
    (pLVar9->fields).interpolateTowardsPitchRotation.y = fVar6;
    (pLVar9->fields).interpolateTowardsPitchRotation.z = fVar7;
    (pLVar9->fields).interpolateTowardsPitchRotation.w = fVar8;
  }
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_Initialize
               (AvatarLimbManager_AvatarNodEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  ppAVar1 = &(this->fields)._.limbRotator;
  *ppAVar1 = limbRotator;
  func_?(ppAVar1,limbRotator);
  (this->fields)._.lifeTime = lifeTime;
  if (limbRotator != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
      cRam_? = '\x01';
    }
    bVar2 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (limbRotator,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pLVar3 = (LimbController *)0x0;
    }
    else {
      this_00 = (limbRotator->fields).limbControllers;
      if (this_00 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) goto code_?;
      pLVar3 = (LimbController *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
    }
    ppLVar4 = &(this->fields).headController;
    *ppLVar4 = pLVar3;
    func_?(ppLVar4,pLVar3);
    if (*ppLVar4 != (LimbController *)0x0) {
      (this->fields).originalInterpolationSpeed = ((*ppLVar4)->fields).interpolationSpeed;
      (this->fields)._.emote = 2;
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RotateHead(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::
     AvatarLimbManager_AvatarNodEmote_RotateHead
               (AvatarLimbManager_AvatarNodEmote *this,Quaternion pitchRotation,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pLVar2 = (this->fields).headController;
  if (pLVar2 != (LimbController *)0x0) {
    if ((pLVar2->fields).interpolateTowardsPitchRotation.y * pitchRotation.y +
        (pLVar2->fields).interpolateTowardsPitchRotation.x * pitchRotation.x +
        (pLVar2->fields).interpolateTowardsPitchRotation.z * pitchRotation.z +
        (pLVar2->fields).interpolateTowardsPitchRotation.w * pitchRotation.w <= _UNK_?) {
      (pLVar2->fields).elapsedInterpolationTime = 0.0;
      (pLVar2->fields).elapsedInterpolateAnimationTime = 0.0;
      (pLVar2->fields).shouldRotate = 1;
      (pLVar2->fields).rotationDuration = 0.0;
      pLVar2 = (this->fields).headController;
      if (pLVar2 == (LimbController *)0x0) goto code_?;
      fVar3 = (pLVar2->fields).interpolateTowardsYawRotation.x;
      fVar4 = (pLVar2->fields).interpolateTowardsYawRotation.y;
      fVar5 = (pLVar2->fields).interpolateTowardsYawRotation.z;
      fVar6 = (pLVar2->fields).interpolateTowardsYawRotation.w;
      (pLVar2->fields).elapsedInterpolationTime = 0.0;
      (pLVar2->fields).elapsedInterpolateAnimationTime = 0.0;
      (pLVar2->fields).interpolateTowardsYawRotation.x = fVar3;
      (pLVar2->fields).interpolateTowardsYawRotation.y = fVar4;
      (pLVar2->fields).interpolateTowardsYawRotation.z = fVar5;
      (pLVar2->fields).interpolateTowardsYawRotation.w = fVar6;
      (pLVar2->fields).shouldRotate = 1;
      (pLVar2->fields).rotationDuration = 0.0;
      (pLVar2->fields).interpolateTowardsPitchRotation.x = pitchRotation.x;
      (pLVar2->fields).interpolateTowardsPitchRotation.y = pitchRotation.y;
      (pLVar2->fields).interpolateTowardsPitchRotation.z = pitchRotation.z;
      (pLVar2->fields).interpolateTowardsPitchRotation.w = pitchRotation.w;
    }
    return;
  }
code_?:
  uVar7 = func_?(auStack_8);
  func_?(uVar7);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::AvatarLimbManager_AvatarNodEmote_Update
               (AvatarLimbManager_AvatarNodEmote *this,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.duration;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields)._.duration = fVar1;
    if (fVar1 < 0.0) {
      (*(code *)(this->klass->vtable).StopEmote.method)(this,this->klass[1]._0.image);
    }
    AvatarLimbManager_AvatarNodEmote_HandleRotation(this,(MethodInfo *)0x0);
  }
  return;
}

