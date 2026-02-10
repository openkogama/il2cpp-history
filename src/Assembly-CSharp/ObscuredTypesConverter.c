
/* Object CreateObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                   (Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int64);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value_03 = (Object__Class *)0x0;
  if (value != (Object *)0x0) {
    pOVar1 = value_03;
    if (value->klass == pORam0000000182dc2f18) {
      pOVar1 = (Object__Class *)value;
    }
    if (pOVar1 == (Object__Class *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((value->klass->_0).element_class != (pORam0000000182dc2f18->_0).element_class) {
      FUN_?(value);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    iVar4 = *(int32_t *)&value[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_5._0_8_ =
         (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)0x0;
    auStack_5._8_8_ = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_Encrypt(iVar4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    auStack_5._4_4_ = iVar6;
    auStack_5._0_4_ =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    auStack_5[0xc] = 1;
    bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    iVar6 = 0;
    if (bVar7 != 0) {
      iVar6 = iVar4;
    }
    auStack_5._8_4_ = iVar6;
    ppDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                **)auStack_5;
    pOVar9 = (ObscuredLong__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    goto code_?;
  }
code_?:
  lVar10 = FUN_?(value,TypeInfo__System__Int32);
  pIVar11 = TypeInfo__System__Int32;
  if (lVar10 != 0) {
    if (value == (Object *)0x0) goto code_?;
    lVar10 = FUN_?(value,TypeInfo__System__Int32);
    if (lVar10 == 0) {
      FUN_?(value,pIVar11);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    pOVar12 = (Object *)FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    piVar13 = (int32_t *)(lVar10 + 0x20);
    pOVar3 = pOVar12 + 1;
    while( true ) {
      uVar14 = (uint)value_03;
      if (*(int *)(lVar10 + 0x18) <= (int)uVar14) {
        return pOVar12;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar14) break;
      iVar4 = *piVar13;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_5._0_8_ =
           (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)0x0;
      auStack_5._8_8_ = (Byte__Array *)0x0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_Encrypt(iVar4,(MethodInfo *)0x0);
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)CONCAT44(pDStackX_8._4_4_,iVar6);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      auStack_5._4_4_ = pDStackX_8._0_4_;
      auStack_5._0_4_ =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
      auStack_5[0xc] = 1;
      bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
               ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      iVar6 = 0;
      if (bVar7 != 0) {
        iVar6 = iVar4;
      }
      auStack_5._8_4_ = iVar6;
      if (pOVar12 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar12[1].monitor <= uVar14) break;
      *(undefined4 *)&pOVar3[1].klass = auStack_5._0_4_;
      *(undefined4 *)((longlong)&pOVar3[1].klass + 4) = auStack_5._4_4_;
      *(int32_t *)&pOVar3[1].monitor = iVar6;
      *(undefined4 *)((longlong)&pOVar3[1].monitor + 4) = auStack_5._12_4_;
      value_03 = (Object__Class *)(ulonglong)(uVar14 + 1);
      piVar13 = piVar13 + 1;
      pOVar3 = pOVar3 + 1;
    }
    goto code_?;
  }
  if (value != (Object *)0x0) {
    pOVar1 = value_03;
    if (value->klass == pORam0000000182dc2f48) {
      pOVar1 = (Object__Class *)value;
    }
    if (pOVar1 != (Object__Class *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if ((value->klass->_0).element_class != (pORam0000000182dc2f48->_0).element_class) {
        FUN_?(value);
code_?:
        FUN_?();
code_?:
        FUN_?(value);
        FUN_?();
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      pOVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit
                          ((ObscuredFloat *)auStack_16,*(float *)&value[1].klass,(MethodInfo *)0x0);
      auStack_5._0_8_ = *(undefined8 *)pOVar15;
      auStack_5._8_8_ = pOVar15->hiddenValueOld;
      pOStack_17 = *(Object__Class **)&pOVar15->fakeValue;
      ppDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                  **)auStack_5;
      pOVar9 = (ObscuredLong__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
      goto code_?;
    }
  }
  lVar10 = FUN_?(value,TypeInfo__System__Single);
  pSVar18 = TypeInfo__System__Single;
  if (lVar10 != 0) {
    if (value == (Object *)0x0) goto code_?;
    lVar10 = FUN_?(value,TypeInfo__System__Single);
    if (lVar10 == 0) {
      FUN_?(value,pSVar18);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    pOVar12 = (Object *)FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    pOVar3 = pOVar12 + 2;
    pfVar19 = (float *)(lVar10 + 0x20);
    while( true ) {
      uVar14 = (uint)value_03;
      if (*(int *)(lVar10 + 0x18) <= (int)uVar14) {
        return pOVar12;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar14) break;
      value_00 = *pfVar19;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_5._0_8_ =
           (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)0x0;
      auStack_5._8_8_ =
           (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)0x0;
      pOStack_17 = (Object__Class *)0x0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      value_02 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_InternalEncrypt(value_00,(MethodInfo *)0x0);
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat__ctor((ObscuredFloat *)auStack_5,value_02,(MethodInfo *)0x0);
      bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
               ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      if (bVar7 != 0) {
        pOStack_17 = (Object__Class *)CONCAT44(pOStack_17._4_4_,value_00);
      }
      if (pOVar12 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar12[1].monitor <= uVar14) break;
      *(undefined4 *)&pOVar3->klass = auStack_5._0_4_;
      *(undefined4 *)((longlong)&pOVar3->klass + 4) = auStack_5._4_4_;
      *(undefined4 *)&pOVar3->monitor = auStack_5._8_4_;
      *(undefined4 *)((longlong)&pOVar3->monitor + 4) = auStack_5._12_4_;
      pOVar3[1].klass = pOStack_17;
      if (iRam_? != 0) {
        uVar20 = (uint)((ulonglong)((longlong)pOVar12 + (longlong)(int)uVar14 * 0x18 + 0x28) >> 0xc)
        ;
        uVar21 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
        do {
          uVar22 = *(ulonglong *)(uVar21 * 8 + 0xADDR);
          puVar23 = (ulonglong *)(uVar21 * 8 + 0xADDR);
          LOCK();
          bVar24 = uVar22 == *puVar23;
          if (bVar24) {
            *puVar23 = uVar22 | 1L << (uVar20 & 0x3f);
          }
          UNLOCK();
        } while (!bVar24);
      }
      value_03 = (Object__Class *)(ulonglong)(uVar14 + 1);
      pfVar19 = pfVar19 + 1;
      pOVar3 = (Object *)&pOVar3[1].monitor;
    }
    goto code_?;
  }
  if (value != (Object *)0x0) {
    bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar25 <= (value->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (value->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pOVar1 = value->klass;
      bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDStackX_8 = this;
      if (((pOVar1->_1).naturalAligment < bVar25) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar1->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(value);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pOVar1->_1).naturalAligment < bVar25) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar1->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(value);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      pOStack_17 = (Object__Class *)0x0;
      pMStack_26 = (MonitorData *)0x0;
      if (iRam_? != 0) {
        uVar14 = (uint)((ulonglong)auStack_5 >> 0xc);
        uVar21 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
        do {
          uVar22 = *(ulonglong *)(uVar21 * 8 + 0xADDR);
          puVar23 = (ulonglong *)(uVar21 * 8 + 0xADDR);
          LOCK();
          bVar24 = uVar22 == *puVar23;
          if (bVar24) {
            *puVar23 = uVar22 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar24);
      }
      auStack_5._12_4_ = 0;
      auStack_5._8_4_ = *(uint *)((longlong)&value[2].monitor + 4);
      uStack_27 = 2;
      auStack_28._8_8_ = auStack_5._8_8_;
      pOStack_29 = (Object__Class *)0x0;
      pDStack_30 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___Array
                    *)0x0;
      uStack_31._0_4_ = 2;
      uStack_31._4_4_ = 0;
      auStack_5._0_8_ =
           (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)0x0;
      auStack_5._8_8_ = auStack_28;
      auStack_28._0_8_ = value;
      do {
        bVar7 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            auStack_28,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                           );
        value_01 = pDStack_30;
        value = (Object *)pOStack_29;
        if (bVar7 == 0) {
          return (Object *)this;
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        pOVar1 = value_03;
        if ((Object__Class *)value != (Object__Class *)0x0) {
          if ((Object__Class *)(((Object__Class *)value)->_0).image == pORam0000000182dc2f60) {
            pOVar1 = (Object__Class *)value;
          }
          if (pOVar1 == (Object__Class *)0x0) goto code_?;
        }
        value = (Object *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
                ObscuredString_op_Implicit((String *)pOVar1,(MethodInfo *)0x0);
        pOVar3 = ObscuredTypesConverter_CreateObscuredValue((Object *)value_01,(MethodInfo *)0x0);
        if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) goto code_?;
        in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,value,pOVar3,
                   (InsertionBehavior__Enum)in_R9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      } while( true );
    }
    pOVar1 = value_03;
    if (value->klass == pORam0000000182dc2ef8) {
      pOVar1 = (Object__Class *)value;
    }
    if (pOVar1 != (Object__Class *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if ((value->klass->_0).element_class != (pORam0000000182dc2ef8->_0).element_class) {
        FUN_?(value);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      pOVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                ObscuredBool_op_Implicit
                          ((ObscuredBool *)auStack_5,*(bool *)&value[1].klass,(MethodInfo *)0x0);
      auStack_16 = pOVar32->currentCryptoKey;
      uStack_33._0_1_ = pOVar32->fakeValue;
      uStack_33._1_1_ = pOVar32->fakeValueChanged;
      uStack_33._2_1_ = pOVar32->inited;
      uStack_33._3_1_ = pOVar32->field_0xb;
      ppDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                  **)auStack_16;
      pOVar9 = (ObscuredLong__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
      goto code_?;
    }
  }
  lVar10 = FUN_?(value,TypeInfo__System__Boolean);
  pBVar34 = TypeInfo__System__Boolean;
  if (lVar10 != 0) {
    if (value != (Object *)0x0) {
      lVar10 = FUN_?(value,TypeInfo__System__Boolean);
      if (lVar10 == 0) {
        FUN_?(value,pBVar34);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      pOVar12 = (Object *)FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool)
      ;
      pcVar35 = (char *)(lVar10 + 0x20);
      pOVar3 = pOVar12 + 2;
      while( true ) {
        uVar14 = (uint)value_03;
        if (*(int *)(lVar10 + 0x18) <= (int)uVar14) {
          return pOVar12;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar14) break;
        cVar36 = *pcVar35;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_16 = (undefined1  [8])0x0;
        uStack_33 = 0;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                 ObscuredBool_Encrypt(cVar36 != '\0',(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        }
        auStack_16[0] =
             TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
        auStack_16._4_4_ = iVar4;
        uStack_33 = CONCAT13((char)((uint)uStack_33 >> 0x18),0x10000);
        bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                 ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0)
        ;
        if (bVar7 != 0) {
          uStack_33._0_2_ = CONCAT11(1,cVar36 != '\0');
        }
        if (pOVar12 == (Object *)0x0) goto code_?;
        if (*(uint *)&pOVar12[1].monitor <= uVar14) break;
        pOVar3->klass = (Object__Class *)auStack_16;
        *(undefined4 *)&pOVar3->monitor = uStack_33;
        value_03 = (Object__Class *)(ulonglong)(uVar14 + 1);
        pcVar35 = pcVar35 + 1;
        pOVar3 = (Object *)((longlong)&pOVar3->monitor + 4);
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    goto code_?;
  }
  if (value == (Object *)0x0) {
code_?:
    lVar10 = FUN_?(value);
    pIVar37 = TypeInfo__System__Int64;
    if (lVar10 == 0) {
      if (value == (Object *)0x0) {
        pOVar3 = (Object *)func_?(&::StringLiteral__);
      }
      else {
        FUN_?(value);
        pTVar38 = mscorlib.dll::System::Object::Object_GetType(value,(MethodInfo *)0x0);
        FUN_?(pTVar38);
        pOVar3 = (Object *)func_?(8,pTVar38);
      }
      pSVar39 = (String *)func_?(&StringLiteral_Trying_to_write___0___of_unsuppo);
      pSVar39 = mscorlib.dll::System::String::String_Format_1
                          (pSVar39,value,pOVar3,(MethodInfo *)0x0);
      uVar40 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar40);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar39,(MethodInfo *)0x0);
      uVar40 = func_?(&
                                   MethodInfo__ObscuredTypesConverter__CreateObscuredValue_System__Object_
                                  );
      FUN_?(this_00,uVar40);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    if (value == (Object *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    lVar10 = FUN_?(value,TypeInfo__System__Int64);
    if (lVar10 == 0) {
      FUN_?(value,pIVar37);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    pOVar3 = (Object *)FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    piVar41 = (int64_t *)(lVar10 + 0x20);
    pOVar1 = value_03;
    pOVar12 = pOVar3;
    while( true ) {
      uVar14 = (uint)pOVar1;
      if (*(int *)(lVar10 + 0x18) <= (int)uVar14) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar14) goto code_?;
      pOVar1 = (Object__Class *)*piVar41;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar42 = (uint5)pMStack_26;
      pMStack_26 = (MonitorData *)(ulonglong)(uVar42 & 0xff);
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredLong::ObscuredLong_Encrypt((int64_t)pOVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      }
      auStack_5._0_8_ =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->static_fields->cryptoKey;
      auStack_5._8_8_ = pDStackX_8;
      pMStack_26 = (MonitorData *)CONCAT71(pMStack_26._1_7_,1);
      bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
               ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      pOStack_17 = value_03;
      if (bVar7 != 0) {
        pOStack_17 = pOVar1;
      }
      if (pOVar3 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar3[1].monitor <= uVar14) goto code_?;
      *(undefined4 *)&pOVar12[2].klass = auStack_5._0_4_;
      *(undefined4 *)((longlong)&pOVar12[2].klass + 4) = auStack_5._4_4_;
      *(undefined4 *)&pOVar12[2].monitor = auStack_5._8_4_;
      *(undefined4 *)((longlong)&pOVar12[2].monitor + 4) = auStack_5._12_4_;
      pOVar12[3].klass = pOStack_17;
      pOVar12[3].monitor = pMStack_26;
      pOVar1 = (Object__Class *)(ulonglong)(uVar14 + 1);
      piVar41 = piVar41 + 1;
      pOVar12 = pOVar12 + 2;
    }
  }
  else {
    pOVar1 = value_03;
    if (value->klass == pORam0000000182dc2f60) {
      pOVar1 = (Object__Class *)value;
    }
    if (pOVar1 != (Object__Class *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (value->klass == pORam0000000182dc2f60) {
        value_03 = (Object__Class *)value;
      }
      if (value_03 != (Object__Class *)0x0) {
        pOVar43 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString
                  ::ObscuredString_op_Implicit((String *)value_03,(MethodInfo *)0x0);
        return (Object *)pOVar43;
      }
      FUN_?(value);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    pOVar1 = value_03;
    if (value->klass == pORam0000000182dc2ee8) {
      pOVar1 = (Object__Class *)value;
    }
    if (pOVar1 == (Object__Class *)0x0) {
      pOVar1 = value_03;
      if (value->klass == pORam0000000182dc2f38) {
        pOVar1 = (Object__Class *)value;
      }
      if (pOVar1 == (Object__Class *)0x0) goto code_?;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if ((value->klass->_0).element_class != (pORam0000000182dc2f38->_0).element_class) {
        FUN_?(value);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      pOVar44 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
                ObscuredLong_op_Implicit
                          ((ObscuredLong *)auStack_16,(int64_t)value[1].klass,(MethodInfo *)0x0);
      auStack_5._0_8_ = pOVar44->currentCryptoKey;
      auStack_5._8_8_ = pOVar44->hiddenValue;
      pOStack_17 = (Object__Class *)pOVar44->fakeValue;
      pMStack_26 = *(MonitorData **)&pOVar44->inited;
      ppDVar8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                  **)auStack_5;
      pOVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if ((value->klass->_0).element_class != (pORam0000000182dc2ee8->_0).element_class) {
        FUN_?(value);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      OVar45 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
               ObscuredByte_op_Implicit(*(uint8_t *)&value[1].klass,(MethodInfo *)0x0);
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)CONCAT44(pDStackX_8._4_4_,OVar45);
      ppDVar8 = &pDStackX_8;
      pOVar9 = (ObscuredLong__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte;
    }
code_?:
    pOVar3 = (Object *)FUN_?(pOVar9,ppDVar8);
  }
  return pOVar3;
}


/* Object CreateUnObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                   (Object *obscuredValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Boolean);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int64);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (ObscuredString *)0x0;
  if (obscuredValue != (Object *)0x0) {
    pOVar1 = value;
    if ((ObscuredInt__Class *)obscuredValue->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt) {
      pOVar1 = (ObscuredString *)obscuredValue;
    }
    if (pOVar1 == (ObscuredString *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((obscuredValue->klass->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      FUN_?(obscuredValue,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    auStack_4._0_8_ = obscuredValue[1].klass;
    auStack_4._8_8_ = obscuredValue[1].monitor;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt((ObscuredInt *)auStack_4,(MethodInfo *)0x0);
    pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                  *)CONCAT44(pDStackX_8._4_4_,iVar5);
    uVar6 = uRam_?;
    goto code_?;
  }
code_?:
  lVar7 = FUN_?(obscuredValue,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  pOVar8 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
  if (lVar7 != 0) {
    if (obscuredValue == (Object *)0x0) goto code_?;
    lVar7 = FUN_?(obscuredValue,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt)
    ;
    if (lVar7 == 0) {
      FUN_?(obscuredValue,pOVar8);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    pOVar9 = (Object *)FUN_?(TypeInfo__System__Int32);
    pOVar3 = pOVar9 + 2;
    puVar10 = (undefined8 *)(lVar7 + 0x20);
    while( true ) {
      uVar11 = (uint)value;
      if (*(int *)(lVar7 + 0x18) <= (int)uVar11) {
        return pOVar9;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11) break;
      pOVar12 = (Object__Class *)*puVar10;
      pBVar13 = (Byte__Array *)puVar10[1];
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      auStack_4._0_8_ = pOVar12;
      auStack_4._8_8_ = pBVar13;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_InternalDecrypt((ObscuredInt *)auStack_4,(MethodInfo *)0x0);
      if (pOVar9 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar9[1].monitor <= uVar11) break;
      *(int32_t *)&pOVar3->klass = iVar5;
      value = (ObscuredString *)(ulonglong)(uVar11 + 1);
      puVar10 = puVar10 + 2;
      pOVar3 = (Object *)((longlong)&pOVar3->klass + 4);
    }
    goto code_?;
  }
  if (obscuredValue != (Object *)0x0) {
    pOVar1 = value;
    if ((ObscuredFloat__Class *)obscuredValue->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat) {
      pOVar1 = (ObscuredString *)obscuredValue;
    }
    if (pOVar1 != (ObscuredString *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if ((obscuredValue->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
        FUN_?(obscuredValue,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
code_?:
        FUN_?();
code_?:
        FUN_?(unaff_RSI);
        FUN_?();
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      auStack_4._0_8_ = obscuredValue[1].klass;
      auStack_4._8_8_ = obscuredValue[1].monitor;
      auStack_4._16_8_ = obscuredValue[2].klass;
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
      fVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_4,(MethodInfo *)0x0);
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)CONCAT44(pDStackX_8._4_4_,fVar14);
      uVar6 = uRam_?;
      goto code_?;
    }
  }
  lVar7 = FUN_?(obscuredValue,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat)
  ;
  pOVar15 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
  if (lVar7 != 0) {
    if (obscuredValue == (Object *)0x0) goto code_?;
    lVar7 = FUN_?(obscuredValue,
                           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    if (lVar7 == 0) {
      FUN_?(obscuredValue,pOVar15);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    pOVar9 = (Object *)FUN_?(TypeInfo__System__Single);
    pOVar3 = pOVar9 + 2;
    puVar10 = (undefined8 *)(lVar7 + 0x20);
    while( true ) {
      uVar11 = (uint)value;
      if (*(int *)(lVar7 + 0x18) <= (int)uVar11) {
        return pOVar9;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11) break;
      pOVar16 = (Object__Class *)*puVar10;
      pBVar13 = (Byte__Array *)puVar10[1];
      pOVar12 = (Object__Class *)puVar10[2];
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      auStack_4._0_8_ = pOVar16;
      auStack_4._8_8_ = pBVar13;
      auStack_4._16_8_ = pOVar12;
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
      fVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_4,(MethodInfo *)0x0);
      if (pOVar9 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar9[1].monitor <= uVar11) break;
      *(float *)&pOVar3->klass = fVar14;
      value = (ObscuredString *)(ulonglong)(uVar11 + 1);
      pOVar3 = (Object *)((longlong)&pOVar3->klass + 4);
      puVar10 = puVar10 + 3;
    }
    goto code_?;
  }
  if (obscuredValue != (Object *)0x0) {
    bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar17 <= (obscuredValue->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (obscuredValue->klass->_1).typeHierarchy[(ulonglong)bVar17 - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pOVar12 = obscuredValue->klass;
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDStackX_8 = this;
      if (((pOVar12->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar12->_1).typeHierarchy[(ulonglong)bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(obscuredValue);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      bVar17 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pOVar12->_1).naturalAligment < bVar17) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar12->_1).typeHierarchy[(ulonglong)bVar17 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(obscuredValue);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)auStack_4 >> 0xc);
        uVar18 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        in_R9 = 0xADDR;
        do {
          uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
          puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
          LOCK();
          bVar21 = uVar19 == *puVar20;
          if (bVar21) {
            *puVar20 = uVar19 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar21);
      }
      auStack_4._12_4_ = 0;
      auStack_4._8_4_ = *(uint *)((longlong)&obscuredValue[2].monitor + 4);
      uStack_22 = 2;
      auStack_4._16_8_ = (Object__Class *)0x0;
      pMStack_23 = (MonitorData *)0x0;
      BStack_24.monitor = (MonitorData *)auStack_4._8_8_;
      BStack_24.bounds = (Il2CppArrayBounds *)0x0;
      BStack_24.max_length = 0;
      BStack_24.vector[0] = 2;
      BStack_24.vector[1] = 0;
      BStack_24.vector[2] = 0;
      BStack_24.vector[3] = 0;
      BStack_24.vector[4] = 0;
      BStack_24.vector[5] = 0;
      BStack_24.vector[6] = 0;
      BStack_24.vector[7] = 0;
      auStack_4._0_8_ = (Object__Class *)0x0;
      auStack_4._8_8_ = &BStack_24;
      BStack_24.klass = (Byte__Array__Class *)obscuredValue;
      do {
        bVar25 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &BStack_24,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                           );
        obscuredValue_00 = BStack_24.max_length;
        unaff_RSI = (ObscuredString *)BStack_24.bounds;
        if (bVar25 == 0) {
          return (Object *)this;
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c
            == 0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        }
        pOVar1 = value;
        if (unaff_RSI != (ObscuredString *)0x0) {
          if ((String__Class *)((Il2CppArrayBounds *)unaff_RSI)->length ==
              (String__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
            pOVar1 = unaff_RSI;
          }
          if (pOVar1 == (ObscuredString *)0x0) goto code_?;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c
            == 0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        key = value;
        if (pOVar1 != (ObscuredString *)0x0) {
          key = (ObscuredString *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
                ObscuredString_InternalDecrypt(pOVar1,(MethodInfo *)0x0);
        }
        pOVar3 = ObscuredTypesConverter_CreateUnObscuredValue
                            ((Object *)obscuredValue_00,(MethodInfo *)0x0);
        if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) goto code_?;
        in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,pOVar3,
                   (InsertionBehavior__Enum)in_R9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      } while( true );
    }
    pOVar1 = value;
    if ((ObscuredBool__Class *)obscuredValue->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool) {
      pOVar1 = (ObscuredString *)obscuredValue;
    }
    if (pOVar1 != (ObscuredString *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if ((obscuredValue->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
        FUN_?(obscuredValue,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      auStack_4._0_8_ = obscuredValue[1].klass;
      auStack_4._8_4_ = *(undefined4 *)&obscuredValue[1].monitor;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      bVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
               ObscuredBool_InternalDecrypt((ObscuredBool *)auStack_4,(MethodInfo *)0x0);
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)CONCAT71(pDStackX_8._1_7_,bVar25);
      uVar6 = uRam_?;
      goto code_?;
    }
  }
  lVar7 = FUN_?(obscuredValue,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  pOVar26 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
  if (lVar7 != 0) {
    if (obscuredValue != (Object *)0x0) {
      lVar7 = FUN_?(obscuredValue,
                             TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      if (lVar7 == 0) {
        FUN_?(obscuredValue,pOVar26);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      pOVar9 = (Object *)FUN_?(TypeInfo__System__Boolean);
      pOVar3 = pOVar9 + 2;
      puVar10 = (undefined8 *)(lVar7 + 0x20);
      while( true ) {
        uVar11 = (uint)value;
        if (*(int *)(lVar7 + 0x18) <= (int)uVar11) {
          return pOVar9;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar11) break;
        pOVar12 = (Object__Class *)*puVar10;
        uVar27 = *(undefined4 *)(puVar10 + 1);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        auStack_4._8_4_ = uVar27;
        auStack_4._0_8_ = pOVar12;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        bVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                 ObscuredBool_InternalDecrypt((ObscuredBool *)auStack_4,(MethodInfo *)0x0);
        if (pOVar9 == (Object *)0x0) goto code_?;
        if (*(uint *)&pOVar9[1].monitor <= uVar11) break;
        *(bool *)&pOVar3->klass = bVar25;
        value = (ObscuredString *)(ulonglong)(uVar11 + 1);
        puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
        pOVar3 = (Object *)((longlong)&pOVar3->klass + 1);
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    goto code_?;
  }
  if (obscuredValue == (Object *)0x0) {
code_?:
    lVar7 = FUN_?(obscuredValue);
    pOVar28 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
    if (lVar7 == 0) {
      FUN_?(obscuredValue);
      arg0 = mscorlib.dll::System::Object::Object_GetType(obscuredValue,(MethodInfo *)0x0);
      pSVar29 = (String *)func_?(&StringLiteral_Trying_to_to_unobscure_unknown_t);
      pSVar29 = mscorlib.dll::System::String::String_Format
                          (pSVar29,(Object *)arg0,(MethodInfo *)0x0);
      uVar6 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar6);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar29,(MethodInfo *)0x0);
      uVar6 = func_?(&
                                   MethodInfo__ObscuredTypesConverter__CreateUnObscuredValue_System__Object_
                                  );
      FUN_?(this_00,uVar6);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    if (obscuredValue == (Object *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    puVar10 = (undefined8 *)
              FUN_?(obscuredValue,
                            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_?(obscuredValue,pOVar28);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    pOVar3 = (Object *)FUN_?(TypeInfo__System__Int64);
    pOVar9 = pOVar3 + 2;
    puVar30 = puVar10;
    while( true ) {
      uVar11 = (uint)value;
      if (*(int *)(puVar10 + 3) <= (int)uVar11) break;
      if (*(uint *)(puVar10 + 3) <= uVar11) goto code_?;
      pOVar12 = (Object__Class *)puVar30[4];
      pBVar13 = (Byte__Array *)puVar30[5];
      pOVar16 = (Object__Class *)puVar30[6];
      pMVar31 = (MonitorData *)puVar30[7];
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      auStack_4._0_8_ = pOVar12;
      auStack_4._8_8_ = pBVar13;
      auStack_4._16_8_ = pOVar16;
      pMStack_23 = pMVar31;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      pOVar12 = (Object__Class *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
                ObscuredLong_InternalDecrypt((ObscuredLong *)auStack_4,(MethodInfo *)0x0);
      if (pOVar3 == (Object *)0x0) goto code_?;
      if (*(uint *)&pOVar3[1].monitor <= uVar11) goto code_?;
      pOVar9->klass = pOVar12;
      value = (ObscuredString *)(ulonglong)(uVar11 + 1);
      pOVar9 = (Object *)&pOVar9->monitor;
      puVar30 = puVar30 + 4;
    }
  }
  else {
    pOVar1 = value;
    if (obscuredValue->klass ==
        (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
      pOVar1 = (ObscuredString *)obscuredValue;
    }
    if (pOVar1 != (ObscuredString *)0x0) {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).field_0x1c ==
          0) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
      }
      if (obscuredValue->klass ==
          (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
        value = (ObscuredString *)obscuredValue;
      }
      if (value != (ObscuredString *)0x0) {
        pSVar29 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString
                  ::ObscuredString_op_Implicit_1(value,(MethodInfo *)0x0);
        return (Object *)pSVar29;
      }
      FUN_?(obscuredValue);
      pcVar2 = (code *)swi(3);
      pOVar3 = (Object *)(*pcVar2)();
      return pOVar3;
    }
    pOVar1 = value;
    if ((ObscuredByte__Class *)obscuredValue->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte) {
      pOVar1 = (ObscuredString *)obscuredValue;
    }
    if (pOVar1 == (ObscuredString *)0x0) {
      pOVar1 = value;
      if ((ObscuredLong__Class *)obscuredValue->klass ==
          TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong) {
        pOVar1 = (ObscuredString *)obscuredValue;
      }
      if (pOVar1 == (ObscuredString *)0x0) goto code_?;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if ((obscuredValue->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_0).element_class) {
        FUN_?(obscuredValue,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      auStack_4._0_8_ = obscuredValue[1].klass;
      auStack_4._8_8_ = obscuredValue[1].monitor;
      auStack_4._16_8_ = obscuredValue[2].klass;
      pMStack_23 = obscuredValue[2].monitor;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredLong::ObscuredLong_InternalDecrypt
                                ((ObscuredLong *)auStack_4,(MethodInfo *)0x0);
      uVar6 = uRam_?;
    }
    else {
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      }
      if ((obscuredValue->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_0).element_class) {
        FUN_?(obscuredValue);
        pcVar2 = (code *)swi(3);
        pOVar3 = (Object *)(*pcVar2)();
        return pOVar3;
      }
      uVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
               ObscuredByte_op_Implicit_1
                         (*(ObscuredByte *)&obscuredValue[1].klass,(MethodInfo *)0x0);
      pDStackX_8 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)CONCAT71(pDStackX_8._1_7_,uVar32);
      uVar6 = uRam_?;
    }
code_?:
    pOVar3 = (Object *)FUN_?(uVar6,&pDStackX_8);
  }
  return pOVar3;
}

