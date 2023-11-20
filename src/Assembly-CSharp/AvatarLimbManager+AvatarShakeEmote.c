
/* Void HandleRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_HandleRotation
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

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
  auVar4._4_8_ = 0;
  auVar4._0_4_ = uVar3;
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,(Vector3)(auVar4 << 0x20),(MethodInfo *)0x0);
  fVar6 = pQVar5->x;
  pLVar7 = (this->fields).headController;
  if (pLVar7 != (LimbController *)0x0) {
    if (_UNK_? <
        pQVar5->y * (pLVar7->fields).interpolateTowardsYawRotation.y +
        fVar6 * (pLVar7->fields).interpolateTowardsYawRotation.x +
        pQVar5->z * (pLVar7->fields).interpolateTowardsYawRotation.z +
        pQVar5->w * (pLVar7->fields).interpolateTowardsYawRotation.w) {
      return;
    }
    if (pLVar7 != (LimbController *)0x0) {
      LimbController::LimbController_ResetInterpolation(pLVar7,(MethodInfo *)0x0);
      pLVar7 = (this->fields).headController;
      if (pLVar7 != (LimbController *)0x0) {
        pQVar5 = &(pLVar7->fields).interpolateTowardsPitchRotation;
        yawRotation.y = pQVar5->x;
        yawRotation.x = fVar6;
        yawRotation.z = (pLVar7->fields).interpolateTowardsPitchRotation.y;
        yawRotation.w = (pLVar7->fields).interpolateTowardsPitchRotation.z;
        LimbController::LimbController_SetNewRotation(pLVar7,yawRotation,*pQVar5,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_Initialize
               (AvatarLimbManager_AvatarShakeEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
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
      (this->fields)._.emote = 1;
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

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_RotateHead
               (AvatarLimbManager_AvatarShakeEmote *this,Quaternion yawRotation,MethodInfo *method)

{
  pLVar1 = (this->fields).headController;
  if (pLVar1 != (LimbController *)0x0) {
    if (_UNK_? <
        (pLVar1->fields).interpolateTowardsYawRotation.y * yawRotation.y +
        (pLVar1->fields).interpolateTowardsYawRotation.x * yawRotation.x +
        (pLVar1->fields).interpolateTowardsYawRotation.z * yawRotation.z +
        (pLVar1->fields).interpolateTowardsYawRotation.w * yawRotation.w) {
      return;
    }
    if (pLVar1 != (LimbController *)0x0) {
      LimbController::LimbController_ResetInterpolation(pLVar1,(MethodInfo *)0x0);
      pLVar1 = (this->fields).headController;
      if (pLVar1 != (LimbController *)0x0) {
        LimbController::LimbController_SetNewRotation
                  (pLVar1,yawRotation,(pLVar1->fields).interpolateTowardsPitchRotation,
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


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_StartEmote
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  (this->fields)._.duration = (this->fields)._.lifeTime;
  pLVar2 = (this->fields).headController;
  (this->fields)._.isActive = 1;
  if (pLVar2 != (LimbController *)0x0) {
    (pLVar2->fields).interpolationSpeed =
         (_UNK_? / (this->fields)._.lifeTime) * _UNK_?;
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).isEventControllingLimb = 1;
      return;
    }
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_StopEmote
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnEmoteEnd;
  (this->fields)._.duration = 0.0;
  (this->fields)._.isActive = 0;
  if (pAVar1 != (Action_1_EmoteTypes_ *)0x0) {
    pAVar1 = (this->fields)._.OnEmoteEnd;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields)._.emote,(pAVar1->fields)._._.method);
  }
  pLVar2 = (this->fields).headController;
  if (pLVar2 != (LimbController *)0x0) {
    (pLVar2->fields).interpolationSpeed = (this->fields).originalInterpolationSpeed;
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).isEventControllingLimb = 0;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_Update
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.duration;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields)._.duration = fVar1;
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      func_?((double)((((fVar1 / (this->fields)._.lifeTime) * _UNK_?) /
                               _UNK_?) * _UNK_?));
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      fVar3 = (float10)func_?();
      uVar4 = _UNK_?;
      if ((float)fVar3 != fVar2) {
        uVar4 = _UNK_?;
      }
      euler.y = (float)uVar4;
      euler.x = fVar2;
      euler.z = 0.0;
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&stack0xffffffd0,euler,(MethodInfo *)0x0);
      yawRotation = *pQVar5;
      pLVar6 = (this->fields).headController;
      if (pLVar6 != (LimbController *)0x0) {
        if (_UNK_? <
            pQVar5->y * (pLVar6->fields).interpolateTowardsYawRotation.y +
            pQVar5->x * (pLVar6->fields).interpolateTowardsYawRotation.x +
            pQVar5->z * (pLVar6->fields).interpolateTowardsYawRotation.z +
            pQVar5->w * (pLVar6->fields).interpolateTowardsYawRotation.w) {
          return;
        }
        if (pLVar6 != (LimbController *)0x0) {
          LimbController::LimbController_ResetInterpolation(pLVar6,(MethodInfo *)0x0);
          pLVar6 = (this->fields).headController;
          if (pLVar6 != (LimbController *)0x0) {
            LimbController::LimbController_SetNewRotation
                      (pLVar6,yawRotation,(pLVar6->fields).interpolateTowardsPitchRotation,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (*(code *)(this->klass->vtable).StopEmote.method)(this,this->klass[1]._0.image);
  }
  return;
}

