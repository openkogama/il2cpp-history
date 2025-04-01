
/* Void CheckAvatarRotation() */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_CheckAvatarRotation
               (AvatarLimbManager *this,MethodInfo *method)

{
  pAVar1 = this;
  pMVar2 = (this->fields).avatarWO;
  if ((pMVar2 != (MVWorldObjectClient *)0x0) &&
     (pTVar3 = (pMVar2->fields).transform, pTVar3 != (Transform *)0x0)) {
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_5,pTVar3,(MethodInfo *)0x0);
    QStack_5.x = pQVar4->x;
    QStack_5.y = pQVar4->y;
    QStack_5.z = pQVar4->z;
    QStack_5.w = pQVar4->w;
    iVar6 = func_?(auStack_7,&QStack_5,0);
    this = *(AvatarLimbManager **)(iVar6 + 4);
    if (_UNK_? < (float)this) {
      this = (AvatarLimbManager *)(_UNK_? - ((float)this - _UNK_?));
    }
    QStack_5.y = 0.0;
    QStack_5.x = (float)&(pAVar1->fields).previousTransformRotation;
    iVar6 = func_?(auStack_7);
    fVar8 = *(float *)(iVar6 + 4);
    if (_UNK_? < fVar8) {
      fVar8 = _UNK_? - (fVar8 - _UNK_?);
    }
    if ((_UNK_? < (float)((uint)((float)this - fVar8) & _UNK_?)) &&
       ((pAVar1->fields).OnAvatarRotate != (Action *)0x0)) {
      pAVar9 = (pAVar1->fields).OnAvatarRotate;
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,(pAVar9->fields)._._.method);
    }
    pMVar2 = (pAVar1->fields).avatarWO;
    if ((pMVar2 != (MVWorldObjectClient *)0x0) &&
       (pTVar3 = (pMVar2->fields).transform, pTVar3 != (Transform *)0x0)) {
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (&QStack_5,pTVar3,(MethodInfo *)0x0);
      fVar8 = pQVar4->y;
      fVar10 = pQVar4->z;
      fVar11 = pQVar4->w;
      (pAVar1->fields).previousTransformRotation.x = pQVar4->x;
      (pAVar1->fields).previousTransformRotation.y = fVar8;
      (pAVar1->fields).previousTransformRotation.z = fVar10;
      (pAVar1->fields).previousTransformRotation.w = fVar11;
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_Initialize
               (AvatarLimbManager *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler);
    func_?(&TypeInfo__AvatarLimbManager__LimbRotator);
    cRam_? = '\x01';
  }
  (this->fields).avatarWO = avatarWO;
  func_?(&(this->fields).avatarWO,avatarWO);
  method_00 = TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler;
  pAVar1 = (AvatarLimbManager_AvatarLookDirectionHandler *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pAVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).lookDirectionHandler = pAVar1;
  func_?(&(this->fields).lookDirectionHandler,pAVar1);
  pAVar1 = (this->fields).lookDirectionHandler;
  if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    (pAVar1->fields).avatarWO = avatarWO;
    func_?(&(pAVar1->fields).avatarWO,avatarWO);
    method_01 = TypeInfo__AvatarLimbManager__LimbRotator;
    pAVar2 = (AvatarLimbManager_LimbRotator *)func_?();
    (pAVar2->fields).isActive = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pAVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (this->fields).limbRotator = pAVar2;
    func_?(&(this->fields).limbRotator,pAVar2);
    pAVar2 = (this->fields).limbRotator;
    if (pAVar2 != (AvatarLimbManager_LimbRotator *)0x0) {
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_Initialize
                (pAVar2,avatarWO,body,this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single QuaternionAngleToNormalAngle(Single) */

float Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_QuaternionAngleToNormalAngle
                (AvatarLimbManager *this,float angle,MethodInfo *method)

{
  if (_UNK_? < angle) {
    angle = _UNK_? - (angle - _UNK_?);
  }
  return angle;
}


/* Void SetLimbRotatorActivity(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_SetLimbRotatorActivity
               (AvatarLimbManager *this,bool shouldBeActive,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).limbRotator;
  if (pAVar2 != (AvatarLimbManager_LimbRotator *)0x0) {
    (pAVar2->fields).isActive = shouldBeActive;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateLimbRotations(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_UpdateLimbRotations
               (AvatarLimbManager *this,Vector3 lookDirection,MethodInfo *method)

{
  this_00 = (this->fields).lookDirectionHandler;
  if (this_00 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    AvatarLimbManager+AvatarLookDirectionHandler::
    AvatarLimbManager_AvatarLookDirectionHandler_Update(this_00,lookDirection,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

