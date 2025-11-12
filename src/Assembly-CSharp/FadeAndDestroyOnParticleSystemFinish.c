
/* Void Start() */

void Assembly-CSharp.dll::FadeAndDestroyOnParticleSystemFinish::
     FadeAndDestroyOnParticleSystemFinish_Start
               (FadeAndDestroyOnParticleSystemFinish *this,MethodInfo *method)

{
  apPStackX_8[0] = (this->fields).system;
  if (apPStackX_8[0] == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    method = (MethodInfo *)(ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)((longlong)method * 8 + 0xADDR);
      puVar4 = (ulonglong *)((longlong)method * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pcVar1 = pcRam_?;
  apPStackX_18[0] = apPStackX_8[0];
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?,method), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar7 = (float)(*pcRam_?)(apPStackX_18);
  (this->fields).fadeCountDown = fVar7;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FadeAndDestroyOnParticleSystemFinish::
     FadeAndDestroyOnParticleSystemFinish_Update
               (FadeAndDestroyOnParticleSystemFinish *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).fadeCountDown;
  if (0.0 < fVar1) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    fVar1 = fVar1 - fVar4;
    (this->fields).fadeCountDown = fVar1;
    if (fVar1 <= 0.0) {
      pPVar5 = (this->fields).system;
      if (pPVar5 != (ParticleSystem *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pPVar5 == (ParticleSystem *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar6 = (pPVar5->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar5,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,1,1);
        return;
      }
      goto code_?;
    }
  }
  else {
    pPVar5 = (this->fields).system;
    if (pPVar5 == (ParticleSystem *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_particleCount(pPVar5,(MethodInfo *)0x0);
    if (iVar7 < 1) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}

