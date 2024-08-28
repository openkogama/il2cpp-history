
/* Void OnUpdate() */

void Assembly-CSharp.dll::SentryGunFireBeam::SentryGunFireBeam_OnUpdate
               (SentryGunFireBeam *this,MethodInfo *method)

{
  uStack_1._0_4_ = (this->fields)._._EndPosition_k__BackingField.x;
  uStack_1._4_4_ = (this->fields)._._EndPosition_k__BackingField.y;
  fStack_2 = (this->fields)._._EndPosition_k__BackingField.z;
  uStack_3._0_4_ = (this->fields)._._StartPosition_k__BackingField.x;
  uStack_3._4_4_ = (this->fields)._._StartPosition_k__BackingField.y;
  fStack_4 = (this->fields)._._StartPosition_k__BackingField.z;
  fVar5 = fStack_2 - fStack_4;
  this_00 = (this->fields).fireParticles;
  if (this_00 != (ParticleSystem *)0x0) {
    PVar6 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    uStack_1 = CONCAT44(PVar6.m_ParticleSystem,(float)uStack_1);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    method_00 = (MethodInfo *)0x0;
    dVar7 = (double)(fVar5 * fVar5 + fStack_8 * fStack_8 + (float)uStack_1 * (float)uStack_1);
    if (dVar7 < 0.0) {
      func_?();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
              ((ParticleSystem_MainModule *)((int)&uStack_1 + 4),(float)dVar7,method_00);
    return;
  }
  func_?((float)uStack_1._4_4_ - (float)uStack_3._4_4_,
                  (float)uStack_1 - (float)(undefined4)uStack_3);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

