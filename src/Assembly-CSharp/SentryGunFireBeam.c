
/* Void OnUpdate() */

void Assembly-CSharp.dll::SentryGunFireBeam::SentryGunFireBeam_OnUpdate
               (SentryGunFireBeam *this,MethodInfo *method)

{
  this_00 = (this->fields).fireParticles;
  if (this_00 != (ParticleSystem *)0x0) {
    PStack_1.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    fVar2 = (float10)func_?(&stack0xffffffe0,0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startSpeedMultiplier_Injected
              (&PStack_1,(float)fVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

