
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
    QStack_5.x = 0.0;
    pQVar4 = &(pAVar1->fields).previousTransformRotation;
    iVar6 = func_?(auStack_7,pQVar4);
    fVar8 = *(float *)(iVar6 + 4);
    if (_UNK_? < fVar8) {
      fVar8 = _UNK_? - (fVar8 - _UNK_?);
    }
    if ((_UNK_? < (float)((uint)((float)this - fVar8) & _UNK_?)) &&
       (pAVar9 = (pAVar1->fields).OnAvatarRotate, pAVar9 != (Action *)0x0)) {
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,(pAVar9->fields)._._.method);
    }
    pMVar2 = (pAVar1->fields).avatarWO;
    if ((pMVar2 != (MVWorldObjectClient *)0x0) &&
       (pTVar3 = (pMVar2->fields).transform, pTVar3 != (Transform *)0x0)) {
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          (&QStack_5,pTVar3,(MethodInfo *)0x0);
      fVar8 = pQVar10->y;
      fVar11 = pQVar10->z;
      fVar12 = pQVar10->w;
      pQVar4->x = pQVar10->x;
      (pAVar1->fields).previousTransformRotation.y = fVar8;
      (pAVar1->fields).previousTransformRotation.z = fVar11;
      (pAVar1->fields).previousTransformRotation.w = fVar12;
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  ppMVar1 = &(this->fields).avatarWO;
  *ppMVar1 = avatarWO;
  func_?(ppMVar1,avatarWO);
  method_00 = TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler;
  value = (AvatarLimbManager_AvatarLookDirectionHandler *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  ppAVar2 = &(this->fields).lookDirectionHandler;
  *ppAVar2 = value;
  func_?(ppAVar2,value);
  if (*ppAVar2 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    ppMVar1 = &((*ppAVar2)->fields).avatarWO;
    *ppMVar1 = avatarWO;
    func_?(ppMVar1,avatarWO);
    method_01 = TypeInfo__AvatarLimbManager__LimbRotator;
    value_00 = (AvatarLimbManager_LimbRotator *)func_?();
    (value_00->fields).isActive = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    ppAVar3 = &(this->fields).limbRotator;
    *ppAVar3 = value_00;
    func_?(ppAVar3,value_00);
    if (*ppAVar3 != (AvatarLimbManager_LimbRotator *)0x0) {
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_Initialize
                (*ppAVar3,avatarWO,body,this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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

