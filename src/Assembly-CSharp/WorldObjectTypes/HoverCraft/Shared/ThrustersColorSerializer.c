
/* ThrustersColor Deserialize(Dictionary`2[System.Object,System.Object]) */

ThrustersColor
Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
ThrustersColorSerializer_Deserialize
          (Dictionary_2_System_Object_System_Object_ *dict,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__HoverCraftVisualization);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorAlphaKey);
    func_?(&TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorColorKey);
    func_?(&StringLiteral__B);
    func_?(&StringLiteral__color_);
    func_?(&StringLiteral__G);
    func_?(&StringLiteral__colors);
    func_?(&StringLiteral__alpha_);
    func_?(&StringLiteral__time);
    func_?(&StringLiteral__R);
    func_?(&StringLiteral__a);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__alphas);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  uStack_7 = 0;
  IStack_8.m_value = 0;
  IStack_9.m_value = 0;
  uStack_1 = 0;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_thrustersColor);
    cRam_? = '\x01';
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_thrustersColor,pSVar6,(MethodInfo *)0x0);
  if (dict != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)dict,
                       (Object *)pSVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar10.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
      pcVar11 = (char *)func_?();
      pSVar6 = StringLiteral__colors;
      if (*pcVar11 == '\0') {
        if ((TypeInfo__HoverCraftVisualization->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__HoverCraftVisualization);
        }
        uStack_7._0_4_ =
             (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).colors;
        uStack_7._4_4_ =
             (TypeInfo__HoverCraftVisualization->static_fields->DefaultThrustersColor).alphas;
code_?:
        *unaff_FS_OFFSET = uStack_3;
        TVar12.alphas = uStack_7._4_4_;
        TVar12.colors = (ThrustersColorColorKey__Array *)uStack_7;
        return TVar12;
      }
      if (cRam_? == '\0') {
        func_?(&StringLiteral_thrustersColor);
        cRam_? = '\x01';
      }
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_thrustersColor,pSVar6,(MethodInfo *)0x0);
      TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)dict,
                         (Object *)pSVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar10.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar13 = (int *)func_?();
        pSVar6 = StringLiteral__alphas;
        iStack_14 = *piVar13;
        if (cRam_? == '\0') {
          func_?(&StringLiteral_thrustersColor);
          cRam_? = '\x01';
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_thrustersColor,pSVar6,(MethodInfo *)0x0);
        TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)dict,
                           (Object *)pSVar6,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar10.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar13 = (int *)func_?();
            iVar15 = iStack_14;
            iStack_16 = *piVar13;
            pSStack_17 = (String *)func_?();
            for (; IVar18.m_value = IStack_8.m_value, IStack_8.m_value < iVar15;
                IStack_8.m_value = IStack_8.m_value + 1) {
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                 (StringLiteral__color_,pSVar6,StringLiteral__R,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&StringLiteral_thrustersColor);
                cRam_? = '\x01';
              }
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_thrustersColor,pSVar6,(MethodInfo *)0x0);
              TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 dict,(Object *)pSVar6,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if (TVar10.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              puVar19 = (undefined4 *)func_?();
              pSStack_20 = (String__Class *)*puVar19;
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                 (StringLiteral__color_,pSVar6,StringLiteral__G,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&StringLiteral_thrustersColor);
                cRam_? = '\x01';
              }
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_thrustersColor,pSVar6,(MethodInfo *)0x0);
              TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 dict,(Object *)pSVar6,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if (TVar10.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              puVar19 = (undefined4 *)func_?();
              pMStack_21 = (MonitorData *)*puVar19;
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                 (StringLiteral__color_,pSVar6,StringLiteral__B,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&StringLiteral_thrustersColor);
                cRam_? = '\x01';
              }
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_thrustersColor,pSVar6,(MethodInfo *)0x0);
              TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 dict,(Object *)pSVar6,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if (TVar10.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              pfVar22 = (float *)func_?();
              fStack_23 = *pfVar22;
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
              pSVar6 = mscorlib.dll::System::String::String_Concat_4
                                 (StringLiteral__color_,pSVar6,StringLiteral__time,(MethodInfo *)0x0
                                 );
              if (cRam_? == '\0') {
                func_?(&StringLiteral_thrustersColor);
                cRam_? = '\x01';
              }
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_thrustersColor,pSVar6,(MethodInfo *)0x0);
              TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 dict,(Object *)pSVar6,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if (TVar10.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              puVar19 = (undefined4 *)func_?();
              uVar24 = *puVar19;
              if (pSStack_17 == (String *)0x0) goto code_?;
              if (*(uint *)&(pSStack_17->fields)._firstChar <= (uint)IVar18.m_value) {
                func_?();
                goto code_?;
              }
              pSVar6 = pSStack_17 + IVar18.m_value + 1;
              pSVar6->klass = pSStack_20;
              pSVar6->monitor = pMStack_21;
              (pSVar6->fields)._stringLength = (int32_t)fStack_23;
              *(undefined4 *)&(pSVar6->fields)._firstChar = uVar24;
              iVar15 = iStack_14;
            }
            uStack_7 = CONCAT44(uStack_7._4_4_,pSStack_17);
            func_?(&uStack_7,pSStack_17);
            pTVar25 = (ThrustersColorAlphaKey__Array *)
                      func_?(TypeInfo__WorldObjectTypes__HoverCraft__Shared__ThrustersColorAlphaKey
                                      ,iStack_16);
            uVar26 = 0;
            while( true ) {
              IStack_9.m_value = uVar26;
              if (iStack_16 <= (int)uVar26) break;
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
              pSStack_17 = mscorlib.dll::System::String::String_Concat_4
                                     (StringLiteral__alpha_,pSVar6,StringLiteral__a,
                                      (MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&StringLiteral_thrustersColor);
                cRam_? = '\x01';
              }
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_thrustersColor,pSStack_17,(MethodInfo *)0x0);
              TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 dict,(Object *)pSVar6,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if (TVar10.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              pfVar22 = (float *)func_?();
              fStack_23 = *pfVar22;
              pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
              pSStack_17 = mscorlib.dll::System::String::String_Concat_4
                                     (StringLiteral__alpha_,pSVar6,StringLiteral__time,
                                      (MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(&StringLiteral_thrustersColor);
                cRam_? = '\x01';
              }
              pSVar6 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_thrustersColor,pSStack_17,(MethodInfo *)0x0);
              TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 dict,(Object *)pSVar6,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if (TVar10.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              pfVar22 = (float *)func_?();
              fVar27 = *pfVar22;
              if (pTVar25 == (ThrustersColorAlphaKey__Array *)0x0) goto code_?;
              if (pTVar25->max_length <= uVar26) goto code_?;
              pTVar25->vector[uVar26].alpha = fStack_23;
              pTVar25->vector[uVar26].time = fVar27;
              uVar26 = IStack_9.m_value + 1;
            }
            uStack_7._4_4_ = pTVar25;
            func_?((int)&uStack_7 + 4,pTVar25);
            goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  TVar12 = (ThrustersColor)(*pcVar28)();
  return TVar12;
}


/* Void FillInData(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
     ThrustersColorSerializer_FillInData
               (Dictionary_2_System_Object_System_Object_ *dict,
               Dictionary_2_System_Object_System_Object_ *toAdd,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
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
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (toAdd != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_System_UInt32_System_Object_ *)toAdd,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (Object *)(pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (dict == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (dict,DStack_9._current.key,DStack_9._current.value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Dictionary`2[System.Object,System.Object] Serialize(ThrustersColor) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
ThrustersColorSerializer_Serialize(ThrustersColor thrustersColor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral__B);
    func_?(&StringLiteral__color_);
    func_?(&StringLiteral__G);
    func_?(&StringLiteral__colors);
    func_?(&StringLiteral__alpha_);
    func_?(&StringLiteral__time);
    func_?(&StringLiteral__R);
    func_?(&StringLiteral__a);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__alphas);
    cRam_? = '\x01';
  }
  IVar1.m_value = 0;
  if ((thrustersColor.colors != (ThrustersColorColorKey__Array *)0x0) &&
     (thrustersColor.alphas != (ThrustersColorAlphaKey__Array *)0x0)) {
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pSVar2 = ::StringLiteral__;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_thrustersColor);
      cRam_? = '\x01';
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
    uStack_3 = (undefined *)CONCAT13(1,(undefined3)uStack_3);
    pOVar4 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_3 + 3);
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar2,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar2 = StringLiteral__colors;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar2,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      pSVar2 = StringLiteral__alphas;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
      puVar5 = &stack0xffffffe0;
      key = TypeInfo__System__Int32;
      pOVar4 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar2,pOVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      IStack_6.m_value = 0;
      if (0 < (int)puVar5) {
        do {
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
          thrustersColor.alphas = (ThrustersColorAlphaKey__Array *)0x0;
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__color_,pSVar2,StringLiteral__R,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
          if ((thrustersColor.colors)->max_length <= (uint)IStack_6.m_value) goto code_?;
          pOVar4 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar2,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__color_,pSVar2,StringLiteral__G,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
          if ((thrustersColor.colors)->max_length <= (uint)IStack_6.m_value) goto code_?;
          pOVar4 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar2,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__color_,pSVar2,StringLiteral__B,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
          if ((thrustersColor.colors)->max_length <= (uint)IStack_6.m_value) goto code_?;
          pOVar4 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar2,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__color_,pSVar2,StringLiteral__time,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          key = (Int32__Class *)
                mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
          if ((thrustersColor.colors)->max_length <= (uint)IStack_6.m_value) goto code_?;
          pOVar4 = (Object *)func_?();
          IVar1.m_value =
               (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)key,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          IStack_6.m_value = IStack_6.m_value + 1;
        } while (IStack_6.m_value < (int)pOVar4);
      }
      if (0 < (int)key) {
        do {
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__alpha_,pSVar2,StringLiteral__a,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
          if ((MethodInfo *)(thrustersColor.alphas)->max_length <= (uint)IVar1.m_value)
          goto code_?;
          pOVar4 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar2,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
          IVar1.m_value = 0;
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__alpha_,pSVar2,StringLiteral__time,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_thrustersColor,pSVar2,(MethodInfo *)0x0);
          if ((thrustersColor.alphas)->max_length <= (uint)IVar1.m_value) goto code_?;
          pOVar4 = (Object *)func_?();
          IVar1.m_value =
               (int32_t)
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar2,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          IVar1.m_value = IVar1.m_value + 1;
        } while (IVar1.m_value < (int)pSVar2);
      }
      return (Dictionary_2_System_Object_System_Object_ *)this;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar8 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar7)();
  return pDVar8;
}


/* String ThrustersColorKey(String) */

String * Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::ThrustersColorSerializer::
         ThrustersColorSerializer_ThrustersColorKey(String *addOn,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_thrustersColor);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_thrustersColor,addOn,(MethodInfo *)0x0);
  return pSVar1;
}

