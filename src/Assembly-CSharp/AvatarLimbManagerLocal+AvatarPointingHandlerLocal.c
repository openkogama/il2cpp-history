
/* Quaternion ApplyYawOffset(Quaternion) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,Quaternion newYawRotation,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  pQVar3 = &(this->fields).yawRotation;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  puVar7 = (undefined8 *)func_?(&QStack_2.y,pQVar3,0);
  uStack_8 = *(undefined4 *)(puVar7 + 1);
  uStack_9._4_4_ = (float)((ulonglong)*puVar7 >> 0x20);
  if (_UNK_? <= uStack_9._4_4_) {
    uStack_9 = *puVar7;
    puVar7 = (undefined8 *)func_?(&QStack_2.y,pQVar3);
    uStack_9._4_4_ = (float)((ulonglong)*puVar7 >> 0x20);
    if (uStack_9._4_4_ <= _UNK_?) {
      uVar10 = 0xc1f00000;
      goto code_?;
    }
  }
  uVar10 = 0x41a00000;
code_?:
  uStack_8 = 0;
  uStack_9 = 0;
  func_?(&uStack_9,0,uVar10,0);
  fVar11 = 0.0;
  func_?(&stack0xffffffd0,(int)uStack_9,(int)((ulonglong)uStack_9 >> 0x20),uStack_8);
  QStack_2.x = fVar11;
  QStack_2.y = fVar4;
  QStack_2.z = fVar5;
  QStack_2.w = fVar6;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  lhs.y = newYawRotation.y;
  lhs.x = newYawRotation.x;
  lhs.z = newYawRotation.z;
  lhs.w = newYawRotation.w;
  rhs.y = QStack_2.y;
  rhs.x = QStack_2.x;
  rhs.z = QStack_2.z;
  rhs.w = QStack_2.w;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     (&newYawRotation,lhs,rhs,(MethodInfo *)0x0);
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar6;
  return __return_storage_ptr__;
}


/* Void HandleResult(AvatarLimbManagerLocal+PointingRotationCalculationResult) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_HandleResult
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,
               AvatarLimbManagerLocal_PointingRotationCalculationResult result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  fStack_3 = pQVar1->x;
  fStack_4 = pQVar1->y;
  fStack_5 = pQVar1->z;
  fStack_6 = pQVar1->w;
  pQVar1 = &(this->fields).yawRotation;
  puVar7 = (undefined8 *)func_?(auStack_8,pQVar1,0);
  uStack_9 = *(undefined4 *)(puVar7 + 1);
  uStack_10._4_4_ = (float)((ulonglong)*puVar7 >> 0x20);
  if (_UNK_? <= uStack_10._4_4_) {
    uStack_10 = *puVar7;
    puVar7 = (undefined8 *)func_?(auStack_11,pQVar1,0);
    uStack_9 = *(undefined4 *)(puVar7 + 1);
    uStack_10._4_4_ = (float)((ulonglong)*puVar7 >> 0x20);
    if (uStack_10._4_4_ <= _UNK_?) {
      uStack_12 = 0;
      uStack_13 = 0;
      uStack_10 = *puVar7;
      func_?(&uStack_13,0,0xc1f00000,0,0);
      uVar14 = uStack_12;
      uVar15 = uStack_13;
      goto code_?;
    }
  }
  uStack_9 = 0;
  uStack_10 = 0;
  func_?(&uStack_10,0,0x41a00000,0,0);
  uVar14 = uStack_9;
  uVar15 = uStack_10;
code_?:
  func_?(&fStack_3,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar14,0);
  QStack_16.x = fStack_3;
  QStack_16.y = fStack_4;
  QStack_16.z = fStack_5;
  QStack_16.w = fStack_6;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  rhs.y = QStack_16.y;
  rhs.x = QStack_16.x;
  rhs.z = QStack_16.z;
  rhs.w = QStack_16.w;
  pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     (&QStack_16,result.YawRotation,rhs,(MethodInfo *)0x0);
  fVar18 = pQVar17->x;
  fVar19 = pQVar17->y;
  fVar20 = pQVar17->z;
  fVar21 = pQVar17->w;
  (this->fields)._.shouldPoint = result.ShouldPoint;
  pQVar1->x = fVar18;
  (this->fields).yawRotation.y = fVar19;
  (this->fields).yawRotation.z = fVar20;
  (this->fields).yawRotation.w = fVar21;
  (this->fields).pitchRotation.x = result.PitchRotation.x;
  (this->fields).pitchRotation.y = result.PitchRotation.y;
  (this->fields).pitchRotation.z = result.PitchRotation.z;
  (this->fields).pitchRotation.w = result.PitchRotation.w;
  return;
}


/* Void ResetNetworkMessageDelay(Single) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ResetNetworkMessageDelay
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,float networkMessageDelay,
               MethodInfo *method)

{
  (this->fields).networkMessageCooldown = networkMessageDelay;
  return;
}


/* Void StartPointing() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal_StartPointing
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.prevLookDirection.x;
    fVar2 = (this->fields)._.prevLookDirection.y;
    (this->fields)._.elapsedPointingTime = (this->fields)._.pointingDuration;
    fVar3 = (this->fields)._.prevLookDirection.z;
    (this->fields)._.pointingDirection.x = fVar1;
    (this->fields)._.pointingDirection.y = fVar2;
    (this->fields)._.pointingDirection.z = fVar3;
    this_00 = (Action_1_UIPushOption_ *)(this->fields).OnIsPointingChange;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,UIPushOption__Enum_Blocking,MethodInfo__System__Action<bool>__Invoke_bool_)
      ;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).networkMessageCooldown;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  (this->fields).networkMessageCooldown = fVar1;
  if (fVar1 <= 0.0) {
    this_00 = (Action_1_UnityEngine_Vector4_ *)(this->fields).OnUpdatePointingValue;
    if (this_00 != (Action_1_UnityEngine_Vector4_ *)0x0) {
      if ((this->fields)._.shouldPoint == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                           (&QStack_4,(MethodInfo *)0x0);
        if (this_00 == (Action_1_UnityEngine_Vector4_ *)0x0) {
          func_?(0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        rotation.x = pQVar3->x;
        rotation.y = pQVar3->y;
        rotation.z = pQVar3->z;
        rotation.w = pQVar3->w;
      }
      obj.y = rotation.y;
      obj.x = rotation.x;
      obj.z = rotation.z;
      obj.w = rotation.w;
      mscorlib.dll::System::Action`1[UnityEngine::Vector4]::Action_1_UnityEngine_Vector4__Invoke
                (this_00,obj,
                 MethodInfo__System__Action<UnityEngine::Quaternion>__Invoke_UnityEngine__Quaternion_
                );
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (_UNK_? < (this->fields)._.elapsedPointingTime) {
    fVar1 = (this->fields).yawRotation.x;
    fVar2 = (this->fields).yawRotation.y;
    fVar3 = (this->fields).yawRotation.z;
    fVar4 = (this->fields).yawRotation.w;
    fStack_5 = (this->fields).pitchRotation.x;
    fStack_6 = (this->fields).pitchRotation.y;
    puStack_7 = (undefined *)(this->fields).pitchRotation.z;
    fVar8 = (this->fields).pitchRotation.w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    lhs.y = fVar2;
    lhs.x = fVar1;
    lhs.z = fVar3;
    lhs.w = fVar4;
    rhs.y = fStack_6;
    rhs.x = fStack_5;
    rhs.z = (float)puStack_7;
    rhs.w = fVar8;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&fStack_5,lhs,rhs,(MethodInfo *)0x0);
    fStack_5 = pQVar9->x;
    fStack_6 = pQVar9->y;
    puStack_7 = (undefined *)pQVar9->z;
    fVar8 = pQVar9->w;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar1 = (this->fields).networkMessageCooldown;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields).networkMessageCooldown = fVar1;
    if (fVar1 <= 0.0) {
      pAVar10 = (Action_1_UnityEngine_Vector4_ *)(this->fields).OnUpdatePointingValue;
      if (pAVar10 != (Action_1_UnityEngine_Vector4_ *)0x0) {
        fVar1 = fStack_5;
        fVar2 = fStack_6;
        puVar11 = puStack_7;
        if ((this->fields)._.shouldPoint == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                             ((Quaternion *)&fStack_5,(MethodInfo *)0x0);
          if (pAVar10 == (Action_1_UnityEngine_Vector4_ *)0x0) goto code_?;
          fVar8 = pQVar9->w;
          fVar1 = pQVar9->x;
          fVar2 = pQVar9->y;
          puVar11 = (undefined *)pQVar9->z;
        }
        obj.y = fVar2;
        obj.x = fVar1;
        obj.z = (float)puVar11;
        obj.w = fVar8;
        mscorlib.dll::System::Action`1[UnityEngine::Vector4]::Action_1_UnityEngine_Vector4__Invoke
                  (pAVar10,obj,
                   MethodInfo__System__Action<UnityEngine::Quaternion>__Invoke_UnityEngine__Quaternion_
                  );
      }
      (this->fields).networkMessageCooldown = (this->fields)._.pointingDuration;
    }
    if ((this->fields)._.shouldPoint == 0) {
      localLookDirection.z = (float)this;
      localLookDirection.y = (float)&UNK_?;
      AvatarLimbManager+AvatarPointingHandler::AvatarLimbManager_AvatarPointingHandler_StopPointing
                ((AvatarLimbManager_AvatarPointingHandler *)this,(MethodInfo *)0x0);
    }
    else {
      localLookDirection.x = (this->fields).pitchRotation.y;
      localLookDirection.y = (this->fields).pitchRotation.z;
      localLookDirection.z = (this->fields).pitchRotation.w;
      AvatarLimbManager+AvatarPointingHandler::
      AvatarLimbManager_AvatarPointingHandler_HandlePointing
                ((AvatarLimbManager_AvatarPointingHandler *)this,(this->fields).yawRotation,
                 (this->fields).pitchRotation,(MethodInfo *)0x0);
    }
  }
  else {
    pAVar10 = (Action_1_UnityEngine_Vector4_ *)(this->fields).OnUpdatePointingValue;
    if (pAVar10 != (Action_1_UnityEngine_Vector4_ *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)&fStack_5,(MethodInfo *)0x0);
      if (pAVar10 == (Action_1_UnityEngine_Vector4_ *)0x0) {
code_?:
        func_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      obj_00.x = pQVar9->x;
      obj_00.y = pQVar9->y;
      obj_00.z = pQVar9->z;
      obj_00.w = pQVar9->w;
      mscorlib.dll::System::Action`1[UnityEngine::Vector4]::Action_1_UnityEngine_Vector4__Invoke
                (pAVar10,obj_00,
                 MethodInfo__System__Action<UnityEngine::Quaternion>__Invoke_UnityEngine__Quaternion_
                );
    }
    this_00 = (Action_1_UIPushOption_ *)(this->fields).OnIsPointingChange;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,UIPushOption__Enum_None,MethodInfo__System__Action<bool>__Invoke_bool_);
    }
  }
  fVar8 = (this->fields)._.elapsedPointingTime;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (this->fields)._.prevLookDirection.x = localLookDirection.x;
  (this->fields)._.prevLookDirection.y = localLookDirection.y;
  (this->fields)._.elapsedPointingTime = fVar8 - fVar1;
  (this->fields)._.prevLookDirection.z = localLookDirection.z;
  return;
}


/* AvatarLimbManagerLocal+AvatarPointingHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
     AvatarLimbManagerLocal_AvatarPointingHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  (this->fields).yawRotation.x = pQVar1->x;
  (this->fields).yawRotation.y = fVar3;
  (this->fields).yawRotation.z = fVar4;
  (this->fields).yawRotation.w = fVar5;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  (this->fields)._.pointingDuration = 0.8;
  (this->fields)._.shouldPoint = 1;
  (this->fields)._.isActive = 1;
  (this->fields).pitchRotation.x = fVar3;
  (this->fields).pitchRotation.y = fVar4;
  (this->fields).pitchRotation.z = fVar5;
  (this->fields).pitchRotation.w = fVar6;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  return;
}

