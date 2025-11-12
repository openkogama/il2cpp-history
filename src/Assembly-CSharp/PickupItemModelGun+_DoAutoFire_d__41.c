
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PickupItemModelGun+<DoAutoFire>d__41::
     PickupItemModelGun_DoAutoFire_d_41_MoveNext
               (PickupItemModelGun_DoAutoFire_d_41 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pcVar2 = pcRam_?;
    if (this_00 == (PickupItemModelGun *)0x0) goto code_?;
    (this_00->fields)._.isFiring = 1;
    (this_00->fields).fireMain = 1;
    (this_00->fields).fireSecondary = 0;
    pcVar3 = pcRam_?;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0))
    {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      bVar5 = (*pcVar2)();
      return bVar5;
    }
    pcRam_? = pcVar3;
    fVar6 = (float)(*pcVar2)();
    fVar7 = (this_00->fields).prevFireTime;
    aOStack_8[0].currentCryptoKey = (this_00->fields)._.fireInterval.currentCryptoKey;
    aOStack_8[0].hiddenValue = (this_00->fields)._.fireInterval.hiddenValue;
    aOStack_8[0].hiddenValueOld = (this_00->fields)._.fireInterval.hiddenValueOld;
    aOStack_8[0].fakeValue = (this_00->fields)._.fireInterval.fakeValue;
    aOStack_8[0].inited = (this_00->fields)._.fireInterval.inited;
    aOStack_8[0]._21_3_ = *(undefined3 *)&(this_00->fields)._.fireInterval.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
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
    fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt(aOStack_8,(MethodInfo *)0x0);
    if (fVar9 < fVar6 - fVar7) {
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      uVar10._0_4_ = (this_00->fields)._.fireInterval.currentCryptoKey;
      uVar10._4_4_ = (this_00->fields)._.fireInterval.hiddenValue;
      pBVar11 = (this_00->fields)._.fireInterval.hiddenValueOld;
      uVar4._0_4_ = (this_00->fields)._.fireInterval.fakeValue;
      uVar4._4_1_ = (this_00->fields)._.fireInterval.inited;
      uVar4._5_3_ = *(undefined3 *)&(this_00->fields)._.fireInterval.field_0x15;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      aOStack_8[0]._0_8_ = uVar10;
      aOStack_8[0].hiddenValueOld = pBVar11;
      aOStack_8[0]._16_8_ = uVar4;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt(aOStack_8,(MethodInfo *)0x0);
      (this_00->fields).prevFireTime = fVar7 - fVar6;
    }
code_?:
    if ((this_00->fields)._.isFiring == 0) {
code_?:
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        bVar5 = (*pcVar2)();
        return bVar5;
      }
      pcRam_? = pcVar2;
      fVar7 = (float)(*pcRam_?)();
      if (this_00 == (PickupItemModelGun *)0x0) goto code_?;
      fVar6 = (this_00->fields).prevFireTime;
      uVar12._0_4_ = (this_00->fields)._.fireInterval.currentCryptoKey;
      uVar12._4_4_ = (this_00->fields)._.fireInterval.hiddenValue;
      pBVar11 = (this_00->fields)._.fireInterval.hiddenValueOld;
      uVar13._0_4_ = (this_00->fields)._.fireInterval.fakeValue;
      uVar13._4_1_ = (this_00->fields)._.fireInterval.inited;
      uVar13._5_3_ = *(undefined3 *)&(this_00->fields)._.fireInterval.field_0x15;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      aOStack_8[0]._0_8_ = uVar12;
      aOStack_8[0].hiddenValueOld = pBVar11;
      aOStack_8[0]._16_8_ = uVar13;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt(aOStack_8,(MethodInfo *)0x0);
      if (fVar9 < fVar7 - fVar6) {
        if ((this_00->fields).fireMain != 0) {
          pMVar14 = (this_00->fields)._._.owner;
          if (pMVar14 == (MVPickupOwner *)0x0) goto code_?;
          (*(this_00->klass->vtable).OnFire.methodPtr)
                    (this_00,(ulonglong)(pMVar14->fields)._IsLocal_k__BackingField);
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (this_00->fields).prevFireTime = fVar7;
        }
        if ((this_00->fields).fireSecondary != 0) {
          pMVar14 = (this_00->fields)._._.owner;
          if (pMVar14 == (MVPickupOwner *)0x0) {
code_?:
            FUN_?();
            pcVar2 = (code *)swi(3);
            bVar5 = (*pcVar2)();
            return bVar5;
          }
          PickupItemModelGun::PickupItemModelGun_OnFireSecondary
                    (this_00,(pMVar14->fields)._IsLocal_k__BackingField,(MethodInfo *)0x0);
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          pTVar15 = (this_00->fields).chargeObject;
          (this_00->fields).prevFireTime = fVar7;
          if ((pTVar15 == (Transform *)0x0) ||
             (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pTVar15,(MethodInfo *)0x0),
             pGVar16 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar16,0,(MethodInfo *)0x0);
        }
        (this_00->fields).fireMain = 0;
        (this_00->fields).fireSecondary = 0;
        (this_00->fields).waitingToFire = 0;
        goto code_?;
      }
      (this_00->fields).waitingToFire = 1;
      lVar17 = lRam_?;
      pOVar18 = (Object *)0x0;
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar18 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar18 + 1,&uStackX_8,(longlong)*(int *)(lVar17 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar19 = (uint)((ulonglong)(pOVar18 + 1) >> 0xc);
            uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
            do {
              uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
              puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
              LOCK();
              bVar23 = uVar21 == *puVar22;
              if (bVar23) {
                *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
        }
      }
      else {
        pOVar18 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar23 = iRam_? != 0;
      (this->fields).__2__current = pOVar18;
      if (bVar23) {
        uVar19 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
        do {
          uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
          puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
          LOCK();
          bVar23 = uVar21 == *puVar22;
          if (bVar23) {
            *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
          }
          UNLOCK();
        } while (!bVar23);
      }
      (this->fields).__1__state = 2;
    }
    else {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        bVar5 = (*pcVar2)();
        return bVar5;
      }
      pcRam_? = pcVar2;
      fVar7 = (float)(*pcRam_?)();
      fVar7 = fVar7 - (this_00->fields).prevFireTime;
      bVar5 = (this_00->fields).fireSecondary;
      pfVar24 = &(this_00->fields).fireIntervalSecondary;
      bVar23 = fVar7 != *pfVar24;
      bVar25 = *pfVar24 <= fVar7;
      (this_00->fields).fireSecondary = bVar25 && bVar23;
      (this_00->fields).fireMain = (NAN(fVar7) || NAN(*pfVar24)) || (!bVar25 || !bVar23);
      if ((bVar25 && bVar23) && (bVar5 == 0)) {
        pTVar15 = (this_00->fields).chargeObject;
        if ((pTVar15 == (Transform *)0x0) ||
           (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar15,(MethodInfo *)0x0),
           pGVar16 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar16,1,(MethodInfo *)0x0);
      }
      lVar17 = lRam_?;
      pOVar18 = (Object *)0x0;
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar18 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar18 + 1,&uStackX_8,(longlong)*(int *)(lVar17 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar19 = (uint)((ulonglong)(pOVar18 + 1) >> 0xc);
            uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
            do {
              uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
              puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
              LOCK();
              bVar23 = uVar21 == *puVar22;
              if (bVar23) {
                *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
        }
      }
      else {
        pOVar18 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar23 = iRam_? != 0;
      (this->fields).__2__current = pOVar18;
      if (bVar23) {
        uVar19 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
        do {
          uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
          puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
          LOCK();
          bVar23 = uVar21 == *puVar22;
          if (bVar23) {
            *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
          }
          UNLOCK();
        } while (!bVar23);
      }
      (this->fields).__1__state = 1;
    }
    bVar5 = 1;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (PickupItemModelGun *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar1 == 2) {
      (this->fields).__1__state = -1;
      goto code_?;
    }
code_?:
    bVar5 = 0;
  }
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PickupItemModelGun+<DoAutoFire>d__41::
     PickupItemModelGun_DoAutoFire_d_41_System_Collections_IEnumerator_Reset
               (PickupItemModelGun_DoAutoFire_d_41 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PickupItemModelGun___DoAutoFire_d__41__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

