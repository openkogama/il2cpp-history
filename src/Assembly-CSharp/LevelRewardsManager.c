
/* Void AddClaimedLevelRewards(Dictionary`2[System.Int32,System.Int32]) */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_AddClaimedLevelRewards
               (LevelRewardsManager *this,Dictionary_2_System_Int32_System_Int32_ *levelRewards,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    func_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (levelRewards != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
    method_00 = (MethodInfo *)auStack_6;
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        method_00,(Dictionary_2_System_UInt32_System_Object_ *)levelRewards,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)pDVar7->_dictionary;
    DStack_9._version = pDVar7->_version;
    DStack_9._index = pDVar7->_index;
    DStack_9._current.key = (pDVar7->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pOStack_10 = (Object *)(auStack_6 + 0x18);
    while( true ) {
      do {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Int32]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Int32_ *)
                           (auStack_6 + 0x18),
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)(auStack_6 + 0x18),
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          pAVar12 = (this->fields).OnRewardsReturned;
          if (pAVar12 != (Action *)0x0) {
            (*(pAVar12->fields)._._.invoke_impl)
                      ((pAVar12->fields)._._.method_code,(pAVar12->fields)._._.method);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        value = DStack_9._current.value;
        this_00 = (Dictionary_2_System_Int32_System_Single_ *)(this->fields).unseenLevelRewards;
        pMStack_13 = (MethodInfo *)DStack_9._current.key;
        if (this_00 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          (this_00,DStack_9._current.key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                          );
      } while (bVar11 != 0);
      this_01 = (this->fields).unseenLevelRewards;
      if (this_01 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
      method_00 = pMStack_13;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
      Dictionary_2_System_Int32_System_Int32__Add
                (this_01,(int32_t)pMStack_13,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    }
  }
code_?:
  uVar14 = func_?();
  func_?(uVar14);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ClearRewards() */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_ClearRewards
               (LevelRewardsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).unseenLevelRewards;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Clear__);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetNextLevelReward(Int32, Int32) */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_SetNextLevelReward
               (LevelRewardsManager *this,int32_t level,int32_t gold,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__KeyValuePair_int__int_
                   );
    func_?(&StringLiteral___Gold_);
    func_?(&StringLiteral_Next_level_reward__Level_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&level,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&gold,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_Next_level_reward__Level_,pSVar1,StringLiteral___Gold_,str3,
                      (MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
    gold = (int32_t)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)0x0;
  level = (int32_t)&UNK_?;
  gold = (int32_t)pSVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  method = MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__KeyValuePair_int__int_;
  VStack_2.Item1 = 0;
  VStack_2.Item2 = (void *)0x0;
  mscorlib.dll::System::ValueTuple`2[Int32,IntPtr]::ValueTuple_2_Int32_IntPtr___ctor
            (&VStack_2,level,(void *)gold,
             MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__KeyValuePair_int__int_
            );
  return;
}


/* LevelRewardsManager() */

void Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager__ctor
               (LevelRewardsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  method_00 = (MethodInfo *)&this->fields;
  ((LevelRewardsManager__Fields *)method_00)->unseenLevelRewards =
       (Dictionary_2_System_Int32_System_Int32_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

