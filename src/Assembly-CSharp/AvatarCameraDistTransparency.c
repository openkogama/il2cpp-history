
/* Void SetScaleFadeDistance(Single) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::
     AvatarCameraDistTransparency_SetScaleFadeDistance
               (AvatarCameraDistTransparency *this,float scale,MethodInfo *method)

{
  fVar1 = (this->fields).camMoveTowardsOffset.z;
  (this->fields).fadeEndDistance = (this->fields).fadeEndBase * scale;
  (this->fields).fadeStartDistance = (this->fields).fadeStartBase * scale;
  uVar2 = (this->fields).camMoveTowardsOffset.x;
  uVar3 = (this->fields).camMoveTowardsOffset.y;
  (this->fields).camMoveTowardsOffset.x = (float)uVar2 * scale;
  (this->fields).camMoveTowardsOffset.y = (float)uVar3 * scale;
  (this->fields).camMoveTowardsOffset.z = fVar1 * scale;
  return;
}


/* Void Update(MVAvatarLocal) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
               (AvatarCameraDistTransparency *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
     this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
    bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    if (((avatarLocal != (MVAvatarLocal *)0x0) &&
        (pMVar3 = (avatarLocal->fields)._.body, pMVar3 != (MVBody *)0x0)) &&
       (pTVar4 = (pMVar3->fields)._._._.transform, pTVar4 != (Transform *)0x0)) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,pTVar4,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_01 != (MainCameraManager *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0))
      {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0x00000000,pTVar4,(MethodInfo *)0x0);
        fStack7 = pVVar5->x;
        fStack8 = pVVar5->y;
        fStack9 = pVVar5->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar10 = (float)this - fStack7;
        fVar11 = unaff_retaddr - fStack8;
        fVar12 = (float)uVar6 - fStack9;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        dVar13 = (double)(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12);
        if (dVar13 < 0.0) {
          func_?();
        }
        else {
          dVar13 = SQRT(dVar13);
        }
        fVar11 = (float)dVar13;
        if ((float)((uint)(fVar11 - (this->fields).prevDist) & _UNK_?) <= _UNK_?) {
          return;
        }
        (this->fields).prevDist = fVar11;
        fVar11 = (fVar11 - (this->fields).fadeEndDistance) /
                ((this->fields).fadeStartDistance - (this->fields).fadeEndDistance);
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (_UNK_? < fVar11) {
          fVar11 = _UNK_?;
        }
        MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)avatarLocal,fVar11,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* AvatarCameraDistTransparency(Vector3, Single, Single) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
               (AvatarCameraDistTransparency *this,Vector3 camMoveTowardsOffset,
               float fadeStartDistance,float fadeEndDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).camMoveTowardsOffset.x = (pVVar1->zeroVector).x;
  (this->fields).camMoveTowardsOffset.y = fVar2;
  (this->fields).camMoveTowardsOffset.z = fVar3;
  (this->fields).fadeStartDistance = 4.0;
  (this->fields).fadeEndDistance = 2.0;
  (this->fields).fadeStartBase = 4.0;
  (this->fields).fadeEndBase = 2.0;
  (this->fields).prevDist = -1.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).camMoveTowardsOffset.x = camMoveTowardsOffset.x;
  (this->fields).camMoveTowardsOffset.y = camMoveTowardsOffset.y;
  (this->fields).fadeStartDistance = fadeStartDistance;
  (this->fields).camMoveTowardsOffset.z = camMoveTowardsOffset.z;
  (this->fields).fadeEndDistance = fadeEndDistance;
  return;
}

