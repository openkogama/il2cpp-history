
/* Quaternion GetEyeRollRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetEyeRollRotation
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  uVar2._4_4_ = _UNK_?;
  fVar1 = (this->fields)._.direction * fVar1 * (this->fields)._.rotatationPrSecond * _UNK_? +
          (this->fields)._.wrappedTime;
  (this->fields)._.wrappedTime = fVar1;
  uVar2._0_4_ = _UNK_?;
  while (_UNK_? = (float)uVar2, uVar2._4_4_ <= fVar1) {
    fVar1 = (this->fields)._.wrappedTime - uVar2._4_4_;
    (this->fields)._.wrappedTime = fVar1;
    uVar2._0_4_ = _UNK_?;
  }
  while (fVar1 < (float)uVar2) {
    fVar1 = (this->fields)._.wrappedTime + uVar2._4_4_;
    (this->fields)._.wrappedTime = fVar1;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._.radiusPitch;
  uVar2._0_4_ = (this->fields)._.wrappedTime;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar3 = (double)(float)uVar2;
  func_?();
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  uVar2._0_4_ = pVVar4->x;
  uVar2._4_4_ = pVVar4->y;
  fVar5 = pVVar4->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  axis.z = fVar5;
  axis.x = (float)(int)uVar2;
  axis.y = (float)(int)((ulonglong)uVar2 >> 0x20);
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,(float)dVar3 * fVar1,axis,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pQVar6->x;
  fVar1 = pQVar6->y;
  uVar2._0_4_ = pQVar6->z;
  uVar2._4_4_ = pQVar6->w;
  pQVar6 = GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation
                     ((Quaternion *)&stack0xffffffec,(GhostEye_IdleBase *)this,method_00);
  fVar5 = pQVar6->x;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  lhs.y = (float)method_00;
  lhs.x = fVar5;
  lhs.z = fVar1;
  lhs.w = (float)uVar2;
  rhs.y = fVar1;
  rhs.x = (float)method_00;
  rhs.z = (float)uVar2;
  rhs.w = uVar2._4_4_;
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                     ((Quaternion *)&stack0xffffffdc,lhs,rhs,(MethodInfo *)0x0);
  fVar1 = pQVar6->y;
  uVar2._0_4_ = pQVar6->z;
  uVar2._4_4_ = pQVar6->w;
  __return_storage_ptr__->x = pQVar6->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = (float)uVar2;
  __return_storage_ptr__->w = uVar2._4_4_;
  return __return_storage_ptr__;
}


/* Single GetPitch() */

float Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitch
                (GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._.radiusPitch;
  fVar2 = (this->fields)._.wrappedTime;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar3 = (double)fVar2;
  func_?();
  return (float)dVar3 * fVar1;
}


/* Quaternion GetPitchRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitchRotation
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1._4_4_ = (this->fields)._.radiusPitch;
  fVar2 = (this->fields)._.wrappedTime;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar3 = (double)fVar2;
  func_?();
  fVar2 = (float)dVar3 * uStack_1._4_4_;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     (&VStack_5,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar4->x;
  uStack_1._4_4_ = pVVar4->y;
  fVar6 = pVVar4->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  axis.z = fVar6;
  axis.x = (float)(undefined4)uStack_1;
  axis.y = uStack_1._4_4_;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffe4,fVar2,axis,(MethodInfo *)0x0);
  fVar2 = pQVar7->y;
  fVar6 = pQVar7->z;
  fVar8 = pQVar7->w;
  __return_storage_ptr__->x = pQVar7->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar6;
  __return_storage_ptr__->w = fVar8;
  return __return_storage_ptr__;
}


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_Update
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  pQVar1 = GhostEye_RandomEyeRoll_GetEyeRollRotation(&QStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}

