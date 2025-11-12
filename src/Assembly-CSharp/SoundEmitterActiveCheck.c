
/* Void Initialize(MVSoundEmitter) */

void Assembly-CSharp.dll::SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize
               (SoundEmitterActiveCheck *this,MVSoundEmitter *SoundEmitter,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).soundEmitter = SoundEmitter;
  if (bVar1) {
    (this->fields).initialized = 1;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).soundEmitter >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields).initialized = 1;
  return;
}


/* Void Initialize(MVGlobalSoundEmitter) */

void Assembly-CSharp.dll::SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize_1
               (SoundEmitterActiveCheck *this,MVGlobalSoundEmitter *SoundEmitter,MethodInfo *method)

{
  bVar1 = iRam_? == 0;
  (this->fields).globalSoundEmitter = SoundEmitter;
  if (bVar1) {
    (this->fields).initialized = 1;
    return;
  }
  uVar2 = (uint)((ulonglong)&(this->fields).globalSoundEmitter >> 0xc);
  puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
  do {
    uVar4 = *puVar3;
    LOCK();
    uVar5 = *puVar3;
    if (uVar4 == uVar5) {
      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
    }
    UNLOCK();
  } while (uVar4 != uVar5);
  (this->fields).initialized = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SoundEmitterActiveCheck::SoundEmitterActiveCheck_Update
               (SoundEmitterActiveCheck *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
    return;
  }
  if ((this->fields).soundEmitter == (MVSoundEmitter *)0x0) {
    if ((this->fields).globalSoundEmitter == (MVGlobalSoundEmitter *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)this,(MethodInfo *)0x0);
    }
    if ((this->fields).soundEmitter == (MVSoundEmitter *)0x0) {
      pMVar1 = (this->fields).globalSoundEmitter;
      if ((pMVar1 != (MVGlobalSoundEmitter *)0x0) &&
         (pGVar2 = (pMVar1->fields)._._.gameObject, pGVar2 != (GameObject *)0x0)) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar2,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        pMVar1 = (this->fields).globalSoundEmitter;
        if (pMVar1 == (MVGlobalSoundEmitter *)0x0) goto code_?;
        MVGlobalSoundEmitter::MVGlobalSoundEmitter_UpdateSound(pMVar1,(MethodInfo *)0x0);
        goto code_?;
      }
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
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar5 = (void *)0x0;
      if (this != (SoundEmitterActiveCheck *)0x0) {
        pvVar5 = (this->fields)._._._._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

