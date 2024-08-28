
/* Single RotationWithInertia(Single) */

float Assembly-CSharp.dll::GhostBody::GhostBody_RotationWithInertia
                (GhostBody *this,float desiredAngularRotation,MethodInfo *method)

{
  fVar1 = (this->fields).currentAngularRotation;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 / (this->fields).timeBeforeTargetRotation;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  return (desiredAngularRotation - fVar1) * fVar2 + fVar1;
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
  fVar1 = (this->fields).currentAngularRotation;
  fVar2 = (this->fields).angularMaxRotation;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 / (this->fields).timeBeforeTargetRotation;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
  }
  (this->fields).currentAngularRotation = (fVar2 - fVar1) * fVar3 + fVar1;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  axis = TypeInfo__UnityEngine__Vector3->static_fields->upVector;
  fVar1 = (this->fields).currentAngularRotation;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (this_00,axis,fVar2 * fVar1 * _UNK_?,Space__Enum_Self,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GhostBody() */

void Assembly-CSharp.dll::GhostBody::GhostBody__ctor(GhostBody *this,MethodInfo *method)

{
  (this->fields).angularMaxRotationBase = 13.0;
  (this->fields).angularMaxRotation = 5.0;
  (this->fields).timeBeforeTargetRotation = 0.2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

