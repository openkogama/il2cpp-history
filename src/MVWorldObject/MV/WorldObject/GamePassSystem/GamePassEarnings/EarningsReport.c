
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).gameBoosterEarningsGold;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)gameBooster,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gameBoosterEarningsGold;
      if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar2,(Object *)gameBooster,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
    }
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gameBoosterEarningsGold;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)gameBooster,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                         );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (pDVar2,(Object *)gameBooster,
                 (Object *)((int)&gameBooster->klass + (int)&pOVar3->klass),
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).gamePassTierEarningsGold;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)gamePassTier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar1 == 0) {
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gamePassTierEarningsGold;
      if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar2,(Object *)gamePassTier,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Add_MV__Common__GamePassTier__int_
                );
    }
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gamePassTierEarningsGold;
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,gamePassTier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                         );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (pDVar2,(Object *)gamePassTier,(Object *)((int)&pOVar3->klass + gamePassTier),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
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
  uStack_7._0_4_ = 0;
  uStack_7._4_4_ = 0;
  auStack_8._0_4_ = (Object__Class *)0x0;
  auStack_8._4_4_ = (MonitorData *)0x0;
  auStack_8._8_4_ = 0;
  pOStack_9 = (Object *)0x0;
  iStack_10 = 0;
  method_00 = (MethodInfo *)(this->fields).gamePassTierEarningsGold;
  DStack_11._current.value = 0;
  DStack_11._getEnumeratorRetType = 0;
  DStack_11._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)0x0;
  DStack_11._version = 0;
  DStack_11._index = 0;
  DStack_11._current.key = (Object *)0x0;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffff90,(Dictionary_2_System_Object_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    uStack_13 = 0;
    auStack_8._0_4_ = pDVar12->_dictionary;
    auStack_8._4_4_ = pDVar12->_version;
    auStack_8._8_4_ = pDVar12->_index;
    pOStack_9 = (pDVar12->_current).key;
    uStack_7 = *(undefined8 *)&(pDVar12->_current).value;
    uStack_1 = 1;
    pDStack_14 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)auStack_8;
    while( true ) {
      bVar15 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_ *)
                         auStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                        );
      if (bVar15 == 0) break;
      iVar6 = iVar6 + (int32_t)uStack_7;
      iStack_10 = iVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)auStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gameBoosterEarningsGold;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff90,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                         );
      uStack_13 = 0;
      DStack_11._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)pDVar12->_dictionary;
      DStack_11._version = pDVar12->_version;
      DStack_11._index = pDVar12->_index;
      DStack_11._current.key = (pDVar12->_current).key;
      DStack_11._16_8_ = *(undefined8 *)&(pDVar12->_current).value;
      uStack_1 = 4;
      pDStack_14 = &DStack_11;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Int32Enum]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                          );
        if (bVar15 == 0) break;
        iVar6 = iVar6 + DStack_11._current.value;
        iStack_10 = iVar6;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_11,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 ,in_stack_16);
      *unaff_FS_OFFSET = uStack_3;
      return iVar6;
    }
  }
  uVar17 = func_?();
  uVar17 = func_?(uVar17);
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  iVar19 = (*pcVar18)();
  return iVar19;
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gamePassTierEarningsGold;
  pSStack_9 = pSVar8;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  this_00 = (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                           );
  if (this_00 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
              );
    (this->fields).gamePassTierEarningsGold = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Dictionary_2_System_String_System_Int32_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                             );
    if (this_01 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                );
      method_00 = (MethodInfo *)&(this->fields).gameBoosterEarningsGold;
      (this->fields).gameBoosterEarningsGold = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this_00 = (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>
                           );
  if (this_00 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__Dictionary__
              );
    (this->fields).gamePassTierEarningsGold = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Dictionary_2_System_String_System_Int32_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                             );
    if (this_01 != (Dictionary_2_System_String_System_Int32_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                );
      method_00 = (MethodInfo *)&(this->fields).gameBoosterEarningsGold;
      (this->fields).gameBoosterEarningsGold = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      (this->fields).gamePassTierEarningsGold = gamePassTierEarningsGold;
      func_?(&this->fields,gamePassTierEarningsGold);
      (this->fields).gameBoosterEarningsGold = gameBoosterEarningsGold;
      func_?(&(this->fields).gameBoosterEarningsGold,gameBoosterEarningsGold);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  uStack_7._0_4_ = 0;
  uStack_7._4_4_ = 0;
  auStack_8._0_4_ = (Object__Class *)0x0;
  auStack_8._4_4_ = (MonitorData *)0x0;
  auStack_8._8_4_ = 0;
  pOStack_9 = (Object *)0x0;
  iStack_10 = 0;
  method_00 = (MethodInfo *)(this->fields).gamePassTierEarningsGold;
  DStack_11._current.value = 0;
  DStack_11._getEnumeratorRetType = 0;
  DStack_11._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)0x0;
  DStack_11._version = 0;
  DStack_11._index = 0;
  DStack_11._current.key = (Object *)0x0;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffff90,(Dictionary_2_System_Object_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                       );
    uStack_13 = 0;
    auStack_8._0_4_ = pDVar12->_dictionary;
    auStack_8._4_4_ = pDVar12->_version;
    auStack_8._8_4_ = pDVar12->_index;
    pOStack_9 = (pDVar12->_current).key;
    uStack_7 = *(undefined8 *)&(pDVar12->_current).value;
    uStack_1 = 1;
    pDStack_14 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)auStack_8;
    while( true ) {
      bVar15 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_ *)
                         auStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                        );
      if (bVar15 == 0) break;
      iVar6 = iVar6 + (int32_t)uStack_7;
      iStack_10 = iVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)auStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).gameBoosterEarningsGold;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff90,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                         );
      uStack_13 = 0;
      DStack_11._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)pDVar12->_dictionary;
      DStack_11._version = pDVar12->_version;
      DStack_11._index = pDVar12->_index;
      DStack_11._current.key = (pDVar12->_current).key;
      DStack_11._16_8_ = *(undefined8 *)&(pDVar12->_current).value;
      uStack_1 = 4;
      pDStack_14 = &DStack_11;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Int32Enum]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                          (&DStack_11,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                          );
        if (bVar15 == 0) break;
        iVar6 = iVar6 + DStack_11._current.value;
        iStack_10 = iVar6;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_11,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 ,in_stack_16);
      *unaff_FS_OFFSET = uStack_3;
      return iVar6;
    }
  }
  uVar17 = func_?();
  uVar17 = func_?(uVar17);
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  iVar19 = (*pcVar18)();
  return iVar19;
}

