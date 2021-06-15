
/* AccessoryParticlesSettings() */

void Assembly-CSharp.dll::AccessoryParticlesSettings::AccessoryParticlesSettings__ctor
               (AccessoryParticlesSettings *this,MethodInfo *method)

{
  (this->fields).useEmissionMovement = 1;
  (this->fields).EmitRateNormal = 4.0;
  (this->fields).EmitRateMoving = 10.0;
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

