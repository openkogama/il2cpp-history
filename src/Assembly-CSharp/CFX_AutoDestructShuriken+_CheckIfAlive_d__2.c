
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CFX_AutoDestructShuriken+<CheckIfAlive>d__2::
     CFX_AutoDestructShuriken_CheckIfAlive_d_2_MoveNext
               (CFX_AutoDestructShuriken_CheckIfAlive_d_2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if ((this_00 == (CFX_AutoDestructShuriken *)0x0) ||
       (this_01 = (ParticleSystem *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)this_00,
                             UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                            ), this_01 == (ParticleSystem *)0x0)) goto code_?;
    bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_IsAlive(this_01,1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((this_00->fields).OnlyDeactivate == 0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        return 0;
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
        return 0;
      }
      goto code_?;
    }
  }
  this_02 = (SubscribableVariableBase_1_System_Single_ *)func_?();
  if (this_02 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    SubscribableVariableBase`1[System::Single]::SubscribableVariableBase_1_System_Single___ctor
              (this_02,0.5,(MethodInfo *)0x0);
    (this->fields).__2__current = (Object *)this_02;
    func_?(&(this->fields).__2__current,this_02);
    (this->fields).__1__state = 1;
    return 1;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::CFX_AutoDestructShuriken+<CheckIfAlive>d__2::
     CFX_AutoDestructShuriken_CheckIfAlive_d_2_System_Collections_IEnumerator_Reset
               (CFX_AutoDestructShuriken_CheckIfAlive_d_2 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__CFX_AutoDestructShuriken___CheckIfAlive_d__2__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

