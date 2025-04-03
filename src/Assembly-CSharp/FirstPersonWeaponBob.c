
/* Void Initialize(Transform) */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob_Initialize
               (FirstPersonWeaponBob *this,Transform *weapon,MethodInfo *method)

{
  ppTVar1 = &(this->fields).weapon;
  *ppTVar1 = weapon;
  func_?(ppTVar1,weapon);
  if (weapon != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)(auStack_3 + 4),weapon,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    (this->fields).weaponPosition.x = pVVar2->x;
    (this->fields).weaponPosition.y = fVar4;
    (this->fields).weaponPosition.z = fVar5;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)auStack_3,weapon,(MethodInfo *)0x0);
    fVar5 = pQVar6->y;
    fVar4 = pQVar6->z;
    fVar7 = pQVar6->w;
    (this->fields).weaponRotation.x = pQVar6->x;
    (this->fields).weaponRotation.y = fVar5;
    (this->fields).weaponRotation.z = fVar4;
    (this->fields).weaponRotation.w = fVar7;
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob_Update
               (FirstPersonWeaponBob *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Vertical);
    func_?(&StringLiteral_Horizontal);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Vertical,(MethodInfo *)0x0);
  fVar1 = (float)((uint)fVar1 & _UNK_?);
  fVar2 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
  pAVar3 = (this->fields).bob;
  fVar1 = ((float)((uint)fVar2 & _UNK_?) + fVar1) * _UNK_?;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pAVar3 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar3,(this->fields).bobFrequency * _UNK_? * fVar2,(MethodInfo *)0x0)
    ;
    uVar4 = (this->fields).weaponPosition.x;
    uVar5 = (this->fields).weaponPosition.y;
    pTVar6 = (this->fields).weapon;
    uVar7 = (this->fields).bobAxis.x;
    uVar8 = (this->fields).bobAxis.y;
    fVar2 = fVar2 * (this->fields).bobMultiplier * fVar1;
    if (pTVar6 != (Transform *)0x0) {
      value.y = (float)uVar5 + (float)uVar8 * fVar2;
      value.x = (float)uVar4 + (float)uVar7 * fVar2;
      value.z = (this->fields).weaponPosition.z + (this->fields).bobAxis.z * fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar6,value,(MethodInfo *)0x0);
      pAVar3 = (this->fields).rotation;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (pAVar3 != (AnimationCurve *)0x0) {
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar3,(this->fields).bobFrequency * _UNK_? * fVar2,
                           (MethodInfo *)0x0);
        fVar9 = (this->fields).rotationAxis.z;
        pTVar6 = (this->fields).weapon;
        fVar1 = fVar2 * (this->fields).rotationMultiplier * fVar1;
        pVVar10 = &(this->fields).rotationAxis;
        fVar2 = pVVar10->x;
        fVar11 = pVVar10->y;
        pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                            ((Quaternion *)&stack0xffffffa0,fVar1,*pVVar10,(MethodInfo *)0x0);
        fVar13 = pQVar12->y;
        fVar14 = pQVar12->z;
        fVar15 = pQVar12->w;
        if (pTVar6 != (Transform *)0x0) {
          value_00.y = (fVar2 * fVar15 + fVar13 * fVar9 + fVar11 * pQVar12->x) - fVar14 * fVar1;
          value_00.x = (fVar15 * fVar1 + pQVar12->x * fVar9 + fVar14 * fVar2) - fVar13 * fVar11;
          value_00.z = (fVar11 * fVar15 + fVar14 * fVar9 + fVar13 * fVar1) - fVar2 * pQVar12->x;
          value_00.w = ((fVar15 * fVar9 - fVar1 * pQVar12->x) - fVar13 * fVar2) - fVar11 * fVar14;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar6,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* FirstPersonWeaponBob() */

void Assembly-CSharp.dll::FirstPersonWeaponBob::FirstPersonWeaponBob__ctor
               (FirstPersonWeaponBob *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  this_00 = &(this->fields).bobAxis;
  this_01 = &(this->fields).rotationAxis;
  uVar2 = (ulonglong)_UNK_?;
  this_00->x = (float)(int)(uVar2 << 0x20);
  this_00->y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).bobAxis.z = 0.0;
  this_01->x = (float)(int)((ulonglong)uVar1 << 0x20);
  this_01->y = (float)(int)(((ulonglong)uVar1 << 0x20) >> 0x20);
  (this->fields).bobFrequency = 1.0;
  (this->fields).rotationAxis.z = 0.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(this_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(this_01,(MethodInfo *)0x0);
  return;
}

