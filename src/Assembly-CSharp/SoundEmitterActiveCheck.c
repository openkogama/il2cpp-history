
/* Void Initialize(MVSoundEmitter) */

void Assembly-CSharp.dll::SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize
               (SoundEmitterActiveCheck *this,MVSoundEmitter *SoundEmitter,MethodInfo *method)

{
  ppMVar1 = &(this->fields).soundEmitter;
  *ppMVar1 = SoundEmitter;
  func_?(ppMVar1,SoundEmitter);
  (this->fields).initialized = 1;
  return;
}


/* Void Initialize(MVGlobalSoundEmitter) */

void Assembly-CSharp.dll::SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize_1
               (SoundEmitterActiveCheck *this,MVGlobalSoundEmitter *SoundEmitter,MethodInfo *method)

{
  ppMVar1 = &(this->fields).globalSoundEmitter;
  *ppMVar1 = SoundEmitter;
  func_?(ppMVar1,SoundEmitter);
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
  if ((this->fields).initialized != 0) {
    if (((this->fields).soundEmitter == (MVSoundEmitter *)0x0) &&
       ((this->fields).globalSoundEmitter == (MVGlobalSoundEmitter *)0x0)) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)this,(MethodInfo *)0x0);
    }
    pMVar1 = (this->fields).soundEmitter;
    if (pMVar1 == (MVSoundEmitter *)0x0) {
      pMVar2 = (this->fields).globalSoundEmitter;
      if ((pMVar2 == (MVGlobalSoundEmitter *)0x0) ||
         (pGVar3 = (pMVar2->fields)._._.gameObject, pGVar3 == (GameObject *)0x0)) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      pMVar2 = (this->fields).globalSoundEmitter;
      if (pMVar2 == (MVGlobalSoundEmitter *)0x0) goto code_?;
      MVGlobalSoundEmitter::MVGlobalSoundEmitter_UpdateSound(pMVar2,(MethodInfo *)0x0);
    }
    else {
      pGVar3 = (pMVar1->fields)._._.gameObject;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      pMVar1 = (this->fields).soundEmitter;
      if (pMVar1 == (MVSoundEmitter *)0x0) goto code_?;
      MVSoundEmitter::MVSoundEmitter_UpdateSound(pMVar1,(MethodInfo *)0x0);
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
  }
  return;
}

