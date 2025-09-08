
/* IEnumerator DoFlaming() */

IEnumerator *
Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_DoFlaming
          (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemFlamethrower___DoFlaming_d__21);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemFlamethrower___DoFlaming_d__21;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* IEnumerator DoFuelBurn() */

IEnumerator *
Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_DoFuelBurn
          (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemFlamethrower___DoFuelBurn_d__22);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemFlamethrower___DoFuelBurn_d__22;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  iVar1 = (*(code *)(this->klass->vtable).get_MaxAmmo.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_3,(float)iVar1,(MethodInfo *)0x0);
  AVar4 = pOVar2->hiddenValue;
  pBVar5 = pOVar2->hiddenValueOld;
  fVar6 = pOVar2->fakeValue;
  bVar7 = pOVar2->inited;
  uVar8 = *(undefined3 *)&pOVar2->field_0x11;
  (this->fields).currentFuel.currentCryptoKey = pOVar2->currentCryptoKey;
  (this->fields).currentFuel.hiddenValue = AVar4;
  (this->fields).currentFuel.hiddenValueOld = pBVar5;
  (this->fields).currentFuel.fakeValue = fVar6;
  (this->fields).currentFuel.inited = bVar7;
  *(undefined3 *)&(this->fields).currentFuel.field_0x11 = uVar8;
  func_?(&(this->fields).currentFuel.hiddenValueOld,0);
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_TriggerBegin
               (PickupItemFlamethrower *this,int32_t instigatorActorNr,MethodInfo *method)

{
  this_01 = this;
  this_00 = (this->fields).flameParticles;
  if (this_00 == (ParticleSystem *)0x0) {
code_?:
    instigatorActorNr = (int32_t)&UNK_?;
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this = (PickupItemFlamethrower *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
  if ((this_01->fields).isFlaming == 0) {
    fVar2 = (this_01->fields).flamerMinimumBurnTime + (this_01->fields).flamerStartTime;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar2 < fVar3) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this_01->fields).flamerStartTime = fVar2;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected
                ((ParticleSystem_EmissionModule *)&this,1,(MethodInfo *)0x0);
      pMVar4 = (this_01->fields)._.owner;
      (this_01->fields).isFlaming = 1;
      if (pMVar4 != (MVPickupOwner *)0x0) {
        if ((pMVar4->fields)._IsLocal_k__BackingField != 0) {
          if (cRam_? == '\0') {
            instigatorActorNr = (int32_t)&TypeInfo__PickupItemFlamethrower___DoFlaming_d__21;
            this = (PickupItemFlamethrower *)&UNK_?;
            func_?();
            cRam_? = '\x01';
          }
          this = (PickupItemFlamethrower *)TypeInfo__PickupItemFlamethrower___DoFlaming_d__21;
          pOVar5 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar5,ExceptionArgument__Enum_obj,(MethodInfo *)this);
          pOVar5[1].klass = (Object__Class *)0x0;
          pOVar5[2].klass = (Object__Class *)this_01;
          func_?(pOVar5 + 2);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this_01,(IEnumerator *)pOVar5,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          method_00 = TypeInfo__PickupItemFlamethrower___DoFuelBurn_d__22;
          pOVar5 = (Object *)func_?();
          method = (MethodInfo *)&UNK_?;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          pOVar5[1].klass = (Object__Class *)0x0;
          pOVar5[2].klass = (Object__Class *)this_01;
          method = (MethodInfo *)&UNK_?;
          func_?();
          method = (MethodInfo *)0x0;
          this = this_01;
          instigatorActorNr = (int32_t)pOVar5;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this_01,(IEnumerator *)pOVar5,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
  }
  (this_01->fields).isFlaming = 1;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this_01->fields).flamerStartTime = fVar2;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
  ParticleSystem_EmissionModule_set_enabled_Injected
            ((ParticleSystem_EmissionModule *)&this,1,(MethodInfo *)0x0);
  (this_01->fields).isFlaming = 1;
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_TriggerEnd
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  pPVar1 = this;
  this_00 = (this->fields).flameParticles;
  (this->fields).isFlaming = 0;
  if (this_00 != (ParticleSystem *)0x0) {
    this = (PickupItemFlamethrower *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&this,0,(MethodInfo *)0x0);
    this_01 = (MethodInfo *)(pPVar1->fields).audioSource;
    if (this_01 != (MethodInfo *)0x0) {
      this = (PickupItemFlamethrower *)&UNK_?;
      method = this_01;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                ((AudioSource *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
        if ((pMVar4->fields)._IsLocal_k__BackingField != 0) {
          return;
        }
        pPVar3 = (this->fields).flameParticles;
        if (pPVar3 != (ParticleSystem *)0x0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar3,(MethodInfo *)0x0);
          pMVar4 = (this->fields)._.owner;
          if (pMVar4 != (MVPickupOwner *)0x0) {
            pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                               ((Vector3 *)&stack0xfffffff0,pMVar4,(MethodInfo *)0x0);
            pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                               ((Quaternion *)&stack0xffffffec,*pVVar5,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              fStack7 = pQVar6->y;
              fStack8 = pQVar6->z;
              fStack9 = pQVar6->w;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (this_00,*pQVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* PickupItemFlamethrower() */

void Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower__ctor
               (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  (this->fields).hitRadius = 1.2;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
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
  func_?(&(this->fields).maxFuelTime.hiddenValueOld,0);
  (this->fields).maxRange = 50.0;
  (this->fields).flamerMinimumBurnTime = 0.5;
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
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
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar7 = (MeshRenderer__Array *)func_?();
  (this->fields)._.meshRenderers = pMVar7;
  func_?();
  (this->fields)._._AbleToFire_k__BackingField = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_get_MaxAmmo
                  (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  value = (this->fields).maxFuelTime;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = (*(code *)(this->klass->vtable).CalculateMaxAmmo.method)
                    (this,(int)fVar1,(this->klass->vtable).UpdateWithDirection.methodPtr);
  return iVar2;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemFlamethrower::PickupItemFlamethrower_get_Quantity
                  (PickupItemFlamethrower *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentFuel.currentCryptoKey;
  AVar2 = (this->fields).currentFuel.hiddenValue;
  pBVar3 = (this->fields).currentFuel.hiddenValueOld;
  fVar4 = (this->fields).currentFuel.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
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
  uStack6 = 0;
  fStack7 = (fVar4 / fVar5) * _UNK_?;
  iVar1 = func_?();
  return iVar1;
}

