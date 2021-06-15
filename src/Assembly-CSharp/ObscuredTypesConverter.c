
/* Object CreateObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                   (Object *value,MethodInfo *method)

{
  method_00 = (MethodInfo *)value;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff44;
  puVar5 = &stack0xffffff44;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  if (method_00 == (MethodInfo *)0x0) {
code_?:
    value = (Object *)&stack0xffffff44;
    puStack_4 = &stack0xffffff44;
    iVar8 = func_?(method_00,TypeInfo__System__Int32);
    pIVar9 = TypeInfo__System__Int32;
    if (iVar8 != 0) {
      if (method_00 == (MethodInfo *)0x0) goto code_?;
      _Stack_18.dummy = (void *)func_?(method_00,TypeInfo__System__Int32);
      if (_Stack_18.dummy != (Object *)0x0) {
        value = (Object *)
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,
                                (_Stack_18.generic_class)->cached_class);
        pIVar10 = _Stack_18.array + 1;
        for (pIVar11 = (Il2CppClass *)0x0; this = (_union_86)value,
            (int)pIVar11 < (int)(_Stack_18.generic_class)->cached_class;
            pIVar11 = (Il2CppClass *)((int)&pIVar11->image + 1)) {
          if (value == (Object *)0x0) goto code_?;
          if ((_Stack_18.generic_class)->cached_class <= pIVar11) goto code_?;
          auStack_12._12_4_ = pIVar10->etype;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0))
          {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit
                              ((ObscuredInt *)(auStack_14 + 4),auStack_12._12_4_,(MethodInfo *)0x0);
          auStack_15._4_4_ = pOVar13->currentCryptoKey;
          auStack_15._8_4_ = pOVar13->hiddenValue;
          AStack_16 = (ACTkByte4)pOVar13->fakeValue;
          AStack_17.b1 = pOVar13->inited;
          AStack_17.b2 = pOVar13->field_0xd;
          AStack_17.b3 = pOVar13->field_0xe;
          AStack_17.b4 = pOVar13->field_0xf;
          pAVar18 = (ACTkByte4 *)func_?();
          pIVar10 = (Il2CppArrayType *)&pIVar10->rank;
          pAVar18->b1 = auStack_15[4];
          pAVar18->b2 = auStack_15[5];
          pAVar18->b3 = auStack_15[6];
          pAVar18->b4 = auStack_15[7];
          pAVar18[1].b1 = auStack_15[8];
          pAVar18[1].b2 = auStack_15[9];
          pAVar18[1].b3 = auStack_15[10];
          pAVar18[1].b4 = auStack_15[0xb];
          pAVar18[2] = AStack_16;
          pAVar18[3] = AStack_17;
        }
        goto code_?;
      }
      func_?(method_00,pIVar9);
      pIVar19 = extraout_EDX;
      goto code_?;
    }
    if (method_00 != (MethodInfo *)0x0) {
      pOVar20 = (Object *)0x0;
      if ((Single__Class *)((Object *)method_00)->klass == TypeInfo__System__Single) {
        pOVar20 = (Object *)method_00;
      }
      if (pOVar20 != (Object *)0x0) {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0))
        {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        pfVar21 = (float *)func_?(method_00,TypeInfo__System__Single);
        pOVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit
                            ((ObscuredFloat *)auStack_15,*pfVar21,(MethodInfo *)0x0);
        auStack_14._0_4_ = pOVar22->currentCryptoKey;
        auStack_14._4_4_ = pOVar22->hiddenValue;
        pBStack_23 = pOVar22->hiddenValueOld;
        fStack_24 = pOVar22->fakeValue;
        uStack_25._0_1_ = pOVar22->inited;
        uStack_25._1_3_ = *(undefined3 *)&pOVar22->field_0x11;
        this.dummy = (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                             ,auStack_14);
        goto code_?;
      }
    }
    iVar8 = func_?(method_00,TypeInfo__System__Single);
    pDVar26 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (iVar8 != 0) {
      AVar27 = (ACTkByte4)func_?(method_00,TypeInfo__System__Single);
      auStack_12._12_4_ = AVar27;
      if (AVar27 != (ACTkByte4)0x0) {
        _Stack_20.dummy =
             (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,
                                     *(char **)((int)AVar27 + 0xc));
        value = (Object *)((int)AVar27 + 0x10);
        for (_Var23.dummy = (Object *)0x0; this = _Stack_20,
            _Var23.__klassIndex < (int)*(Object **)((int)AVar27 + 0xc);
            _Var23.dummy = (void *)((int)&(_Var23.type)->data + 1)) {
          _Stack_18 = _Var23;
          if (_Stack_20.dummy == (void *)0x0) goto code_?;
          if (*(Object **)((int)AVar27 + 0xc) <= _Var23.dummy) goto code_?;
          _Stack_1c = *(_union_86 *)&value->klass;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)
             ) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          }
          pOVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit
                              ((ObscuredFloat *)auStack_14,(float)_Stack_1c,(MethodInfo *)0x0);
          auStack_15._4_4_ = pOVar22->currentCryptoKey;
          auStack_15._8_4_ = pOVar22->hiddenValue;
          AStack_16 = (ACTkByte4)pOVar22->hiddenValueOld;
          AStack_17 = (ACTkByte4)pOVar22->fakeValue;
          bVar28 = pOVar22->inited;
          uVar29 = pOVar22->field_0x11;
          uVar30 = pOVar22->field_0x12;
          uVar31 = pOVar22->field_0x13;
          pAVar18 = (ACTkByte4 *)func_?();
          value = (Object *)&value->monitor;
          pAVar18->b1 = auStack_15[4];
          pAVar18->b2 = auStack_15[5];
          pAVar18->b3 = auStack_15[6];
          pAVar18->b4 = auStack_15[7];
          pAVar18[1].b1 = auStack_15[8];
          pAVar18[1].b2 = auStack_15[9];
          pAVar18[1].b3 = auStack_15[10];
          pAVar18[1].b4 = auStack_15[0xb];
          pAVar18[2] = AStack_16;
          pAVar18[3] = AStack_17;
          pAVar18[4].b1 = bVar28;
          pAVar18[4].b2 = uVar29;
          pAVar18[4].b3 = uVar30;
          pAVar18[4].b4 = uVar31;
          AVar27 = (ACTkByte4)auStack_12._12_4_;
        }
        goto code_?;
      }
      goto code_?;
    }
    iVar8 = func_?(method_00,
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    if (iVar8 != 0) {
      iVar8 = func_?(method_00,pDVar26);
      this.dummy = (void *)func_?(
                                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                          );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this.typeHandle,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      _Stack_1c.dummy = this.dummy;
      if (iVar8 != 0) {
        puVar32 = (undefined4 *)
                  func_?(auStack_14,iVar8,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                                 );
        auStack_6._0_4_ = *puVar32;
        auStack_6._4_4_ = puVar32[1];
        auStack_6._8_4_ = puVar32[2];
        auStack_6._12_4_ = puVar32[3];
        auStack_6._16_4_ = puVar32[4];
        uStack_1 = 0;
        while (cVar33 = func_?(), cVar33 != '\0') {
          KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_6,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                );
          func_?();
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals
                      .methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0
             )) {
            func_?();
          }
          pSVar34 = (String *)func_?();
          key = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
                ObscuredString_op_Implicit(pSVar34,(MethodInfo *)0x0);
          pOVar20 = (Object *)func_?();
          value_00 = (Theme *)ObscuredTypesConverter_CreateObscuredValue(pOVar20,(MethodInfo *)0x0);
          if (this.dummy == (void *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    ((Dictionary_2_System_String_Theme_ *)this.typeHandle,(String *)key,value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        value->klass = (Object__Class *)0x14d;
        uStack_1 = 0xffffffff;
        func_?();
        goto code_?;
      }
      goto code_?;
    }
    if (method_00 != (MethodInfo *)0x0) {
      pOVar20 = (Object *)0x0;
      if ((Boolean__Class *)((Object *)method_00)->klass == TypeInfo__System__Boolean) {
        pOVar20 = (Object *)method_00;
      }
      if (pOVar20 != (Object *)0x0) {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        }
        pbVar35 = (bool *)func_?(method_00,TypeInfo__System__Boolean);
        pOVar36 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                  ObscuredBool_op_Implicit
                            ((ObscuredBool *)(auStack_15 + 8),*pbVar35,(MethodInfo *)0x0);
        uVar37._0_1_ = pOVar36->currentCryptoKey;
        uVar37._1_3_ = *(undefined3 *)&pOVar36->field_0x1;
        uVar37._4_4_ = pOVar36->hiddenValue;
        auStack_12._4_4_ = (undefined4)uVar37;
        auStack_12[0xc] = pOVar36->fakeValue;
        auStack_12[0xd] = pOVar36->fakeValueChanged;
        auStack_12[0xe] = pOVar36->inited;
        auStack_12[0xf] = pOVar36->field_0xb;
        auStack_12._8_4_ = uVar37._4_4_;
        this.dummy = (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool
                                             ,auStack_12 + 4);
        goto code_?;
      }
    }
    iVar8 = func_?(method_00,TypeInfo__System__Boolean);
    if (iVar8 != 0) {
      _Var23.dummy = (void *)func_?(method_00,TypeInfo__System__Boolean);
      _Stack_1c.dummy = _Var23.dummy;
      if (_Var23.dummy != (void *)0x0) {
        _Stack_18.dummy =
             (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,
                                     (_Var23.generic_class)->cached_class);
        for (pIVar11 = (Il2CppClass *)0x0; this = _Stack_18,
            (int)pIVar11 < (int)(_Var23.generic_class)->cached_class;
            pIVar11 = (Il2CppClass *)((int)&pIVar11->image + 1)) {
          if (_Stack_18.dummy == (Object *)0x0) goto code_?;
          if ((_Var23.generic_class)->cached_class <= pIVar11) goto code_?;
          value = (Object *)
                  CONCAT13(*(undefined1 *)((int)&pIVar11->image + (int)&_Var23.type[2].data),
                           value._0_3_);
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0))
          {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          }
          pOVar36 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit
                              ((ObscuredBool *)(auStack_15 + 8),value._3_1_ != '\0',
                               (MethodInfo *)0x0);
          uVar38._0_1_ = pOVar36->currentCryptoKey;
          uVar38._1_3_ = *(undefined3 *)&pOVar36->field_0x1;
          uVar38._4_4_ = pOVar36->hiddenValue;
          uVar39 = *(undefined4 *)&pOVar36->fakeValue;
          auStack_12._8_4_ = (undefined4)uVar38;
          auStack_12._12_4_ = uVar38._4_4_;
          puVar40 = (undefined8 *)func_?();
          *puVar40 = CONCAT44(auStack_12._12_4_,auStack_12._8_4_);
          *(undefined4 *)(puVar40 + 1) = uVar39;
          _Var23 = _Stack_1c;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (method_00 != (MethodInfo *)0x0) {
      pSVar41 = (String__Class *)((Object *)method_00)->klass;
      pOVar20 = (Object *)0x0;
      if (pSVar41 == TypeInfo__System__String) {
        pOVar20 = (Object *)method_00;
      }
      if (pOVar20 != (Object *)0x0) {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started == 0))
        {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        }
        method_01 = (MethodInfo *)0x0;
        pSVar34 = (String *)func_?(method_00,TypeInfo__System__String);
        this.typeHandle =
             (Il2CppMetadataTypeHandle)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
             ObscuredString_op_Implicit(pSVar34,method_01);
        goto code_?;
      }
      pOVar20 = (Object *)0x0;
      if (pSVar41 == (String__Class *)TypeInfo__System__Byte) {
        pOVar20 = (Object *)method_00;
      }
      if (pOVar20 != (Object *)0x0) {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
        }
        puVar42 = (uint8_t *)func_?(method_00,TypeInfo__System__Byte);
        value = (Object *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
                ObscuredByte_op_Implicit(*puVar42,(MethodInfo *)0x0);
        ppOVar43 = &value;
        pOVar44 = (ObscuredInt__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte;
        goto code_?;
      }
      pOVar20 = (Object *)0x0;
      if (pSVar41 == (String__Class *)TypeInfo__System__Int64) {
        pOVar20 = (Object *)method_00;
      }
      if (pOVar20 != (Object *)0x0) {
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0)) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
        }
        iVar8 = func_?(method_00,TypeInfo__System__Int64);
        pOVar45 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong::
                  ObscuredLong_op_Implicit
                            ((ObscuredLong *)(auStack_6 + 0x14),(ulonglong)*(uint *)(iVar8 + 4),
                             method_00);
        uStack_46 = (undefined4)pOVar45->currentCryptoKey;
        uStack_47 = *(undefined4 *)((int)&pOVar45->currentCryptoKey + 4);
        uStack_48 = (undefined4)pOVar45->hiddenValue;
        auStack_14._0_4_ = *(int32_t *)((int)&pOVar45->hiddenValue + 4);
        auStack_14._4_4_ = *(undefined4 *)&pOVar45->fakeValue;
        pBStack_23 = *(Byte__Array **)((int)&pOVar45->fakeValue + 4);
        fStack_24 = *(float *)&pOVar45->inited;
        uStack_25._0_1_ = pOVar45->field_0x1c;
        uStack_25._1_3_ = *(undefined3 *)&pOVar45->field_0x1d;
        this.dummy = (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong
                                             ,&uStack_46);
        goto code_?;
      }
    }
    iVar8 = func_?(method_00,TypeInfo__System__Int64);
    if (iVar8 != 0) {
      _Stack_20.dummy = (void *)func_?(method_00,TypeInfo__System__Int64);
      if (_Stack_20.dummy != (void *)0x0) {
        uVar39._0_2_ = ((Il2CppType *)((int)_Stack_20 + 8))->attrs;
        uVar39._2_1_ = ((Il2CppType *)((int)_Stack_20 + 8))->type;
        uVar39._3_1_ = ((Il2CppType *)((int)_Stack_20 + 8))->field_0x7;
        _Stack_18.dummy =
             (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong,
                                     uVar39);
        pIVar49 = _Stack_20.type + 2;
        for (pOVar20 = (Object *)0x0; this = _Stack_18,
            (int)pOVar20 < (int)*(Object **)&_Stack_20.type[1].attrs;
            pOVar20 = (Object *)((int)&pOVar20->klass + 1)) {
          value = pOVar20;
          if (_Stack_18.dummy == (Object *)0x0) goto code_?;
          if (*(Object **)&_Stack_20.type[1].attrs <= pOVar20) goto code_?;
          _Stack_1c = pIVar49->data;
          value = *(Object **)&pIVar49->attrs;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started == 0))
          {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
          }
          pOVar45 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredLong
                    ::ObscuredLong_op_Implicit
                              ((ObscuredLong *)&stack0xffffff50,ZEXT48(value),
                               (MethodInfo *)unaff_EDI);
          auStack_15._4_4_ = *(undefined4 *)&pOVar45->currentCryptoKey;
          auStack_15._8_4_ = *(ACTkByte4 *)((int)&pOVar45->currentCryptoKey + 4);
          AStack_16 = *(ACTkByte4 *)&pOVar45->hiddenValue;
          AStack_17 = *(ACTkByte4 *)((int)&pOVar45->hiddenValue + 4);
          auStack_12._0_4_ = *(undefined4 *)&pOVar45->fakeValue;
          auStack_12._4_4_ = *(ACTkByte4 *)((int)&pOVar45->fakeValue + 4);
          auStack_12[8] = pOVar45->inited;
          auStack_12[9] = pOVar45->field_0x19;
          auStack_12[10] = pOVar45->field_0x1a;
          auStack_12[0xb] = pOVar45->field_0x1b;
          auStack_12[0xc] = pOVar45->field_0x1c;
          auStack_12[0xd] = pOVar45->field_0x1d;
          auStack_12[0xe] = pOVar45->field_0x1e;
          auStack_12[0xf] = pOVar45->field_0x1f;
          pAVar18 = (ACTkByte4 *)func_?();
          pIVar49 = pIVar49 + 1;
          pAVar18->b1 = auStack_15[4];
          pAVar18->b2 = auStack_15[5];
          pAVar18->b3 = auStack_15[6];
          pAVar18->b4 = auStack_15[7];
          pAVar18[1].b1 = auStack_15[8];
          pAVar18[1].b2 = auStack_15[9];
          pAVar18[1].b3 = auStack_15[10];
          pAVar18[1].b4 = auStack_15[0xb];
          pAVar18[2] = AStack_16;
          pAVar18[3] = AStack_17;
          pAVar18[4].b1 = auStack_12[0];
          pAVar18[4].b2 = auStack_12[1];
          pAVar18[4].b3 = auStack_12[2];
          pAVar18[4].b4 = auStack_12[3];
          pAVar18[5].b1 = auStack_12[4];
          pAVar18[5].b2 = auStack_12[5];
          pAVar18[5].b3 = auStack_12[6];
          pAVar18[5].b4 = auStack_12[7];
          pAVar18[6].b1 = auStack_12[8];
          pAVar18[6].b2 = auStack_12[9];
          pAVar18[6].b3 = auStack_12[10];
          pAVar18[6].b4 = auStack_12[0xb];
          pAVar18[7].b1 = auStack_12[0xc];
          pAVar18[7].b2 = auStack_12[0xd];
          pAVar18[7].b3 = auStack_12[0xe];
          pAVar18[7].b4 = auStack_12[0xf];
        }
        goto code_?;
      }
      goto code_?;
    }
    if (method_00 != (MethodInfo *)0x0) {
      pTVar50 = mscorlib.dll::System::Object::Object_GetType((Object *)method_00,(MethodInfo *)0x0);
      if (pTVar50 == (Type *)0x0) goto code_?;
      goto code_?;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar34 = TypeInfo__System__String->static_fields->Empty;
  }
  else {
    pIVar51 = (Int32__Class *)((Object *)method_00)->klass;
    pOVar20 = (Object *)0x0;
    if (pIVar51 == TypeInfo__System__Int32) {
      pOVar20 = (Object *)method_00;
    }
    if (pOVar20 == (Object *)0x0) goto code_?;
    value = (Object *)&stack0xffffff44;
    puStack_4 = &stack0xffffff44;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       (value = (Object *)&stack0xffffff44, puStack_4 = &stack0xffffff44,
       (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      value = (Object *)&stack0xffffff44;
      puStack_4 = &stack0xffffff44;
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pIVar51 = (Int32__Class *)((Object *)method_00)->klass;
    }
    pIVar19 = TypeInfo__System__Int32;
    if ((pIVar51->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar52 = (int32_t *)func_?(method_00);
      pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit((ObscuredInt *)auStack_12,*piVar52,(MethodInfo *)0x0);
      auStack_15._4_4_ = pOVar13->currentCryptoKey;
      auStack_15._8_4_ = pOVar13->hiddenValue;
      AStack_16 = (ACTkByte4)pOVar13->fakeValue;
      AStack_17.b1 = pOVar13->inited;
      AStack_17.b2 = pOVar13->field_0xd;
      AStack_17.b3 = pOVar13->field_0xe;
      AStack_17.b4 = pOVar13->field_0xf;
      ppOVar43 = (Object **)(auStack_15 + 4);
      pOVar44 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
code_?:
      this.dummy = (void *)func_?(pOVar44,ppOVar43);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return this.dummy;
    }
code_?:
    pTVar50 = (Type *)func_?(method_00,pIVar19);
code_?:
    pSVar34 = (String *)func_?(8,pTVar50);
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar34 = mscorlib.dll::System::String::String_Format_1
                      (StringLiteral_Trying_to_write___0___of_unsuppo,(Object *)method_00,
                       (Object *)pSVar34,(MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,pSVar34,(MethodInfo *)0x0);
  func_?();
code_?:
  func_?(0);
code_?:
  uVar39 = func_?(0,0);
  func_?(uVar39);
  func_?();
  pcVar53 = (code *)swi(3);
  pOVar20 = (Object *)(*pcVar53)();
  return pOVar20;
}


/* Object CreateUnObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                   (Object *obscuredValue,MethodInfo *method)

{
  pOVar1 = obscuredValue;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff98;
  puVar6 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  KStack_7.key = 0;
  KStack_7.value = 0;
  func_?();
  if (pOVar1 == (Object *)0x0) {
code_?:
    obscuredValue = (Object *)&stack0xffffff98;
    puStack_5 = &stack0xffffff98;
    iVar8 = func_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    pOVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    if (iVar8 == 0) {
      if (pOVar1 != (Object *)0x0) {
        pOVar10 = (Object *)0x0;
        if ((ObscuredFloat__Class *)pOVar1->klass ==
            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat) {
          pOVar10 = pOVar1;
        }
        if (pOVar10 != (Object *)0x0) {
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)
             ) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          }
          pOVar11 = (ObscuredFloat *)
                    func_?(pOVar1,
                                    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          obscuredValue =
               (Object *)
               Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(*pOVar11,(MethodInfo *)0x0);
          pOVar1 = (Object *)func_?(TypeInfo__System__Single,&obscuredValue);
          *unaff_FS_OFFSET = uStack_4;
          return pOVar1;
        }
      }
      iVar8 = func_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat)
      ;
      pDVar12 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (iVar8 == 0) {
        iVar8 = func_?(pOVar1,
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
        if (iVar8 == 0) {
          if (pOVar1 != (Object *)0x0) {
            pOVar10 = (Object *)0x0;
            if ((ObscuredBool__Class *)pOVar1->klass ==
                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool) {
              pOVar10 = pOVar1;
            }
            if (pOVar10 != (Object *)0x0) {
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started ==
                  0)) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
              }
              pOVar13 = (ObscuredBool *)
                        func_?(pOVar1,
                                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool)
              ;
              bVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredBool::ObscuredBool_op_Implicit_1(*pOVar13,(MethodInfo *)0x0);
              obscuredValue = (Object *)CONCAT13(bVar14,obscuredValue._0_3_);
              pBVar15 = (Byte__Class *)TypeInfo__System__Boolean;
              goto code_?;
            }
          }
          iVar8 = func_?(pOVar1,
                                   TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          if (iVar8 == 0) {
            if (pOVar1 != (Object *)0x0) {
              pOVar16 = (ObscuredLong__Class *)pOVar1->klass;
              pOVar10 = (Object *)0x0;
              if (pOVar16 == (ObscuredLong__Class *)
                            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
                pOVar10 = pOVar1;
              }
              if (pOVar10 != (Object *)0x0) {
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
                    cctor_started == 0)) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
                }
                method_01 = (MethodInfo *)0x0;
                pOVar17 = (ObscuredString *)
                          func_?(pOVar1,
                                          TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString
                                         );
                pSVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredString::ObscuredString_op_Implicit_1(pOVar17,method_01);
                *unaff_FS_OFFSET = uStack_4;
                return (Object *)pSVar18;
              }
              pOVar10 = (Object *)0x0;
              if (pOVar16 == (ObscuredLong__Class *)
                            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte) {
                pOVar10 = pOVar1;
              }
              if (pOVar10 != (Object *)0x0) {
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started
                    == 0)) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
                }
                pOVar19 = (ObscuredByte *)
                          func_?(pOVar1,
                                          TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte
                                         );
                uVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredByte::ObscuredByte_op_Implicit_1(*pOVar19,(MethodInfo *)0x0);
                obscuredValue = (Object *)CONCAT13(uVar20,obscuredValue._0_3_);
                pBVar15 = TypeInfo__System__Byte;
code_?:
                pOVar1 = (Object *)func_?(pBVar15,(int)&obscuredValue + 3);
                *unaff_FS_OFFSET = uStack_4;
                return pOVar1;
              }
              pOVar10 = (Object *)0x0;
              if (pOVar16 == TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong) {
                pOVar10 = pOVar1;
              }
              if (pOVar10 != (Object *)0x0) {
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).cctor_started
                    == 0)) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
                }
                pOVar21 = (ObscuredLong *)
                          func_?(pOVar1,
                                          TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong
                                         );
                uStack_22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredLong::ObscuredLong_op_Implicit_1(*pOVar21,(MethodInfo *)0x0);
                pOVar1 = (Object *)func_?(TypeInfo__System__Int64,&uStack_22);
                *unaff_FS_OFFSET = uStack_4;
                return pOVar1;
              }
            }
            iVar8 = func_?(pOVar1,
                                     TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
            if (iVar8 == 0) {
              method_00 = (ObscuredInt__Class *)0x0;
              if (pOVar1 != (Object *)0x0) goto code_?;
            }
            else {
              iVar8 = func_?(pOVar1,
                                       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
              if (iVar8 != 0) {
                obscuredValue =
                     (Object *)
                     func_?(TypeInfo__System__Int64,*(undefined4 *)(iVar8 + 0xc));
                for (iVar23 = 0; iVar23 < *(int *)(iVar8 + 0xc); iVar23 = iVar23 + 1) {
                  puVar24 = (undefined4 *)func_?(iVar23);
                  pOStack_25 = (Object__Class *)*puVar24;
                  pMStack_26 = (MonitorData *)puVar24[1];
                  pOVar27 = ((Object *)(puVar24 + 2))->klass;
                  OStack_28 = *(Object *)(puVar24 + 2);
                  uStack_29 = puVar24[4];
                  uStack_30 = puVar24[5];
                  uStack_22._0_4_ = puVar24[6];
                  uStack_22._4_4_ = (Dictionary_2_System_String_Theme_ *)puVar24[7];
                  pMVar31 = (MonitorData *)puVar24[3];
                  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->vtable).
                              Equals.methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                      cctor_started == 0)) {
                    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
                    pOVar27 = OStack_28.klass;
                    pMVar31 = OStack_28.monitor;
                  }
                  value.currentCryptoKey._4_4_ = pMStack_26;
                  value.currentCryptoKey._0_4_ = pOStack_25;
                  value.hiddenValue._0_4_ = pOVar27;
                  value.hiddenValue._4_4_ = pMVar31;
                  value.fakeValue._0_4_ = uStack_29;
                  value.fakeValue._4_4_ = uStack_30;
                  value._24_4_ = (undefined4)uStack_22;
                  value._28_4_ = uStack_22._4_4_;
                  iVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredLong::ObscuredLong_op_Implicit_1(value,(MethodInfo *)0x0);
                  if (obscuredValue == (Object *)0x0) goto code_?;
                  func_?(iVar23,(int)iVar32,(int)((ulonglong)iVar32 >> 0x20));
                }
                goto code_?;
              }
            }
          }
          else {
            iVar8 = func_?(pOVar1,
                                     TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            if (iVar8 != 0) {
              obscuredValue =
                   (Object *)
                   func_?(TypeInfo__System__Boolean,*(undefined4 *)(iVar8 + 0xc));
              for (iVar23 = 0; iVar23 < *(int *)(iVar8 + 0xc); iVar23 = iVar23 + 1) {
                pOVar1 = (Object *)func_?(iVar23);
                OStack_28 = *pOVar1;
                pOStack_33 = pOVar1[1].klass;
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started
                    == 0)) {
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                }
                value_02._8_4_ = pOStack_33;
                value_02._0_8_ = OStack_28;
                bVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredBool::ObscuredBool_op_Implicit_1(value_02,(MethodInfo *)0x0);
                uStack_22._4_4_ =
                     (Dictionary_2_System_String_Theme_ *)CONCAT31(uStack_22._5_3_,bVar14);
                if (obscuredValue == (Object *)0x0) goto code_?;
                func_?(iVar23,uStack_22._4_4_);
              }
code_?:
              *unaff_FS_OFFSET = uStack_4;
              return obscuredValue;
            }
          }
        }
        else {
          iVar8 = func_?(pOVar1,pDVar12);
          this = (Dictionary_2_System_String_Theme_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          uStack_22._4_4_ = this;
          if (iVar8 != 0) {
            func_?(auStack_34,iVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
            uStack_2 = 0;
            while( true ) {
              cVar35 = func_?();
              if (cVar35 == '\0') {
                obscuredValue->klass = (Object__Class *)0x14d;
                uStack_2 = 0xffffffff;
                func_?();
                *unaff_FS_OFFSET = uStack_4;
                return (Object *)this;
              }
              KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                    ((LevelRewardsManager *)&stack0xffffffa4,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                    );
              func_?();
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).cctor_started
                  == 0)) {
                func_?();
              }
              pOVar17 = (ObscuredString *)func_?();
              pSVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredString::ObscuredString_op_Implicit_1(pOVar17,(MethodInfo *)0x0);
              pOVar1 = (Object *)func_?();
              value_03 = (Theme *)ObscuredTypesConverter_CreateUnObscuredValue
                                            (pOVar1,(MethodInfo *)0x0);
              if (this == (Dictionary_2_System_String_Theme_ *)0x0) break;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        (this,pSVar18,value_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
            }
          }
        }
      }
      else {
        iVar8 = func_?(pOVar1,
                                 TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        if (iVar8 != 0) {
          obscuredValue =
               (Object *)func_?(TypeInfo__System__Single,*(undefined4 *)(iVar8 + 0xc));
          for (iVar23 = 0; iVar23 < *(int *)(iVar8 + 0xc); iVar23 = iVar23 + 1) {
            puVar24 = (undefined4 *)func_?(iVar23);
            pOStack_25 = (Object__Class *)*puVar24;
            pMStack_26 = (MonitorData *)puVar24[1];
            pOVar27 = ((Object *)(puVar24 + 2))->klass;
            OStack_28 = *(Object *)(puVar24 + 2);
            uStack_22._4_4_ = (Dictionary_2_System_String_Theme_ *)puVar24[4];
            pMVar31 = (MonitorData *)puVar24[3];
            if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).
                        Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started ==
                0)) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
              pOVar27 = OStack_28.klass;
              pMVar31 = OStack_28.monitor;
            }
            value_00.hiddenValue = (ACTkByte4)pMStack_26;
            value_00.currentCryptoKey = (int32_t)pOStack_25;
            value_00.hiddenValueOld = (Byte__Array *)pOVar27;
            value_00.fakeValue = (float)pMVar31;
            value_00._16_4_ = uStack_22._4_4_;
            uStack_22._4_4_ =
                 (Dictionary_2_System_String_Theme_ *)
                 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
            if (obscuredValue == (Object *)0x0) goto code_?;
            func_?(iVar23,uStack_22._4_4_);
          }
          goto code_?;
        }
      }
    }
    else if (pOVar1 != (Object *)0x0) {
      obscuredValue =
           (Object *)
           func_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      if (obscuredValue != (Object *)0x0) {
        pOStack_33 = (Object__Class *)
                     func_?(TypeInfo__System__Int32,obscuredValue[1].monitor);
        pMVar31 = (MonitorData *)0x0;
        pOVar1 = obscuredValue;
        while( true ) {
          if ((int)obscuredValue[1].monitor <= (int)pMVar31) {
            *unaff_FS_OFFSET = uStack_4;
            return (Object *)pOStack_33;
          }
          if (obscuredValue[1].monitor <= pMVar31) break;
          pOStack_25 = pOVar1[2].klass;
          pMStack_26 = pOVar1[2].monitor;
          pOVar27 = pOVar1[3].klass;
          OStack_28 = pOVar1[3];
          pMVar36 = pOVar1[3].monitor;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0))
          {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            pOVar27 = OStack_28.klass;
            pMVar36 = OStack_28.monitor;
          }
          value_01.hiddenValue = (int32_t)pMStack_26;
          value_01.currentCryptoKey = (int32_t)pOStack_25;
          value_01.fakeValue = (int32_t)pOVar27;
          value_01._12_4_ = pMVar36;
          iVar37 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_op_Implicit_1(value_01,(MethodInfo *)0x0);
          if (pOStack_33 == (Object__Class *)0x0) goto code_?;
          func_?(pMVar31,iVar37);
          pMVar31 = pMVar31 + 1;
          pOVar1 = pOVar1 + 2;
        }
        goto code_?;
      }
      func_?(pOVar1,pOVar9);
      method_00 = extraout_ECX;
      goto code_?;
    }
  }
  else {
    pOVar38 = (ObscuredInt__Class *)pOVar1->klass;
    pOVar10 = (Object *)0x0;
    if (pOVar38 == TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt) {
      pOVar10 = pOVar1;
    }
    if (pOVar10 == (Object *)0x0) goto code_?;
    obscuredValue = (Object *)&stack0xffffff98;
    puStack_5 = &stack0xffffff98;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       (obscuredValue = (Object *)&stack0xffffff98, puStack_5 = &stack0xffffff98,
       (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      obscuredValue = (Object *)&stack0xffffff98;
      puStack_5 = &stack0xffffff98;
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pOVar38 = (ObscuredInt__Class *)pOVar1->klass;
    }
    method_00 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    if ((pOVar38->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      pOVar39 = (ObscuredInt *)func_?(pOVar1);
      obscuredValue =
           (Object *)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit_1(*pOVar39,(MethodInfo *)0x0);
      pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&obscuredValue);
      *unaff_FS_OFFSET = uStack_4;
      return pOVar1;
    }
code_?:
    func_?(pOVar1);
code_?:
    arg0 = mscorlib.dll::System::Object::Object_GetType(pOVar1,(MethodInfo *)method_00);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar18 = mscorlib.dll::System::String::String_Format
                        (StringLiteral_Trying_to_to_unobscure_unknown_t,(Object *)arg0,
                         (MethodInfo *)0x0);
    this_00 = (IsolatedStorageException *)func_?();
    mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
    IsolatedStorageException__ctor_1(this_00,pSVar18,(MethodInfo *)0x0);
    func_?();
  }
code_?:
  func_?(0);
  func_?();
code_?:
  uVar40 = func_?(0,0);
  func_?(uVar40);
  pcVar41 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar41)();
  return pOVar1;
}

