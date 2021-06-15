
/* IEnumerator DoFlaming() */

IEnumerator *
Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_DoFlaming
          (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemFlamethrower___DoFlaming_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    this_00[1].klass = (ScaleAnimationBase__Class *)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* IEnumerator DoFuelBurn() */

IEnumerator *
Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_DoFuelBurn
          (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemFlamethrower___DoFuelBurn_c__Iterator1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = (int32_t)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  return fVar3 <= fVar1 + fVar2;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_ResetAmmo
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AVar1 = (ACTkByte4)(this->fields).maxFuelTime.currentCryptoKey;
  AVar2 = (this->fields).maxFuelTime.hiddenValue;
  pBVar3 = (this->fields).maxFuelTime.hiddenValueOld;
  fVar4 = (this->fields).maxFuelTime.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar2;
  value.currentCryptoKey._0_1_ = AVar1.b1;
  value.currentCryptoKey._1_1_ = AVar1.b2;
  value.currentCryptoKey._2_1_ = AVar1.b3;
  value.currentCryptoKey._3_1_ = AVar1.b4;
  value.hiddenValueOld = pBVar3;
  value.fakeValue = fVar4;
  value.inited = (this->fields).maxFuelTime.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).maxFuelTime.field_0x11;
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar5 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,(int)fVar4,(this->klass->vtable).UpdateWithDirection.methodPtr);
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&puStack_7,(float)iVar5,(MethodInfo *)0x0);
  AVar1 = pOVar6->hiddenValue;
  pBVar3 = pOVar6->hiddenValueOld;
  fVar4 = pOVar6->fakeValue;
  bVar8 = pOVar6->inited;
  uVar9 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields).currentFuel.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields).currentFuel.hiddenValue = AVar1;
  (this->fields).currentFuel.hiddenValueOld = pBVar3;
  (this->fields).currentFuel.fakeValue = fVar4;
  (this->fields).currentFuel.inited = bVar8;
  *(undefined3 *)&(this->fields).currentFuel.field_0x11 = uVar9;
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_TriggerBegin
               (PickupItemFlamethrower *this,int32_t instigatorActorNr,MethodInfo *method)

{
  this_02 = this;
  this = (PickupItemFlamethrower *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this_02->fields).flameParticles;
  if (this_00 ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
code_?:
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this = (PickupItemFlamethrower *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
         Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                   (this_00,(MethodInfo *)0x0);
  if ((this_02->fields).isFlaming == 0) {
    fVar2 = (this_02->fields).flamerMinimumBurnTime + (this_02->fields).flamerStartTime;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar2 < fVar3) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this_02->fields).flamerStartTime = fVar2;
      func_?(&this,1,0);
      this_01 = (this_02->fields)._.owner;
      (this_02->fields).isFlaming = 1;
      if (this_01 != (MVPickupOwner *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        bVar4 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_01,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          return;
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pSVar5 = (ScaleAnimationBase *)
                 func_?(TypeInfo__PickupItemFlamethrower___DoFlaming_c__Iterator0);
        ScaleAnimationBase::ScaleAnimationBase_Play(pSVar5,0.0,method_00);
        if (pSVar5 != (ScaleAnimationBase *)0x0) {
          pSVar5[1].klass = (ScaleAnimationBase__Class *)this_02;
          method_01 = this_02;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this_02,(IEnumerator *)pSVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pSVar5 = (ScaleAnimationBase *)
                   func_?(TypeInfo__PickupItemFlamethrower___DoFuelBurn_c__Iterator1);
          ScaleAnimationBase::ScaleAnimationBase_Play(pSVar5,0.0,(MethodInfo *)method_01);
          if (pSVar5 != (ScaleAnimationBase *)0x0) {
            (pSVar5->fields).state = (int32_t)this_02;
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)this_02,(IEnumerator *)pSVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  (this_02->fields).isFlaming = 1;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this_02->fields).flamerStartTime = fVar2;
  func_?(&this,1,0);
  (this_02->fields).isFlaming = 1;
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_TriggerEnd
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).flameParticles;
  (this->fields).isFlaming = 0;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          (this_00,(MethodInfo *)0x0);
    func_?(&pOStack_1,0,0);
    this_01 = (this->fields).audioSource;
    if (this_01 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                (this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_Update
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isFlaming == 0) {
    return;
  }
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 != (AudioSource *)0x0) {
    bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                      (pAVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (pAVar1,(MethodInfo *)0x0);
    }
    pPVar3 = (this->fields).flameParticles;
    if (pPVar3 != (ParticleSystem *)0x0) {
      bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pPVar3 = (this->fields).flameParticles;
        if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar3,(MethodInfo *)0x0);
      }
      pMVar4 = (this->fields)._.owner;
      if (pMVar4 != (MVPickupOwner *)0x0) {
        bVar2 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar4,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        pPVar3 = (this->fields).flameParticles;
        if (pPVar3 != (ParticleSystem *)0x0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pPVar3,(MethodInfo *)0x0);
          pMVar4 = (this->fields)._.owner;
          if (pMVar4 != (MVPickupOwner *)0x0) {
            pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                               ((Vector3 *)&stack0xffffffe8,pMVar4,(MethodInfo *)0x0);
            uStack_6._0_4_ = pVVar5->x;
            uStack_6._4_4_ = pVVar5->y;
            fVar7 = pVVar5->z;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              uStack_6 = CONCAT44(uStack_6._4_4_,TypeInfo__UnityEngine__Quaternion);
              func_?();
            }
            forward.z = fVar7;
            forward.x = (float)(int)uStack_6;
            forward.y = (float)(int)((ulonglong)uStack_6 >> 0x20);
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                               ((Quaternion *)&stack0xffffffe4,forward,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (this_00,*pQVar8,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* PickupItemFlamethrower() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower__ctor
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).hitRadius = 1.2;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,100.0,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).maxFuelTime.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxFuelTime.hiddenValue = AVar2;
  (this->fields).maxFuelTime.hiddenValueOld = pBVar3;
  (this->fields).maxFuelTime.fakeValue = fVar4;
  (this->fields).maxFuelTime.inited = bVar5;
  *(undefined3 *)&(this->fields).maxFuelTime.field_0x11 = uVar6;
  (this->fields).maxRange = 50.0;
  (this->fields).flamerMinimumBurnTime = 0.5;
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
  bVar7 = cRam_? == '\0';
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).currentFuel.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).currentFuel.hiddenValue = AVar2;
  (this->fields).currentFuel.hiddenValueOld = pBVar3;
  (this->fields).currentFuel.fakeValue = fVar4;
  (this->fields).currentFuel.inited = bVar5;
  *(undefined3 *)&(this->fields).currentFuel.field_0x11 = uVar6;
  if (bVar7) {
    func_?();
    cRam_? = '\x01';
  }
  pMVar8 = (MeshRenderer__Array *)func_?();
  (this->fields)._.meshRenderers = pMVar8;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_get_Quantity
                  (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentFuel.currentCryptoKey;
  AVar2 = (this->fields).currentFuel.hiddenValue;
  pBVar3 = (this->fields).currentFuel.hiddenValueOld;
  fVar4 = (this->fields).currentFuel.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar2;
  value.currentCryptoKey = iVar1;
  value.hiddenValueOld = pBVar3;
  value.fakeValue = fVar4;
  value.inited = (this->fields).currentFuel.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).currentFuel.field_0x11;
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1((this->fields).maxFuelTime,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_RoundToInt
                    ((fVar4 / fVar5) * _UNK_?,(MethodInfo *)0x0);
  return iVar1;
}

