
/* Object CreateObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                   (Object *value,MethodInfo *method)

{
  this_00 = (Exception *)value;
  uStack_1 = 0xffffffff;
  p_Stack_c = (Il2CppMetadataGenericContainerHandle)&DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (uint32_t)&uStack_2;
  puStack_3 = &stack0xffffff4c;
  puVar4 = &stack0xffffff4c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__System__Int64);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
    puVar4 = puStack_3;
  }
  puStack_3 = puVar4;
  if (this_00 != (Exception *)0x0) {
    pOVar5 = (Object *)0x0;
    if ((Int32__Class *)((Object *)this_00)->klass == TypeInfo__System__Int32) {
      pOVar5 = (Object *)this_00;
    }
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    pSVar6 = (String__Class *)TypeInfo__System__Int32;
    if ((((Object *)this_00)->klass->_0).element_class ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar7 = (int32_t *)func_?(this_00);
      pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit((ObscuredInt *)auStack_9,*piVar7,(MethodInfo *)0x0);
      AStack_10 = (ACTkByte4)pOVar8->currentCryptoKey;
      uStack_11 = *(ulonglong *)&pOVar8->hiddenValue;
      _Stack_30 = *(_union_86 *)&pOVar8->inited;
      pAVar12 = &AStack_10;
      pOVar13 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
      goto code_?;
    }
    goto code_?;
  }
code_?:
  iVar14 = func_?(this_00,TypeInfo__System__Int32);
  message = (Boolean__Array__Class *)TypeInfo__System__Int32;
  if (iVar14 == 0) {
    if (this_00 != (Exception *)0x0) {
      pOVar5 = (Object *)0x0;
      if ((Single__Class *)((Object *)this_00)->klass == TypeInfo__System__Single) {
        pOVar5 = (Object *)this_00;
      }
      if (pOVar5 != (Object *)0x0) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        pSVar6 = (String__Class *)TypeInfo__System__Single;
        if ((((Object *)this_00)->klass->_0).element_class ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar15 = (float *)func_?(this_00);
          pOVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit
                              ((ObscuredFloat *)(auStack_17 + 0xc),*pfVar15,(MethodInfo *)0x0);
          auStack_18._0_4_ = pOVar16->currentCryptoKey;
          auStack_18._4_4_ = pOVar16->hiddenValue;
          pBStack_19 = pOVar16->hiddenValueOld;
          p_Stack_54 = (Il2CppMetadataTypeHandle)pOVar16->fakeValue;
          pIStack_20 = *(Il2CppInteropData **)&pOVar16->inited;
          pOVar5 = (Object *)
                    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,
                                    auStack_18);
          *unaff_FS_OFFSET = uStack_2;
          return pOVar5;
        }
        goto code_?;
      }
    }
    iVar14 = func_?(this_00,TypeInfo__System__Single);
    message = (Boolean__Array__Class *)TypeInfo__System__Single;
    if (iVar14 != 0) {
      if (this_00 != (Exception *)0x0) {
        _Stack_18.dummy = (void *)func_?(this_00,TypeInfo__System__Single);
        if (_Stack_18.dummy != (Object *)0x0) {
          pOStack_21 = (ObscuredString *)
                       func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,
                                       *(MonitorData **)&_Stack_18.type[1].attrs);
          pBVar22 = (Byte__Array *)0x0;
          this_00 = (Exception *)(pOStack_21 + 1);
          value = (Object *)(_Stack_18.type + 2);
          while( true ) {
            if ((int)*(Byte__Array **)&_Stack_18.type[1].attrs <= (int)pBVar22) break;
            if (*(Byte__Array **)&_Stack_18.type[1].attrs <= pBVar22) goto code_?;
            _Stack_30 = ((Il2CppType *)value)->data;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            }
            pOVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredFloat::ObscuredFloat_op_Implicit
                                ((ObscuredFloat *)auStack_18,(float)_Stack_30,(MethodInfo *)0x0);
            if (pOStack_21 == (ObscuredString *)0x0) goto code_?;
            uVar23 = (pOVar16->hiddenValue).b1;
            uVar24 = (pOVar16->hiddenValue).b2;
            uVar25 = (pOVar16->hiddenValue).b3;
            uVar26 = (pOVar16->hiddenValue).b4;
            pSVar6 = (String__Class *)pOVar16->hiddenValueOld;
            pMVar27 = (MonitorData *)pOVar16->fakeValue;
            pSVar28 = *(String **)&pOVar16->inited;
            if ((pOStack_21->fields).hiddenValue <= pBVar22) goto code_?;
            (((ObscuredString *)((int)this_00 + -0x18))->fields).fakeValue =
                 (String *)pOVar16->currentCryptoKey;
            (((ObscuredString *)((int)this_00 + -0x18))->fields).inited = uVar23;
            (((ObscuredString *)((int)this_00 + -0x18))->fields).field_0xd = uVar24;
            (((ObscuredString *)((int)this_00 + -0x18))->fields).field_0xe = uVar25;
            (((ObscuredString *)((int)this_00 + -0x18))->fields).field_0xf = uVar26;
            ((ObscuredString *)this_00)->klass = (ObscuredString__Class *)pSVar6;
            ((ObscuredString *)this_00)->monitor = pMVar27;
            (((ObscuredString *)this_00)->fields).currentCryptoKey = pSVar28;
            func_?();
            pBVar22 = (Byte__Array *)((int)&pBVar22->klass + 1);
            value = (Object *)&value->monitor;
            this_00 = (Exception *)&(((ObscuredString *)this_00)->fields).inited;
          }
code_?:
          *unaff_FS_OFFSET = uStack_2;
          return (Object *)pOStack_21;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (this_00 != (Exception *)0x0) {
      pBVar29 = (Boolean__Class *)((Object *)this_00)->klass;
      bVar30 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pBVar29->_1).naturalAligment < bVar30) ||
         ((Dictionary_2_System_Object_System_Object___Class *)(pBVar29->_1).typeHierarchy[bVar30 - 1]
          != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        pOVar5 = (Object *)0x0;
        if (pBVar29 == TypeInfo__System__Boolean) {
          pOVar5 = (Object *)this_00;
        }
        if (pOVar5 != (Object *)0x0) {
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          }
          pSVar6 = (String__Class *)TypeInfo__System__Boolean;
          if ((((Object *)this_00)->klass->_0).element_class ==
              (TypeInfo__System__Boolean->_0).element_class) {
            pbVar31 = (bool *)func_?(this_00);
            pOVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredBool::ObscuredBool_op_Implicit
                                ((ObscuredBool *)(auStack_9 + 4),*pbVar31,(MethodInfo *)0x0);
            uStack_11 = *(ulonglong *)pOVar32;
            _Stack_30 = *(_union_86 *)&pOVar32->fakeValue;
            pAVar12 = (ACTkByte4 *)&uStack_11;
            pOVar13 = (ObscuredInt__Class *)
                      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
code_?:
            pOVar5 = (Object *)func_?(pOVar13,pAVar12);
            *unaff_FS_OFFSET = uStack_2;
            return pOVar5;
          }
          goto code_?;
        }
        goto code_?;
      }
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      value = (Object *)this;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      bVar30 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDStack_33 = this;
      if ((bVar30 <= (((Object *)this_00)->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Object *)this_00)->klass->_1).typeHierarchy[bVar30 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        puVar34 = (undefined4 *)func_?(&pIStack_35);
        uStack_11 = uStack_11 & 0xffffffff;
        DStack_36._dictionary = (Dictionary_2_System_Object_System_Object_ *)*puVar34;
        DStack_36._version = puVar34[1];
        DStack_36._index = puVar34[2];
        DStack_36._current.key = (Object *)puVar34[3];
        DStack_36._16_8_ = *(Il2CppType *)(puVar34 + 4);
        uStack_1 = 1;
        pOVar5 = value;
        _Stack_30.dummy = &DStack_36;
        do {
          bVar37 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_36,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             );
          this_00 = (Exception *)DStack_36._current.key;
          if (bVar37 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&DStack_36,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,in_stack_38);
            *unaff_FS_OFFSET = uStack_2;
            return pOVar5;
          }
          _Stack_18.__klassIndex = (TypeDefinitionIndex)DStack_36._current.value;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar39 = (ObscuredString *)0x0;
          if (this_00 != (Exception *)0x0) {
            if ((String__Class *)((Object *)this_00)->klass == TypeInfo__System__String) {
              pOVar39 = (ObscuredString *)this_00;
            }
            pSVar6 = TypeInfo__System__String;
            if (pOVar39 == (ObscuredString *)0x0) goto code_?;
          }
          pOStack_21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredString::ObscuredString_op_Implicit
                                 ((String *)pOVar39,(MethodInfo *)0x0);
          value_00 = ObscuredTypesConverter_CreateObscuredValue
                               ((Object *)_Stack_18.typeHandle,(MethodInfo *)0x0);
          pOVar5 = value;
          this_00 = (Exception *)0x0;
          if (value == (Object *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)value,(Object *)pOStack_21,
                     value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        } while( true );
      }
      goto code_?;
    }
code_?:
    iVar14 = func_?(this_00,TypeInfo__System__Boolean);
    message = TypeInfo__System__Boolean;
    if (iVar14 != 0) {
      if (this_00 != (Exception *)0x0) {
        _Stack_30.dummy = (void *)func_?(this_00,TypeInfo__System__Boolean);
        if (_Stack_30.dummy != (String__Class *)0x0) {
          _Stack_18.dummy =
               (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,
                                       *(MonitorData **)&_Stack_30.type[1].attrs);
          pMVar27 = (MonitorData *)0x0;
          this_00 = (Exception *)(_Stack_18.type + 2);
          while( true ) {
            if ((int)*(MonitorData **)&_Stack_30.type[1].attrs <= (int)pMVar27) break;
            if (*(MonitorData **)&_Stack_30.type[1].attrs <= pMVar27) goto code_?;
            value = (Object *)CONCAT13(pMVar27[(int)&_Stack_30.type[2].data],value._0_3_);
            MVar40 = pMVar27[(int)&_Stack_30.type[2].data];
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
              MVar40 = value._3_1_;
            }
            pOVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredBool::ObscuredBool_op_Implicit
                                ((ObscuredBool *)(auStack_9 + 4),MVar40 != (MonitorData)0x0,
                                 (MethodInfo *)0x0);
            if (_Stack_18.dummy == (Object *)0x0) goto code_?;
            uVar41._0_1_ = pOVar32->currentCryptoKey;
            uVar41._1_3_ = *(undefined3 *)&pOVar32->field_0x1;
            uVar41._4_4_ = pOVar32->hiddenValue;
            pSVar28 = *(String **)&pOVar32->fakeValue;
            if (*(MonitorData **)&_Stack_18.type[1].attrs <= pMVar27) goto code_?;
            ((ObscuredString *)this_00)->klass = (ObscuredString__Class *)(int)uVar41;
            ((ObscuredString *)this_00)->monitor = (MonitorData *)(int)((ulonglong)uVar41 >> 0x20);
            pMVar27 = pMVar27 + 1;
            (((ObscuredString *)this_00)->fields).currentCryptoKey = pSVar28;
            this_00 = (Exception *)&(((ObscuredString *)this_00)->fields).hiddenValue;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (this_00 != (Exception *)0x0) {
      pSVar6 = (String__Class *)((Object *)this_00)->klass;
      pOVar5 = (Object *)0x0;
      if (pSVar6 == TypeInfo__System__String) {
        pOVar5 = (Object *)this_00;
      }
      if (pOVar5 == (Object *)0x0) {
        pOVar5 = (Object *)0x0;
        if (pSVar6 == (String__Class *)TypeInfo__System__Byte) {
          pOVar5 = (Object *)this_00;
        }
        if (pOVar5 == (Object *)0x0) {
          pOVar5 = (Object *)0x0;
          if (pSVar6 == (String__Class *)TypeInfo__System__Int64) {
            pOVar5 = (Object *)this_00;
          }
          if (pOVar5 == (Object *)0x0) goto code_?;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
          }
          pSVar6 = (String__Class *)TypeInfo__System__Int64;
          if ((((Object *)this_00)->klass->_0).element_class ==
              (TypeInfo__System__Int64->_0).element_class) {
            iVar14 = func_?();
            pOVar42 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredLong::ObscuredLong_op_Implicit
                                ((ObscuredLong *)auStack_17,(ulonglong)*(uint *)(iVar14 + 4),
                                 (MethodInfo *)this_00);
            uStack_43 = *(undefined4 *)&pOVar42->currentCryptoKey;
            pIStack_44 = *(Il2CppClass **)((int)&pOVar42->currentCryptoKey + 4);
            pIStack_35 = *(Il2CppClass **)&pOVar42->hiddenValue;
            auStack_18._0_4_ = *(undefined4 *)((int)&pOVar42->hiddenValue + 4);
            auStack_18._4_4_ = *(undefined4 *)&pOVar42->fakeValue;
            pBStack_19 = *(Byte__Array **)((int)&pOVar42->fakeValue + 4);
            p_Stack_54 = *(Il2CppMetadataTypeHandle *)&pOVar42->inited;
            pIStack_20 = *(Il2CppInteropData **)&pOVar42->field_0x1c;
            pOVar5 = (Object *)
                      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong,
                                      &uStack_43);
            *unaff_FS_OFFSET = uStack_2;
            return pOVar5;
          }
        }
        else {
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
          }
          pSVar6 = (String__Class *)TypeInfo__System__Byte;
          if ((((Object *)this_00)->klass->_0).element_class ==
              (TypeInfo__System__Byte->_0).element_class) {
            puVar45 = (uint8_t *)func_?(this_00);
            value = (Object *)
                    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte
                    ::ObscuredByte_op_Implicit(*puVar45,(MethodInfo *)0x0);
            pOVar5 = (Object *)
                      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte,
                                      &value);
            *unaff_FS_OFFSET = uStack_2;
            return pOVar5;
          }
        }
      }
      else {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
        }
        pSVar28 = (String *)0x0;
        if ((String__Class *)((Object *)this_00)->klass == TypeInfo__System__String) {
          pSVar28 = (String *)this_00;
        }
        pSVar6 = TypeInfo__System__String;
        if (pSVar28 != (String *)0x0) {
          pOVar39 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredString::ObscuredString_op_Implicit(pSVar28,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_2;
          return (Object *)pOVar39;
        }
      }
code_?:
      func_?(this_00,pSVar6);
      goto code_?;
    }
code_?:
    iVar14 = func_?(this_00,TypeInfo__System__Int64);
    message = (Boolean__Array__Class *)TypeInfo__System__Int64;
    if (iVar14 != 0) {
      if (this_00 != (Exception *)0x0) {
        pOStack_21 = (ObscuredString *)func_?(this_00,TypeInfo__System__Int64);
        if (pOStack_21 != (ObscuredString *)0x0) {
          _Stack_18.dummy =
               (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong,
                                       (pOStack_21->fields).hiddenValue);
          pBVar22 = (Byte__Array *)0x0;
          value = (Object *)(_Stack_18.type + 2);
          this_00 = (Exception *)&pOStack_21->fields;
          while( true ) {
            this_00 = (Exception *)&((ObscuredString__Fields *)this_00)->fakeValue;
            pBVar46 = (pOStack_21->fields).hiddenValue;
            if ((int)pBVar46 <= (int)pBVar22) break;
            if (pBVar46 <= pBVar22) goto code_?;
            _Stack_30 = *(_union_86 *)this_00;
            pDStack_33 = *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                           **)((int)this_00 + 4);
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
            }
            pOVar42 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredLong::ObscuredLong_op_Implicit
                                ((ObscuredLong *)&stack0xffffff58,ZEXT48(pDStack_33),unaff_EDI);
            if (_Stack_18.dummy == (Object *)0x0) goto code_?;
            pMVar27 = *(MonitorData **)((int)&pOVar42->currentCryptoKey + 4);
            pOVar47 = *(Object__Class **)&pOVar42->hiddenValue;
            pMVar48 = *(MonitorData **)((int)&pOVar42->hiddenValue + 4);
            pOVar49 = *(Object__Class **)&pOVar42->fakeValue;
            pMVar50 = *(MonitorData **)((int)&pOVar42->fakeValue + 4);
            pOVar51 = *(Object__Class **)&pOVar42->inited;
            pMVar52 = *(MonitorData **)&pOVar42->field_0x1c;
            if (*(Byte__Array **)&_Stack_18.type[1].attrs <= pBVar22) goto code_?;
            pBVar22 = (Byte__Array *)((int)&pBVar22->klass + 1);
            value->klass = *(Object__Class **)&pOVar42->currentCryptoKey;
            value->monitor = pMVar27;
            value[1].klass = pOVar47;
            value[1].monitor = pMVar48;
            value[2].klass = pOVar49;
            value[2].monitor = pMVar50;
            value[3].klass = pOVar51;
            value[3].monitor = pMVar52;
            value = value + 4;
          }
code_?:
          *unaff_FS_OFFSET = uStack_2;
          return _Stack_18.dummy;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if (this_00 != (Exception *)0x0) {
      _Stack_18.dummy = (void *)func_?(this_00,TypeInfo__System__Int32);
      if (_Stack_18.dummy != (Object *)0x0) {
        value = (Object *)
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,
                                *(MonitorData **)&_Stack_18.type[1].attrs);
        pBVar22 = (Byte__Array *)0x0;
        this_00 = (Exception *)(_Stack_18.type + 2);
        pOStack_21 = (ObscuredString *)value;
        while( true ) {
          value = (Object *)&(((ObscuredString *)value)->fields).fakeValue;
          if ((int)*(Byte__Array **)&_Stack_18.type[1].attrs <= (int)pBVar22) break;
          if (*(Byte__Array **)&_Stack_18.type[1].attrs <= pBVar22) goto code_?;
          _Stack_30 = (_union_86)((ObscuredString *)this_00)->klass;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit
                              ((ObscuredInt *)(auStack_18 + 4),_Stack_30.__klassIndex,
                               (MethodInfo *)0x0);
          if (pOStack_21 == (ObscuredString *)0x0) goto code_?;
          pMVar27 = (MonitorData *)pOVar8->hiddenValue;
          pOVar47 = (Object__Class *)pOVar8->fakeValue;
          pMVar48 = *(MonitorData **)&pOVar8->inited;
          if ((pOStack_21->fields).hiddenValue <= pBVar22) goto code_?;
          pBVar22 = (Byte__Array *)((int)&pBVar22->klass + 1);
          this_00 = (Exception *)&((ObscuredString *)this_00)->monitor;
          value->klass = (Object__Class *)pOVar8->currentCryptoKey;
          value->monitor = pMVar27;
          value[1].klass = pOVar47;
          value[1].monitor = pMVar48;
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    uVar53 = func_?();
    func_?(uVar53);
code_?:
    func_?();
  }
  if (this_00 == (Exception *)0x0) {
    pOVar5 = (Object *)func_?(&::StringLiteral__);
  }
  else {
    func_?(this_00);
    pTVar54 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
    func_?(pTVar54);
    pOVar5 = (Object *)func_?(8,pTVar54);
  }
  method_00 = (MethodInfo *)0x0;
  pSVar28 = (String *)func_?(&StringLiteral_Trying_to_write___0___of_unsuppo);
  message = (Boolean__Array__Class *)
            mscorlib.dll::System::String::String_Format_1
                      (pSVar28,(Object *)this_00,pOVar5,method_00);
  func_?();
  this_00 = (Exception *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,(String *)message,(MethodInfo *)0x0);
  func_?(&MethodInfo__ObscuredTypesConverter__CreateObscuredValue_System__Object_);
  func_?();
code_?:
  func_?(this_00,message);
code_?:
  func_?();
  pcVar55 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar55)();
  return pOVar5;
}


/* Object CreateUnObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                   (Object *obscuredValue,MethodInfo *method)

{
  message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
             *)obscuredValue;
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  pOStack_4 = (Object *)&stack0xffffff8c;
  pOVar5 = (Object *)&stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Int64);
    func_?(&TypeInfo__System__Int64);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
    pOVar5 = pOStack_4;
  }
  pOStack_4 = pOVar5;
  pDVar6 = unaff_EDI;
  if (message !=
      (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
       *)0x0) {
    pOVar5 = (Object *)0x0;
    if ((ObscuredInt__Class *)((Object *)message)->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt) {
      pOVar5 = (Object *)message;
    }
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    pOVar7 = (ObscuredLong__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    if ((((Object *)message)->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      pOVar8 = (ObscuredInt *)func_?(message);
      obscuredValue =
           (Object *)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit_1(*pOVar8,(MethodInfo *)0x0);
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&obscuredValue);
      *unaff_FS_OFFSET = iStack_3;
      return pOVar5;
    }
    goto code_?;
  }
code_?:
  iVar9 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  this = (ObscuredBool__Array__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
  if (iVar9 != 0) {
    pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)
              TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    if (message !=
        (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
         *)0x0) {
      pOStack_10 = (Object__Class *)
                   func_?(message,
                                   TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      if (pOStack_10 != (Object__Class *)0x0) {
        pOStack_11 = (Object__Class *)
                     func_?(TypeInfo__System__Int32,
                                     (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                                      *)(pOStack_10->_0).namespaze);
        message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                   *)0x0;
        pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)&(pOStack_11->_0).byval_arg;
        pOVar12 = pOStack_10;
        while( true ) {
          obscuredValue = (Object *)&(pOVar12->_0).byval_arg;
          pDVar13 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                    *)(pOStack_10->_0).namespaze;
          pOVar14 = pOStack_11;
          if ((int)pDVar13 <= (int)message) break;
          if (pDVar13 <= message) goto code_?;
          pIStack_15 = (((Il2CppType *)obscuredValue)->data).dummy;
          pvStack_16 = *(void **)&(pOVar12->_0).byval_arg.attrs;
          pcStack_17 = (pOVar12->_0).this_arg.data.dummy;
          pOStack_18 = *(Object **)&(pOVar12->_0).this_arg.attrs;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          value.hiddenValue = (int32_t)pvStack_16;
          value.currentCryptoKey = (int32_t)pIStack_15;
          value.fakeValue = (int32_t)pcStack_17;
          value._12_4_ = pOStack_18;
          pIVar19 = (Il2CppImage *)
                    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
          if (pOStack_11 == (Object__Class *)0x0) goto code_?;
          if ((Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
               *)(pOStack_11->_0).namespaze <= message) goto code_?;
          message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)((int)&message->klass + 1);
          (pDVar6->_0).image = pIVar19;
          pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)&(pDVar6->_0).gc_desc;
          pOVar12 = (Object__Class *)obscuredValue;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
  if (message !=
      (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
       *)0x0) {
    pOVar5 = (Object *)0x0;
    if ((ObscuredFloat__Class *)((Object *)message)->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat) {
      pOVar5 = (Object *)message;
    }
    if (pOVar5 != (Object *)0x0) {
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      pOVar7 = (ObscuredLong__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
      if ((((Object *)message)->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
        pOVar20 = (ObscuredFloat *)func_?(message);
        obscuredValue =
             (Object *)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(*pOVar20,(MethodInfo *)0x0);
        pOVar5 = (Object *)func_?(TypeInfo__System__Single,&obscuredValue);
        *unaff_FS_OFFSET = iStack_3;
        return pOVar5;
      }
      goto code_?;
    }
  }
  iVar9 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  this = (ObscuredBool__Array__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
  pDVar6 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
  if (iVar9 == 0) {
    if (message ==
        (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
         *)0x0) {
code_?:
      pDVar6 = unaff_EDI;
      iVar9 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      this = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
      if (iVar9 != 0) {
        pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)
                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
        if (message ==
            (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
             *)0x0) goto code_?;
        obscuredValue =
             (Object *)
             func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        if (obscuredValue != (Object *)0x0) {
          pOStack_10 = (Object__Class *)
                       func_?(TypeInfo__System__Boolean,obscuredValue[1].monitor);
          pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)(obscuredValue + 2);
          for (message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                          *)0x0; pOVar14 = pOStack_10, (int)message < (int)obscuredValue[1].monitor;
              message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                         *)((int)&message->klass + 1)) {
            if ((Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                 *)obscuredValue[1].monitor <= message) goto code_?;
            pOStack_21 = (Object__Class *)(pDVar6->_0).name;
            uStack_22._0_4_ = (char *)(pDVar6->_0).image;
            uStack_22._4_4_ = (pDVar6->_0).gc_desc;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            }
            value_02._8_4_ = pOStack_21;
            value_02.currentCryptoKey = (undefined1)uStack_22;
            value_02._1_3_ = uStack_22._1_3_;
            value_02.hiddenValue = (int32_t)uStack_22._4_4_;
            bVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit_1(value_02,(MethodInfo *)0x0);
            if (pOStack_10 == (Object__Class *)0x0) goto code_?;
            if ((Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                 *)(pOStack_10->_0).namespaze <= message) goto code_?;
            *(bool *)((int)&(pOStack_10->_0).image + (int)&message->vector[0].hashCode) = bVar23;
            pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)&(pDVar6->_0).namespaze;
          }
code_?:
          *unaff_FS_OFFSET = iStack_3;
          return (Object *)pOVar14;
        }
        goto code_?;
      }
      if (message !=
          (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
           *)0x0) {
        pOVar7 = (ObscuredLong__Class *)((Object *)message)->klass;
        pOVar5 = (Object *)0x0;
        if (pOVar7 ==
            (ObscuredLong__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
          pOVar5 = (Object *)message;
        }
        if (pOVar5 == (Object *)0x0) {
          pOVar5 = (Object *)0x0;
          if (pOVar7 ==
              (ObscuredLong__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte) {
            pOVar5 = (Object *)message;
          }
          if (pOVar5 == (Object *)0x0) {
            pOVar5 = (Object *)0x0;
            if (pOVar7 == TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong) {
              pOVar5 = (Object *)message;
            }
            if (pOVar5 == (Object *)0x0) goto code_?;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
            }
            pOVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
            if ((((Object *)message)->klass->_0).element_class ==
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_0).element_class) {
              pOVar24 = (ObscuredLong *)func_?(message);
              uStack_22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredLong::ObscuredLong_op_Implicit_1(*pOVar24,(MethodInfo *)0x0);
              pOVar5 = (Object *)func_?(TypeInfo__System__Int64,&uStack_22);
              *unaff_FS_OFFSET = iStack_3;
              return pOVar5;
            }
          }
          else {
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
            }
            pOVar7 = (ObscuredLong__Class *)
                      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte;
            if ((((Object *)message)->klass->_0).element_class ==
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_0).element_class) {
              pOVar25 = (ObscuredByte *)func_?(message);
              uVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredByte::ObscuredByte_op_Implicit_1(*pOVar25,(MethodInfo *)0x0);
              obscuredValue = (Object *)CONCAT13(uVar26,obscuredValue._0_3_);
              pOVar5 = (Object *)func_?(TypeInfo__System__Byte,(int)&obscuredValue + 3);
              *unaff_FS_OFFSET = iStack_3;
              return pOVar5;
            }
          }
        }
        else {
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          }
          value_04 = (ObscuredString *)0x0;
          if (((Object *)message)->klass ==
              (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
            value_04 = (ObscuredString *)message;
          }
          pOVar7 = (ObscuredLong__Class *)
                    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString;
          if (value_04 != (ObscuredString *)0x0) {
            pSVar27 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredString::ObscuredString_op_Implicit_1(value_04,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = iStack_3;
            return (Object *)pSVar27;
          }
        }
code_?:
        func_?(message,pOVar7);
code_?:
        func_?();
        pOVar28 = extraout_ECX;
code_?:
        uVar29 = func_?(pDVar6,pOVar28);
        func_?(uVar29);
        goto code_?;
      }
code_?:
      iVar9 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      this = (ObscuredBool__Array__Class *)
             TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
      if (iVar9 != 0) {
        pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)
                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
        if (message !=
            (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
             *)0x0) {
          pOStack_11 = (Object__Class *)
                       func_?(message,
                                       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
          if (pOStack_11 != (Object__Class *)0x0) {
            pOStack_10 = (Object__Class *)
                         func_?(TypeInfo__System__Int64,
                                         (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                                          *)(pOStack_11->_0).namespaze);
            message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                       *)0x0;
            obscuredValue = (Object *)&(pOStack_10->_0).byval_arg;
            pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)
                      &(pOStack_11->_0).byval_arg;
            while( true ) {
              pDVar13 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                        *)(pOStack_11->_0).namespaze;
              if ((int)pDVar13 <= (int)message) {
                *unaff_FS_OFFSET = iStack_3;
                return (Object *)pOStack_10;
              }
              if (pDVar13 <= message) break;
              pIStack_30 = (pDVar6->_0).image;
              pvStack_31 = (pDVar6->_0).gc_desc;
              uStack_22._0_4_ = (pDVar6->_0).name;
              uStack_22._4_4_ = (pDVar6->_0).namespaze;
              pIStack_15 = (pDVar6->_0).byval_arg.data.dummy;
              pvStack_16 = *(void **)&(pDVar6->_0).byval_arg.attrs;
              pcStack_17 = (pDVar6->_0).this_arg.data.dummy;
              pOStack_18 = *(Object **)&(pDVar6->_0).this_arg.attrs;
              pcVar32 = (pDVar6->_0).name;
              pcVar33 = (pDVar6->_0).namespaze;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
                pcVar32 = (char *)uStack_22;
                pcVar33 = uStack_22._4_4_;
              }
              value_00.currentCryptoKey._4_4_ = pvStack_31;
              value_00.currentCryptoKey._0_4_ = pIStack_30;
              value_00.hiddenValue._0_4_ = pcVar32;
              value_00.hiddenValue._4_4_ = pcVar33;
              value_00.fakeValue._0_4_ = pIStack_15;
              value_00.fakeValue._4_4_ = pvStack_16;
              value_00._24_4_ = pcStack_17;
              value_00._28_4_ = pOStack_18;
              OVar34 = (Object)Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredLong::ObscuredLong_op_Implicit_1(value_00,(MethodInfo *)0x0);
              pOStack_21 = OVar34.klass;
              if (pOStack_10 == (Object__Class *)0x0) goto code_?;
              if ((Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                   *)(pOStack_10->_0).namespaze <= message) break;
              message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                         *)((int)&message->klass + 1);
              *obscuredValue = OVar34;
              obscuredValue = obscuredValue + 1;
              pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)
                        &(pDVar6->_0).element_class;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    else {
      pOVar35 = (ObscuredBool__Class *)((Object *)message)->klass;
      bVar36 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pOVar35->_1).naturalAligment < bVar36) ||
         ((Dictionary_2_System_Object_System_Object___Class *)(pOVar35->_1).typeHierarchy[bVar36 - 1]
          != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        pOVar5 = (Object *)0x0;
        if (pOVar35 == TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool) {
          pOVar5 = (Object *)message;
        }
        unaff_EDI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if (pOVar5 != (Object *)0x0) {
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          }
          pOVar7 = (ObscuredLong__Class *)
                    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
          if ((((Object *)message)->klass->_0).element_class ==
              (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
            pOVar37 = (ObscuredBool *)func_?(message);
            bVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit_1(*pOVar37,(MethodInfo *)0x0);
            obscuredValue = (Object *)CONCAT13(bVar23,obscuredValue._0_3_);
            pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&obscuredValue + 3);
            *unaff_FS_OFFSET = iStack_3;
            return pOVar5;
          }
          goto code_?;
        }
        goto code_?;
      }
      pOVar12 = (Object__Class *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pOStack_10 = pOVar12;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)pOVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      bVar36 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pOStack_21 = pOVar12;
      if ((bVar36 <= (((Object *)message)->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Object *)message)->klass->_1).typeHierarchy[bVar36 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        iVar9 = func_?(auStack_38);
        message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                   *)&stack0xffffff98;
        uStack_22 = ZEXT48(message) << 0x20;
        uVar39 = *(undefined8 *)(iVar9 + 0x10);
        iStack_1 = 1;
        pDVar6 = *(Dictionary_2_System_Object_System_Object___Class **)(iVar9 + 0xc);
        do {
          bVar23 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                             &stack0xffffff98,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          if (bVar23 == 0) {
            iStack_1 = -1;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)message,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,(MethodInfo *)pDVar6);
            *unaff_FS_OFFSET = iStack_3;
            return (Object *)pOVar12;
          }
          pOStack_40 = (Object *)uVar39;
          obscuredValue = pOStack_40;
          pDVar41 = pDVar6;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value_03 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pDVar6 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
            if ((ObscuredString__Class *)(pDVar6->_0).image ==
                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
              value_03 = pDVar6;
            }
            pOVar28 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString;
            if (value_03 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
            goto code_?;
          }
          pOStack_11 = (Object__Class *)
                       Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredString::ObscuredString_op_Implicit_1
                                 ((ObscuredString *)value_03,(MethodInfo *)0x0);
          pOVar5 = ObscuredTypesConverter_CreateUnObscuredValue(obscuredValue,(MethodInfo *)0x0);
          pOVar12 = pOStack_10;
          pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pOStack_10 == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pOStack_10,(Object *)pOStack_11,
                     pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pDVar6 = pDVar41;
        } while( true );
      }
code_?:
      func_?();
    }
    func_?(message);
    arg0 = mscorlib.dll::System::Object::Object_GetType((Object *)message,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pSVar27 = (String *)func_?(&StringLiteral_Trying_to_to_unobscure_unknown_t);
    message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
               *)mscorlib.dll::System::String::String_Format(pSVar27,(Object *)arg0,method_00);
    func_?();
    this = (ObscuredBool__Array__Class *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1
              ((Exception *)this,(String *)message,(MethodInfo *)0x0);
    func_?(&MethodInfo__ObscuredTypesConverter__CreateUnObscuredValue_System__Object_);
    func_?();
  }
  else {
    pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)
              TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    if (message ==
        (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
         *)0x0) goto code_?;
    pOStack_10 = (Object__Class *)
                 func_?(message,
                                 TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    if (pOStack_10 != (Object__Class *)0x0) {
      pOStack_11 = (Object__Class *)
                   func_?(TypeInfo__System__Single,
                                   (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                                    *)(pOStack_10->_0).namespaze);
      obscuredValue = (Object *)&(pOStack_11->_0).byval_arg;
      pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)&(pOStack_10->_0).byval_arg;
      for (message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                      *)0x0;
          pDVar13 = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                    *)(pOStack_10->_0).namespaze, pOVar14 = pOStack_11, (int)message < (int)pDVar13;
          message = (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)((int)&message->klass + 1)) {
        if (pDVar13 <= message) goto code_?;
        pOStack_21 = (pDVar6->_0).byval_arg.data.dummy;
        pIStack_15 = (pDVar6->_0).image;
        pvStack_16 = (pDVar6->_0).gc_desc;
        pcStack_17 = (pDVar6->_0).name;
        pOStack_18 = (Object *)(pDVar6->_0).namespaze;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        value_01.hiddenValue = (ACTkByte4)pvStack_16;
        value_01.currentCryptoKey = (int32_t)pIStack_15;
        value_01.hiddenValueOld = (Byte__Array *)pcStack_17;
        value_01.fakeValue = (float)pOStack_18;
        value_01._16_4_ = pOStack_21;
        pOStack_21 = (Object__Class *)
                     Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_op_Implicit_1(value_01,(MethodInfo *)0x0);
        if (pOStack_11 == (Object__Class *)0x0) goto code_?;
        if ((Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
             *)(pOStack_11->_0).namespaze <= message) goto code_?;
        obscuredValue->klass = pOStack_21;
        obscuredValue = (Object *)&obscuredValue->monitor;
        pDVar6 = (Dictionary_2_System_Object_System_Object___Class *)&(pDVar6->_0).byval_arg.attrs
        ;
      }
      goto code_?;
    }
  }
code_?:
  func_?(message,this);
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar42)();
  return pOVar5;
}

