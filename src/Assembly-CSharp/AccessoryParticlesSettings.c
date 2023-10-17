
/* AccessoryParticlesSettings() */

void Assembly-CSharp.dll::AccessoryParticlesSettings::AccessoryParticlesSettings__ctor
               (AccessoryParticlesSettings *this,MethodInfo *method)

{
  (this->fields).useEmissionMovement = 1;
  (this->fields).EmitRateNormal = 4.0;
  (this->fields).EmitRateMoving = 10.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

