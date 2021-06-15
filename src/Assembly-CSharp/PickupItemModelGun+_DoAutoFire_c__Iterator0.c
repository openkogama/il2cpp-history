
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemModelGun+<DoAutoFire>c__Iterator0::
     PickupItemModelGun_DoAutoFire_c_Iterator0_MoveNext
               (PickupItemModelGun_DoAutoFire_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    pPVar3 = (this->fields)._this;
    if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
    (pPVar3->fields)._.isFiring = 1;
    pPVar3 = (this->fields)._this;
    if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
    (pPVar3->fields).fireMain = 1;
    pPVar3 = (this->fields)._this;
    if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
    (pPVar3->fields).fireSecondary = 0;
    this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pPVar3 = (pPVar1->fields)._this;
    if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
    fVar4 = (pPVar3->fields).prevFireTime;
    iVar5 = (pPVar3->fields)._.fireInterval.currentCryptoKey;
    AVar6 = (pPVar3->fields)._.fireInterval.hiddenValue;
    pBVar7 = (pPVar3->fields)._.fireInterval.hiddenValueOld;
    fVar8 = (pPVar3->fields)._.fireInterval.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)((float)this - fVar4);
    value_00.hiddenValue = AVar6;
    value_00.currentCryptoKey = iVar5;
    value_00.hiddenValueOld = pBVar7;
    value_00.fakeValue = fVar8;
    value_00.inited = (pPVar3->fields)._.fireInterval.inited;
    value_00._17_3_ = *(undefined3 *)&(pPVar3->fields)._.fireInterval.field_0x11;
    fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    if (fVar4 < (float)this) {
      pPVar3 = (pPVar1->fields)._this;
      this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pPVar9 = (pPVar1->fields)._this;
      if (pPVar9 == (PickupItemModelGun *)0x0) goto code_?;
      iVar5 = (pPVar9->fields)._.fireInterval.currentCryptoKey;
      AVar6 = (pPVar9->fields)._.fireInterval.hiddenValue;
      pBVar7 = (pPVar9->fields)._.fireInterval.hiddenValueOld;
      fVar4 = (pPVar9->fields)._.fireInterval.fakeValue;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_01.hiddenValue = AVar6;
      value_01.currentCryptoKey = iVar5;
      value_01.hiddenValueOld = pBVar7;
      value_01.fakeValue = fVar4;
      value_01.inited = (pPVar9->fields)._.fireInterval.inited;
      value_01._17_3_ = *(undefined3 *)&(pPVar9->fields)._.fireInterval.field_0x11;
      fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_01,(MethodInfo *)0x0);
      if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
      (pPVar3->fields).prevFireTime = (float)this - fVar4;
    }
code_?:
    pPVar3 = (pPVar1->fields)._this;
    if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
    if ((pPVar3->fields)._.isFiring != 0) {
      this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pPVar3 = (pPVar1->fields)._this;
      if (pPVar3 != (PickupItemModelGun *)0x0) {
        fVar4 = (float)this - (pPVar3->fields).prevFireTime;
        (pPVar1->fields)._timeFiring___1 = fVar4;
        (pPVar1->fields)._prevFireSecondary___1 = (pPVar3->fields).fireSecondary;
        pfVar10 = &(pPVar3->fields).fireIntervalSecondary;
        (pPVar3->fields).fireSecondary = *pfVar10 <= fVar4 && fVar4 != *pfVar10;
        pPVar3 = (pPVar1->fields)._this;
        if (pPVar3 != (PickupItemModelGun *)0x0) {
          (pPVar3->fields).fireMain = (pPVar3->fields).fireSecondary == 0;
          pPVar3 = (pPVar1->fields)._this;
          if (pPVar3 != (PickupItemModelGun *)0x0) {
            if (((pPVar3->fields).fireSecondary != 0) &&
               ((pPVar1->fields)._prevFireSecondary___1 == 0)) {
              if ((pPVar3 == (PickupItemModelGun *)0x0) ||
                 ((pTVar11 = (pPVar3->fields).chargeObject, pTVar11 == (Transform *)0x0 ||
                  (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pTVar11,(MethodInfo *)0x0),
                  pGVar12 == (GameObject *)0x0)))) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar12,1,(MethodInfo *)0x0);
            }
            this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)0x0;
            pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&this);
            (pPVar1->fields)._current = pOVar13;
            if ((pPVar1->fields)._disposing != 0) {
              return 1;
            }
            (pPVar1->fields)._PC = 1;
            return 1;
          }
        }
      }
      goto code_?;
    }
  }
  else {
    if (iVar2 == 1) goto code_?;
    if (iVar2 != 2) {
      return 0;
    }
  }
  this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pPVar3 = (pPVar1->fields)._this;
  if (pPVar3 != (PickupItemModelGun *)0x0) {
    fVar4 = (pPVar3->fields).prevFireTime;
    iVar5 = (pPVar3->fields)._.fireInterval.currentCryptoKey;
    AVar6 = (pPVar3->fields)._.fireInterval.hiddenValue;
    pBVar7 = (pPVar3->fields)._.fireInterval.hiddenValueOld;
    fVar8 = (pPVar3->fields)._.fireInterval.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar6;
    value.currentCryptoKey = iVar5;
    value.hiddenValueOld = pBVar7;
    value.fakeValue = fVar8;
    value.inited = (pPVar3->fields)._.fireInterval.inited;
    value._17_3_ = *(undefined3 *)&(pPVar3->fields)._.fireInterval.field_0x11;
    fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    pPVar3 = (pPVar1->fields)._this;
    if (fVar8 < (float)this - fVar4) {
      if (pPVar3 != (PickupItemModelGun *)0x0) {
        if ((pPVar3->fields).fireMain != 0) {
          if ((pPVar3 == (PickupItemModelGun *)0x0) ||
             (pMVar14 = (pPVar3->fields)._._.owner, pMVar14 == (MVPickupOwner *)0x0))
          goto code_?;
          bVar15 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar14,(MethodInfo *)0x0);
          this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)CONCAT31(this._1_3_,bVar15);
          if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
          (*(code *)(pPVar3->klass->vtable).OnFire.method)
                    (pPVar3,this,(pPVar3->klass->vtable).OnDestroy.methodPtr);
          pPVar3 = (pPVar1->fields)._this;
          this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
          (pPVar3->fields).prevFireTime = (float)this;
          pPVar3 = (pPVar1->fields)._this;
        }
        if (pPVar3 != (PickupItemModelGun *)0x0) {
          if ((pPVar3->fields).fireSecondary != 0) {
            pMVar14 = (pPVar3->fields)._._.owner;
            if (pMVar14 == (MVPickupOwner *)0x0) goto code_?;
            bVar15 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar14,(MethodInfo *)0x0);
            this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)CONCAT31(this._1_3_,bVar15);
            PickupItemModelGun::PickupItemModelGun_OnFireSecondary(pPVar3,bVar15,(MethodInfo *)0x0);
            pPVar3 = (pPVar1->fields)._this;
            this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
            ;
            if (pPVar3 == (PickupItemModelGun *)0x0) goto code_?;
            (pPVar3->fields).prevFireTime = (float)this;
            pPVar3 = (pPVar1->fields)._this;
            if (((pPVar3 == (PickupItemModelGun *)0x0) ||
                (pTVar11 = (pPVar3->fields).chargeObject, pTVar11 == (Transform *)0x0)) ||
               (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pTVar11,(MethodInfo *)0x0),
               pGVar12 == (GameObject *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar12,0,(MethodInfo *)0x0);
            pPVar3 = (pPVar1->fields)._this;
          }
          if (pPVar3 != (PickupItemModelGun *)0x0) {
            (pPVar3->fields).fireMain = 0;
            pPVar3 = (pPVar1->fields)._this;
            if (pPVar3 != (PickupItemModelGun *)0x0) {
              (pPVar3->fields).fireSecondary = 0;
              pPVar3 = (pPVar1->fields)._this;
              if (pPVar3 != (PickupItemModelGun *)0x0) {
                (pPVar3->fields).waitingToFire = 0;
                (pPVar1->fields)._PC = -1;
                return 0;
              }
            }
          }
        }
      }
    }
    else if (pPVar3 != (PickupItemModelGun *)0x0) {
      (pPVar3->fields).waitingToFire = 1;
      this = (PickupItemModelGun_DoAutoFire_c_Iterator0 *)0x0;
      pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pPVar1->fields)._current = pOVar13;
      if ((pPVar1->fields)._disposing == 0) {
        (pPVar1->fields)._PC = 2;
      }
      return 1;
    }
  }
code_?:
  func_?(0);
  pcVar16 = (code *)swi(3);
  bVar15 = (*pcVar16)();
  return bVar15;
}


/* Void Reset() */

void Assembly-CSharp.dll::PickupItemModelGun+<DoAutoFire>c__Iterator0::
     PickupItemModelGun_DoAutoFire_c_Iterator0_Reset
               (PickupItemModelGun_DoAutoFire_c_Iterator0 *this,MethodInfo *method)

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

