
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CFX_AutoDestructShuriken+<CheckIfAlive>c__Iterator0::
     CFX_AutoDestructShuriken_CheckIfAlive_c_Iterator0_MoveNext
               (CFX_AutoDestructShuriken_CheckIfAlive_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
code_?:
    this_01 = (WaitForSeconds *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
              (this_01,0.5,(MethodInfo *)0x0);
    (this->fields)._current = (Object *)this_01;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  pCVar2 = (this->fields)._this;
  if ((pCVar2 != (CFX_AutoDestructShuriken *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                          ((Component_1 *)pCVar2,
                           UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                          ), this_00 != (MVInteractableBase *)0x0)) {
    bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_IsAlive((ParticleSystem *)this_00,1,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
    pCVar2 = (this->fields)._this;
    if (pCVar2 != (CFX_AutoDestructShuriken *)0x0) {
      if ((pCVar2->fields).OnlyDeactivate == 0) {
        if (pCVar2 != (CFX_AutoDestructShuriken *)0x0) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)pCVar2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar4,(MethodInfo *)0x0);
          (this->fields)._PC = -1;
          return 0;
        }
      }
      else if ((pCVar2 != (CFX_AutoDestructShuriken *)0x0) &&
              (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)pCVar2,(MethodInfo *)0x0),
              pGVar4 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
        (this->fields)._PC = -1;
        return 0;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* Void Reset() */

void Assembly-CSharp.dll::CFX_AutoDestructShuriken+<CheckIfAlive>c__Iterator0::
     CFX_AutoDestructShuriken_CheckIfAlive_c_Iterator0_Reset
               (CFX_AutoDestructShuriken_CheckIfAlive_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

