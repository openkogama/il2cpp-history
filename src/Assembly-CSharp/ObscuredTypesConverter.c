
/* Object CreateObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                   (Object *value,MethodInfo *method)

{
  this_00 = (Exception *)value;
  ppMStack_1 = (MethodInfo **)0xffffffff;
  pPStack_2 = (PropertyInfo *)&DAT_?;
  pEStack_3 = (EventInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pEStack_3;
  pFStack_4 = (FieldInfo *)&stack0xffffff5c;
  pFVar5 = (FieldInfo *)&stack0xffffff5c;
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
    pFVar5 = pFStack_4;
  }
  pFStack_4 = pFVar5;
  DStack_6._16_8_ = (Il2CppType)0x0;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  if (this_00 != (Exception *)0x0) {
    pOVar7 = (Object *)0x0;
    if ((Int32__Class *)((Object *)this_00)->klass == TypeInfo__System__Int32) {
      pOVar7 = (Object *)this_00;
    }
    if (pOVar7 == (Object *)0x0) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    pSVar8 = (String__Class *)TypeInfo__System__Int32;
    if ((((Object *)this_00)->klass->_0).element_class ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar9 = (int32_t *)func_?(this_00);
      pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit((ObscuredInt *)auStack_11,*piVar9,(MethodInfo *)0x0);
      auStack_12._4_4_ = pOVar10->currentCryptoKey;
      auStack_12._8_4_ = (Byte__Array *)pOVar10->hiddenValue;
      auStack_12._12_4_ = (float)pOVar10->fakeValue;
      _Stack_20 = *(_union_86 *)&pOVar10->inited;
      puVar13 = auStack_12 + 4;
      pOVar14 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
      goto code_?;
    }
    goto code_?;
  }
code_?:
  iVar15 = func_?(this_00,TypeInfo__System__Int32);
  message = (Boolean__Array__Class *)TypeInfo__System__Int32;
  if (iVar15 == 0) {
    if (this_00 != (Exception *)0x0) {
      pOVar7 = (Object *)0x0;
      if ((Single__Class *)((Object *)this_00)->klass == TypeInfo__System__Single) {
        pOVar7 = (Object *)this_00;
      }
      if (pOVar7 != (Object *)0x0) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        pSVar8 = (String__Class *)TypeInfo__System__Single;
        if ((((Object *)this_00)->klass->_0).element_class ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar16 = (float *)func_?(this_00);
          pOVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit
                              ((ObscuredFloat *)(auStack_18 + 0xc),*pfVar16,(MethodInfo *)0x0);
          auStack_12._0_4_ = pOVar17->currentCryptoKey;
          auStack_12._4_4_ = pOVar17->hiddenValue;
          auStack_12._8_4_ = pOVar17->hiddenValueOld;
          auStack_12._12_4_ = pOVar17->fakeValue;
          _Stack_20 = *(_union_86 *)&pOVar17->inited;
          pOVar7 = (Object *)
                    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,
                                    auStack_12);
          *unaff_FS_OFFSET = pEStack_3;
          return pOVar7;
        }
        goto code_?;
      }
    }
    iVar15 = func_?(this_00,TypeInfo__System__Single);
    message = (Boolean__Array__Class *)TypeInfo__System__Single;
    if (iVar15 == 0) {
      if (this_00 != (Exception *)0x0) {
        if (((((Object *)this_00)->klass->_1).typeHierarchyDepth <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (((Object *)this_00)->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          pOVar7 = (Object *)0x0;
          if ((Boolean__Class *)((Object *)this_00)->klass == TypeInfo__System__Boolean) {
            pOVar7 = (Object *)this_00;
          }
          if (pOVar7 != (Object *)0x0) {
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            }
            pSVar8 = (String__Class *)TypeInfo__System__Boolean;
            if ((((Object *)this_00)->klass->_0).element_class ==
                (TypeInfo__System__Boolean->_0).element_class) {
              pbVar19 = (bool *)func_?(this_00);
              pOVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredBool::ObscuredBool_op_Implicit
                                  ((ObscuredBool *)(auStack_11 + 4),*pbVar19,(MethodInfo *)0x0);
              auStack_12._8_8_ = *(undefined8 *)pOVar20;
              _Stack_20 = *(_union_86 *)&pOVar20->fakeValue;
              puVar13 = auStack_12 + 8;
              pOVar14 = (ObscuredInt__Class *)
                        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
code_?:
              pOVar7 = (Object *)func_?(pOVar14,puVar13);
              *unaff_FS_OFFSET = pEStack_3;
              return pOVar7;
            }
            goto code_?;
          }
          goto code_?;
        }
        this.dummy = (void *)func_?(
                                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                            );
        value = this.dummy;
        if (this.dummy == (String *)0x0) goto code_?;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this.typeHandle,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        _Stack_18.dummy = this.dummy;
        if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth <= (((Object *)this_00)->klass->_1).typeHierarchyDepth) &&
           ((Dictionary_2_System_Object_System_Object___Class *)
            (((Object *)this_00)->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth - 1] ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          puVar21 = (undefined4 *)func_?(&pIStack_22);
          DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)*puVar21;
          DStack_6._version = puVar21[1];
          DStack_6._index = puVar21[2];
          DStack_6._current.key = (Object *)puVar21[3];
          DStack_6._16_8_ = *(Il2CppType *)(puVar21 + 4);
          auStack_12._8_8_ = auStack_12._8_8_ & 0xffffffff;
          ppMStack_1 = (MethodInfo **)0x1;
          pOVar7 = value;
          _Stack_20.dummy = &DStack_6;
          do {
            bVar23 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_6,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                               );
            this_00 = (Exception *)DStack_6._current.key;
            if (bVar23 == 0) {
              ppMStack_1 = (MethodInfo **)0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                         ,in_stack_24);
              *unaff_FS_OFFSET = pEStack_3;
              return pOVar7;
            }
            _Stack_1c.__klassIndex = (TypeDefinitionIndex)DStack_6._current.value;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pSVar25 = (String *)0x0;
            if (this_00 != (Exception *)0x0) {
              if ((String__Class *)((Object *)this_00)->klass == TypeInfo__System__String) {
                pSVar25 = (String *)this_00;
              }
              pSVar8 = TypeInfo__System__String;
              if (pSVar25 == (String *)0x0) goto code_?;
            }
            pOVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredString::ObscuredString_op_Implicit(pSVar25,(MethodInfo *)0x0);
            value_00 = ObscuredTypesConverter_CreateObscuredValue
                                 ((Object *)_Stack_1c.typeHandle,(MethodInfo *)0x0);
            pOVar7 = value;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)value,(Object *)pOVar26,value_00
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          } while( true );
        }
        goto code_?;
      }
code_?:
      iVar15 = func_?(this_00,TypeInfo__System__Boolean);
      message = TypeInfo__System__Boolean;
      if (iVar15 != 0) {
        if (this_00 == (Exception *)0x0) goto code_?;
        pSVar25 = (String *)func_?(this_00,TypeInfo__System__Boolean);
        value = (Object *)pSVar25;
        if (pSVar25 != (String *)0x0) {
          _Stack_1c.dummy =
               (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,
                                       ((ParameterOverride_1_System_Object___Fields *)
                                       &pSVar25->fields)->value);
          pIVar27 = (Il2CppClass *)0x0;
          _Stack_18.array = (Il2CppArrayType *)(_Stack_1c.generic_class + 1);
          while( true ) {
            if ((int)((ParameterOverride_1_System_Object___Fields *)&pSVar25->fields)->value <=
                (int)pIVar27) {
              *unaff_FS_OFFSET = pEStack_3;
              return _Stack_1c.dummy;
            }
            if ((Il2CppClass *)
                ((ParameterOverride_1_System_Object___Fields *)&pSVar25->fields)->value <= pIVar27)
            break;
            value = (Object *)
                    CONCAT13(*(undefined1 *)((int)&pIVar27->image + (int)&pSVar25[1].klass),
                             value._0_3_);
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            }
            pOVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredBool::ObscuredBool_op_Implicit
                                ((ObscuredBool *)(auStack_12 + 8),value._3_1_ != '\0',
                                 (MethodInfo *)0x0);
            this_00 = (Exception *)pSVar25;
            if (_Stack_1c.dummy == (String *)0x0) goto code_?;
            bVar23 = pOVar20->fakeValue;
            bVar28 = pOVar20->fakeValueChanged;
            bVar29 = pOVar20->inited;
            uVar30 = pOVar20->field_0xb;
            if ((_Stack_1c.generic_class)->cached_class <= pIVar27) break;
            pIVar27 = (Il2CppClass *)((int)&pIVar27->image + 1);
            *_Stack_18.type = *(Il2CppType *)pOVar20;
            *(ParameterOverride__Fields *)&((Il2CppArrayType *)_Stack_18.generic_class)->sizes =
                 (ParameterOverride__Fields)bVar23;
            *(bool *)((int)&((Il2CppArrayType *)_Stack_18.generic_class)->sizes + 1) = bVar28;
            *(bool *)((int)&((Il2CppArrayType *)_Stack_18.generic_class)->sizes + 2) = bVar29;
            *(undefined1 *)((int)&((Il2CppArrayType *)_Stack_18.generic_class)->sizes + 3) = uVar30;
            _Stack_18.dummy = &(_Stack_18.generic_class)->cached_class;
          }
          goto code_?;
        }
        goto code_?;
      }
      if (this_00 != (Exception *)0x0) {
        pOVar7 = (Object *)0x0;
        if ((String__Class *)((Object *)this_00)->klass == TypeInfo__System__String) {
          pOVar7 = (Object *)this_00;
        }
        if (pOVar7 == (Object *)0x0) {
          pOVar7 = (Object *)0x0;
          if ((Byte__Class *)((Object *)this_00)->klass == TypeInfo__System__Byte) {
            pOVar7 = (Object *)this_00;
          }
          if (pOVar7 == (Object *)0x0) {
            pOVar7 = (Object *)0x0;
            if ((Int64__Class *)((Object *)this_00)->klass == TypeInfo__System__Int64) {
              pOVar7 = (Object *)this_00;
            }
            if (pOVar7 == (Object *)0x0) goto code_?;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
            }
            pSVar8 = (String__Class *)TypeInfo__System__Int64;
            if ((((Object *)this_00)->klass->_0).element_class ==
                (TypeInfo__System__Int64->_0).element_class) {
              iVar15 = func_?();
              pOVar31 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredLong::ObscuredLong_op_Implicit
                                  ((ObscuredLong *)auStack_18,(ulonglong)*(uint *)(iVar15 + 4),
                                   (MethodInfo *)this_00);
              a_Stack_3c[0] = *(_union_86 *)&pOVar31->currentCryptoKey;
              a_Stack_3c[1] = *(_union_86 *)((int)&pOVar31->currentCryptoKey + 4);
              pIStack_22 = *(Il2CppClass **)&pOVar31->hiddenValue;
              auStack_12._0_4_ = *(undefined4 *)((int)&pOVar31->hiddenValue + 4);
              auStack_12._4_4_ = *(undefined4 *)&pOVar31->fakeValue;
              auStack_12._8_8_ = *(undefined8 *)((int)&pOVar31->fakeValue + 4);
              _Stack_20 = *(_union_86 *)&pOVar31->field_0x1c;
              pOVar7 = (Object *)
                        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong,
                                        a_Stack_3c);
              *unaff_FS_OFFSET = pEStack_3;
              return pOVar7;
            }
          }
          else {
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
            }
            pSVar8 = (String__Class *)TypeInfo__System__Byte;
            if ((((Object *)this_00)->klass->_0).element_class ==
                (TypeInfo__System__Byte->_0).element_class) {
              puVar32 = (uint8_t *)func_?(this_00);
              value = (Object *)
                      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredByte::ObscuredByte_op_Implicit(*puVar32,(MethodInfo *)0x0);
              pOVar7 = (Object *)
                        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte,
                                        &value);
              *unaff_FS_OFFSET = pEStack_3;
              return pOVar7;
            }
          }
        }
        else {
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          }
          pSVar25 = (String *)0x0;
          if ((String__Class *)((Object *)this_00)->klass == TypeInfo__System__String) {
            pSVar25 = (String *)this_00;
          }
          pSVar8 = TypeInfo__System__String;
          if (pSVar25 != (String *)0x0) {
            pOVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredString::ObscuredString_op_Implicit(pSVar25,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = pEStack_3;
            return (Object *)pOVar26;
          }
        }
        goto code_?;
      }
code_?:
      iVar15 = func_?(this_00,TypeInfo__System__Int64);
      message = (Boolean__Array__Class *)TypeInfo__System__Int64;
      if (iVar15 != 0) {
        if (this_00 == (Exception *)0x0) goto code_?;
        _Stack_18.dummy = (void *)func_?(this_00,TypeInfo__System__Int64);
        if (_Stack_18.dummy != (String *)0x0) {
          _Stack_1c.dummy =
               (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong,
                                       (_Stack_18.generic_class)->cached_class);
          pIVar27 = (Il2CppClass *)0x0;
          value = (Object *)(_Stack_1c.array + 1);
          this_00 = (Exception *)(_Stack_18.generic_class + 1);
          while( true ) {
            if ((int)(_Stack_18.generic_class)->cached_class <= (int)pIVar27) {
              *unaff_FS_OFFSET = pEStack_3;
              return _Stack_1c.dummy;
            }
            if ((_Stack_18.generic_class)->cached_class <= pIVar27) break;
            _Stack_20 = (_union_86)((String *)this_00)->klass;
            pMStack_33 = ((String *)this_00)->monitor;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
            }
            pOVar31 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredLong::ObscuredLong_op_Implicit
                                ((ObscuredLong *)&stack0xffffff68,ZEXT48(pMStack_33),unaff_EDI);
            if (_Stack_1c.dummy == (String *)0x0) goto code_?;
            pMVar34 = *(MonitorData **)((int)&pOVar31->currentCryptoKey + 4);
            pOVar35 = *(Object__Class **)&pOVar31->hiddenValue;
            pMVar36 = *(MonitorData **)((int)&pOVar31->hiddenValue + 4);
            pOVar37 = *(Object__Class **)&pOVar31->fakeValue;
            pMVar38 = *(MonitorData **)((int)&pOVar31->fakeValue + 4);
            pOVar39 = *(Object__Class **)&pOVar31->inited;
            pMVar40 = *(MonitorData **)&pOVar31->field_0x1c;
            if ((_Stack_1c.generic_class)->cached_class <= pIVar27) break;
            pIVar27 = (Il2CppClass *)((int)&pIVar27->image + 1);
            this_00 = (Exception *)&((String *)this_00)->fields;
            value->klass = *(Object__Class **)&pOVar31->currentCryptoKey;
            value->monitor = pMVar34;
            value[1].klass = pOVar35;
            value[1].monitor = pMVar36;
            value[2].klass = pOVar37;
            value[2].monitor = pMVar38;
            value[3].klass = pOVar39;
            value[3].monitor = pMVar40;
            value = value + 4;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    if (this_00 == (Exception *)0x0) goto code_?;
    pSVar25 = (String *)func_?(this_00,TypeInfo__System__Single);
    value = (Object *)pSVar25;
    if (pSVar25 != (String *)0x0) {
      _Stack_18.dummy =
           (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,
                                   ((ParameterOverride_1_System_Object___Fields *)&pSVar25->fields)
                                   ->value);
      pIVar27 = (Il2CppClass *)0x0;
      value = (Object *)&((String *)(_Stack_18.generic_class + 1))->fields;
      _Stack_1c.array = (Il2CppArrayType *)(pSVar25 + 1);
      while( true ) {
        if ((int)((ParameterOverride_1_System_Object___Fields *)&pSVar25->fields)->value <=
            (int)pIVar27) break;
        if ((Il2CppClass *)((ParameterOverride_1_System_Object___Fields *)&pSVar25->fields)->value
            <= pIVar27) goto code_?;
        _Stack_20 = (_Stack_1c.type)->data;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        pOVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit
                            ((ObscuredFloat *)auStack_12,(float)_Stack_20,(MethodInfo *)0x0);
        this_00 = (Exception *)pSVar25;
        if (_Stack_18.dummy == (String *)0x0) goto code_?;
        AVar41 = pOVar17->hiddenValue;
        pOVar37 = (Object__Class *)pOVar17->hiddenValueOld;
        pMVar34 = (MonitorData *)pOVar17->fakeValue;
        pOVar35 = *(Object__Class **)&pOVar17->inited;
        if ((_Stack_18.generic_class)->cached_class <= pIVar27) goto code_?;
        value[-1].klass = (Object__Class *)pOVar17->currentCryptoKey;
        value[-1].monitor = (MonitorData *)AVar41;
        value->klass = pOVar37;
        value->monitor = pMVar34;
        value[1].klass = pOVar35;
        func_?();
        pIVar27 = (Il2CppClass *)((int)&pIVar27->image + 1);
        _Stack_1c.dummy = &(_Stack_1c.generic_class)->context;
        value = (Object *)&value[2].monitor;
      }
code_?:
      *unaff_FS_OFFSET = pEStack_3;
      return _Stack_18.dummy;
    }
  }
  else {
    if (this_00 != (Exception *)0x0) {
      pSVar25 = (String *)func_?(this_00,TypeInfo__System__Int32);
      value = (Object *)pSVar25;
      if (pSVar25 != (String *)0x0) {
        _Stack_1c.dummy =
             (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,
                                     ((ParameterOverride_1_System_Object___Fields *)&pSVar25->fields
                                     )->value);
        pIVar27 = (Il2CppClass *)0x0;
        value = (Object *)(pSVar25 + 1);
        _Stack_18.dummy = _Stack_1c.dummy;
        while( true ) {
          _Stack_1c.array = (Il2CppArrayType *)(_Stack_1c.generic_class + 1);
          if ((int)((ParameterOverride_1_System_Object___Fields *)&pSVar25->fields)->value <=
              (int)pIVar27) break;
          if ((Il2CppClass *)((ParameterOverride_1_System_Object___Fields *)&pSVar25->fields)->value
              <= pIVar27) goto code_?;
          _Stack_20 = (_union_86)((String *)value)->klass;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit
                              ((ObscuredInt *)auStack_11,_Stack_20.__klassIndex,(MethodInfo *)0x0);
          this_00 = (Exception *)pSVar25;
          if (_Stack_18.dummy == (String *)0x0) goto code_?;
          pIVar42 = (Il2CppGenericInst *)pOVar10->hiddenValue;
          iVar43 = pOVar10->fakeValue;
          pIVar44 = *(Il2CppClass **)&pOVar10->inited;
          if ((_Stack_18.generic_class)->cached_class <= pIVar27) goto code_?;
          pIVar27 = (Il2CppClass *)((int)&pIVar27->image + 1);
          value = (Object *)&value->monitor;
          (_Stack_1c.type)->data = (_union_86)pOVar10->currentCryptoKey;
          ((_Stack_1c.generic_class)->context).class_inst = pIVar42;
          *(int32_t *)&(_Stack_1c.array)->sizes = iVar43;
          (_Stack_1c.generic_class)->cached_class = pIVar44;
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    func_?();
    pSVar8 = extraout_ECX;
code_?:
    uVar45 = func_?(this_00,pSVar8);
    func_?(uVar45);
code_?:
    func_?();
code_?:
    if (this_00 == (Exception *)0x0) {
      pOVar7 = (Object *)func_?(&::StringLiteral__);
    }
    else {
      func_?(this_00);
      pTVar46 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
      func_?(pTVar46);
      pOVar7 = (Object *)func_?(7,pTVar46);
    }
    method_00 = (MethodInfo *)0x0;
    pSVar25 = (String *)func_?(&StringLiteral_Trying_to_write___0___of_unsuppo);
    message = (Boolean__Array__Class *)
              mscorlib.dll::System::String::String_Format_1
                        (pSVar25,(Object *)this_00,pOVar7,method_00);
    func_?();
    this_00 = (Exception *)func_?();
    func_?(this_00);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,(String *)message,(MethodInfo *)0x0);
    func_?(&MethodInfo__ObscuredTypesConverter__CreateObscuredValue_System__Object_);
    func_?();
  }
code_?:
  func_?(this_00,message);
code_?:
  func_?();
  pcVar47 = (code *)swi(3);
  pOVar7 = (Object *)(*pcVar47)();
  return pOVar7;
}


/* Object CreateUnObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                   (Object *obscuredValue,MethodInfo *method)

{
  message = (Il2CppRGCTXData *)obscuredValue;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (message != (Il2CppRGCTXData *)0x0) {
    pOVar6 = (Object *)0x0;
    if ((ObscuredInt__Class *)((Object *)message)->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt) {
      pOVar6 = (Object *)message;
    }
    if (pOVar6 == (Object *)0x0) goto code_?;
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
      pOStack_9 = (Object *)func_?(TypeInfo__System__Int32,&obscuredValue);
      goto code_?;
    }
    goto code_?;
  }
code_?:
  iVar10 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
  if (iVar10 != 0) {
    obscuredValue = (Object *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    if (message != (Il2CppRGCTXData *)0x0) {
      pMVar13 = (MethodInfo *)
                func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      if (pMVar13 != (MethodInfo *)0x0) {
        obscuredValue = (Object *)func_?(TypeInfo__System__Int32,(Object *)pMVar13->name);
        message = (Il2CppRGCTXData *)0x0;
        OStack_14.monitor = (MonitorData *)(obscuredValue + 2);
        pMStack_15 = pMVar13;
        while( true ) {
          iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
          pMVar16 = (MethodInfo *)&pMStack_15->klass;
          if ((int)pMVar13->name <= (int)message) break;
          if ((Il2CppRGCTXData *)pMVar13->name <= message) goto code_?;
          uVar17 = pMStack_15->klass;
          uVar18 = pMStack_15->return_type;
          value.hiddenValue = uVar18;
          value.currentCryptoKey = uVar17;
          uStack_12._0_4_ = pMStack_15->parameters;
          uStack_12._4_4_ = (pMStack_15->field7_0x1c).rgctx_data;
          pMStack_15 = pMVar16;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          value.fakeValue = (int32_t)(Il2CppType **)uStack_12;
          value._12_4_ = uStack_12._4_4_;
          iVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
          iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
          if (obscuredValue == (Object *)0x0) goto code_?;
          pMVar16 = pMStack_15;
          if ((Il2CppRGCTXData *)obscuredValue[1].monitor <= message) goto code_?;
          message = (Il2CppRGCTXData *)((int)message + 1);
          *(int32_t *)OStack_14.monitor = iVar19;
          OStack_14.monitor = OStack_14.monitor + 4;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
  if (message != (Il2CppRGCTXData *)0x0) {
    pOVar6 = (Object *)0x0;
    if ((ObscuredFloat__Class *)((Object *)message)->klass ==
        TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat) {
      pOVar6 = (Object *)message;
    }
    if (pOVar6 != (Object *)0x0) {
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
        pOVar6 = (Object *)func_?(TypeInfo__System__Single,&obscuredValue);
        *unaff_FS_OFFSET = uStack_3;
        return pOVar6;
      }
      goto code_?;
    }
  }
  iVar10 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  this = (ObscuredBool__Array__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
  iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
  if (iVar10 == 0) {
    if (message == (Il2CppRGCTXData *)0x0) {
code_?:
      iVar10 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      this = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
      iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
      if (iVar10 != 0) {
        if (message != (Il2CppRGCTXData *)0x0) {
          obscuredValue =
               (Object *)
               func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          if (obscuredValue != (Object *)0x0) {
            pOStack_9 = (Object *)
                         func_?(TypeInfo__System__Boolean,obscuredValue[1].monitor);
            pOVar6 = obscuredValue + 2;
            for (message = (Il2CppRGCTXData *)0x0; iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9),
                (int)message < (int)obscuredValue[1].monitor;
                message = (Il2CppRGCTXData *)((int)message + 1)) {
              pMVar16 = pMStack_15;
              if ((Il2CppRGCTXData *)obscuredValue[1].monitor <= message) goto code_?;
              uStack_12._4_4_ = (Il2CppRGCTXData *)pOVar6[1].klass;
              OStack_14 = *pOVar6;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
              }
              value_02._8_4_ = uStack_12._4_4_;
              value_02._0_8_ = OStack_14;
              bVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredBool::ObscuredBool_op_Implicit_1(value_02,(MethodInfo *)0x0);
              iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
              if (pOStack_9 == (Object *)0x0) goto code_?;
              pMVar16 = pMStack_15;
              if ((Il2CppRGCTXData *)pOStack_9[1].monitor <= message) goto code_?;
              *(bool *)((int)&pOStack_9[2].klass + (int)message) = bVar21;
              pOVar6 = (Object *)&pOVar6[1].monitor;
            }
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return pOStack_9;
          }
          goto code_?;
        }
code_?:
        uStack_12._4_4_ = (Il2CppRGCTXData *)((ulonglong)iVar11 >> 0x20);
        pOStack_9 = (Object *)iVar11;
        func_?();
        pOVar7 = extraout_ECX;
code_?:
        func_?(message,pOVar7);
code_?:
        func_?();
        func_?();
        goto code_?;
      }
      if (message != (Il2CppRGCTXData *)0x0) {
        pOVar6 = (Object *)0x0;
        if (((Object *)message)->klass ==
            (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
          pOVar6 = (Object *)message;
        }
        if (pOVar6 == (Object *)0x0) {
          pOVar6 = (Object *)0x0;
          if ((ObscuredByte__Class *)((Object *)message)->klass ==
              TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte) {
            pOVar6 = (Object *)message;
          }
          if (pOVar6 == (Object *)0x0) {
            pOVar6 = (Object *)0x0;
            if ((ObscuredLong__Class *)((Object *)message)->klass ==
                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong) {
              pOVar6 = (Object *)message;
            }
            if (pOVar6 == (Object *)0x0) goto code_?;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
            }
            pOVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
            if ((((Object *)message)->klass->_0).element_class ==
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_0).element_class) {
              pOVar22 = (ObscuredLong *)func_?(message);
              uStack_12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredLong::ObscuredLong_op_Implicit_1(*pOVar22,(MethodInfo *)0x0);
              pOVar6 = (Object *)func_?(TypeInfo__System__Int64,&uStack_12);
              *unaff_FS_OFFSET = uStack_3;
              return pOVar6;
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
              pOVar23 = (ObscuredByte *)func_?(message);
              uVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredByte::ObscuredByte_op_Implicit_1(*pOVar23,(MethodInfo *)0x0);
              obscuredValue = (Object *)CONCAT13(uVar24,obscuredValue._0_3_);
              pOVar6 = (Object *)func_?(TypeInfo__System__Byte,(int)&obscuredValue + 3);
              *unaff_FS_OFFSET = uStack_3;
              return pOVar6;
            }
          }
        }
        else {
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          }
          pOVar25 = (ObscuredString *)0x0;
          if (((Object *)message)->klass ==
              (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
            pOVar25 = (ObscuredString *)message;
          }
          pOVar7 = (ObscuredLong__Class *)
                    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString;
          if (pOVar25 != (ObscuredString *)0x0) {
            pSVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredString::ObscuredString_op_Implicit_1(pOVar25,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return (Object *)pSVar26;
          }
        }
        goto code_?;
      }
code_?:
      iVar10 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      this = (ObscuredBool__Array__Class *)
             TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
      iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
      if (iVar10 != 0) {
        if (message != (Il2CppRGCTXData *)0x0) {
          pMVar27 = (MonitorData *)
                    func_?(message,
                                    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
          OStack_14.monitor = pMVar27;
          if (pMVar27 != (MonitorData *)0x0) {
            obscuredValue =
                 (Object *)func_?(TypeInfo__System__Int64,*(undefined4 *)(pMVar27 + 0xc));
            iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
            pMStack_15 = (MethodInfo *)(obscuredValue + 2);
            pMVar27 = OStack_14.monitor + 0x10;
            for (message = (Il2CppRGCTXData *)0x0; (int)message < *(int *)(OStack_14.monitor + 0xc);
                message = (Il2CppRGCTXData *)((int)message + 1)) {
              pMVar16 = pMStack_15;
              if (*(Il2CppRGCTXData **)(OStack_14.monitor + 0xc) <= message) goto code_?;
              uVar28 = *(undefined8 *)pMVar27;
              uStack_12._0_4_ = *(Il2CppType ***)(pMVar27 + 8);
              uStack_12._4_4_ = *(Il2CppRGCTXData **)(pMVar27 + 0xc);
              uStack_29 = *(undefined4 *)(pMVar27 + 0x10);
              uStack_30 = *(undefined4 *)(pMVar27 + 0x14);
              uStack_31 = *(undefined4 *)(pMVar27 + 0x18);
              pOStack_9 = *(Object **)(pMVar27 + 0x1c);
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
              }
              value_00.hiddenValue._0_4_ = (Il2CppType **)uStack_12;
              value_00.currentCryptoKey = uVar28;
              value_00.hiddenValue._4_4_ = uStack_12._4_4_;
              value_00.fakeValue._0_4_ = uStack_29;
              value_00.fakeValue._4_4_ = uStack_30;
              value_00._24_4_ = uStack_31;
              value_00._28_4_ = pOStack_9;
              iVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredLong::ObscuredLong_op_Implicit_1(value_00,(MethodInfo *)0x0);
              if (obscuredValue == (Object *)0x0) goto code_?;
              pMVar16 = pMStack_15;
              if ((Il2CppRGCTXData *)obscuredValue[1].monitor <= message) goto code_?;
              pMStack_15->methodPointer = (Il2CppMethodPointer)(int)iVar11;
              pMStack_15->virtualMethodPointer =
                   (Il2CppMethodPointer)(int)((ulonglong)iVar11 >> 0x20);
              pMStack_15 = (MethodInfo *)&pMStack_15->invoker_method;
              pMVar27 = pMVar27 + 0x20;
            }
code_?:
            *unaff_FS_OFFSET = uStack_3;
            return obscuredValue;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    else {
      if (((((Object *)message)->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Object *)message)->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        pOVar6 = (Object *)0x0;
        if ((ObscuredBool__Class *)((Object *)message)->klass ==
            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool) {
          pOVar6 = (Object *)message;
        }
        if (pOVar6 != (Object *)0x0) {
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          }
          pOVar7 = (ObscuredLong__Class *)
                    TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
          if ((((Object *)message)->klass->_0).element_class ==
              (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
            pOVar32 = (ObscuredBool *)func_?(message);
            bVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit_1(*pOVar32,(MethodInfo *)0x0);
            obscuredValue = (Object *)CONCAT13(bVar21,obscuredValue._0_3_);
            pOVar6 = (Object *)func_?(TypeInfo__System__Boolean,(int)&obscuredValue + 3);
            *unaff_FS_OFFSET = uStack_3;
            return pOVar6;
          }
          goto code_?;
        }
        goto code_?;
      }
      pMVar13 = (MethodInfo *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
      OStack_14.monitor = (MonitorData *)pMVar13;
      if (pMVar13 == (MethodInfo *)0x0) goto code_?;
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pMVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pMStack_15 = pMVar13;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth <= (((Object *)message)->klass->_1).typeHierarchyDepth) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Object *)message)->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        iVar10 = func_?(auStack_33);
        message = (Il2CppRGCTXData *)&stack0xffffff9c;
        uStack_12._0_4_ = (Il2CppType **)0x0;
        pMVar16 = *(MethodInfo **)(iVar10 + 4);
        pOVar25 = *(ObscuredString **)(iVar10 + 0xc);
        uVar34 = *(ulonglong *)(iVar10 + 0x10);
        uStack_1 = 1;
        uStack_12._4_4_ = message;
        do {
          bVar21 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                             &stack0xffffff9c,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          if (bVar21 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)message,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,pMVar16);
            *unaff_FS_OFFSET = uStack_3;
            return (Object *)pMVar13;
          }
          obscuredValue = (Object *)uVar34;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value_03 = (ObscuredString *)0x0;
          if (pOVar25 != (ObscuredString *)0x0) {
            if (pOVar25->klass == TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
              value_03 = pOVar25;
            }
            if (value_03 == (ObscuredString *)0x0) goto code_?;
          }
          pSVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredString::ObscuredString_op_Implicit_1(value_03,(MethodInfo *)0x0);
          pOVar25 = (ObscuredString *)
                    ObscuredTypesConverter_CreateUnObscuredValue(obscuredValue,(MethodInfo *)0x0);
          uVar34 = ZEXT48(
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         );
          pMVar13 = (MethodInfo *)OStack_14.monitor;
          pMVar16 = (MethodInfo *)OStack_14.monitor;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)OStack_14.monitor,
                     (Object *)pSVar26,(Object *)pOVar25,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        } while( true );
      }
code_?:
      func_?();
    }
    func_?(message);
    arg0 = mscorlib.dll::System::Object::Object_GetType((Object *)message,(MethodInfo *)0x0);
    pMVar13 = (MethodInfo *)0x0;
    pSVar26 = (String *)func_?(&StringLiteral_Trying_to_to_unobscure_unknown_t);
    message = (Il2CppRGCTXData *)
              mscorlib.dll::System::String::String_Format(pSVar26,(Object *)arg0,pMVar13);
    func_?();
    this = (ObscuredBool__Array__Class *)func_?();
    func_?(this);
    mscorlib.dll::System::Exception::Exception__ctor_1
              ((Exception *)this,(String *)message,(MethodInfo *)0x0);
    func_?(&MethodInfo__ObscuredTypesConverter__CreateUnObscuredValue_System__Object_);
    func_?();
code_?:
    func_?(message,this);
    iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
    pMVar16 = pMStack_15;
  }
  else {
    if (message == (Il2CppRGCTXData *)0x0) goto code_?;
    pMVar27 = (MonitorData *)
              func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    OStack_14.monitor = pMVar27;
    if (pMVar27 == (MonitorData *)0x0) goto code_?;
    pMStack_15 = (MethodInfo *)
                 func_?(TypeInfo__System__Single,*(undefined4 *)(pMVar27 + 0xc));
    message = (Il2CppRGCTXData *)0x0;
    obscuredValue = (Object *)&pMStack_15->klass;
    pMVar27 = OStack_14.monitor + 0x10;
    while( true ) {
      iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
      if (*(int *)(OStack_14.monitor + 0xc) <= (int)message) {
        *unaff_FS_OFFSET = uStack_3;
        return (Object *)pMStack_15;
      }
      pMVar16 = pMStack_15;
      if (*(Il2CppRGCTXData **)(OStack_14.monitor + 0xc) <= message) break;
      uStack_12._4_4_ = *(Il2CppRGCTXData **)(pMVar27 + 0x10);
      uStack_29 = *(undefined4 *)pMVar27;
      uStack_30 = *(undefined4 *)(pMVar27 + 4);
      uStack_31 = *(undefined4 *)(pMVar27 + 8);
      pOStack_9 = *(Object **)(pMVar27 + 0xc);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_01.hiddenValue.b1 = (undefined1)uStack_30;
      value_01.hiddenValue.b2 = uStack_30._1_1_;
      value_01.hiddenValue.b3 = uStack_30._2_1_;
      value_01.hiddenValue.b4 = uStack_30._3_1_;
      value_01.currentCryptoKey = uStack_29;
      value_01.hiddenValueOld = (Byte__Array *)uStack_31;
      value_01.fakeValue = (float)pOStack_9;
      value_01._16_4_ = uStack_12._4_4_;
      uStack_12._4_4_ =
           (Il2CppRGCTXData *)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value_01,(MethodInfo *)0x0);
      iVar11 = CONCAT44(uStack_12._4_4_,pOStack_9);
      if (pMStack_15 == (MethodInfo *)0x0) goto code_?;
      pMVar16 = pMStack_15;
      if ((Il2CppRGCTXData *)pMStack_15->name <= message) break;
      message = (Il2CppRGCTXData *)((int)message + 1);
      obscuredValue->klass = (Object__Class *)uStack_12._4_4_;
      obscuredValue = (Object *)&obscuredValue->monitor;
      pMVar27 = pMVar27 + 0x14;
    }
  }
code_?:
  pMStack_15 = pMVar16;
  uStack_12._4_4_ = (Il2CppRGCTXData *)((ulonglong)iVar11 >> 0x20);
  pOStack_9 = (Object *)iVar11;
  func_?();
code_?:
  func_?(message,obscuredValue);
  pcVar35 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar35)();
  return pOVar6;
}

