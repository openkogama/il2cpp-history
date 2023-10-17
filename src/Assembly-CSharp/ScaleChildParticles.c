
/* Void Start() */

void Assembly-CSharp.dll::ScaleChildParticles::ScaleChildParticles_Start
               (ScaleChildParticles *this,MethodInfo *method)

{
  uVar1 = 0;
  pPVar2 = (this->fields).ToScale;
  if (pPVar2 != (ParticleSystem__Array *)0x0) {
    ppPVar3 = pPVar2->vector;
    while( true ) {
      if ((int)pPVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pPVar2->max_length <= uVar1) break;
      if (*ppPVar3 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(*ppPVar3,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff8,(MethodInfo *)0x0);
      this_00 = (this->fields).Source;
      if (this_00 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
      fVar4 = 0.0;
      fVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
              ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                        ((ParticleSystem_MainModule *)&stack0xfffffff4,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff8,fVar5 * fVar4,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      ppPVar3 = ppPVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

