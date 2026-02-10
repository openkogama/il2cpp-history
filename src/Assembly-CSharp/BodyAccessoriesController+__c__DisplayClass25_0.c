
/* Void <RefreshAccessories>b__0(AvatarAccessory) */

void Assembly-CSharp.dll::BodyAccessoriesController+<>c__DisplayClass25_0::
     BodyAccessoriesController_c_DisplayClass25_0__RefreshAccessories_b__0
               (BodyAccessoriesController_c_DisplayClass25_0 *this,AvatarAccessory *accessory,
               MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (this_00 == (BodyAccessoriesController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  slot = (this->fields).slot;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__AvatarAccessoryData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_load_accessory_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_d);
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (accessory != (AvatarAccessory *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((accessory->fields)._._._._.m_CachedPtr != (void *)0x0) {
      uStack_2 = (AvatarAccessory *)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      pDVar3 = (this_00->fields).accessoryData;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      RStack_4._pointer._value =
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0;
      RStack_4._length = 0;
      RStack_4._12_4_ = 0;
      pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                          (slot,&RStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar3,(Object *)pSVar5,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar3->klass->_1).naturalAligment < bVar6) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar3->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar3);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        auStackX_10[0] = 4;
        pEVar7 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10);
        pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2
                            (pEVar7,StringLiteral_d,(MethodInfo *)0x0);
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pSVar8 = (String *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar3,(Object *)pSVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          pSVar5 = (String *)0x0;
          if (pSVar8 != (String *)0x0) {
            if (pSVar8->klass == pSRam0000000182dc2f60) {
              pSVar5 = pSVar8;
            }
            if (pSVar5 == (String *)0x0) {
              FUN_?(pSVar8,pSRam0000000182dc2f60);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          pSVar8 = (accessory->fields)._AssetPath_k__BackingField;
          if (pSVar8 != (String *)0x0) {
            bVar9 = mscorlib.dll::System::String::String_Contains(pSVar8,pSVar5,(MethodInfo *)0x0)
            ;
            if (bVar9 == 0) {
Assembly_CSharp_dll_BodyAccessoriesController_BodyAccessoriesController_UpdateAccessoryVisibility:
              bVar9 = (this_00->fields).accessoriesVisible;
              auStackX_10[0] = CONCAT11(auStackX_10[0]._1_1_,bVar9);
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                              ,bVar9,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)(this_00->fields).accessoryMap;
              if ((pDVar10 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)0x0) ||
                 (pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                      (pDVar10,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Values__
                                      ),
                 pDVar11 ==
                 (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
                FUN_?();
code_?:
                FUN_?();
code_?:
                FUN_?();
                uVar12 = RStack_4._length;
code_?:
                RStack_4._length = uVar12;
                FUN_?();
code_?:
                FUN_?();
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                          ((MethodInfo *)0x0);
              }
              else {
                pDVar10 = (pDVar11->fields)._dictionary;
                if (iRam_? != 0) {
                  uVar12 = (uint)((ulonglong)&pDStackY_40 >> 0xc);
                  puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar14 = *puVar13;
                    LOCK();
                    uVar15 = *puVar13;
                    if (uVar14 == uVar15) {
                      *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar14 != uVar15);
                }
                if (pDVar10 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)0x0) {
                  pDStackY_40 = pDVar10;
                  FUN_?();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                RStack_4._12_4_ = (pDVar10->fields)._version;
                RStack_4._length = 0;
                uStack_2 = (AvatarAccessory *)0x0;
                pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)0x0;
                RStack_4._pointer._value = pDVar10;
                while (RStack_4._pointer._value !=
                       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0) {
                  if (RStack_4._12_4_ != *(int32_t *)((longlong)RStack_4._pointer._value + 0x2c))
                  goto code_?;
                  do {
                    if (RStack_4._pointer._value ==
                        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) goto code_?;
                    if ((uint)*(int32_t *)((longlong)RStack_4._pointer._value + 0x20) <=
                        (uint)RStack_4._length) {
                      (this_00->fields).accessoriesVisible = bVar9;
                      return;
                    }
                    pDVar16 = *(Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                               **)((longlong)RStack_4._pointer._value + 0x18);
                    lVar17 = (longlong)RStack_4._length;
                    uVar12 = RStack_4._length + 1;
                    if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                   *)0x0) goto code_?;
                    bVar18 = (uint)pDVar16->max_length <= (uint)RStack_4._length;
                    RStack_4._length = uVar12;
                    if (bVar18) goto code_?;
                  } while ((&pDVar16->vector[0].hashCode)[lVar17 * 6] < 0);
                  uStack_2 = *(AvatarAccessory **)
                               ((longlong)&pDVar16->vector[0].key + lVar17 * 0x18 + 8);
                  func_?(&uStack_2);
                  if (uStack_2 == (AvatarAccessory *)0x0) goto code_?;
                  AvatarAccessory::AvatarAccessory_set_Visible(uStack_2,bVar9,(MethodInfo *)0x0);
                }
              }
              FUN_?();
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            auStackX_10[0] = 3;
            pEVar7 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10);
            pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2
                                (pEVar7,StringLiteral_d,(MethodInfo *)0x0);
            pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar3,(Object *)pSVar5,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pOVar19 != (Object *)0x0) {
              if ((pOVar19->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar19,lRam_?);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              offset = *(float *)&pOVar19[1].klass;
              auStackX_10[0] = 5;
              pEVar7 = (Enum *)FUN_?(TypeInfo__MV__Common__AvatarAccessoryData,auStackX_10)
              ;
              pSVar5 = mscorlib.dll::System::Enum::Enum_ToString_2
                                  (pEVar7,StringLiteral_d,(MethodInfo *)0x0);
              pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  (pDVar3,(Object *)pSVar5,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
              if (pOVar19 != (Object *)0x0) {
                if ((pOVar19->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar19,lRam_?);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                bVar9 = BodyAccessoriesController::BodyAccessoriesController_AttachAccessory
                                  (this_00,accessory,slot,offset,*(float *)&pOVar19[1].klass,
                                   (MethodInfo *)0x0);
                if (((bVar9 != 0) &&
                    (bVar9 = BodyAccessoriesController::
                             BodyAccessoriesController_AccessoryShouldBeSelecable
                                       (this_00,accessory,(MethodInfo *)0x0), bVar9 != 0)) &&
                   ((this_00->fields).accessoryMoveOverride != 0)) {
                  BodyAccessoriesController::BodyAccessoriesController_MakeAccessorySelectable
                            (this_00,accessory,slot,(MethodInfo *)0x0);
                }
                goto 
                Assembly_CSharp_dll_BodyAccessoriesController_BodyAccessoriesController_UpdateAccessoryVisibility
                ;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = StringLiteral_Failed_to_load_accessory_;
  if (cRam_? == '\0') {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?();
  }
  pIVar20 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar20 == (ILogger_1 *)0x0) {
    pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)&UNK_?;
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = (AvatarAccessory *)pSVar5;
  pDStackY_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)&UNK_?;
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar20,0);
  return;
}

