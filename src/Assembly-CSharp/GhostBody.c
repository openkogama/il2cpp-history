
/* Single RotationWithInertia(Single) */

float Assembly-CSharp.dll::GhostBody::GhostBody_RotationWithInertia
                (GhostBody *this,float desiredAngularRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = (this->fields).timeBeforeTargetRotation;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (0.0,desiredAngularRotation,fVar1 / fVar2,(MethodInfo *)0x0);
  return fVar2;
}


/* Void SetRotationSpeed(Single) */

void Assembly-CSharp.dll::GhostBody::GhostBody_SetRotationSpeed
               (GhostBody *this,float rotationSpeed,MethodInfo *method)

{
  (this->fields).angularMaxRotation = (this->fields).angularMaxRotationBase * rotationSpeed;
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::GhostBody::GhostBody_UpdateRotation(GhostBody *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).angularMaxRotation;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = (this->fields).currentAngularRotation;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = (this->fields).timeBeforeTargetRotation;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (fVar2,fVar1,fVar3 / fVar4,(MethodInfo *)0x0);
  (this->fields).currentAngularRotation = fVar1;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  fVar1 = pVVar5->z;
  method_00 = (MethodInfo *)(this->fields).currentAngularRotation;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
  if (this_00 != (Transform *)0x0) {
    fVar2 = fVar2 * (float)method_00 * _UNK_?;
    axis.y = 1.4013e-45;
    axis.x = fVar2;
    axis.z = fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (this_00,axis,fVar2,Space__Enum_Self,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GhostBody() */

void Assembly-CSharp.dll::GhostBody::GhostBody__ctor(GhostBody *this,MethodInfo *method)

{
  (this->fields).angularMaxRotationBase = 13.0;
  (this->fields).angularMaxRotation = 5.0;
  (this->fields).timeBeforeTargetRotation = 0.2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

