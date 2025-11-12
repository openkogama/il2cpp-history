
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemFlamethrower+<DoFuelBurn>d__22::
     PickupItemFlamethrower_DoFuelBurn_d_22_MoveNext
               (PickupItemFlamethrower_DoFuelBurn_d_22 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (this_00 != (PickupItemFlamethrower *)0x0) {
    bVar2 = PickupItemFlamethrower::PickupItemFlamethrower_IsStillFlaming
                       (this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    uVar3._0_4_ = (this_00->fields).currentFuel.currentCryptoKey;
    uVar3._4_4_ = (this_00->fields).currentFuel.hiddenValue;
    pBVar4 = (this_00->fields).currentFuel.hiddenValueOld;
    uVar5._0_4_ = (this_00->fields).currentFuel.fakeValue;
    uVar5._4_1_ = (this_00->fields).currentFuel.inited;
    uVar5._5_3_ = *(undefined3 *)&(this_00->fields).currentFuel.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_6[0]._0_8_ = uVar3;
    aOStack_6[0].hiddenValueOld = pBVar4;
    aOStack_6[0]._16_8_ = uVar5;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar8 = (code *)swi(3);
      bVar2 = (*pcVar8)();
      return bVar2;
    }
    pcRam_? = pcVar8;
    fVar9 = (float)(*pcRam_?)();
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_6[0].fakeValue = 0.0;
    aOStack_6[0].inited = 0;
    aOStack_6[0]._21_3_ = 0;
    aOStack_6[0].currentCryptoKey = 0;
    aOStack_6[0].hiddenValue.b1 = 0;
    aOStack_6[0].hiddenValue.b2 = 0;
    aOStack_6[0].hiddenValue.b3 = 0;
    aOStack_6[0].hiddenValue.b4 = 0;
    aOStack_6[0].hiddenValueOld = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_InternalEncrypt(fVar7 - fVar9,(MethodInfo *)0x0);
    pMVar10 = (MethodInfo *)0x0;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat__ctor(aOStack_6,value,(MethodInfo *)0x0);
    bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar2 != 0) {
      aOStack_6[0].fakeValue = fVar7 - fVar9;
    }
    bVar11 = iRam_? != 0;
    (this_00->fields).currentFuel.currentCryptoKey = aOStack_6[0].currentCryptoKey;
    (this_00->fields).currentFuel.hiddenValue = aOStack_6[0].hiddenValue;
    (this_00->fields).currentFuel.hiddenValueOld = aOStack_6[0].hiddenValueOld;
    (this_00->fields).currentFuel.fakeValue = aOStack_6[0].fakeValue;
    (this_00->fields).currentFuel.inited = aOStack_6[0].inited;
    *(undefined3 *)&(this_00->fields).currentFuel.field_0x15 = aOStack_6[0]._21_3_;
    if (bVar11) {
      uVar12 = (uint)((ulonglong)&(this_00->fields).currentFuel.hiddenValueOld >> 0xc);
      uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
      pMVar10 = (MethodInfo *)(ulonglong)(uVar12 & 0x3f);
      do {
        uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
        puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (longlong)pMVar10;
        }
        UNLOCK();
      } while (!bVar11);
    }
    pTVar16 = (this_00->fields)._.muzzlePoint;
    if (pTVar16 != (Transform *)0x0) {
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar16,(MethodInfo *)0x0);
      pMVar17 = (this_00->fields)._.owner;
      if ((pMVar17 != (MVPickupOwner *)0x0) &&
         (pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                              ((Vector3 *)aOStack_6,&(pMVar17->fields).lookDirection,pMVar10),
         pTVar16 != (Transform *)0x0)) {
        VStack_19.x = pVVar18->x;
        VStack_19.y = pVVar18->y;
        VStack_19.z = pVVar18->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                  (pTVar16,&VStack_19,(MethodInfo *)0x0);
        pMVar17 = (this_00->fields)._.owner;
        if ((pMVar17 != (MVPickupOwner *)0x0) &&
           (((pMVar20 = (pMVar17->fields)._.worldObjectParent, pMVar20 != (MVWorldObjectClient *)0x0 &&
             (pGVar21 = (pMVar20->fields).gameObject, pGVar21 != (GameObject *)0x0)) &&
            (this_01 = (MVRigidBody *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 (pGVar21,
                                  MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                 ), this_01 != (MVRigidBody *)0x0)))) {
          cVar22 = (*(this_01->klass->vtable).__unknown.methodPtr)
                             (this_01,(this_01->klass->vtable).__unknown.method);
          if (cVar22 == '\0') {
            pMVar10 = (this_01->klass->vtable).__unknown_1.method;
            plVar23 = (longlong *)
                      (*(this_01->klass->vtable).__unknown_1.methodPtr)(aOStack_6,this_01);
            VStack_19._0_8_ = *plVar23;
            fVar7 = (float)((ulonglong)VStack_19._0_8_ >> 0x20);
            VStack_19.z = *(float *)(plVar23 + 1);
            if (fVar7 < 0.0) {
              pMVar17 = (this_00->fields)._.owner;
              if (pMVar17 == (MVPickupOwner *)0x0) goto code_?;
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                  ((Vector3 *)aOStack_6,&(pMVar17->fields).lookDirection,pMVar10);
              VStack_19.x = pVVar18->x;
              VStack_19.y = pVVar18->y;
              VStack_19.z = pVVar18->z;
              if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVPhysics);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
                FUN_?();
              }
              pMVar24 = TypeInfo__MVPhysics->static_fields;
              uVar25._0_4_ = (pMVar24->gravity).currentCryptoKey;
              uVar25._4_4_ = (pMVar24->gravity).hiddenValue;
              pBVar4 = (pMVar24->gravity).hiddenValueOld;
              uVar26._0_4_ = (pMVar24->gravity).fakeValue;
              uVar26._4_1_ = (pMVar24->gravity).inited;
              uVar26._5_3_ = *(undefined3 *)&(pMVar24->gravity).field_0x15;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              aOStack_6[0]._0_8_ = uVar25;
              aOStack_6[0].hiddenValueOld = pBVar4;
              aOStack_6[0]._16_8_ = uVar26;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredFloat::ObscuredFloat_InternalDecrypt(aOStack_6,(MethodInfo *)0x0);
              fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
              fVar9 = fVar27 * VStack_19.y * fVar9 * _UNK_? * _UNK_?;
              if (fVar7 <= fVar9) {
                fVar9 = fVar7;
              }
              VStack_19.z = 0.0;
              VStack_19._0_8_ = (ulonglong)((uint)fVar9 ^ _UNK_?) << 0x20;
              MVRigidBody::MVRigidBody_AddImpulse_1(this_01,&VStack_19,1,(MethodInfo *)0x0);
            }
          }
          cVar22 = (*(this_00->klass->vtable).get_IsAmmoDepleted.methodPtr)
                             (this_00,(this_00->klass->vtable).get_IsAmmoDepleted.method);
          lVar28 = lRam_?;
          if (cVar22 == '\0') {
            pOVar29 = (Object *)0x0;
            uStackX_8 = 0;
            if (*(int *)(lRam_? + 0x28) < 0) {
              if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                 ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                pOVar29 = (Object *)FUN_?(lRam_?);
                FUN_?(pOVar29 + 1,&uStackX_8,(longlong)*(int *)(lVar28 + 0xf8) + -0x10);
                if (iRam_? != 0) {
                  uVar12 = (uint)((ulonglong)(pOVar29 + 1) >> 0xc);
                  uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
                  do {
                    uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                    puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                    LOCK();
                    bVar11 = uVar14 == *puVar15;
                    if (bVar11) {
                      *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar11);
                }
              }
            }
            else {
              pOVar29 = (Object *)((ulonglong)uStackX_c << 0x20);
            }
            bVar11 = iRam_? != 0;
            (this->fields).__2__current = pOVar29;
            if (bVar11) {
              uVar12 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar14 == *puVar15;
                if (bVar11) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            (this->fields).__1__state = 1;
            return 1;
          }
          pMVar17 = (this_00->fields)._.owner;
          if (((pMVar17 != (MVPickupOwner *)0x0) &&
              (pMVar20 = (pMVar17->fields)._.worldObjectParent, pMVar20 != (MVWorldObjectClient *)0x0))
             && (pGVar21 = (pMVar20->fields).gameObject, pGVar21 != (GameObject *)0x0)) {
            pOVar29 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                                (pGVar21,
                                 MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                                );
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
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pOVar29 == (Object *)0x0) {
              return 0;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pOVar29[1].klass == (Object__Class *)0x0) {
              return 0;
            }
            pOVar30 = pOVar29->klass;
            uVar31._0_2_ = pOVar30[1]._0.byval_arg.attrs;
            uVar31._2_1_ = pOVar30[1]._0.byval_arg.type;
            uVar31._3_5_ = *(undefined5 *)&pOVar30[1]._0.byval_arg.field_0xb;
            (*(code *)pOVar30[1]._0.byval_arg.data)(pOVar29,uVar31);
            return 0;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar2 = (*pcVar8)();
  return bVar2;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemFlamethrower+<DoFuelBurn>d__22::
     PickupItemFlamethrower_DoFuelBurn_d_22_System_Collections_IEnumerator_Reset
               (PickupItemFlamethrower_DoFuelBurn_d_22 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PickupItemFlamethrower___DoFuelBurn_d__22__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

