
/* ThrustersColor Deserialize(Dictionary`2[System.Object,System.Object]) */

ThrustersColor *
Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
ThrustersColorSerializer_Deserialize
          (ThrustersColor *__return_storage_ptr__,Dictionary_2_System_Object_System_Object_ *dict,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HoverCraftVisualization);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorAlphaKey);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorColorKey);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__B);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__G);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__colors);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__alpha_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__time);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__R);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__a);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__alphas);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTStack_1 = (ThrustersColorColorKey__Array *)0x0;
  pTStack_2 = (ThrustersColorColorKey__Array *)0x0;
  __return_storage_ptr__->colors = (ThrustersColorColorKey__Array *)0x0;
  __return_storage_ptr__->alphas = (ThrustersColorAlphaKey__Array *)0x0;
  pSVar3 = ::StringLiteral__;
  uVar4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_thrustersColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
  if (dict == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (dict,(Object *)pSVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  pSVar3 = StringLiteral__colors;
  if (pOVar5 != (Object *)0x0) {
    if ((pOVar5->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
      if (*(char *)&pOVar5[1].klass == '\0') {
        if (*(int *)&(TypeInfo__HoverCraftVisualization->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__HoverCraftVisualization);
        }
        pTVar6 = (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).alphas;
        __return_storage_ptr__->colors =
             (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).colors;
        __return_storage_ptr__->alphas = pTVar6;
        return __return_storage_ptr__;
      }
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_thrustersColor);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (dict,(Object *)pSVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pSVar3 = StringLiteral__alphas;
      if (pOVar5 != (Object *)0x0) {
        if ((pOVar5->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          iVar7 = *(int *)&pOVar5[1].klass;
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_thrustersColor);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar3 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (dict,(Object *)pSVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pOVar5 != (Object *)0x0) {
            if ((pOVar5->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              iVar8 = *(int *)&pOVar5[1].klass;
              pTVar9 = (ThrustersColorColorKey__Array *)
                        FUN_?(TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorColorKey
                                      ,iVar7);
              for (uVar10 = 0; (int)uVar10 < iVar7; uVar10 = uVar10 + 1) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_11[0]._pointer._value = (void *)0x0;
                aRStack_11[0]._length = 0;
                aRStack_11[0]._12_4_ = 0;
                pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (uVar10,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                    (StringLiteral__color_,pSVar3,StringLiteral__R,
                                     (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&StringLiteral_thrustersColor);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pSVar3 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
                pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (dict,(Object *)pSVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar5 == (Object *)0x0) {
code_?:
                  FUN_?();
                  goto code_?;
                }
                if ((pOVar5->klass->_0).element_class !=
                    (Il2CppClass *)pORam0000000182dc2f48[4].klass) {
code_?:
                  FUN_?(pOVar5);
                  goto code_?;
                }
                fVar12 = *(float *)&pOVar5[1].klass;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_11[0]._pointer._value = (void *)0x0;
                aRStack_11[0]._length = 0;
                aRStack_11[0]._12_4_ = 0;
                pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (uVar10,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                    (StringLiteral__color_,pSVar3,StringLiteral__G,
                                     (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&StringLiteral_thrustersColor);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pSVar3 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
                pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (dict,(Object *)pSVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar5 == (Object *)0x0) {
code_?:
                  FUN_?();
                  goto code_?;
                }
                if ((pOVar5->klass->_0).element_class !=
                    (Il2CppClass *)pORam0000000182dc2f48[4].klass) {
code_?:
                  FUN_?(pOVar5);
                  goto code_?;
                }
                fVar13 = *(float *)&pOVar5[1].klass;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_11[0]._pointer._value = (void *)0x0;
                aRStack_11[0]._length = 0;
                aRStack_11[0]._12_4_ = 0;
                pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (uVar10,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                    (StringLiteral__color_,pSVar3,StringLiteral__B,
                                     (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&StringLiteral_thrustersColor);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pSVar3 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
                pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (dict,(Object *)pSVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar5 == (Object *)0x0) {
code_?:
                  FUN_?();
                  goto code_?;
                }
                if ((pOVar5->klass->_0).element_class !=
                    (Il2CppClass *)pORam0000000182dc2f48[4].klass) {
code_?:
                  FUN_?(pOVar5);
                  goto code_?;
                }
                fVar14 = *(float *)&pOVar5[1].klass;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_11[0]._pointer._value = (void *)0x0;
                aRStack_11[0]._length = 0;
                aRStack_11[0]._12_4_ = 0;
                pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (uVar10,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                    (StringLiteral__color_,pSVar3,StringLiteral__time,
                                     (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&StringLiteral_thrustersColor);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pSVar3 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
                pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (dict,(Object *)pSVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar5 == (Object *)0x0) {
code_?:
                  FUN_?();
                  goto code_?;
                }
                if ((pOVar5->klass->_0).element_class !=
                    (Il2CppClass *)pORam0000000182dc2f48[4].klass) {
code_?:
                  FUN_?(pOVar5);
                  goto code_?;
                }
                fStack_15 = *(float *)&pOVar5[1].klass;
                fStack_16 = fVar12;
                fStack_17 = fVar13;
                fStack_18 = fVar14;
                if (pTVar9 == (ThrustersColorColorKey__Array *)0x0) {
code_?:
                  FUN_?();
                  goto code_?;
                }
                if ((uint)pTVar9->max_length <= uVar10) {
                  FUN_?();
                  goto code_?;
                }
                pTVar19 = pTVar9->vector + (int)uVar10;
                (pTVar19->color).r = fVar12;
                (pTVar19->color).g = fVar13;
                (pTVar19->color).b = fVar14;
                pTVar19->time = fStack_15;
              }
              if (iRam_? != 0) {
                uVar10 = (uint)((ulonglong)&pTStack_1 >> 0xc);
                uVar20 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                do {
                  uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
                  puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
                  LOCK();
                  bVar23 = uVar21 == *puVar22;
                  if (bVar23) {
                    *puVar22 = uVar21 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar23);
              }
              pTStack_1 = pTVar9;
              pTVar6 = (ThrustersColorAlphaKey__Array *)
                        FUN_?(TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorAlphaKey
                                      ,iVar8);
              while( true ) {
                if (iVar8 <= (int)uVar4) {
                  if (iRam_? != 0) {
                    uVar4 = (uint)((ulonglong)&pTStack_2 >> 0xc);
                    uVar20 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
                      puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
                      LOCK();
                      bVar23 = uVar21 == *puVar22;
                      if (bVar23) {
                        *puVar22 = uVar21 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar23);
                  }
                  __return_storage_ptr__->colors = pTStack_1;
                  __return_storage_ptr__->alphas = pTVar6;
                  return __return_storage_ptr__;
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_11[0]._pointer._value = (void *)0x0;
                aRStack_11[0]._length = 0;
                aRStack_11[0]._12_4_ = 0;
                pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (uVar4,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                    (StringLiteral__alpha_,pSVar3,StringLiteral__a,
                                     (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&StringLiteral_thrustersColor);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pSVar3 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
                pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (dict,(Object *)pSVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                pOVar5 = pORam0000000182dc2f48;
                if (pOVar24 == (Object *)0x0) break;
                if ((pOVar24->klass->_0).element_class !=
                    (Il2CppClass *)pORam0000000182dc2f48[4].klass) goto code_?;
                fVar12 = *(float *)&pOVar24[1].klass;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_11[0]._pointer._value = (void *)0x0;
                aRStack_11[0]._length = 0;
                aRStack_11[0]._12_4_ = 0;
                pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (uVar4,aRStack_11,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                    (StringLiteral__alpha_,pSVar3,StringLiteral__time,
                                     (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&StringLiteral_thrustersColor);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pSVar3 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
                pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (dict,(Object *)pSVar3,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                pOVar5 = pORam0000000182dc2f48;
                if (pOVar24 == (Object *)0x0) goto code_?;
                if ((pOVar24->klass->_0).element_class !=
                    (Il2CppClass *)pORam0000000182dc2f48[4].klass) goto code_?;
                fVar13 = *(float *)&pOVar24[1].klass;
                if (pTVar6 == (ThrustersColorAlphaKey__Array *)0x0) goto code_?;
                if ((uint)pTVar6->max_length <= uVar4) goto code_?;
                pTVar6->vector[(int)uVar4].alpha = fVar12;
                pTVar6->vector[(int)uVar4].time = fVar13;
                uVar4 = uVar4 + 1;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  pOVar24 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar24,pOVar5);
code_?:
  pOVar24 = (Object *)FUN_?();
code_?:
  FUN_?(pOVar24,pOVar5);
code_?:
  FUN_?();
code_?:
  FUN_?(pOVar5);
code_?:
  FUN_?();
code_?:
  FUN_?(pOVar5);
code_?:
  FUN_?();
code_?:
  FUN_?(pOVar5);
code_?:
  FUN_?();
code_?:
  FUN_?();
  pcVar25 = (code *)swi(3);
  pTVar26 = (ThrustersColor *)(*pcVar25)();
  return pTVar26;
}


/* Void FillInData(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
     ThrustersColorSerializer_FillInData
               (Dictionary_2_System_Object_System_Object_ *dict,
               Dictionary_2_System_Object_System_Object_ *toAdd,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
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
    cRam_? = '\x01';
  }
  if (toAdd == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = 0;
  uStack_3 = 0;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pDStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  uStack_9 = (ulonglong)(uint)(toAdd->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  pDStack_5 = toAdd;
  DStack_11._dictionary = toAdd;
  while( true ) {
    bVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar12 == 0) {
      return;
    }
    if (dict == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
    in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (dict,DStack_11._current.key,DStack_11._current.value,in_R9D,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Dictionary`2[System.Object,System.Object] Serialize(ThrustersColor) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
ThrustersColorSerializer_Serialize(ThrustersColor *thrustersColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__B);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__color_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__G);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__colors);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__alpha_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__time);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__R);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__a);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__alphas);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (thrustersColor->colors != (ThrustersColorColorKey__Array *)0x0) {
    fVar1 = *(float *)&thrustersColor->colors->max_length;
    if (thrustersColor->alphas != (ThrustersColorAlphaKey__Array *)0x0) {
      fVar2 = *(float *)&thrustersColor->alphas->max_length;
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      pSVar3 = ::StringLiteral__;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_thrustersColor);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
      afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,1);
      pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
      if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
        uVar5 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                   (InsertionBehavior__Enum)uVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pSVar3 = StringLiteral__colors;
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_thrustersColor);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
        afStackX_8[0] = fVar1;
        pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                   (InsertionBehavior__Enum)uVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pSVar3 = StringLiteral__alphas;
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_thrustersColor);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar3 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
        afStackX_8[0] = fVar2;
        pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uVar6 = 0;
        if (0 < (int)fVar1) {
          pTVar7 = thrustersColor->colors;
          lStackX_20 = 0;
          uVar8 = uVar6;
          uVar9 = uVar6;
          do {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
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
            aRStack_10[0]._pointer._value = (void *)0x0;
            aRStack_10[0]._length = 0;
            aRStack_10[0]._12_4_ = 0;
            uVar11 = (uint)uVar8;
            pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                               (uVar11,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            uVar5 = 0;
            pSVar3 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral__color_,pSVar3,StringLiteral__R,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_thrustersColor);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
            if (pTVar7 == (ThrustersColorColorKey__Array *)0x0) goto code_?;
            if ((uint)pTVar7->max_length <= uVar11) goto code_?;
            afStackX_8[0] = *(float *)((longlong)&pTVar7->vector[0].color.r + uVar9);
            pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
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
            aRStack_10[0]._pointer._value = (void *)0x0;
            aRStack_10[0]._length = 0;
            aRStack_10[0]._12_4_ = 0;
            pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                               (uVar11,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            uVar5 = 0;
            pSVar3 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral__color_,pSVar3,StringLiteral__G,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_thrustersColor);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
            if ((uint)pTVar7->max_length <= uVar11) goto code_?;
            afStackX_8[0] = *(float *)((longlong)&pTVar7->vector[0].color.g + uVar9);
            pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
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
            aRStack_10[0]._pointer._value = (void *)0x0;
            aRStack_10[0]._length = 0;
            aRStack_10[0]._12_4_ = 0;
            pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                               (uVar11,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            uVar5 = 0;
            pSVar3 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral__color_,pSVar3,StringLiteral__B,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_thrustersColor);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
            if ((uint)pTVar7->max_length <= uVar11) goto code_?;
            afStackX_8[0] = *(float *)((longlong)&pTVar7->vector[0].color.b + uVar9);
            pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
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
            aRStack_10[0]._pointer._value = (void *)0x0;
            aRStack_10[0]._length = 0;
            aRStack_10[0]._12_4_ = 0;
            pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                               (uVar11,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            uVar5 = 0;
            pSVar3 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral__color_,pSVar3,StringLiteral__time,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_thrustersColor);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
            if ((uint)pTVar7->max_length <= uVar11) goto code_?;
            afStackX_8[0] = *(float *)((longlong)&pTVar7->vector[0].time + uVar9);
            pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uVar8 = (ulonglong)(uVar11 + 1);
            lStackX_20 = lStackX_20 + 1;
            uVar9 = uVar9 + 0x10;
          } while (lStackX_20 < (int)fVar1);
        }
        if (0 < (int)fVar2) {
          pTVar12 = thrustersColor->alphas;
          uVar8 = uVar6;
          do {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
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
            aRStack_10[0]._pointer._value = (void *)0x0;
            aRStack_10[0]._length = 0;
            aRStack_10[0]._12_4_ = 0;
            uVar11 = (uint)uVar8;
            pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                               (uVar11,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            uVar5 = 0;
            pSVar3 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral__alpha_,pSVar3,StringLiteral__a,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_thrustersColor);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
            if (pTVar12 == (ThrustersColorAlphaKey__Array *)0x0) goto code_?;
            if ((uint)pTVar12->max_length <= uVar11) {
code_?:
              FUN_?();
              pcVar13 = (code *)swi(3);
              pDVar14 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar13)();
              return pDVar14;
            }
            afStackX_8[0] = pTVar12->vector[uVar6].alpha;
            pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
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
            aRStack_10[0]._pointer._value = (void *)0x0;
            aRStack_10[0]._length = 0;
            aRStack_10[0]._12_4_ = 0;
            pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                               (uVar11,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            uVar5 = 0;
            pSVar3 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral__alpha_,pSVar3,StringLiteral__time,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_thrustersColor);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar3 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_thrustersColor,pSVar3,(MethodInfo *)0x0);
            if ((uint)pTVar12->max_length <= uVar11) goto code_?;
            afStackX_8[0] = pTVar12->vector[uVar6].time;
            pOVar4 = (Object *)FUN_?(uRam_?,afStackX_8);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar3,pOVar4,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            uVar8 = (ulonglong)(uVar11 + 1);
            uVar6 = uVar6 + 1;
          } while ((longlong)uVar6 < (longlong)(int)fVar2);
        }
        return (Dictionary_2_System_Object_System_Object_ *)this;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  pDVar14 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar13)();
  return pDVar14;
}


/* String ThrustersColorKey(String) */

String * Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
         ThrustersColorSerializer_ThrustersColorKey(String *addOn,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_thrustersColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_thrustersColor;
  if ((StringLiteral_thrustersColor == (String *)0x0) ||
     ((StringLiteral_thrustersColor->fields)._stringLength == 0)) {
    if ((addOn != (String *)0x0) && ((addOn->fields)._stringLength != 0)) {
      return addOn;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((addOn == (String *)0x0) || ((addOn->fields)._stringLength == 0)) {
    return StringLiteral_thrustersColor;
  }
  iVar2 = (StringLiteral_thrustersColor->fields)._stringLength;
  pSVar3 = (String *)FUN_?((addOn->fields)._stringLength + iVar2,addOn,0);
  if (pSVar3 == (String *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar4)();
    return pSVar1;
  }
  if ((pSVar1->fields)._stringLength <= (pSVar3->fields)._stringLength) {
    puVar5 = &(pSVar3->fields)._firstChar;
    puVar6 = &(pSVar1->fields)._firstChar;
    uVar7 = (pSVar1->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar5 - (longlong)puVar6) < (ulonglong)uVar7) ||
       ((ulonglong)((longlong)puVar6 - (longlong)puVar5) < (ulonglong)uVar7)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar5,(uint8_t *)puVar6,uVar7,(MethodInfo *)0x0);
    }
    if ((addOn->fields)._stringLength <= (pSVar3->fields)._stringLength - iVar2) {
      puVar6 = &(pSVar3->fields)._firstChar + iVar2;
      puVar5 = &(addOn->fields)._firstChar;
      uVar7 = (addOn->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar6 - (longlong)puVar5) < (ulonglong)uVar7) ||
         ((ulonglong)((longlong)puVar5 - (longlong)puVar6) < (ulonglong)uVar7)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar6,(uint8_t *)puVar5,uVar7,(MethodInfo *)0x0);
      }
      return pSVar3;
    }
    uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar9,uVar8);
    pcVar4 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar4)();
    return pSVar1;
  }
  uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar9,(MethodInfo *)0x0);
  uVar8 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar9,uVar8);
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}

