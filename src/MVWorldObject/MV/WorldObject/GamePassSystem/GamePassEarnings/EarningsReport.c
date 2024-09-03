
/* Void AddGameBoosterGoldRevenue(Int32, String) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport_AddGameBoosterGoldRevenue
               (EarningsReport *this,int32_t goldAmount,String *gameBooster,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (this->fields).gameBoosterEarningsGold;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)gameBooster,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                      );
    if (bVar2 == 0) {
      this_00 = (this->fields).gameBoosterEarningsGold;
      if (this_00 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)this_00,(Object *)gameBooster,0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields).gameBoosterEarningsGold;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar1,(Object *)gameBooster,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                        );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__set_Item
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar1,(Object *)gameBooster,
                 (int)&gameBooster->klass + TVar3.m_Index,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__set_Item_System__String__int_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddTierGoldRevenue(Int32, GamePassTier) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport_AddTierGoldRevenue
               (EarningsReport *this,int32_t goldAmount,GamePassTier__Enum gamePassTier,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_System_Single_ *)(this->fields).gamePassTierEarningsGold;
  if (this_00 != (Dictionary_2_System_ByteEnum_System_Single_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      (this_00,gamePassTier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar1 == 0) {
      this_01 = (this->fields).gamePassTierEarningsGold;
      if (this_01 == (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
      Dictionary_2_System_ByteEnum_System_Int32__Add
                ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_01,gamePassTier,0,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                );
    }
    this_02 = (Dictionary_2_System_ByteEnum_System_Object_ *)(this->fields).gamePassTierEarningsGold
    ;
    if (this_02 != (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         (this_02,gamePassTier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                         );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Int32]::
      Dictionary_2_System_ByteEnum_System_Int32__set_Item
                ((Dictionary_2_System_ByteEnum_System_Int32_ *)this_02,gamePassTier,
                 (int)&pOVar2->klass + gamePassTier,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 GetTotalEarningsGold() */

int32_t MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
        EarningsReport_GetTotalEarningsGold(EarningsReport *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iVar6 = 0;
  DStack_7._current.value = 0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current._0_4_ = 0;
  iStack_8 = 0;
  method_00 = (MethodInfo *)(this->fields).gamePassTierEarningsGold;
  DStack_9._current.value = 0;
  DStack_9._getEnumeratorRetType = 0;
  DStack_9._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)0x0;
  DStack_9._version = 0;
  DStack_9._index = 0;
  DStack_9._current.key = (Object *)0x0;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff90,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    uStack_11 = 0;
    DStack_7._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar10->_dictionary;
    DStack_7._version = pDVar10->_version;
    DStack_7._index = pDVar10->_index;
    DStack_7._current._0_4_ = (pDVar10->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
    pDStack_12 = &DStack_7;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                        );
      if (bVar13 == 0) break;
      iVar6 = iVar6 + DStack_7._current.value;
      iStack_8 = iVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (this->fields).gameBoosterEarningsGold;
    if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffff90,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                         );
      uStack_11 = 0;
      DStack_9._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)pDVar10->_dictionary;
      DStack_9._version = pDVar10->_version;
      DStack_9._index = pDVar10->_index;
      DStack_9._current.key = (Object *)(pDVar10->_current).key;
      DStack_9._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      uStack_1 = 4;
      pDStack_12 = (Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_ *)&DStack_9;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Int32Enum]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                          (&DStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                          );
        if (bVar13 == 0) break;
        iVar6 = iVar6 + DStack_9._current.value;
        iStack_8 = iVar6;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_9,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 ,in_stack_14);
      *unaff_FS_OFFSET = uStack_3;
      return iVar6;
    }
  }
  uVar15 = func_?();
  uVar15 = func_?(uVar15);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  iVar17 = (*pcVar16)();
  return iVar17;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
         EarningsReport_ToString(EarningsReport *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                   );
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
                   );
    func_?(&StringLiteral__0____1__);
    func_?(&StringLiteral_total_earnings_gold__0__u000A);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = EarningsReport_GetTotalEarningsGold(this,(MethodInfo *)0x0);
  pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
  pSVar8 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_total_earnings_gold__0__u000A,pOVar7,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).gamePassTierEarningsGold;
  pSStack_9 = pSVar8;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff98,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    method_00 = (MethodInfo *)pDVar10->_version;
    uStack_1 = 1;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_ *)
                         &stack0xffffffb0,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                        );
      if (bVar11 == 0) break;
      pOVar7 = (Object *)func_?();
      arg1 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0____1__,pOVar7,arg1,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_3(pSVar8,str1,(MethodInfo *)0x0);
      pSStack_9 = pSVar8;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
               ,method_00);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar8;
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar12)();
  return pSVar8;
}


/* EarningsReport() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport__ctor(EarningsReport *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
            );
  (this->fields).gamePassTierEarningsGold =
       (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).gameBoosterEarningsGold;
  (this->fields).gameBoosterEarningsGold = (Dictionary_2_System_String_System_Int32_ *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* EarningsReport(Dictionary`2[MV.Common.GamePassTier,System.Int32],
   Dictionary`2[System.String,System.Int32]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
     EarningsReport__ctor_1
               (EarningsReport *this,
               Dictionary_2_MV_Common_GamePassTier_System_Int32_ *gamePassTierEarningsGold,
               Dictionary_2_System_String_System_Int32_ *gameBoosterEarningsGold,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
            );
  (this->fields).gamePassTierEarningsGold =
       (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)this_00;
  func_?(&this->fields,this_00);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).gameBoosterEarningsGold;
  (this->fields).gameBoosterEarningsGold = (Dictionary_2_System_String_System_Int32_ *)this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).gamePassTierEarningsGold = gamePassTierEarningsGold;
  func_?(&this->fields,gamePassTierEarningsGold);
  (this->fields).gameBoosterEarningsGold = gameBoosterEarningsGold;
  func_?(&(this->fields).gameBoosterEarningsGold,gameBoosterEarningsGold);
  return;
}


/* Int32 get_TotalEarningsGold() */

int32_t MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport::
        EarningsReport_get_TotalEarningsGold(EarningsReport *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff84;
  puVar5 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iVar6 = 0;
  DStack_7._current.value = 0;
  DStack_7._getEnumeratorRetType = 0;
  DStack_7._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current._0_4_ = 0;
  iStack_8 = 0;
  method_00 = (MethodInfo *)(this->fields).gamePassTierEarningsGold;
  DStack_9._current.value = 0;
  DStack_9._getEnumeratorRetType = 0;
  DStack_9._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)0x0;
  DStack_9._version = 0;
  DStack_9._index = 0;
  DStack_9._current.key = (Object *)0x0;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff90,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    uStack_11 = 0;
    DStack_7._dictionary = (Dictionary_2_System_ByteEnum_System_Int32_ *)pDVar10->_dictionary;
    DStack_7._version = pDVar10->_version;
    DStack_7._index = pDVar10->_index;
    DStack_7._current._0_4_ = (pDVar10->_current).key;
    DStack_7._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
    uStack_1 = 1;
    pDStack_12 = &DStack_7;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                        );
      if (bVar13 == 0) break;
      iVar6 = iVar6 + DStack_7._current.value;
      iStack_8 = iVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&DStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (this->fields).gameBoosterEarningsGold;
    if (this_00 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffff90,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                         );
      uStack_11 = 0;
      DStack_9._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)pDVar10->_dictionary;
      DStack_9._version = pDVar10->_version;
      DStack_9._index = pDVar10->_index;
      DStack_9._current.key = (Object *)(pDVar10->_current).key;
      DStack_9._16_8_ = *(undefined8 *)&(pDVar10->_current).value;
      uStack_1 = 4;
      pDStack_12 = (Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_ *)&DStack_9;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Int32Enum]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                          (&DStack_9,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                          );
        if (bVar13 == 0) break;
        iVar6 = iVar6 + DStack_9._current.value;
        iStack_8 = iVar6;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_9,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 ,in_stack_14);
      *unaff_FS_OFFSET = uStack_3;
      return iVar6;
    }
  }
  uVar15 = func_?();
  uVar15 = func_?(uVar15);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  iVar17 = (*pcVar16)();
  return iVar17;
}

