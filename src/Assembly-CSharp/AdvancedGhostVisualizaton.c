
/* Void Awake() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Awake
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  (this->fields).baseScale.x = (float)(undefined4)uStack_2;
  (this->fields).baseScale.y = (float)uStack_2._4_4_;
  (this->fields).baseScale.z = fStack_3;
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_OnDisable
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  obj = (this->fields).moving;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_OnEnable
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  obj = (this->fields).moving;
  if (obj == (AudioSource *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (AudioSource *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)0x0,StringLiteral_source,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)obj,StringLiteral_source,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void PlayEffect(AdvancedGhostVisualizaton+Effect, Single) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_PlayEffect
               (AdvancedGhostVisualizaton *this,AdvancedGhostVisualizaton_Effect__Enum effect,
               float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdvancedGhostVisualizaton__Die);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdvancedGhostVisualizaton__Respawn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).currentEffect;
  if (pAVar1 != (AdvancedGhostVisualizaton_EffectBase *)0x0) {
    (*(pAVar1->klass->vtable).__unknown_1.methodPtr)();
  }
  if (effect == AdvancedGhostVisualizaton_Effect__Enum_Die) {
    pAVar1 = (AdvancedGhostVisualizaton_EffectBase *)
             FUN_?(TypeInfo__AdvancedGhostVisualizaton__Die);
    bVar2 = iRam_? != 0;
    (pAVar1->fields).duration = duration;
    (pAVar1->fields).timeLeft = duration;
    (this->fields).currentEffect = pAVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).currentEffect >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
      return;
    }
  }
  else {
    if (effect == AdvancedGhostVisualizaton_Effect__Enum_Respawn) {
      pAVar1 = (AdvancedGhostVisualizaton_EffectBase *)
               FUN_?(TypeInfo__AdvancedGhostVisualizaton__Respawn);
      (pAVar1->fields).duration = duration;
      (pAVar1->fields).timeLeft = duration;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (obj->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7);
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,1,(MethodInfo *)0x0);
          bVar2 = iRam_? == 0;
          (this->fields).currentEffect = pAVar1;
          if (bVar2) {
            return;
          }
          uVar3 = (uint)((ulonglong)&(this->fields).currentEffect >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
          return;
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((effect == AdvancedGhostVisualizaton_Effect__Enum_None) &&
       (bVar2 = iRam_? != 0,
       (this->fields).currentEffect = (AdvancedGhostVisualizaton_EffectBase *)0x0, bVar2)) {
      uVar3 = (uint)((ulonglong)&(this->fields).currentEffect >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
      return;
    }
  }
  return;
}


/* Void ReceivedDamage() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_ReceivedDamage
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 == '\0') {
      return;
    }
    this_00 = (this->fields).receiveDamage;
    if (this_00 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).blinker;
      if (this_01 != (AdvancedGhostBlinker *)0x0) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_01,BlinkType__Enum_Damage,_UNK_?,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceivedHealing() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_ReceivedHealing
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar4 = (*pcRam_?)(pvVar2);
  if (cVar4 != '\0') {
    this_00 = (this->fields).blinker;
    if (this_00 == (AdvancedGhostBlinker *)0x0) goto code_?;
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_Healing,_UNK_?,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetRotationSpeed(Single) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_SetRotationSpeed
               (AdvancedGhostVisualizaton *this,float rotationSpeed,MethodInfo *method)

{
  this_00 = (this->fields).moving;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (this_00,rotationSpeed * _UNK_?,(MethodInfo *)0x0);
    pGVar1 = (this->fields).ghostBody;
    if (pGVar1 != (GhostBody *)0x0) {
      (pGVar1->fields).angularMaxRotation = rotationSpeed * (pGVar1->fields).angularMaxRotationBase;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Start
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).blinker;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  pMVar2 = 
  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
  ;
  if (this_00 != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    }
    pMVar3 = (MeshFilter__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (this_00,0,((pMVar2->field7_0x38).rgctx_data)->method);
    if (pAVar1 != (AdvancedGhostBlinker *)0x0) {
      bVar4 = iRam_? != 0;
      (pAVar1->fields)._.meshFilters = pMVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pAVar1->fields)._.meshFilters >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Update
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  if ((this->fields).currentEffect != (AdvancedGhostVisualizaton_EffectBase *)0x0) {
    pAVar1 = (this->fields).currentEffect;
    fVar2 = (pAVar1->fields).timeLeft;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)();
    fVar2 = fVar2 - fVar5;
    (pAVar1->fields).timeLeft = fVar2;
    if (fVar2 <= 0.0) {
      (pAVar1->fields).timeLeft = 0.0;
    }
    pAVar6 = pAVar1->klass;
    if (0.0 < (pAVar1->fields).timeLeft) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar6->vtable).__unknown.methodPtr)(pAVar1,this,(pAVar6->vtable).__unknown.method);
      return;
    }
    (*(pAVar6->vtable).__unknown_1.methodPtr)(pAVar1,this,(pAVar6->vtable).__unknown_1.method);
    bVar7 = iRam_? != 0;
    (this->fields).currentEffect = (AdvancedGhostVisualizaton_EffectBase *)0x0;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).currentEffect >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  return;
}

