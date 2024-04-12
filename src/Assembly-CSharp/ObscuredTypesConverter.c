
/* Object CreateObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                   (Object *value,MethodInfo *method)

{
  this_00 = (Exception *)value;
  pSStack_1 = (String__StaticFields *)0xffffffff;
  pIStack_2 = (Il2CppRuntimeInterfaceOffsetPair *)&DAT_?;
  ppIStack_3 = (Il2CppClass **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppIStack_3;
  ppIStack_4 = (Il2CppClass **)&stack0xffffff4c;
  ppIVar5 = (Il2CppClass **)&stack0xffffff4c;
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
    ppIVar5 = ppIStack_4;
  }
  ppIStack_4 = ppIVar5;
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
      AStack_12 = (ACTkByte4)pOVar10->currentCryptoKey;
      auStack_13._0_8_ = *(undefined8 *)&pOVar10->hiddenValue;
      auStack_13._8_4_ = *(undefined4 *)&pOVar10->inited;
      pAVar14 = &AStack_12;
      pOVar15 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
      goto code_?;
    }
    goto code_?;
  }
code_?:
  iVar16 = func_?(this_00,TypeInfo__System__Int32);
  message = (Single__Array__Class *)TypeInfo__System__Int32;
  pIVar17 = (Il2CppArrayType *)this_00;
  if (iVar16 != 0) {
    if (this_00 != (Exception *)0x0) {
      pIVar17 = (Il2CppArrayType *)func_?(this_00,TypeInfo__System__Int32);
      value = (Object *)pIVar17;
      if (pIVar17 != (Il2CppArrayType *)0x0) {
        _Stack_18.dummy =
             (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,
                                     pIVar17->lobounds);
        pIVar18 = (Il2CppClass *)0x0;
        value = (Object *)(pIVar17 + 1);
        _Stack_1c.dummy = _Stack_18.dummy;
        while( true ) {
          _Stack_18.array = _Stack_18.array + 1;
          if ((int)pIVar17->lobounds <= (int)pIVar18) break;
          if ((Il2CppClass *)pIVar17->lobounds <= pIVar18) goto code_?;
          auStack_13._8_4_ = ((Il2CppArrayType *)value)->etype;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit
                              ((ObscuredInt *)(auStack_19 + 4),auStack_13._8_4_,(MethodInfo *)0x0);
          if (_Stack_1c.dummy == (ObscuredString *)0x0) goto code_?;
          pIVar20 = (Il2CppGenericInst *)pOVar10->hiddenValue;
          iVar21 = pOVar10->fakeValue;
          pIVar22 = *(Il2CppClass **)&pOVar10->inited;
          if ((_Stack_1c.generic_class)->cached_class <= pIVar18) goto code_?;
          pIVar18 = (Il2CppClass *)((int)&pIVar18->image + 1);
          value = (Object *)&value->monitor;
          (_Stack_18.type)->data = (_union_86)pOVar10->currentCryptoKey;
          ((_Stack_18.generic_class)->context).class_inst = pIVar20;
          ((String__Fields *)&((_Stack_18.generic_class)->context).method_inst)->_stringLength =
               iVar21;
          (_Stack_18.generic_class)->cached_class = pIVar22;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
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
        pfVar23 = (float *)func_?(this_00);
        pOVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit
                            ((ObscuredFloat *)(auStack_25 + 0xc),*pfVar23,(MethodInfo *)0x0);
        auStack_19._0_4_ = pOVar24->currentCryptoKey;
        auStack_19._4_4_ = pOVar24->hiddenValue;
        pBStack_26 = pOVar24->hiddenValueOld;
        fStack_27 = pOVar24->fakeValue;
        uStack_28._0_1_ = pOVar24->inited;
        uStack_28._1_3_ = *(undefined3 *)&pOVar24->field_0x11;
        pOVar7 = (Object *)
                  func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,
                                  auStack_19);
        *unaff_FS_OFFSET = ppIStack_3;
        return pOVar7;
      }
      goto code_?;
    }
  }
  iVar16 = func_?(this_00,TypeInfo__System__Single);
  message = TypeInfo__System__Single;
  if (iVar16 == 0) {
    if (this_00 == (Exception *)0x0) {
code_?:
      iVar16 = func_?(this_00,TypeInfo__System__Boolean);
      message = (Single__Array__Class *)TypeInfo__System__Boolean;
      if (iVar16 != 0) {
        if (this_00 == (Exception *)0x0) goto code_?;
        pIVar17 = (Il2CppArrayType *)func_?(this_00,TypeInfo__System__Boolean);
        value = (Object *)pIVar17;
        if (pIVar17 != (Il2CppArrayType *)0x0) {
          _Stack_18.dummy =
               (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,
                                       pIVar17->lobounds);
          pIVar18 = (Il2CppClass *)0x0;
          _Stack_1c.array = _Stack_18.array + 1;
          while( true ) {
            if ((int)pIVar17->lobounds <= (int)pIVar18) {
              *unaff_FS_OFFSET = ppIStack_3;
              return _Stack_18.dummy;
            }
            if ((Il2CppClass *)pIVar17->lobounds <= pIVar18) break;
            value = (Object *)
                    CONCAT13(*(uint8_t *)
                              ((int)&(pIVar17 + 1)[-1].etype + (int)&(pIVar18->byval_arg).data),
                             value._0_3_);
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            }
            pOVar29 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredBool::ObscuredBool_op_Implicit
                                ((ObscuredBool *)auStack_13,value._3_1_ != '\0',(MethodInfo *)0x0);
            if (_Stack_18.dummy == (ObscuredString *)0x0) goto code_?;
            iVar21 = *(int32_t *)&pOVar29->fakeValue;
            if ((_Stack_18.generic_class)->cached_class <= pIVar18) break;
            pIVar18 = (Il2CppClass *)((int)&pIVar18->image + 1);
            *_Stack_1c.type = *(Il2CppType *)pOVar29;
            ((String__Fields *)&((_Stack_1c.generic_class)->context).method_inst)->_stringLength =
                 iVar21;
            _Stack_1c.dummy = &(_Stack_1c.generic_class)->cached_class;
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
              iVar16 = func_?();
              pOVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredLong::ObscuredLong_op_Implicit
                                  ((ObscuredLong *)auStack_25,(ulonglong)*(uint *)(iVar16 + 4),
                                   (MethodInfo *)this_00);
              uStack_31 = (undefined4)pOVar30->currentCryptoKey;
              uStack_32 = *(undefined4 *)((int)&pOVar30->currentCryptoKey + 4);
              uStack_33 = (undefined4)pOVar30->hiddenValue;
              auStack_19._0_4_ = *(int32_t *)((int)&pOVar30->hiddenValue + 4);
              auStack_19._4_4_ = *(undefined4 *)&pOVar30->fakeValue;
              pBStack_26 = *(Byte__Array **)((int)&pOVar30->fakeValue + 4);
              fStack_27 = *(float *)&pOVar30->inited;
              uStack_28._0_1_ = pOVar30->field_0x1c;
              uStack_28._1_3_ = *(undefined3 *)&pOVar30->field_0x1d;
              pOVar7 = (Object *)
                        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong,
                                        &uStack_31);
              *unaff_FS_OFFSET = ppIStack_3;
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
              puVar34 = (uint8_t *)func_?(this_00);
              value = (Object *)
                      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredByte::ObscuredByte_op_Implicit(*puVar34,(MethodInfo *)0x0);
              pOVar7 = (Object *)
                        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte,
                                        &value);
              *unaff_FS_OFFSET = ppIStack_3;
              return pOVar7;
            }
          }
        }
        else {
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString);
          }
          pSVar35 = (String *)0x0;
          if ((String__Class *)((Object *)this_00)->klass == TypeInfo__System__String) {
            pSVar35 = (String *)this_00;
          }
          pSVar8 = TypeInfo__System__String;
          if (pSVar35 != (String *)0x0) {
            pOVar36 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredString::ObscuredString_op_Implicit(pSVar35,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = ppIStack_3;
            return (Object *)pOVar36;
          }
        }
code_?:
        func_?(this_00,pSVar8);
        pIVar17 = (Il2CppArrayType *)this_00;
code_?:
        uVar37 = func_?();
        func_?(uVar37);
        this_00 = (Exception *)pIVar17;
        goto code_?;
      }
code_?:
      iVar16 = func_?(this_00,TypeInfo__System__Int64);
      message = (Single__Array__Class *)TypeInfo__System__Int64;
      if (iVar16 != 0) {
        if (this_00 != (Exception *)0x0) {
          _Stack_1c.dummy = (void *)func_?(this_00,TypeInfo__System__Int64);
          if (_Stack_1c.dummy != (ObscuredString *)0x0) {
            _Stack_18.dummy =
                 (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong
                                         ,(_Stack_1c.generic_class)->cached_class);
            pIVar18 = (Il2CppClass *)0x0;
            value = (Object *)(_Stack_18.array + 1);
            pIVar17 = _Stack_1c.array + 1;
            while( true ) {
              if ((int)(_Stack_1c.generic_class)->cached_class <= (int)pIVar18) {
                *unaff_FS_OFFSET = ppIStack_3;
                return _Stack_18.dummy;
              }
              if ((_Stack_1c.generic_class)->cached_class <= pIVar18) break;
              auStack_13._8_4_ = pIVar17->etype;
              pDStack_38 = *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             **)&pIVar17->rank;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
              }
              pOVar30 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredLong::ObscuredLong_op_Implicit
                                  ((ObscuredLong *)&stack0xffffff58,ZEXT48(pDStack_38),unaff_EDI);
              if (_Stack_18.dummy == (ObscuredString *)0x0) goto code_?;
              pMVar39 = *(MonitorData **)((int)&pOVar30->currentCryptoKey + 4);
              pOVar40 = *(Object__Class **)&pOVar30->hiddenValue;
              pMVar41 = *(MonitorData **)((int)&pOVar30->hiddenValue + 4);
              pOVar42 = *(Object__Class **)&pOVar30->fakeValue;
              pMVar43 = *(MonitorData **)((int)&pOVar30->fakeValue + 4);
              pOVar44 = *(Object__Class **)&pOVar30->inited;
              pMVar45 = *(MonitorData **)&pOVar30->field_0x1c;
              if ((_Stack_18.generic_class)->cached_class <= pIVar18) break;
              pIVar18 = (Il2CppClass *)((int)&pIVar18->image + 1);
              pIVar17 = (Il2CppArrayType *)&pIVar17->sizes;
              value->klass = *(Object__Class **)&pOVar30->currentCryptoKey;
              value->monitor = pMVar39;
              value[1].klass = pOVar40;
              value[1].monitor = pMVar41;
              value[2].klass = pOVar42;
              value[2].monitor = pMVar43;
              value[3].klass = pOVar44;
              value[3].monitor = pMVar45;
              value = value + 4;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    else {
      if (((((Object *)this_00)->klass->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Object *)this_00)->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
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
            pbVar46 = (bool *)func_?(this_00);
            pOVar29 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredBool::ObscuredBool_op_Implicit
                                ((ObscuredBool *)(auStack_11 + 4),*pbVar46,(MethodInfo *)0x0);
            auStack_13[0] = pOVar29->currentCryptoKey;
            auStack_13._1_3_ = *(undefined3 *)&pOVar29->field_0x1;
            auStack_13._4_4_ = pOVar29->hiddenValue;
            auStack_13._8_4_ = *(undefined4 *)&pOVar29->fakeValue;
            pAVar14 = (ACTkByte4 *)auStack_13;
            pOVar15 = (ObscuredInt__Class *)
                      TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
code_?:
            pOVar7 = (Object *)func_?(pOVar15,pAVar14);
            *unaff_FS_OFFSET = ppIStack_3;
            return pOVar7;
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
      pOVar40 = ((Object *)this_00)->klass;
      pDStack_38 = this;
      if (((((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment <= (pOVar40->_1).naturalAligment) &&
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pOVar40->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
          ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= (pOVar40->_1).naturalAligment)) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar40->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        puVar47 = (undefined4 *)func_?(&uStack_33);
        auStack_13._0_8_ = auStack_13._0_8_ & 0xffffffff;
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)*puVar47;
        DStack_6._version = puVar47[1];
        DStack_6._index = puVar47[2];
        DStack_6._current.key = (Object *)puVar47[3];
        DStack_6._16_8_ = *(Il2CppType *)(puVar47 + 4);
        pSStack_1 = (String__StaticFields *)0x1;
        pOVar7 = value;
        auStack_13._8_4_ = &DStack_6;
        do {
          bVar48 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_6,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             );
          this_00 = (Exception *)DStack_6._current.key;
          if (bVar48 == 0) {
            pSStack_1 = (String__StaticFields *)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,in_stack_49);
            *unaff_FS_OFFSET = ppIStack_3;
            return pOVar7;
          }
          _Stack_18.__klassIndex = (TypeDefinitionIndex)DStack_6._current.value;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pIVar17 = (Il2CppArrayType *)0x0;
          if (this_00 != (Exception *)0x0) {
            if ((String__Class *)((Object *)this_00)->klass == TypeInfo__System__String) {
              pIVar17 = (Il2CppArrayType *)this_00;
            }
            pSVar8 = TypeInfo__System__String;
            if (pIVar17 == (Il2CppArrayType *)0x0) goto code_?;
          }
          _Stack_1c.array =
               (Il2CppArrayType *)
               Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredString::
               ObscuredString_op_Implicit(pIVar17,(MethodInfo *)0x0);
          value_00 = ObscuredTypesConverter_CreateObscuredValue
                               ((Object *)_Stack_18.typeHandle,(MethodInfo *)0x0);
          pOVar7 = value;
          pIVar17 = (Il2CppArrayType *)0x0;
          if (value == (Object *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)value,
                     (Object *)_Stack_1c.typeHandle,value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        } while( true );
      }
code_?:
      func_?();
    }
    if (this_00 == (Exception *)0x0) {
      pOVar7 = (Object *)func_?(&::StringLiteral__);
    }
    else {
      func_?(this_00);
      pTVar50 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
      func_?(pTVar50);
      pOVar7 = (Object *)func_?(8,pTVar50);
    }
    method_00 = (MethodInfo *)0x0;
    pSVar35 = (String *)func_?(&StringLiteral_Trying_to_write___0___of_unsuppo);
    message = (Single__Array__Class *)
              mscorlib.dll::System::String::String_Format_1
                        (pSVar35,(Object *)this_00,pOVar7,method_00);
    func_?();
    this_00 = (Exception *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,(String *)message,(MethodInfo *)0x0);
    func_?(&MethodInfo__ObscuredTypesConverter__CreateObscuredValue_System__Object_);
    func_?();
  }
  else {
    if (this_00 == (Exception *)0x0) goto code_?;
    pIVar17 = (Il2CppArrayType *)func_?(this_00,TypeInfo__System__Single);
    value = (Object *)pIVar17;
    if (pIVar17 != (Il2CppArrayType *)0x0) {
      _Stack_1c.dummy =
           (void *)func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat,
                                   pIVar17->lobounds);
      pIVar18 = (Il2CppClass *)0x0;
      value = (Object *)(_Stack_1c.__klassIndex + 0x18);
      _Stack_18.array = pIVar17 + 1;
      while( true ) {
        if ((int)pIVar17->lobounds <= (int)pIVar18) break;
        if ((Il2CppClass *)pIVar17->lobounds <= pIVar18) goto code_?;
        auStack_13._8_4_ = (_Stack_18.type)->data;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        pOVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit
                            ((ObscuredFloat *)auStack_19,(float)auStack_13._8_4_,(MethodInfo *)0x0);
        if (_Stack_1c.dummy == (ObscuredString *)0x0) goto code_?;
        AVar51 = pOVar24->hiddenValue;
        pOVar42 = (Object__Class *)pOVar24->hiddenValueOld;
        pMVar39 = (MonitorData *)pOVar24->fakeValue;
        pOVar40 = *(Object__Class **)&pOVar24->inited;
        if ((_Stack_1c.generic_class)->cached_class <= pIVar18) goto code_?;
        value[-1].klass = (Object__Class *)pOVar24->currentCryptoKey;
        value[-1].monitor = (MonitorData *)AVar51;
        value->klass = pOVar42;
        value->monitor = pMVar39;
        value[1].klass = pOVar40;
        func_?();
        pIVar18 = (Il2CppClass *)((int)&pIVar18->image + 1);
        _Stack_18.dummy = &(_Stack_18.generic_class)->context;
        value = (Object *)&value[2].monitor;
      }
code_?:
      *unaff_FS_OFFSET = ppIStack_3;
      return _Stack_1c.dummy;
    }
  }
code_?:
  func_?(this_00,message);
code_?:
  func_?();
  pcVar52 = (code *)swi(3);
  pOVar7 = (Object *)(*pcVar52)();
  return pOVar7;
}


/* Object CreateUnObscuredValue(Object) */

Object * Assembly-CSharp.dll::ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                   (Object *obscuredValue,MethodInfo *method)

{
  message = (Object__Class *)obscuredValue;
  ppIStack_1 = (Il2CppClass **)0xffffffff;
  pIStack_2 = (Il2CppRGCTXData *)&DAT_?;
  pOStack_3 = (Object__StaticFields *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pIStack_4 = (Il2CppRuntimeInterfaceOffsetPair *)&stack0xffffff88;
  pIVar5 = (Il2CppRuntimeInterfaceOffsetPair *)&stack0xffffff88;
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
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  if (message != (Object__Class *)0x0) {
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
      pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)func_?(TypeInfo__System__Int32,&obscuredValue);
      goto code_?;
    }
    goto code_?;
  }
code_?:
  iVar10 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
  if (iVar10 != 0) {
    obscuredValue = (Object *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    if (message != (Object__Class *)0x0) {
      unaff_EDI = (Object__Class *)
                  func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt
                                 );
      if (unaff_EDI != (Object__Class *)0x0) {
        obscuredValue = (Object *)func_?(TypeInfo__System__Int32,(unaff_EDI->_0).namespaze)
        ;
        message = (Object__Class *)0x0;
        pDStack_13 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)(obscuredValue + 2);
        pOVar14 = unaff_EDI;
        while( true ) {
          iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
          pOStack_15 = (Object__Class *)&(pOVar14->_0).byval_arg;
          if ((int)(unaff_EDI->_0).namespaze <= (int)message) break;
          if ((Object__Class *)(unaff_EDI->_0).namespaze <= message) goto code_?;
          pIStack_16 = (((Il2CppType *)pOStack_15)->data).dummy;
          pIStack_17 = *(Il2CppClass **)&(pOVar14->_0).byval_arg.attrs;
          pIStack_18 = (pOVar14->_0).this_arg.data.dummy;
          pIStack_19 = *(Il2CppClass **)&(pOVar14->_0).this_arg.attrs;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          value.hiddenValue = (int32_t)pIStack_17;
          value.currentCryptoKey = (int32_t)pIStack_16;
          value.fakeValue = (int32_t)pIStack_18;
          value._12_4_ = pIStack_19;
          pMVar20 = (MethodInfo *)
                    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
          iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
          if (obscuredValue == (Object *)0x0) goto code_?;
          if ((Object__Class *)obscuredValue[1].monitor <= message) goto code_?;
          message = (Object__Class *)((int)&(message->_0).image + 1);
          *(MethodInfo **)pDStack_13 = pMVar20;
          pDStack_13 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)((int)pDStack_13 + 4);
          pOVar14 = pOStack_15;
        }
        goto code_?;
      }
      func_?(message,obscuredValue);
      pOVar7 = extraout_ECX;
      goto code_?;
    }
    goto code_?;
  }
  if (message != (Object__Class *)0x0) {
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
        pOVar21 = (ObscuredFloat *)func_?(message);
        obscuredValue =
             (Object *)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(*pOVar21,(MethodInfo *)0x0);
        pOVar6 = (Object *)func_?(TypeInfo__System__Single,&obscuredValue);
        *unaff_FS_OFFSET = pOStack_3;
        return pOVar6;
      }
      goto code_?;
    }
  }
  iVar10 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  this_00 = (ObscuredBool__Array__Class *)
            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
  iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
  if (iVar10 == 0) {
    if (message == (Object__Class *)0x0) {
code_?:
      iVar10 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      this_00 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
      iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
      if (iVar10 != 0) {
        unaff_EDI = (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
        if (message == (Object__Class *)0x0) goto code_?;
        obscuredValue =
             (Object *)
             func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        if (obscuredValue != (Object *)0x0) {
          pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)func_?(TypeInfo__System__Boolean,obscuredValue[1].monitor);
          unaff_EDI = (Object__Class *)(obscuredValue + 2);
          for (message = (Object__Class *)0x0; iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9),
              (int)message < (int)obscuredValue[1].monitor;
              message = (Object__Class *)((int)&(message->_0).image + 1)) {
            if ((Object__Class *)obscuredValue[1].monitor <= message) goto code_?;
            uStack_12._4_4_ = (Object__Class *)(unaff_EDI->_0).name;
            pPStack_22 = (PropertyInfo *)(unaff_EDI->_0).image;
            pDStack_13 = (unaff_EDI->_0).gc_desc;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            }
            value_02._8_4_ = uStack_12._4_4_;
            value_02._0_8_ = _pPStack_24;
            bVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit_1(value_02,(MethodInfo *)0x0);
            iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
            if (pDStack_9 ==
                (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
            if (*(Object__Class **)((int)pDStack_9 + 0xc) <= message) goto code_?;
            *(bool *)((int)&(message->_0).byval_arg.data + (int)pDStack_9) = bVar23;
            unaff_EDI = (Object__Class *)&(unaff_EDI->_0).namespaze;
          }
code_?:
          *unaff_FS_OFFSET = pOStack_3;
          return (Object *)pDStack_9;
        }
        goto code_?;
      }
      if (message != (Object__Class *)0x0) {
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
              pOVar24 = (ObscuredLong *)func_?(message);
              uStack_12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredLong::ObscuredLong_op_Implicit_1(*pOVar24,(MethodInfo *)0x0);
              pOVar6 = (Object *)func_?(TypeInfo__System__Int64,&uStack_12);
              *unaff_FS_OFFSET = pOStack_3;
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
              pOVar25 = (ObscuredByte *)func_?(message);
              uVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredByte::ObscuredByte_op_Implicit_1(*pOVar25,(MethodInfo *)0x0);
              obscuredValue = (Object *)CONCAT13(uVar26,obscuredValue._0_3_);
              pOVar6 = (Object *)func_?(TypeInfo__System__Byte,(int)&obscuredValue + 3);
              *unaff_FS_OFFSET = pOStack_3;
              return pOVar6;
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
            *unaff_FS_OFFSET = pOStack_3;
            return (Object *)pSVar27;
          }
        }
code_?:
        func_?(message,pOVar7);
        iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
code_?:
        uStack_12._4_4_ = (Object__Class *)((ulonglong)iVar11 >> 0x20);
        pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)iVar11;
        func_?();
        pOVar28 = extraout_ECX_00;
code_?:
        uVar29 = func_?(unaff_EDI,pOVar28);
        func_?(uVar29);
        goto code_?;
      }
code_?:
      iVar10 = func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
      this_00 = (ObscuredBool__Array__Class *)
                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
      iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
      if (iVar10 != 0) {
        unaff_EDI = (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong;
        if (message != (Object__Class *)0x0) {
          ppMVar30 = (MethodInfo **)
                     func_?(message,
                                     TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
          pDStack_13 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)ppMVar30;
          if (ppMVar30 != (MethodInfo **)0x0) {
            obscuredValue = (Object *)func_?(TypeInfo__System__Int64,ppMVar30[3]);
            iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
            pOStack_15 = (Object__Class *)(obscuredValue + 2);
            unaff_EDI = (Object__Class *)((int)pDStack_13 + 0x10);
            for (message = (Object__Class *)0x0;
                pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                              *)iVar11, (int)message < (int)*(MethodInfo **)((int)pDStack_13 + 0xc);
                message = (Object__Class *)((int)&(message->_0).image + 1)) {
              if (*(Object__Class **)((int)pDStack_13 + 0xc) <= message) goto code_?;
              pIStack_31 = (unaff_EDI->_0).image;
              pIStack_32 = (unaff_EDI->_0).gc_desc;
              uStack_12._0_4_ = (Il2CppClass *)(unaff_EDI->_0).name;
              uStack_12._4_4_ = (Object__Class *)(unaff_EDI->_0).namespaze;
              pIStack_16 = (unaff_EDI->_0).byval_arg.data.dummy;
              pIStack_17 = *(Il2CppClass **)&(unaff_EDI->_0).byval_arg.attrs;
              pIStack_18 = (unaff_EDI->_0).this_arg.data.dummy;
              pIStack_19 = *(Il2CppClass **)&(unaff_EDI->_0).this_arg.attrs;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredLong);
              }
              value_00.currentCryptoKey._4_4_ = pIStack_32;
              value_00.currentCryptoKey._0_4_ = pIStack_31;
              value_00.hiddenValue._0_4_ = (Il2CppClass *)uStack_12;
              value_00.hiddenValue._4_4_ = (FieldInfo *)uStack_12._4_4_;
              value_00.fakeValue._0_4_ = pIStack_16;
              value_00.fakeValue._4_4_ = pIStack_17;
              value_00._24_4_ = pIStack_18;
              value_00._28_4_ = pIStack_19;
              iVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredLong::ObscuredLong_op_Implicit_1(value_00,(MethodInfo *)0x0);
              if (obscuredValue == (Object *)0x0) goto code_?;
              if ((Object__Class *)obscuredValue[1].monitor <= message) goto code_?;
              *(int64_t *)&pOStack_15->_0 = iVar11;
              pOStack_15 = (Object__Class *)((_union_86 *)&pOStack_15->_0 + 2);
              unaff_EDI = (Object__Class *)&(unaff_EDI->_0).element_class;
            }
code_?:
            *unaff_FS_OFFSET = pOStack_3;
            return obscuredValue;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    else {
      unaff_EDI = ((Object *)message)->klass;
      if (((unaff_EDI->_1).naturalAligment <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (unaff_EDI->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] !=
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
            pOVar33 = (ObscuredBool *)func_?(message);
            bVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit_1(*pOVar33,(MethodInfo *)0x0);
            obscuredValue = (Object *)CONCAT13(bVar23,obscuredValue._0_3_);
            pOVar6 = (Object *)func_?(TypeInfo__System__Boolean,(int)&obscuredValue + 3);
            *unaff_FS_OFFSET = pOStack_3;
            return pOVar6;
          }
          goto code_?;
        }
        goto code_?;
      }
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pDStack_13 = this;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pDStack_9 = this;
      if (((((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment <= (((Object *)message)->klass->_1).naturalAligment) &&
           ((Dictionary_2_System_Object_System_Object___Class *)
            (((Object *)message)->klass->_1).typeHierarchy
            [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment - 1] ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
          ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= (((Object *)message)->klass->_1).naturalAligment)) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Object *)message)->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        iVar10 = func_?(auStack_34);
        message = (Object__Class *)&stack0xffffff94;
        uStack_12._0_4_ = (Il2CppClass *)0x0;
        uVar35 = *(undefined8 *)(iVar10 + 0x10);
        ppIStack_1 = (Il2CppClass **)0x1;
        unaff_EDI = *(Object__Class **)(iVar10 + 0xc);
        uStack_12._4_4_ = message;
        do {
          bVar23 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                             &stack0xffffff94,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                            );
          if (bVar23 == 0) {
            ppIStack_1 = (Il2CppClass **)0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)message,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       ,(MethodInfo *)unaff_EDI);
            *unaff_FS_OFFSET = pOStack_3;
            return (Object *)this;
          }
          _Stack_5c.__klassIndex = (TypeDefinitionIndex)uVar35;
          obscuredValue = (Object *)_Stack_5c.typeHandle;
          pOVar14 = unaff_EDI;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value_03 = (Object__Class *)0x0;
          if (unaff_EDI != (Object__Class *)0x0) {
            if ((ObscuredString__Class *)(unaff_EDI->_0).image ==
                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString) {
              value_03 = unaff_EDI;
            }
            pOVar28 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredString;
            if (value_03 == (Object__Class *)0x0) goto code_?;
          }
          pOStack_15 = (Object__Class *)
                       Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredString::ObscuredString_op_Implicit_1
                                 ((ObscuredString *)value_03,(MethodInfo *)0x0);
          pOVar6 = ObscuredTypesConverter_CreateUnObscuredValue(obscuredValue,(MethodInfo *)0x0);
          iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
          this = pDStack_13;
          unaff_EDI = (Object__Class *)0x0;
          if (pDStack_13 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)pDStack_13,(Object *)pOStack_15,
                     pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          unaff_EDI = pOVar14;
        } while( true );
      }
code_?:
      func_?();
    }
    func_?(message);
    arg0 = mscorlib.dll::System::Object::Object_GetType((Object *)message,(MethodInfo *)0x0);
    pMVar20 = (MethodInfo *)0x0;
    pSVar27 = (String *)func_?(&StringLiteral_Trying_to_to_unobscure_unknown_t);
    message = (Object__Class *)
              mscorlib.dll::System::String::String_Format(pSVar27,(Object *)arg0,pMVar20);
    func_?();
    this_00 = (ObscuredBool__Array__Class *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1
              ((Exception *)this_00,(String *)message,(MethodInfo *)0x0);
    func_?(&MethodInfo__ObscuredTypesConverter__CreateUnObscuredValue_System__Object_);
    func_?();
  }
  else {
    unaff_EDI = (Object__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    if (message == (Object__Class *)0x0) goto code_?;
    ppMVar30 = (MethodInfo **)
               func_?(message,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat)
    ;
    pDStack_13 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)ppMVar30;
    if (ppMVar30 != (MethodInfo **)0x0) {
      pOStack_15 = (Object__Class *)func_?(TypeInfo__System__Single,ppMVar30[3]);
      message = (Object__Class *)0x0;
      obscuredValue = (Object *)((_union_86 *)&pOStack_15->_0 + 4);
      unaff_EDI = (Object__Class *)((int)pDStack_13 + 0x10);
      while( true ) {
        iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
        if ((int)*(MethodInfo **)((int)pDStack_13 + 0xc) <= (int)message) {
          *unaff_FS_OFFSET = pOStack_3;
          return (Object *)pOStack_15;
        }
        if (*(Object__Class **)((int)pDStack_13 + 0xc) <= message) break;
        uStack_12._4_4_ = (unaff_EDI->_0).byval_arg.data.dummy;
        pIStack_16 = (Il2CppClass *)(unaff_EDI->_0).image;
        pIStack_17 = (unaff_EDI->_0).gc_desc;
        pIStack_18 = (Il2CppClass *)(unaff_EDI->_0).name;
        pIStack_19 = (Il2CppClass *)(unaff_EDI->_0).namespaze;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        value_01.hiddenValue = (ACTkByte4)pIStack_17;
        value_01.currentCryptoKey = (int32_t)pIStack_16;
        value_01.hiddenValueOld = (Byte__Array *)pIStack_18;
        value_01.fakeValue = (float)pIStack_19;
        value_01._16_4_ = uStack_12._4_4_;
        uStack_12._4_4_ =
             (Object__Class *)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value_01,(MethodInfo *)0x0);
        iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
        if (pOStack_15 == (Object__Class *)0x0) goto code_?;
        if (((_union_86 *)&pOStack_15->_0)[3].dummy <= message) break;
        message = (Object__Class *)((int)&(message->_0).image + 1);
        obscuredValue->klass = uStack_12._4_4_;
        obscuredValue = (Object *)&obscuredValue->monitor;
        unaff_EDI = (Object__Class *)&(unaff_EDI->_0).byval_arg.attrs;
      }
      goto code_?;
    }
  }
code_?:
  func_?(message,this_00);
  iVar11 = CONCAT44(uStack_12._4_4_,pDStack_9);
code_?:
  uStack_12._4_4_ = (Object__Class *)((ulonglong)iVar11 >> 0x20);
  pDStack_9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)iVar11;
  func_?();
  pcVar36 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar36)();
  return pOVar6;
}

