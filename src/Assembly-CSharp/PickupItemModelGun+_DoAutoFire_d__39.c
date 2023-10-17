
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemModelGun+<DoAutoFire>d__39::
     PickupItemModelGun_DoAutoFire_d_39_MoveNext
               (PickupItemModelGun_DoAutoFire_d_39 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (PickupItemModelGun *)0x0) goto code_?;
    (this_00->fields)._.isFiring = 1;
    (this_00->fields).fireMain = 1;
    (this_00->fields).fireSecondary = 0;
    this = (PickupItemModelGun_DoAutoFire_d_39 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = (this_00->fields).prevFireTime;
    iVar4 = (this_00->fields)._.fireInterval.currentCryptoKey;
    AVar5 = (this_00->fields)._.fireInterval.hiddenValue;
    pBVar6 = (this_00->fields)._.fireInterval.hiddenValueOld;
    fVar7 = (this_00->fields)._.fireInterval.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    this = (PickupItemModelGun_DoAutoFire_d_39 *)((float)this - fVar3);
    value.hiddenValue = AVar5;
    value.currentCryptoKey = iVar4;
    value.hiddenValueOld = pBVar6;
    value.fakeValue = fVar7;
    value.inited = (this_00->fields)._.fireInterval.inited;
    value._17_3_ = *(undefined3 *)&(this_00->fields)._.fireInterval.field_0x11;
    fVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (fVar3 < (float)this) {
      this = (PickupItemModelGun_DoAutoFire_d_39 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      iVar4 = (this_00->fields)._.fireInterval.currentCryptoKey;
      AVar5 = (this_00->fields)._.fireInterval.hiddenValue;
      pBVar6 = (this_00->fields)._.fireInterval.hiddenValueOld;
      fVar3 = (this_00->fields)._.fireInterval.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_01.hiddenValue = AVar5;
      value_01.currentCryptoKey = iVar4;
      value_01.hiddenValueOld = pBVar6;
      value_01.fakeValue = fVar3;
      value_01.inited = (this_00->fields)._.fireInterval.inited;
      value_01._17_3_ = *(undefined3 *)&(this_00->fields)._.fireInterval.field_0x11;
      fVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_01,(MethodInfo *)0x0);
      (this_00->fields).prevFireTime = (float)this - fVar3;
    }
code_?:
    if ((this_00->fields)._.isFiring != 0) {
      this = (PickupItemModelGun_DoAutoFire_d_39 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      bVar8 = (this_00->fields).fireSecondary;
      fVar3 = (float)this - (this_00->fields).prevFireTime;
      pfVar9 = &(this_00->fields).fireIntervalSecondary;
      bVar10 = fVar3 != *pfVar9;
      bVar11 = *pfVar9 <= fVar3;
      (this_00->fields).fireSecondary = bVar11 && bVar10;
      (this_00->fields).fireMain = (NAN(fVar3) || NAN(*pfVar9)) || (!bVar11 || !bVar10);
      if (((NAN(fVar3) || NAN(*pfVar9)) || (!bVar11 || !bVar10)) || (bVar8 != 0)) {
code_?:
        this = (PickupItemModelGun_DoAutoFire_d_39 *)0x0;
        pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pPVar1->fields).__2__current = pOVar12;
        func_?(&(pPVar1->fields).__2__current,pOVar12);
        (pPVar1->fields).__1__state = 1;
        return 1;
      }
      pTVar13 = (this_00->fields).chargeObject;
      if ((pTVar13 != (Transform *)0x0) &&
         (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar13,(MethodInfo *)0x0), pGVar14 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar14,1,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (PickupItemModelGun *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  this = (PickupItemModelGun_DoAutoFire_d_39 *)
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (PickupItemModelGun *)0x0) {
    fVar3 = (this_00->fields).prevFireTime;
    iVar4 = (this_00->fields)._.fireInterval.currentCryptoKey;
    AVar5 = (this_00->fields)._.fireInterval.hiddenValue;
    pBVar6 = (this_00->fields)._.fireInterval.hiddenValueOld;
    fVar7 = (this_00->fields)._.fireInterval.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    fVar3 = (float)this - fVar3;
    value_00.hiddenValue = AVar5;
    value_00.currentCryptoKey = iVar4;
    value_00.hiddenValueOld = pBVar6;
    value_00.fakeValue = fVar7;
    value_00.inited = (this_00->fields)._.fireInterval.inited;
    value_00._17_3_ = *(undefined3 *)&(this_00->fields)._.fireInterval.field_0x11;
    this = (PickupItemModelGun_DoAutoFire_d_39 *)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    if (fVar3 <= (float)this) {
      (this_00->fields).waitingToFire = 1;
      this = (PickupItemModelGun_DoAutoFire_d_39 *)0x0;
      pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pPVar1->fields).__2__current = pOVar12;
      func_?(&(pPVar1->fields).__2__current,pOVar12);
      (pPVar1->fields).__1__state = 2;
      return 1;
    }
    if ((this_00->fields).fireMain != 0) {
      pMVar15 = (this_00->fields)._._.owner;
      if (pMVar15 == (MVPickupOwner *)0x0) goto code_?;
      (*(this_00->klass->vtable).OnFire.methodPtr)
                (this_00,(uint)(pMVar15->fields)._IsLocal_k__BackingField,
                 (this_00->klass->vtable).OnFire.method);
      this = (PickupItemModelGun_DoAutoFire_d_39 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this_00->fields).prevFireTime = (float)this;
    }
    if ((this_00->fields).fireSecondary == 0) {
code_?:
      (this_00->fields).fireMain = 0;
      (this_00->fields).fireSecondary = 0;
      (this_00->fields).waitingToFire = 0;
      return 0;
    }
    pMVar15 = (this_00->fields)._._.owner;
    if (pMVar15 != (MVPickupOwner *)0x0) {
      PickupItemModelGun::PickupItemModelGun_OnFireSecondary
                (this_00,(pMVar15->fields)._IsLocal_k__BackingField,(MethodInfo *)0x0);
      this = (PickupItemModelGun_DoAutoFire_d_39 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pTVar13 = (this_00->fields).chargeObject;
      (this_00->fields).prevFireTime = (float)this;
      if ((pTVar13 != (Transform *)0x0) &&
         (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar13,(MethodInfo *)0x0), pGVar14 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar14,0,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  bVar8 = (*pcVar16)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemModelGun+<DoAutoFire>d__39::
     PickupItemModelGun_DoAutoFire_d_39_System_Collections_IEnumerator_Reset
               (PickupItemModelGun_DoAutoFire_d_39 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PickupItemModelGun___DoAutoFire_d__39__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

