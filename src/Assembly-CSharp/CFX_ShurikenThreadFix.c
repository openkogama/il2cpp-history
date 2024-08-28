
/* Void Awake() */

void Assembly-CSharp.dll::CFX_ShurikenThreadFix::CFX_ShurikenThreadFix_Awake
               (CFX_ShurikenThreadFix *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                   );
    func_?(&StringLiteral_WaitFrame);
    cRam_? = '\x01';
  }
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  pPVar2 = (ParticleSystem__Array *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__ParticleSystem__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                     );
  ppPVar3 = &(this->fields).systems;
  *ppPVar3 = pPVar2;
  func_?(ppPVar3,pPVar2);
  pPVar2 = *ppPVar3;
  uVar4 = 0;
  if (pPVar2 == (ParticleSystem__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    ppPVar5 = pPVar2->vector;
    while( true ) {
      if ((int)pPVar2->max_length <= (int)uVar4) {
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
                  ((MonoBehaviour *)this,StringLiteral_WaitFrame,(MethodInfo *)0x0);
        return;
      }
      if (pPVar2->max_length <= uVar4) break;
      if (*ppPVar5 == (ParticleSystem *)0x0) goto code_?;
      PStack_1.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(*ppPVar5,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected(&PStack_1,0,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      ppPVar5 = ppPVar5 + 1;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IEnumerator WaitFrame() */

IEnumerator *
Assembly-CSharp.dll::CFX_ShurikenThreadFix::CFX_ShurikenThreadFix_WaitFrame
          (CFX_ShurikenThreadFix *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CFX_ShurikenThreadFix___WaitFrame_d__2);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CFX_ShurikenThreadFix___WaitFrame_d__2;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}

