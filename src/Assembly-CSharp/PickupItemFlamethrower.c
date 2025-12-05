
/* IEnumerator DoFlaming() */

IEnumerator *
Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_DoFlaming
          (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemFlamethrower___DoFlaming_d__21);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__PickupItemFlamethrower___DoFlaming_d__21);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* IEnumerator DoFuelBurn() */

IEnumerator *
Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_DoFuelBurn
          (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemFlamethrower___DoFuelBurn_d__22);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__PickupItemFlamethrower___DoFuelBurn_d__22);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Boolean IsStillFlaming() */

bool Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_IsStillFlaming
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  if ((this->fields).isFlaming != 0) {
    return 1;
  }
  fVar1 = (this->fields).flamerMinimumBurnTime;
  fVar2 = (this->fields).flamerStartTime;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    bVar5 = (*pcVar3)();
    return bVar5;
  }
  pcRam_? = pcVar3;
  fVar6 = (float)(*pcRam_?)();
  return fVar6 <= fVar1 + fVar2;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_ResetAmmo
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (*(this->klass->vtable).get_MaxAmmo.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_2[0].fakeValue = 0.0;
  aOStack_2[0].inited = 0;
  aOStack_2[0]._21_3_ = 0;
  aOStack_2[0].currentCryptoKey = 0;
  aOStack_2[0].hiddenValue.b1 = 0;
  aOStack_2[0].hiddenValue.b2 = 0;
  aOStack_2[0].hiddenValue.b3 = 0;
  aOStack_2[0].hiddenValue.b4 = 0;
  aOStack_2[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt((float)iVar1,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_2,value,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    aOStack_2[0].fakeValue = (float)iVar1;
  }
  bVar4 = iRam_? != 0;
  (this->fields).currentFuel.currentCryptoKey = aOStack_2[0].currentCryptoKey;
  (this->fields).currentFuel.hiddenValue = aOStack_2[0].hiddenValue;
  (this->fields).currentFuel.hiddenValueOld = aOStack_2[0].hiddenValueOld;
  (this->fields).currentFuel.fakeValue = aOStack_2[0].fakeValue;
  (this->fields).currentFuel.inited = aOStack_2[0].inited;
  *(undefined3 *)&(this->fields).currentFuel.field_0x15 = aOStack_2[0]._21_3_;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).currentFuel.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_TriggerBegin
               (PickupItemFlamethrower *this,int32_t instigatorActorNr,MethodInfo *method)

{
  pPVar1 = (this->fields).flameParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pPStackX_8 = pPVar1;
    pPStackX_20 = pPVar1;
    bVar7 = PickupItemFlamethrower_IsStillFlaming(this,(MethodInfo *)0x0);
    pcVar8 = pcRam_?;
    if (bVar7 != 0) {
      (this->fields).isFlaming = 1;
      pcVar9 = pcRam_?;
      if ((pcVar8 == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar9 = pcVar8, pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar9;
      fVar11 = (float)(*pcVar8)();
      pcVar8 = pcRam_?;
      (this->fields).flamerStartTime = fVar11;
      pcVar9 = pcRam_?;
      if ((pcVar8 == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar9 = pcVar8, pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcVar8)(&pPStackX_20,1);
      (this->fields).isFlaming = 1;
      return;
    }
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    fVar11 = (float)(*pcRam_?)();
    pcVar8 = pcRam_?;
    (this->fields).flamerStartTime = fVar11;
    pcVar9 = pcRam_?;
    if ((pcVar8 == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar9 = pcVar8, pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcVar8)(&pPStackX_20,1);
    pMVar12 = (this->fields)._.owner;
    (this->fields).isFlaming = 1;
    if (pMVar12 != (MVPickupOwner *)0x0) {
      if ((pMVar12->fields)._IsLocal_k__BackingField != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PickupItemFlamethrower___DoFlaming_d__21);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar13 = (IEnumerator *)FUN_?(TypeInfo__PickupItemFlamethrower___DoFlaming_d__21);
        bVar6 = iRam_? != 0;
        *(undefined4 *)&pIVar13[1].klass = 0;
        pIVar13[2].klass = (IEnumerator__Class *)this;
        if (bVar6) {
          uVar2 = (uint)((ulonglong)(pIVar13 + 2) >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,pIVar13,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PickupItemFlamethrower___DoFuelBurn_d__22);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar13 = (IEnumerator *)FUN_?(TypeInfo__PickupItemFlamethrower___DoFuelBurn_d__22);
        bVar6 = iRam_? != 0;
        *(undefined4 *)&pIVar13[1].klass = 0;
        pIVar13[2].klass = (IEnumerator__Class *)this;
        if (bVar6) {
          uVar2 = (uint)((ulonglong)(pIVar13 + 2) >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,pIVar13,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_TriggerEnd
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  pPVar1 = (this->fields).flameParticles;
  (this->fields).isFlaming = 0;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
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
    }
    pcVar6 = pcRam_?;
    pPStackX_8 = pPVar1;
    apPStackX_18[0] = pPVar1;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(apPStackX_18);
    obj = (this->fields).audioSource;
    if (obj != (AudioSource *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
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
      (*pcRam_?)(pvVar8,1);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_Update
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  if ((this->fields).isFlaming == 0) {
    return;
  }
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 != (AudioSource *)0x0) {
    bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto DAT_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar1,(MethodInfo *)0x0);
    }
    pPVar3 = (this->fields).flameParticles;
    if (pPVar3 != (ParticleSystem *)0x0) {
      bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pPVar3 = (this->fields).flameParticles;
        if (pPVar3 == (ParticleSystem *)0x0) goto DAT_?;
        in_R8 = (MethodInfo *)0x0;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar3,1,(MethodInfo *)0x0);
      }
      pMVar4 = (this->fields)._.owner;
      if (pMVar4 != (MVPickupOwner *)0x0) {
        if ((pMVar4->fields)._IsLocal_k__BackingField != 0) {
          return;
        }
        pPVar3 = (this->fields).flameParticles;
        if (pPVar3 != (ParticleSystem *)0x0) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pPVar3,(MethodInfo *)0x0);
          pMVar4 = (this->fields)._.owner;
          if (pMVar4 != (MVPickupOwner *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                               (&VStack_6,&(pMVar4->fields).lookDirection,in_R8);
            uStack_7._0_4_ = pVVar5->x;
            uStack_7._4_4_ = pVVar5->y;
            fStack_8 = pVVar5->z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_10._0_4_ = (pVVar9->upVector).x;
            uStack_10._4_4_ = (pVVar9->upVector).y;
            fStack_11 = (pVVar9->upVector).z;
            uStack_12 = 0;
            uStack_13 = 0;
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(&uStack_7,&uStack_10,&uStack_12);
            if (obj == (Transform *)0x0) {
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            VStack_6.x = (float)uStack_12;
            VStack_6.y = uStack_12._4_4_;
            VStack_6.z = (float)uStack_13;
            uStack_16 = uStack_13._4_4_;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar17 = (obj->fields)._._.m_CachedPtr;
            if (pvVar17 != (void *)0x0) {
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pvVar17,&VStack_6);
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* PickupItemFlamethrower() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower__ctor
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).hitRadius = 1.2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_1_ = 0;
  uStack_1._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar2,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_1._0_4_ = 100.0;
    uStack_1._4_1_ = 0;
    uStack_1._5_3_ = 0;
  }
  bVar4 = iRam_? != 0;
  (this->fields).maxFuelTime.currentCryptoKey = 0;
  (this->fields).maxFuelTime.hiddenValue.b1 = 0;
  (this->fields).maxFuelTime.hiddenValue.b2 = 0;
  (this->fields).maxFuelTime.hiddenValue.b3 = 0;
  (this->fields).maxFuelTime.hiddenValue.b4 = 0;
  *(undefined4 *)&(this->fields).maxFuelTime.hiddenValueOld = 0;
  *(undefined4 *)((longlong)&(this->fields).maxFuelTime.hiddenValueOld + 4) = 0;
  (this->fields).maxFuelTime.fakeValue = (float)uStack_1;
  (this->fields).maxFuelTime.inited = uStack_1._4_1_;
  *(undefined3 *)&(this->fields).maxFuelTime.field_0x15 = uStack_1._5_3_;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).maxFuelTime.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = cRam_? == '\0';
  (this->fields).maxRange = 50.0;
  (this->fields).flamerMinimumBurnTime = 0.5;
  if (bVar4) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar2,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields).currentFuel.currentCryptoKey = 0;
  (this->fields).currentFuel.hiddenValue.b1 = 0;
  (this->fields).currentFuel.hiddenValue.b2 = 0;
  (this->fields).currentFuel.hiddenValue.b3 = 0;
  (this->fields).currentFuel.hiddenValue.b4 = 0;
  *(undefined4 *)&(this->fields).currentFuel.hiddenValueOld = 0;
  *(undefined4 *)((longlong)&(this->fields).currentFuel.hiddenValueOld + 4) = 0;
  (this->fields).currentFuel.fakeValue = 0.0;
  (this->fields).currentFuel.inited = 0;
  *(undefined3 *)&(this->fields).currentFuel.field_0x15 = 0;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).currentFuel.hiddenValueOld >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar4 = iRam_? != 0;
  (this->fields)._.meshRenderers = pMVar9;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.meshRenderers >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
  }
  bVar4 = cRam_? == '\0';
  (this->fields)._._AbleToFire_k__BackingField = 1;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar10 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar11 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar12 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar13 = ppMVar11;
  if (lVar12 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar12 = lRam_?;
  }
  else {
    do {
      uVar5 = (uint)ppMVar13;
      LOCK();
      bVar4 = uVar5 != uRam_?;
      uVar14 = uVar5;
      uVar15 = uVar5 + 1;
      if (bVar4) {
        uVar14 = uRam_?;
        uVar15 = uRam_?;
      }
      uRam_? = uVar15;
      UNLOCK();
    } while ((bVar4) && (ppMVar13 = (MethodInfo **)(ulonglong)uVar14, uVar5 = uVar14, uVar14 != 2)
            );
    while (uVar5 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar5 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar12;
  puVar16 = &(pOVar10->_1).field_0x1c;
  LOCK();
  bVar4 = *(int *)puVar16 == 1;
  if (bVar4) {
    *(undefined4 *)puVar16 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar4) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar5 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar17 = &(pOVar10->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar4 = *puVar17 == 1;
  if (bVar4) {
    *puVar17 = 1;
  }
  uVar5 = uRam_?;
  UNLOCK();
  if (bVar4) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar5 = GetCurrentThreadId();
    psVar18 = &(pOVar10->_1).cctor_thread;
    LOCK();
    bVar4 = (ulonglong)uVar5 == *psVar18;
    if (bVar4) {
      *psVar18 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (bVar4) {
      return;
    }
    while( true ) {
      puVar16 = &(pOVar10->_1).field_0x1c;
      LOCK();
      bVar4 = *(int *)puVar16 == 1;
      if (bVar4) {
        *(undefined4 *)puVar16 = 1;
      }
      UNLOCK();
      if (bVar4) break;
      LOCK();
      lVar12._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
      lVar12._4_4_ = (pOVar10->_1).cctor_started;
      if (lVar12 == 0) {
        (pOVar10->_1).initializationExceptionGCHandle = 0;
        (pOVar10->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar12 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar19._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
    lVar19._4_4_ = (pOVar10->_1).cctor_started;
    if (lVar19 == 0) {
      return;
    }
  }
  else {
    uVar5 = GetCurrentThreadId();
    LOCK();
    (pOVar10->_1).cctor_thread = (ulonglong)uVar5;
    UNLOCK();
    LOCK();
    (pOVar10->_1).cctor_finished_or_no_cctor = 1;
    uVar5 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar5 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar10->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar10);
      ppMVar13 = ppMVar11;
      pIVar20 = (Il2CppClass *)pOVar10;
code_?:
      do {
        if (ppMVar13 == (MethodInfo **)0x0) {
          FUN_?(pIVar20);
          if (pIVar20->field_count != 0) {
            ppMVar13 = pIVar20->methods;
            pMVar21 = *ppMVar13;
code_?:
            if (pMVar21 != (MethodInfo *)0x0) {
              if ((*pMVar21->name == '.') && ((pMVar21->flags & 0x800) != 0)) {
                ppMVar22 = ppMVar11;
                while (pcVar23 = (char *)((longlong)ppMVar22 + 0xADDR),
                      ppMVar22 = (MethodInfo **)((longlong)ppMVar22 + 1),
                      *pcVar23 == (pMVar21->name + -1)[(longlong)ppMVar22]) {
                  if (ppMVar22 == (MethodInfo **)0x7) {
                    FUN_?(pMVar21,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar13 = ppMVar13 + 1;
          if (ppMVar13 < pIVar20->methods + pIVar20->field_count) {
            pMVar21 = *ppMVar13;
            goto code_?;
          }
        }
        pIVar20 = pIVar20->parent;
        ppMVar13 = ppMVar11;
      } while (pIVar20 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar10->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar24 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar10->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_25 = 0;
    uStack_26 = _UNK_?;
    uStack_27 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar10->_0).byval_arg,0,0);
    pppppppuVar19 = &pppppppuStack_78;
    if (0xf < uStack_27) {
      pppppppuVar19 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar19);
    if (uStack_27 < 0x10) {
code_?:
      lVar12 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar19 = &pppppppuStack_58;
      if (0xf < uStack_28) {
        pppppppuVar19 = pppppppuStack_58;
      }
      uStack_26 = uVar24;
      uStack_27 = uVar6;
      lVar19 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar19);
      if (lVar12 != 0) {
        *(longlong *)(lVar19 + 0x28U) = lVar12;
        if (iRam_? != 0) {
          uVar5 = (uint)(lVar19 + 0x28U >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar8;
            LOCK();
            uVar6 = *puVar8;
            if (uVar7 == uVar6) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar6);
        }
      }
      FUN_?(pOVar10,lVar19);
      if (0xf < uStack_28) {
        pppppppuVar19 = pppppppuStack_58;
        if ((0xfff < uStack_28 + 1) &&
           (pppppppuVar19 = (undefined8 *******)pppppppuStack_58[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar19))))
        goto code_?;
        func_?(pppppppuVar19);
      }
      goto code_?;
    }
    pppppppuVar19 = pppppppuStack_78;
    if ((uStack_27 + 1 < 0x1000) ||
       (pppppppuVar19 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
      func_?(pppppppuVar19);
      uVar24 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar10->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_get_MaxAmmo
                  (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).maxFuelTime.currentCryptoKey;
  uVar1._4_4_ = (this->fields).maxFuelTime.hiddenValue;
  pBVar2 = (this->fields).maxFuelTime.hiddenValueOld;
  uVar3._0_4_ = (this->fields).maxFuelTime.fakeValue;
  uVar3._4_1_ = (this->fields).maxFuelTime.inited;
  uVar3._5_3_ = *(undefined3 *)&(this->fields).maxFuelTime.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_4[0]._0_8_ = uVar1;
  aOStack_4[0].hiddenValueOld = pBVar2;
  aOStack_4[0]._16_8_ = uVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (*(this->klass->vtable).CalculateMaxAmmo.methodPtr)
                    (this,(ulonglong)(uint)(int)fVar5,(this->klass->vtable).CalculateMaxAmmo.method)
  ;
  return iVar6;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_get_Quantity
                  (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentFuel.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentFuel.hiddenValue;
  pBVar2 = (this->fields).currentFuel.hiddenValueOld;
  uVar3._0_4_ = (this->fields).currentFuel.fakeValue;
  uVar3._4_1_ = (this->fields).currentFuel.inited;
  uVar3._5_3_ = *(undefined3 *)&(this->fields).currentFuel.field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_4[0]._0_8_ = uVar1;
  aOStack_4[0].hiddenValueOld = pBVar2;
  aOStack_4[0]._16_8_ = uVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
  aOStack_4[0].currentCryptoKey = (this->fields).maxFuelTime.currentCryptoKey;
  aOStack_4[0].hiddenValue = (this->fields).maxFuelTime.hiddenValue;
  aOStack_4[0].hiddenValueOld = (this->fields).maxFuelTime.hiddenValueOld;
  aOStack_4[0].fakeValue = (this->fields).maxFuelTime.fakeValue;
  aOStack_4[0].inited = (this->fields).maxFuelTime.inited;
  aOStack_4[0]._21_3_ = *(undefined3 *)&(this->fields).maxFuelTime.field_0x15;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_4,(MethodInfo *)0x0);
  fVar5 = (fVar5 / fVar6) * _UNK_?;
  if (cRam_? == '\0') {
    aOStack_4[0].hiddenValueOld = (Byte__Array *)&UNK_?;
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    aOStack_4[0].hiddenValueOld = (Byte__Array *)&UNK_?;
    FUN_?();
  }
  aOStack_4[0].hiddenValueOld = (Byte__Array *)&UNK_?;
  dVar7 = (double)FUN_?((double)fVar5);
  return (int)dVar7;
}

