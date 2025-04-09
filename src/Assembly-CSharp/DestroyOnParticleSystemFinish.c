
/* Void Start() */

void Assembly-CSharp.dll::DestroyOnParticleSystemFinish::DestroyOnParticleSystemFinish_Start
               (DestroyOnParticleSystemFinish *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  pPVar1 = (this->fields).system;
  if (pPVar1 != (ParticleSystem *)0x0) {
    PStack_2.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
    fVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
            ParticleSystem_MainModule_get_duration_Injected(&PStack_2,(MethodInfo *)0x0);
    pPVar1 = (this->fields).system;
    if (pPVar1 != (ParticleSystem *)0x0) {
      PStack_2.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
      pPVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
               ParticleSystem_MainModule_get_startLifetime
                         ((ParticleSystem_MinMaxCurve *)&puStack_5,&PStack_2,(MethodInfo *)0x0);
      pTStack_6 = (ThemeAttribute_1_System_Single___Class *)pPVar4->m_Mode;
      pMStack_7 = (MonitorData *)pPVar4->m_CurveMultiplier;
      fVar8 = ThemeAttributes::ThemeAttribute`1[System::Single]::
              ThemeAttribute_1_System_Single__get_Value
                        ((ThemeAttribute_1_System_Single_ *)&pTStack_6,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,fVar8 + fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

