
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemFlamethrower+<DoFuelBurn>d__17::
     PickupItemFlamethrower_DoFuelBurn_d_17_MoveNext
               (PickupItemFlamethrower_DoFuelBurn_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pPVar2 = (this->fields).__4__this;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pPVar2 != (PickupItemFlamethrower *)0x0) {
    if ((pPVar2->fields).isFlaming == 0) {
      pMStack_3 = (MVRigidBody *)
                   ((pPVar2->fields).flamerMinimumBurnTime + (pPVar2->fields).flamerStartTime);
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if ((float)pMStack_3 < fVar4) {
        return 0;
      }
    }
    pTStack_5 = *(Transform **)&(pPVar2->fields).currentFuel.inited;
    VStack_6.x = (float)(pPVar2->fields).currentFuel.currentCryptoKey;
    VStack_6.y = *(float *)&(pPVar2->fields).currentFuel.hiddenValue;
    VStack_6.z = (float)(pPVar2->fields).currentFuel.hiddenValueOld;
    fStack_7 = (pPVar2->fields).currentFuel.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = (ACTkByte4)VStack_6.y;
    value_00.currentCryptoKey = (int32_t)VStack_6.x;
    value_00.hiddenValueOld = (Byte__Array *)VStack_6.z;
    value_00.fakeValue = fStack_7;
    value_00._16_4_ = pTStack_5;
    pTStack_5 = (Transform *)
                 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    pMStack_3 = (MVRigidBody *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
    pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit
                        (&OStack_9,(float)pTStack_5 - (float)pMStack_3,(MethodInfo *)0x0);
    AVar10 = pOVar8->hiddenValue;
    pBVar11 = pOVar8->hiddenValueOld;
    fVar4 = pOVar8->fakeValue;
    bVar12 = pOVar8->inited;
    uVar13 = *(undefined3 *)&pOVar8->field_0x11;
    (pPVar2->fields).currentFuel.currentCryptoKey = pOVar8->currentCryptoKey;
    (pPVar2->fields).currentFuel.hiddenValue = AVar10;
    (pPVar2->fields).currentFuel.hiddenValueOld = pBVar11;
    (pPVar2->fields).currentFuel.fakeValue = fVar4;
    (pPVar2->fields).currentFuel.inited = bVar12;
    *(undefined3 *)&(pPVar2->fields).currentFuel.field_0x11 = uVar13;
    func_?();
    this_00 = (pPVar2->fields)._.muzzlePoint;
    if (this_00 != (Transform *)0x0) {
      pTStack_5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
      pMVar14 = (pPVar2->fields)._.owner;
      if ((pMVar14 != (MVPickupOwner *)0x0) &&
         (pVVar15 = MVPickupOwner::MVPickupOwner_get_LookDirection
                              (&VStack_16,pMVar14,(MethodInfo *)0x0), pTStack_5 != (Transform *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                  (pTStack_5,*pVVar15,(MethodInfo *)0x0);
        pMVar14 = (pPVar2->fields)._.owner;
        if ((pMVar14 != (MVPickupOwner *)0x0) &&
           (((pMVar17 = (pMVar14->fields)._.worldObjectParent, pMVar17 != (MVWorldObjectClient *)0x0 &&
             (pGVar18 = (pMVar17->fields).gameObject, pGVar18 != (GameObject *)0x0)) &&
            (pMStack_3 = (MVRigidBody *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (pGVar18,
                                     MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                    ), pMStack_3 != (MVRigidBody *)0x0)))) {
          cVar19 = (*(pMStack_3->klass->vtable).__unknown.methodPtr)
                             (pMStack_3,(pMStack_3->klass->vtable).__unknown.method);
          if (cVar19 == '\0') {
            puVar20 = (undefined8 *)
                      (*(pMStack_3->klass->vtable).__unknown_1.methodPtr)
                                (&VStack_6,pMStack_3,
                                 (pMStack_3->klass->vtable).__unknown_1.method);
            VStack_16._0_8_ = *puVar20;
            VStack_16.z = *(float *)(puVar20 + 1);
            OStack_9.currentCryptoKey = 0;
            OStack_9.hiddenValue.b1 = 0;
            OStack_9.hiddenValue.b2 = 0;
            OStack_9.hiddenValue.b3 = 0;
            OStack_9.hiddenValue.b4 = 0;
            OStack_9.hiddenValueOld = (Byte__Array *)0x0;
            OStack_9.fakeValue = 0.0;
            if (VStack_16.y < 0.0) {
              pMVar14 = (pPVar2->fields)._.owner;
              if (pMVar14 == (MVPickupOwner *)0x0) goto code_?;
              pVVar15 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                  (&VStack_6,pMVar14,(MethodInfo *)0x0);
              fStack_21 = pVVar15->y;
              if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
                pMStack_22 = TypeInfo__MVPhysics;
                func_?();
              }
              pMStack_22 = (MVPhysics__Class *)0x0;
              pfVar23 = (float *)func_?(&pMStack_22);
              VStack_6.x = *pfVar23;
              VStack_6.y = *(float *)(pfVar23 + 1);
              VStack_6.z = pfVar23[2];
              fStack_7 = pfVar23[3];
              pTStack_5 = (Transform *)pfVar23[4];
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              }
              value.hiddenValue = (ACTkByte4)VStack_6.y;
              value.currentCryptoKey = (int32_t)VStack_6.x;
              value.hiddenValueOld = (Byte__Array *)VStack_6.z;
              value.fakeValue = fStack_7;
              value._16_4_ = pTStack_5;
              pTStack_5 = (Transform *)
                           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
              fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
              VStack_16.z = 0.0;
              fStack_21 = fVar4 * (float)pTStack_5 * fStack_21 * _UNK_? * _UNK_?;
              fVar4 = fStack_21;
              if (VStack_16.y <= fStack_21) {
                fVar4 = VStack_16.y;
              }
              impulse.y = (float)((uint)fVar4 ^
                                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                 );
              impulse.x = (float)OStack_9.currentCryptoKey;
              impulse.z = 0.0;
              MVRigidBody::MVRigidBody_AddImpulse_1(pMStack_3,impulse,1,(MethodInfo *)0x0);
            }
          }
          cVar19 = (*(pPVar2->klass->vtable).get_IsAmmoDepleted.methodPtr)
                             (pPVar2,(pPVar2->klass->vtable).get_IsAmmoDepleted.method);
          if (cVar19 == '\0') {
            fStack_21 = 0.0;
            pOVar24 = (Object *)func_?(TypeInfo__System__Int32,&fStack_21);
            (this->fields).__2__current = pOVar24;
            func_?(&(this->fields).__2__current,pOVar24);
            (this->fields).__1__state = 1;
            return 1;
          }
          pMVar14 = (pPVar2->fields)._.owner;
          if (((pMVar14 != (MVPickupOwner *)0x0) &&
              (pMVar17 = (pMVar14->fields)._.worldObjectParent, pMVar17 != (MVWorldObjectClient *)0x0))
             && (pGVar18 = (pMVar17->fields).gameObject, pGVar18 != (GameObject *)0x0)) {
            x = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar18,
                           MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                          );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                               (x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar12 != 0) {
              if (x == (Object_1 *)0x0) goto code_?;
              pOVar25 = x->klass;
              uVar26._0_2_ = pOVar25[1]._0.byval_arg.attrs;
              uVar26._2_1_ = pOVar25[1]._0.byval_arg.type;
              uVar26._3_1_ = pOVar25[1]._0.byval_arg.field_0x7;
              (*(code *)pOVar25[1]._0.byval_arg.data)(x,uVar26);
            }
            return 0;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  bVar12 = (*pcVar27)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemFlamethrower+<DoFuelBurn>d__17::
     PickupItemFlamethrower_DoFuelBurn_d_17_System_Collections_IEnumerator_Reset
               (PickupItemFlamethrower_DoFuelBurn_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PickupItemFlamethrower___DoFuelBurn_d__17__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

