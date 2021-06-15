
/* Void HandleRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_HandleRotation
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (((this->fields)._.duration / (this->fields)._.lifeTime) * _UNK_?) / _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  uStack_2 = (double)(fVar1 * _UNK_?);
  fVar3 = (float10)func_?(SUB84(uStack_2,0),(int)((ulonglong)uStack_2 >> 0x20));
  uStack_2 = (double)fVar3;
  fVar1 = (float)fVar3 + _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffcc,(MethodInfo *)0x0);
  fStack_5 = pQVar4->x;
  fStack_6 = pQVar4->y;
  fStack_7 = pQVar4->z;
  fStack_8 = pQVar4->w;
  uStack_2 = (double)fVar1;
  fVar3 = (float10)func_?();
  fStack_9 = 0.0;
  uStack_2._0_4_ = 0.0;
  uStack_2._4_4_ = 0.0;
  if ((float)fVar3 == 0.0) {
    uVar10 = 0x41c80000;
  }
  else {
    uVar10 = 0x43a78000;
  }
  func_?(&fStack_9,0,uVar10,0);
  func_?(&fStack_5,fStack_9,(float)uStack_2,uStack_2._4_4_);
  fStack_11 = fStack_5;
  fStack_9 = fStack_6;
  uStack_2._0_4_ = fStack_7;
  uStack_2._4_4_ = fStack_8;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar12 = (this->fields).headController;
  if (pLVar12 != (LimbController *)0x0) {
    pQVar4 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                       ((Quaternion *)&stack0xffffffcc,pLVar12,(MethodInfo *)0x0);
    fVar1 = pQVar4->x;
    fVar13 = pQVar4->y;
    puVar14 = (undefined *)pQVar4->z;
    pQVar15 = (Quaternion__Class *)pQVar4->w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar14 = &UNK_?;
      pQVar15 = TypeInfo__UnityEngine__Quaternion;
      func_?();
    }
    lhs.y = fVar13;
    lhs.x = fVar1;
    lhs.z = (float)puVar14;
    lhs.w = (float)pQVar15;
    rhs.y = fStack_9;
    rhs.x = fStack_11;
    rhs.z = (float)uStack_2;
    rhs.w = uStack_2._4_4_;
    bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality
                      (lhs,rhs,(MethodInfo *)0x0);
    if (bVar16 == 0) {
      return;
    }
    pLVar12 = (this->fields).headController;
    if (pLVar12 != (LimbController *)0x0) {
      LimbController::LimbController_ResetInterpolation(pLVar12,(MethodInfo *)0x0);
      pLVar12 = (this->fields).headController;
      if (pLVar12 != (LimbController *)0x0) {
        pQVar4 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                           ((Quaternion *)&stack0xffffffcc,pLVar12,(MethodInfo *)0x0);
        yawRotation.y = fStack_9;
        yawRotation.x = fStack_11;
        yawRotation.z = (float)uStack_2;
        yawRotation.w = uStack_2._4_4_;
        LimbController::LimbController_SetNewRotation(pLVar12,yawRotation,*pQVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_Initialize
               (AvatarLimbManager_AvatarShakeEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  (this->fields)._.limbRotator = limbRotator;
  (this->fields)._.lifeTime = lifeTime;
  if (limbRotator != (AvatarLimbManager_LimbRotator *)0x0) {
    this_00 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController
                        (limbRotator,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    (this->fields).headController = this_00;
    if (this_00 != (LimbController *)0x0) {
      fVar1 = LimbController::LimbController_get_InterpolationSpeed(this_00,(MethodInfo *)0x0);
      (this->fields)._.emote = 1;
      (this->fields).originalInterpolationSpeed = fVar1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RotateHead(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_RotateHead
               (AvatarLimbManager_AvatarShakeEmote *this,Quaternion yawRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).headController;
  if (pLVar1 != (LimbController *)0x0) {
    pQVar2 = LimbController::LimbController_get_InterpolateTowardsYawRotation
                       ((Quaternion *)&stack0xffffffec,pLVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->x;
    pQVar4 = (Quaternion__Class *)pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar3 = &UNK_?;
      pQVar4 = TypeInfo__UnityEngine__Quaternion;
      func_?();
    }
    lhs.y = (float)pQVar4;
    lhs.x = (float)puVar3;
    lhs.z = fVar5;
    lhs.w = fVar6;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality
                      (lhs,yawRotation,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      return;
    }
    pLVar1 = (this->fields).headController;
    if (pLVar1 != (LimbController *)0x0) {
      LimbController::LimbController_ResetInterpolation(pLVar1,(MethodInfo *)0x0);
      pLVar1 = (this->fields).headController;
      if (pLVar1 != (LimbController *)0x0) {
        pQVar2 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                           ((Quaternion *)&stack0xffffffec,pLVar1,(MethodInfo *)0x0);
        LimbController::LimbController_SetNewRotation(pLVar1,yawRotation,*pQVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_StartEmote
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  fVar1 = (this->fields)._.lifeTime;
  pLVar2 = (this->fields).headController;
  (this->fields)._.isActive = 1;
  (this->fields)._.duration = fVar1;
  if (pLVar2 != (LimbController *)0x0) {
    LimbController::LimbController_set_InterpolationSpeed
              (pLVar2,(_UNK_? / fVar1) * _UNK_?,(MethodInfo *)0x0);
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      LimbController::LimbController_set_IsEventControllingLimb(pLVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_StopEmote
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields)._.OnEmoteEnd;
  (this->fields)._.duration = 0.0;
  (this->fields)._.isActive = 0;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(uint)(this->fields)._.emote,
               MethodInfo__System__Action<EmoteTypes>__Invoke_EmoteTypes_);
  }
  pLVar1 = (this->fields).headController;
  if (pLVar1 != (LimbController *)0x0) {
    LimbController::LimbController_set_InterpolationSpeed
              (pLVar1,(this->fields).originalInterpolationSpeed,(MethodInfo *)0x0);
    pLVar1 = (this->fields).headController;
    if (pLVar1 != (LimbController *)0x0) {
      LimbController::LimbController_set_IsEventControllingLimb(pLVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    if (0.0 <= fVar1) {
      AvatarLimbManager_AvatarShakeEmote_HandleRotation(this,(MethodInfo *)0x0);
      return;
    }
    (*(code *)(this->klass->vtable).StopEmote.method)(this,this->klass[1]._0.image);
  }
  return;
}

