
/* Void Initialize(MVSoundEmitter) */

void Assembly-CSharp.dll::SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize
               (SoundEmitterActiveCheck *this,MVSoundEmitter *SoundEmitter,MethodInfo *method)

{
  (this->fields).soundEmitter = SoundEmitter;
  func_?(&(this->fields).soundEmitter,SoundEmitter);
  (this->fields).initialized = 1;
  return;
}


/* Void Initialize(MVGlobalSoundEmitter) */

void Assembly-CSharp.dll::SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize_1
               (SoundEmitterActiveCheck *this,MVGlobalSoundEmitter *SoundEmitter,MethodInfo *method)

{
  (this->fields).globalSoundEmitter = SoundEmitter;
  func_?(&(this->fields).globalSoundEmitter,SoundEmitter);
  (this->fields).initialized = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SoundEmitterActiveCheck::SoundEmitterActiveCheck_Update
               (SoundEmitterActiveCheck *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
    return;
  }
  if ((this->fields).soundEmitter == (MVSoundEmitter *)0x0) {
    if ((this->fields).globalSoundEmitter == (MVGlobalSoundEmitter *)0x0) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)this,(MethodInfo *)0x0);
    }
    if ((this->fields).soundEmitter == (MVSoundEmitter *)0x0) {
      pMVar1 = (this->fields).globalSoundEmitter;
      if ((pMVar1 == (MVGlobalSoundEmitter *)0x0) ||
         (pGVar2 = (pMVar1->fields)._._.gameObject, pGVar2 == (GameObject *)0x0))
      goto code_?;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pMVar1 = (this->fields).globalSoundEmitter;
      if (pMVar1 == (MVGlobalSoundEmitter *)0x0) goto code_?;
      MVGlobalSoundEmitter::MVGlobalSoundEmitter_UpdateSound(pMVar1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  pMVar4 = (this->fields).soundEmitter;
  if ((pMVar4 != (MVSoundEmitter *)0x0) &&
     (pGVar2 = (pMVar4->fields)._._.gameObject, pGVar2 != (GameObject *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pMVar4 = (this->fields).soundEmitter;
    if (pMVar4 != (MVSoundEmitter *)0x0) {
      MVSoundEmitter::MVSoundEmitter_UpdateSound(pMVar4,(MethodInfo *)0x0);
code_?:
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

