
/* Void SetScaleFadeDistance(Single) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::
     AvatarCameraDistTransparency_SetScaleFadeDistance
               (AvatarCameraDistTransparency *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).camMoveTowardsOffset.z;
  (this->fields).fadeEndDistance = (this->fields).fadeEndBase * scale;
  (this->fields).fadeStartDistance = (this->fields).fadeStartBase * scale;
  VStack_2.y = (this->fields).camMoveTowardsOffset.x;
  VStack_2.z = (this->fields).camMoveTowardsOffset.y;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar1;
  a.x = VStack_2.y;
  a.y = VStack_2.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_2,a,scale,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar1 = pVVar3->z;
  (this->fields).camMoveTowardsOffset.x = pVVar3->x;
  (this->fields).camMoveTowardsOffset.y = fVar4;
  (this->fields).camMoveTowardsOffset.z = fVar1;
  return;
}


/* Void Update(MVAvatarLocal) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
               (AvatarCameraDistTransparency *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
        (this_01 = (PrefabPool *)
                   MVAvatar::MVAvatar_get_Body((MVAvatar *)avatarLocal,(MethodInfo *)0x0),
        this_01 != (PrefabPool *)0x0)) &&
       (this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_01,(MethodInfo *)0x0),
       this_02 != (MVPointLightObject *)0x0)) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffdc,(Transform *)this_02,(MethodInfo *)0x0);
      uVar4._0_4_ = pVVar3->x;
      uVar4._4_4_ = pVVar3->y;
      uVar5._0_4_ = (this->fields).camMoveTowardsOffset.x;
      uVar5._4_4_ = (this->fields).camMoveTowardsOffset.y;
      puVar6 = (undefined *)(this->fields).camMoveTowardsOffset.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        puVar6 = &UNK_?;
        func_?();
      }
      a_00.z = (float)((ulonglong)uVar5 >> 0x20);
      a_00.x = (float)(int)uVar4;
      a_00.y = (float)(int)((ulonglong)uVar4 >> 0x20);
      b.z = (float)puVar6;
      b.x = (float)(int)uVar5;
      b.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a_00,b,(MethodInfo *)0x0);
      fVar7 = pVVar3->x;
      fVar8 = pVVar3->y;
      uVar4._0_4_ = pVVar3->z;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_03 != (MainCameraManager *)0x0) &&
         (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_03,(MethodInfo *)0x0),
         this_04 != (Transform *)0x0)) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe8,this_04,(MethodInfo *)0x0);
        a.y = fVar8;
        a.x = fVar7;
        a.z = (float)uVar4;
        uVar5._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                                (a,*pVVar3,(MethodInfo *)0x0);
        uVar4._0_4_ = (this->fields).prevDist;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        if ((float)(double)CONCAT44((uint)((ulonglong)(double)((float)uVar5 - (float)uVar4) >> 0x20)
                                    & _UNK_?,
                                    SUB84((double)((float)uVar5 - (float)uVar4),0) & _UNK_?)
            <= _UNK_?) {
          return;
        }
        uVar4._0_4_ = (this->fields).fadeEndDistance;
        uVar4._4_4_ = (this->fields).fadeStartDistance;
        (this->fields).prevDist = (float)uVar5;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        uVar4._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                (((float)uVar5 - (float)uVar4) / (uVar4._4_4_ - (float)uVar4),
                                 (MethodInfo *)0x0);
        MVAvatar::MVAvatar_set_SetTransparency
                  ((MVAvatar *)avatarLocal,(float)uVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* AvatarCameraDistTransparency(Vector3, Single, Single) */

void Assembly-CSharp.dll::AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
               (AvatarCameraDistTransparency *this,Vector3 camMoveTowardsOffset,
               float fadeStartDistance,float fadeEndDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).camMoveTowardsOffset.x = pVVar1->x;
  (this->fields).camMoveTowardsOffset.y = fVar3;
  (this->fields).camMoveTowardsOffset.z = fVar4;
  (this->fields).fadeStartDistance = 4.0;
  (this->fields).fadeEndDistance = 2.0;
  (this->fields).fadeStartBase = 4.0;
  (this->fields).fadeEndBase = 2.0;
  (this->fields).prevDist = -1.0;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).camMoveTowardsOffset.x = camMoveTowardsOffset.x;
  (this->fields).camMoveTowardsOffset.y = camMoveTowardsOffset.y;
  (this->fields).fadeStartDistance = fadeStartDistance;
  (this->fields).camMoveTowardsOffset.z = camMoveTowardsOffset.z;
  (this->fields).fadeEndDistance = fadeEndDistance;
  return;
}

