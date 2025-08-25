
/* Void Awake() */

void Assembly-CSharp.dll::RotateUIElement::RotateUIElement_Awake
               (RotateUIElement *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    fVar2 = pQVar1->y;
    fVar3 = pQVar1->z;
    fVar4 = pQVar1->w;
    (this->fields).originalRotation.x = pQVar1->x;
    (this->fields).originalRotation.y = fVar2;
    (this->fields).originalRotation.z = fVar3;
    (this->fields).originalRotation.w = fVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::RotateUIElement::RotateUIElement_Update
               (RotateUIElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if (_UNK_? < (this->fields).resettingTimestamp) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime((MethodInfo *)0x0);
    fVar1 = fVar1 - (this->fields).resettingTimestamp;
    pfVar2 = &(this->fields).repeatRotationTimeOffset;
    if (fVar1 < *pfVar2 || fVar1 == *pfVar2) {
      return;
    }
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar3,(this->fields).originalRotation,(MethodInfo *)0x0);
    (this->fields).resettingTimestamp = -1.0;
  }
  if ((this->fields).repeatRotationFromAngle != 0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_ToEulerRad
                       ((Vector3 *)&stack0xffffffe0,*pQVar4,(MethodInfo *)0x0);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    euler.y = (float)uVar7 * _UNK_?;
    euler.x = (float)uVar6 * _UNK_?;
    euler.z = pVVar5->z * _UNK_?;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_MakePositive
                       ((Vector3 *)&stack0xffffffe0,euler,(MethodInfo *)0x0);
    pfVar2 = &(this->fields).resetRotationAtAngle;
    if (*pfVar2 <= pVVar5->z && pVVar5->z != *pfVar2) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime((MethodInfo *)0x0)
      ;
      (this->fields).resettingTimestamp = fVar1;
      return;
    }
  }
  fVar1 = (this->fields).rotationSpeed;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar8 = fVar8 * fVar1;
  fVar1 = (this->fields).lastRotationUpdate;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  if ((double)(float)((uint)(fVar8 - fVar1) & _UNK_?) <= _UNK_?) {
    return;
  }
  (this->fields).lastRotationUpdate = fVar8;
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (pTVar3 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,fVar8,
               Space__Enum_World,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* RotateUIElement() */

void Assembly-CSharp.dll::RotateUIElement::RotateUIElement__ctor
               (RotateUIElement *this,MethodInfo *method)

{
  (this->fields).rotationSpeed = 360.0;
  (this->fields).repeatRotationTimeOffset = 0.4;
  (this->fields).lastRotationUpdate = -100.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

