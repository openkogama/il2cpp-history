
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemFlamethrower+<DoFuelBurn>c__Iterator1::
     PickupItemFlamethrower_DoFuelBurn_c_Iterator1_MoveNext
               (PickupItemFlamethrower_DoFuelBurn_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    return 0;
  }
  pPVar3 = (this->fields)._this;
  if (pPVar3 != (PickupItemFlamethrower *)0x0) {
    if ((pPVar3->fields).isFlaming == 0) {
      this = (PickupItemFlamethrower_DoFuelBurn_c_Iterator1 *)
             ((pPVar3->fields).flamerMinimumBurnTime + (pPVar3->fields).flamerStartTime);
      fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((float)this < fStack_4) {
        (pPVar1->fields)._PC = -1;
        return 0;
      }
    }
    pPVar3 = (pPVar1->fields)._this;
    if (pPVar3 != (PickupItemFlamethrower *)0x0) {
      this = *(PickupItemFlamethrower_DoFuelBurn_c_Iterator1 **)&(pPVar3->fields).currentFuel.inited
      ;
      AStack_5 = (ACTkByte4)(pPVar3->fields).currentFuel.currentCryptoKey;
      AVar6 = (pPVar3->fields).currentFuel.hiddenValue;
      pBVar7 = (pPVar3->fields).currentFuel.hiddenValueOld;
      fVar8 = (pPVar3->fields).currentFuel.fakeValue;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value.hiddenValue = AVar6;
      value.currentCryptoKey._0_1_ = AStack_5.b1;
      value.currentCryptoKey._1_1_ = AStack_5.b2;
      value.currentCryptoKey._2_1_ = AStack_5.b3;
      value.currentCryptoKey._3_1_ = AStack_5.b4;
      value.hiddenValueOld = pBVar7;
      value.fakeValue = fVar8;
      value._16_4_ = this;
      this = (PickupItemFlamethrower_DoFuelBurn_c_Iterator1 *)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
      pOVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit
                          ((ObscuredFloat *)&stack0xffffffc0,(float)this - fStack_4,
                           (MethodInfo *)0x0);
      AVar6 = pOVar9->hiddenValue;
      pBVar7 = pOVar9->hiddenValueOld;
      fVar8 = pOVar9->fakeValue;
      bVar10 = pOVar9->inited;
      uVar11 = *(undefined3 *)&pOVar9->field_0x11;
      (pPVar3->fields).currentFuel.currentCryptoKey = pOVar9->currentCryptoKey;
      (pPVar3->fields).currentFuel.hiddenValue = AVar6;
      (pPVar3->fields).currentFuel.hiddenValueOld = pBVar7;
      (pPVar3->fields).currentFuel.fakeValue = fVar8;
      (pPVar3->fields).currentFuel.inited = bVar10;
      *(undefined3 *)&(pPVar3->fields).currentFuel.field_0x11 = uVar11;
      pPVar3 = (pPVar1->fields)._this;
      if ((pPVar3 != (PickupItemFlamethrower *)0x0) &&
         (pTVar12 = (pPVar3->fields)._.muzzlePoint, pTVar12 != (Transform *)0x0)) {
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pTVar12,(MethodInfo *)0x0);
        pPVar3 = (pPVar1->fields)._this;
        if ((pPVar3 != (PickupItemFlamethrower *)0x0) &&
           ((pMVar13 = (pPVar3->fields)._.owner, pMVar13 != (MVPickupOwner *)0x0 &&
            (pVVar14 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                 (&VStack_15,pMVar13,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0)
            ))) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                    (pTVar12,*pVVar14,(MethodInfo *)0x0);
          pPVar3 = (pPVar1->fields)._this;
          if ((pPVar3 != (PickupItemFlamethrower *)0x0) &&
             (((pMVar13 = (pPVar3->fields)._.owner, pMVar13 != (MVPickupOwner *)0x0 &&
               (pDVar16 = (DayNightCycle *)
                          System.dll::System::Collections::Generic::
                          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                          ::Single,System::Object]::
                          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                    ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                      *)pMVar13,(MethodInfo *)0x0), pDVar16 != (DayNightCycle *)0x0))
              && (pCVar17 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                      (pDVar16,(MethodInfo *)0x0), pCVar17 != (CelestialParam *)0x0)
              ))) {
            pMVar18 = (MVRigidBody *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponent_47
                                ((GameObject *)pCVar17,
                                 MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                );
            (pPVar1->fields)._mvRigidBody___1 = pMVar18;
            if (pMVar18 != (MVRigidBody *)0x0) {
              cVar19 = func_?(5,pMVar18);
              if (cVar19 == '\0') {
                pMVar18 = (pPVar1->fields)._mvRigidBody___1;
                if (pMVar18 == (MVRigidBody *)0x0) goto code_?;
                puVar20 = (undefined8 *)func_?(&VStack_15,6,pMVar18);
                uVar21 = *puVar20;
                uStack_22._4_4_ = (float)((ulonglong)uVar21 >> 0x20);
                bVar23 = uStack_22._4_4_ < 0.0;
                uStack_22 = uVar21;
                if (bVar23) {
                  pPVar3 = (pPVar1->fields)._this;
                  if ((pPVar3 == (PickupItemFlamethrower *)0x0) ||
                     (pMVar13 = (pPVar3->fields)._.owner, pMVar13 == (MVPickupOwner *)0x0))
                  goto code_?;
                  pVVar14 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                      ((Vector3 *)&stack0xffffffc8,pMVar13,(MethodInfo *)0x0);
                  VStack_15.x = pVVar14->x;
                  VStack_15.y = pVVar14->y;
                  if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pOVar9 = MVPhysics::MVPhysics_get_Gravity
                                      ((ObscuredFloat *)&stack0xffffffac,(MethodInfo *)0x0);
                  AStack_5 = (ACTkByte4)pOVar9->currentCryptoKey;
                  AVar6 = pOVar9->hiddenValue;
                  pBVar7 = pOVar9->hiddenValueOld;
                  fVar8 = pOVar9->fakeValue;
                  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable)
                              .Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                      cctor_started == 0)) {
                    func_?();
                  }
                  value_00.hiddenValue = AVar6;
                  value_00.currentCryptoKey._0_1_ = AStack_5.b1;
                  value_00.currentCryptoKey._1_1_ = AStack_5.b2;
                  value_00.currentCryptoKey._2_1_ = AStack_5.b3;
                  value_00.currentCryptoKey._3_1_ = AStack_5.b4;
                  value_00.hiddenValueOld = pBVar7;
                  value_00.fakeValue = fVar8;
                  value_00.inited = pOVar9->inited;
                  value_00._17_3_ = *(undefined3 *)&pOVar9->field_0x11;
                  this = (PickupItemFlamethrower_DoFuelBurn_c_Iterator1 *)
                         Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
                  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  this = (PickupItemFlamethrower_DoFuelBurn_c_Iterator1 *)
                         (fVar8 * VStack_15.y * (float)this * _UNK_? * _UNK_?);
                  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                    func_?();
                  }
                  this = (PickupItemFlamethrower_DoFuelBurn_c_Iterator1 *)
                         UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                                   ((float)this,uStack_22._4_4_,(MethodInfo *)0x0);
                  pMVar18 = (pPVar1->fields)._mvRigidBody___1;
                  fStack_24 = 0.0;
                  uStack_25 = 0;
                  VStack_15.z = 0.0;
                  VStack_15.y = 0.0;
                  VStack_15.x = (float)((uint)this ^ _UNK_?);
                  func_?();
                  if (pMVar18 == (MVRigidBody *)0x0) goto code_?;
                  impulse.z = fStack_24;
                  impulse.x = (float)(undefined4)uStack_25;
                  impulse.y = (float)uStack_25._4_4_;
                  MVRigidBody::MVRigidBody_AddImpulse_1(pMVar18,impulse,1,(MethodInfo *)0x0);
                }
              }
              pPVar3 = (pPVar1->fields)._this;
              if (pPVar3 != (PickupItemFlamethrower *)0x0) {
                cVar19 = func_?(4,pPVar3);
                if (cVar19 == '\0') {
                  this = (PickupItemFlamethrower_DoFuelBurn_c_Iterator1 *)0x0;
                  pOVar26 = (Object *)func_?(TypeInfo__System__Int32,&this);
                  (pPVar1->fields)._current = pOVar26;
                  if ((pPVar1->fields)._disposing == 0) {
                    (pPVar1->fields)._PC = 1;
                  }
                  return 1;
                }
                pPVar3 = (pPVar1->fields)._this;
                if ((((pPVar3 != (PickupItemFlamethrower *)0x0) &&
                     (pMVar13 = (pPVar3->fields)._.owner, pMVar13 != (MVPickupOwner *)0x0)) &&
                    (pDVar16 = (DayNightCycle *)
                               System.dll::System::Collections::Generic::
                               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                               ::Single,System::Object]::
                               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                           *)pMVar13,(MethodInfo *)0x0),
                    pDVar16 != (DayNightCycle *)0x0)) &&
                   (pCVar17 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                        (pDVar16,(MethodInfo *)0x0),
                   pCVar17 != (CelestialParam *)0x0)) {
                  x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponent_47
                                ((GameObject *)pCVar17,
                                 MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                                );
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar10 != 0) {
                    if (x == (UseInteractorHandler *)0x0) goto code_?;
                    func_?(6,x);
                  }
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar27 = (code *)swi(3);
  bVar10 = (*pcVar27)();
  return bVar10;
}


/* Void Reset() */

void Assembly-CSharp.dll::PickupItemFlamethrower+<DoFuelBurn>c__Iterator1::
     PickupItemFlamethrower_DoFuelBurn_c_Iterator1_Reset
               (PickupItemFlamethrower_DoFuelBurn_c_Iterator1 *this,MethodInfo *method)

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

