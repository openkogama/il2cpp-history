
/* Void Initialize(Transform) */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob_Initialize
               (FirstPersonWeaponBob *this,Transform *weapon,MethodInfo *method)

{
  (this->fields).weapon = weapon;
  if (weapon != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)(auStack_2 + 4),weapon,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->fields).weaponPosition.x = pVVar1->x;
    (this->fields).weaponPosition.y = fVar3;
    (this->fields).weaponPosition.z = fVar4;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)auStack_2,weapon,(MethodInfo *)0x0);
    fVar4 = pQVar5->y;
    fVar3 = pQVar5->z;
    fVar6 = pQVar5->w;
    (this->fields).weaponRotation.x = pQVar5->x;
    (this->fields).weaponRotation.y = fVar4;
    (this->fields).weaponRotation.z = fVar3;
    (this->fields).weaponRotation.w = fVar6;
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob_Update
               (FirstPersonWeaponBob *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Vertical,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar2 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
  pAVar3 = (this->fields).bob;
  fVar1 = ((float)(double)CONCAT44((uint)((ulonglong)(double)fVar2 >> 0x20) & _UNK_?,
                                    SUB84((double)fVar2,0) & _UNK_?) +
           (float)(double)CONCAT44((uint)((ulonglong)(double)fVar1 >> 0x20) & _UNK_?,
                                   SUB84((double)fVar1,0) & _UNK_?)) * _UNK_?;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pAVar3 != (AnimationCurve *)0x0) {
    uVar4._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (pAVar3,(this->fields).bobFrequency * _UNK_? * fVar2,
                             (MethodInfo *)0x0);
    pTVar5 = (this->fields).weapon;
    fVar6 = (this->fields).bobAxis.x;
    fVar7 = (this->fields).bobAxis.y;
    fVar2 = (this->fields).bobMultiplier;
    uVar4._0_4_ = (this->fields).bobAxis.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.y = fVar7;
    a.x = fVar6;
    a.z = (float)uVar4;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe0,a,fVar2 * uVar4._4_4_ * fVar1,
                        (MethodInfo *)0x0);
    uVar9 = pVVar8->y;
    fVar1 = 0.0;
    a_00.y = (float)uVar4;
    a_00.x = fVar7;
    a_00.z = (float)uVar9;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd0,a_00,*pVVar8,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar5,*pVVar8,(MethodInfo *)0x0);
      pAVar3 = (this->fields).rotation;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (pAVar3 != (AnimationCurve *)0x0) {
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar3,(this->fields).bobFrequency * _UNK_? * fVar2,
                            (MethodInfo *)0x0);
        fVar7 = (this->fields).weaponRotation.x;
        fVar11 = (this->fields).weaponRotation.y;
        fVar12 = (this->fields).weaponRotation.z;
        fVar13 = (this->fields).weaponRotation.w;
        uVar4._0_4_ = (this->fields).rotationAxis.x;
        uVar4._4_4_ = (this->fields).rotationAxis.y;
        pTVar5 = (this->fields).weapon;
        fVar2 = (this->fields).rotationMultiplier;
        fVar6 = (this->fields).rotationAxis.z;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?();
        }
        axis.z = fVar6;
        axis.x = (float)(int)uVar4;
        axis.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                           ((Quaternion *)&stack0xffffffcc,fVar2 * fVar10 * fVar1,axis,
                            (MethodInfo *)0x0);
        lhs.y = fVar11;
        lhs.x = fVar7;
        lhs.z = fVar12;
        lhs.w = fVar13;
        pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                           ((Quaternion *)&stack0xffffffcc,lhs,*pQVar14,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar5,*pQVar14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* FirstPersonWeaponBob() */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob__ctor
               (FirstPersonWeaponBob *this,MethodInfo *method)

{
  (this->fields).bobFrequency = 1.0;
  pIStack_1 = (Il2CppType *)0x0;
  uStack_2._0_4_ = (char *)0x0;
  uStack_2._4_4_ = (Il2CppClass *)0x0;
  func_?(&uStack_2,0,0x3f800000,0,0);
  pVVar3 = &(this->fields).bobAxis;
  pVVar3->x = (float)(char *)uStack_2;
  pVVar3->y = (float)uStack_2._4_4_;
  (this->fields).bobAxis.z = (float)pIStack_1;
  method_00 = (MethodInfo *)&uStack_4;
  uStack_4._0_4_ = (Il2CppMethodPointer)0x0;
  uStack_4._4_4_ = (Il2CppMethodPointer)0x0;
  pIStack_5 = (InvokerMethod)0x0;
  func_?(method_00,0,0x3f800000,0,0);
  pVVar6 = &(this->fields).rotationAxis;
  pVVar6->x = (float)(Il2CppMethodPointer)uStack_4;
  pVVar6->y = (float)uStack_4._4_4_;
  (this->fields).rotationAxis.z = (float)pIStack_5;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,method_00);
  func_?(pVVar3,0);
  func_?(pVVar6,0);
  return;
}

