
/* Int32 GetPercentage(Int32, Int32) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetPercentage
                  (GameEarningsMenu *this,int32_t earnings,int32_t totalEarnings,MethodInfo *method)

{
  if (0 < totalEarnings) {
    fVar1 = ((float)earnings / (float)totalEarnings) * _UNK_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    dVar2 = (double)func_?((double)fVar1);
    return (int)dVar2;
  }
  return 0x19;
}


/* Int32 GetTierEarnings(ProjectEarningsReport, GamePassTier) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTierEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 && (projectEarningsReport != (ProjectEarningsReport *)0x0))
      && (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                    (projectEarningsReport->fields).projectMemberEarningsReports,
         this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)))) {
    iVar4 = (pMVar3->fields)._._ProfileID_k__BackingField;
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_01,iVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
    if (iVar5 < 0) {
      return 0;
    }
    pDVar6 = (projectEarningsReport->fields).projectMemberEarningsReports;
    if (((pDVar6 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) &&
        (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar4,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             ), pOVar7 != (Object *)0x0)) &&
       ((pOVar7[1].klass != (Object__Class *)0x0 &&
        (pDVar8 = (Dictionary_2_System_ByteEnum_System_Single_ *)((pOVar7[1].klass)->_0).name,
        pDVar8 != (Dictionary_2_System_ByteEnum_System_Single_ *)0x0)))) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Single]::Dictionary_2_System_ByteEnum_System_Single__FindEntry
                         (pDVar8,tier & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__ContainsKey_MV__Common__GamePassTier_
                          ->klass->rgctx_data[0x21].method);
      if (iVar5 < 0) {
        return 0;
      }
      pDVar6 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if ((((pDVar6 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                        *)0x0) &&
           (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                ),
           pMVar9 = 
           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
           , pOVar7 != (Object *)0x0)) && (pOVar7[1].klass != (Object__Class *)0x0)) &&
         (pDVar8 = (Dictionary_2_System_ByteEnum_System_Single_ *)((pOVar7[1].klass)->_0).name,
         pDVar8 != (Dictionary_2_System_ByteEnum_System_Single_ *)0x0)) {
        uVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Single]::Dictionary_2_System_ByteEnum_System_Single__FindEntry
                          (pDVar8,tier & 0xff,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__get_Item_MV__Common__GamePassTier_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar10 < 0) {
          uVar11 = func_?(pMVar9->klass->rgctx_data,0xe);
          pOVar7 = (Object *)func_?(uVar11);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    (pOVar7,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          iVar4 = (*pcVar12)();
          return iVar4;
        }
        pDVar13 = (pDVar8->fields)._entries;
        if (pDVar13 == (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_System_Single___Array *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          iVar4 = (*pcVar12)();
          return iVar4;
        }
        if ((uint)pDVar13->max_length <= uVar10) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          iVar4 = (*pcVar12)();
          return iVar4;
        }
        return (int32_t)pDVar13->vector[(int)uVar10].value;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  iVar4 = (*pcVar12)();
  return iVar4;
}


/* Int32 GetTotalBoostEarnings(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTotalBoostEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<System::String,_int>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 &&
       (iVar4 = (pMVar3->fields)._._ProfileID_k__BackingField,
       projectEarningsReport != (ProjectEarningsReport *)0x0)))) &&
     (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                (projectEarningsReport->fields).projectMemberEarningsReports,
     this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_01,iVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
    if (iVar5 < 0) {
      return 0;
    }
    iVar6 = 0;
    this_02 = (projectEarningsReport->fields).projectMemberEarningsReports;
    if (((this_02 !=
          (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
           *)0x0) &&
        (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar4,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             ), pOVar7 != (Object *)0x0)) &&
       ((pOVar7[1].klass != (Object__Class *)0x0 &&
        ((pDVar8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)((pOVar7[1].klass)->_0).namespaze,
         pDVar8 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0 &&
         (pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::TypeConverterRegistry+ConverterKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                              (pDVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Values__
                              ),
         pDVar9 !=
         (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
          *)0x0)))))) {
      pDVar8 = (pDVar9->fields)._dictionary;
      puStack_10 = (undefined4 *)0x0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)&uStack_13 >> 0xc);
        puVar14 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar15 = *puVar14;
          LOCK();
          uVar16 = *puVar14;
          if (uVar15 == uVar16) {
            *puVar14 = uVar15 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (uVar15 != uVar16);
      }
      if (pDVar8 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) {
        uStack_13 = pDVar8;
        FUN_?();
        pcVar17 = (code *)swi(3);
        iVar4 = (*pcVar17)();
        return iVar4;
      }
      iStack_18 = (pDVar8->fields)._version;
      puStack_10._0_4_ = 0;
      uStack_11 = 0;
      uStack_13._0_4_ = SUB84(pDVar8,0);
      uStack_13._4_4_ = (undefined4)((ulonglong)pDVar8 >> 0x20);
      uStack_19 = (undefined4)uStack_13;
      uStack_20 = uStack_13._4_4_;
      uStack_21 = 0;
      uStack_13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      while (puVar22 = &uStack_19, uStack_23 = (uint)puStack_10,
            pDVar8 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) {
        puStack_10 = &uStack_19;
        if (iStack_18 != (pDVar8->fields)._version) goto code_?;
        do {
          if (pDVar8 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) goto code_?;
          if ((uint)(pDVar8->fields)._count <= uStack_23) {
            return iVar6;
          }
          pDVar24 = (pDVar8->fields)._entries;
          lVar25 = (longlong)(int)uStack_23;
          puStack_10._0_4_ = uStack_23 + 1;
          uVar12 = (uint)puStack_10;
          if (pDVar24 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0) goto code_?;
          bVar26 = (uint)pDVar24->max_length <= uStack_23;
          uStack_23 = (uint)puStack_10;
          if (bVar26) goto code_?;
        } while ((&pDVar24->vector[0].hashCode)[lVar25 * 6] < 0);
        uVar12 = *(uint *)((longlong)&pDVar24->vector[0].key + lVar25 * 0x18 + 8);
        uStack_21 = (ulonglong)uVar12;
        iVar6 = iVar6 + uVar12;
      }
      goto code_?;
    }
  }
  FUN_?();
  puVar22 = puStack_10;
code_?:
  puStack_10 = puVar22;
  FUN_?();
  puVar22 = puStack_10;
  uVar12 = uStack_23;
code_?:
  uStack_23 = uVar12;
  puStack_10 = puVar22;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
  puVar22 = puStack_10;
code_?:
  puStack_10 = puVar22;
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  iVar4 = (*pcVar17)();
  return iVar4;
}


/* Int32 GetTotalEarnings(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_GetTotalEarnings
                  (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (((pMVar3 != (MVLocalPlayer *)0x0) &&
        (projectEarningsReport != (ProjectEarningsReport *)0x0)) &&
       (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                  (projectEarningsReport->fields).projectMemberEarningsReports,
       this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
      iVar4 = (pMVar3->fields)._._ProfileID_k__BackingField;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                         (this_01,iVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          ->klass->rgctx_data[0x21].method);
      if (iVar5 < 0) {
        return 0;
      }
      this_02 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if (this_02 !=
          (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
           *)0x0) {
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                            );
        if ((pOVar6 != (Object *)0x0) &&
           (pOVar7 = pOVar6[1].klass, pOVar7 != (Object__Class *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__GetEnumerator__
                          ,0);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__GetEnumerator__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__Dispose__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__Dispose__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__get_Current__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__get_Current__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_int>__get_Value__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_int>__get_Value__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          DStack_8._dictionary = (Dictionary_2_System_Object_System_Int32Enum_ *)0x0;
          DStack_8._version = 0;
          DStack_8._index = 0;
          DStack_8._current.key = (Object *)0x0;
          DStack_8._current.value = 0;
          DStack_8._current._12_4_ = 0;
          DStack_8._getEnumeratorRetType = 0;
          DStack_8._36_4_ = 0;
          iVar9 = 0;
          pDVar10 = (Dictionary_2_System_ByteEnum_System_Int32_ *)(pOVar7->_0).name;
          if (pDVar10 != (Dictionary_2_System_ByteEnum_System_Int32_ *)0x0) {
            if (iRam_? != 0) {
              uVar11 = (uint)((ulonglong)&uStack_12 >> 0xc);
              lVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
              do {
                uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
            pDStack_17 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)
                         (ulonglong)(uint)(pDVar10->fields)._version;
            uStack_18 = 2;
            uStack_19 = 0;
            auStack_20._8_8_ = pDStack_17;
            auStack_20._16_4_ = 0;
            auStack_20._20_4_ = 0;
            puStack_21 = (undefined *)0x2;
            uStack_12 = 0;
            pDStack_17 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)
                         auStack_20;
            auStack_20._0_8_ = pDVar10;
            while (bVar22 = mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Int32]::
                            Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32__MoveNext
                                      ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Int32_
                                        *)auStack_20,
                                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_int>__MoveNext__
                                      ), bVar22 != 0) {
              iVar9 = iVar9 + auStack_20._20_4_;
            }
            pDVar23 = (Dictionary_2_System_Object_System_Int32Enum_ *)(pOVar7->_0).namespaze;
            if (pDVar23 != (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) {
              uStack_19 = 0;
              uStack_18 = 0;
              if (iRam_? != 0) {
                uVar11 = (uint)((ulonglong)&uStack_12 >> 0xc);
                lVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                do {
                  uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
                  puVar15 = (ulonglong *)(lVar13 + 0xADDR);
                  LOCK();
                  bVar16 = uVar14 == *puVar15;
                  if (bVar16) {
                    *puVar15 = uVar14 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar16);
              }
              pDStack_17 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum_ *)
                           (ulonglong)(uint)(pDVar23->fields)._version;
              uStack_24 = 2;
              DStack_8._8_8_ = pDStack_17;
              DStack_8._current.key = (Object *)0x0;
              DStack_8._current.value = 0;
              DStack_8._current._12_4_ = 0;
              DStack_8._getEnumeratorRetType = 2;
              DStack_8._36_4_ = 0;
              uStack_12 = 0;
              pDStack_17 = &DStack_8;
              DStack_8._dictionary = pDVar23;
              while( true ) {
                bVar22 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Int32Enum]::
                         Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Int32Enum__MoveNext
                                   (&DStack_8,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_int>__MoveNext__
                                   );
                if (bVar22 == 0) break;
                iVar9 = iVar9 + DStack_8._current.value;
              }
              return iVar9;
            }
          }
          FUN_?();
          pcVar25 = (code *)swi(3);
          iVar4 = (*pcVar25)();
          return iVar4;
        }
      }
    }
  }
  FUN_?();
  pcVar25 = (code *)swi(3);
  iVar4 = (*pcVar25)();
  return iVar4;
}


/* Boolean IsPercentageWhole(Int32, Int32) */

bool Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_IsPercentageWhole
               (GameEarningsMenu *this,int32_t tierEarnings,int32_t totalEarnings,MethodInfo *method
               )

{
  if ((0 < totalEarnings) &&
     (fVar1 = ((float)tierEarnings / (float)totalEarnings) * _UNK_?, iVar2 = FUN_?()
     , fVar1 == (float)iVar2)) {
    return 1;
  }
  return 0;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_OnDisable
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).transformsToExpand;
  uVar2 = 0;
  uVar3 = 0;
  (this->fields).currentFocusedEarning = -1;
  (this->fields).interpolationStartTime = 0.0;
  if (pLVar1 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    lVar4 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar3) {
        pLVar1 = (this->fields).pieChartsToEnlargen;
        if (pLVar1 != (List_1_UnityEngine_RectTransform_ *)0x0) {
          lVar4 = 0x20;
          goto code_?;
        }
        break;
      }
      pLVar5 = (this->fields).originalWidthPositionsList;
      if (pLVar5 == (List_1_System_Single_ *)0x0) break;
      if ((uint)(pLVar5->fields)._size <= uVar3) goto code_?;
      pSVar6 = (pLVar5->fields)._items;
      if (pSVar6 == (Single__Array *)0x0) break;
      if ((uint)pSVar6->max_length <= uVar3) goto code_?;
      pLVar1 = (this->fields).transformsToExpand;
      if (pLVar1 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
      pRVar7 = (pLVar1->fields)._items;
      if (pRVar7 == (RectTransform__Array *)0x0) break;
      if ((uint)pRVar7->max_length <= uVar3) goto code_?;
      pOVar8 = *(Object **)((longlong)pRVar7->vector + lVar4 + -0x20);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar9 = pOVar8[1].klass;
      if (pOVar9 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pOVar9);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar9 = pOVar8[1].klass;
      if (pOVar9 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pOVar9);
      pLVar1 = (this->fields).transformsToExpand;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (pLVar1 != (List_1_UnityEngine_RectTransform_ *)0x0);
  }
  goto code_?;
code_?:
  do {
    if ((pLVar1->fields)._size <= (int)uVar2) {
      return;
    }
    pLVar5 = (this->fields).originalSizeList;
    if (pLVar5 == (List_1_System_Single_ *)0x0) break;
    if ((uint)(pLVar5->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pSVar6 = (pLVar5->fields)._items;
    if (pSVar6 == (Single__Array *)0x0) break;
    if ((uint)pSVar6->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pLVar1 = (this->fields).pieChartsToEnlargen;
    if (pLVar1 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
    if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
    pRVar7 = (pLVar1->fields)._items;
    if (pRVar7 == (RectTransform__Array *)0x0) break;
    if ((uint)pRVar7->max_length <= uVar2) goto code_?;
    pOVar8 = *(Object **)((longlong)pRVar7->vector + lVar4 + -0x20);
    if (pOVar8 == (Object *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar9 = pOVar8[1].klass;
    if (pOVar9 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pOVar9);
    pLVar1 = (this->fields).pieChartsToEnlargen;
    uVar2 = uVar2 + 1;
    lVar4 = lVar4 + 8;
  } while (pLVar1 != (List_1_UnityEngine_RectTransform_ *)0x0);
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnHighlightEarning(Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_OnHighlightEarning
               (GameEarningsMenu *this,int32_t earningEntered,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).currentFocusedEarning = earningEntered;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).interpolationStartTime = fVar4;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boosters_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar5 = (this->fields).displayedSmallGoldIcon;
  if ((this->fields).currentFocusedEarning == -1) {
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pGVar5 = (this->fields).displayedLargeGoldIcon;
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,1,(MethodInfo *)0x0);
        pTVar6 = (this->fields).displayedEarningsDescriptionText;
        if (pTVar6 != (Text *)0x0) {
          (*(pTVar6->klass->vtable).set_text.methodPtr)
                    (pTVar6,::StringLiteral__,(pTVar6->klass->vtable).set_text.method);
          pTVar6 = (this->fields).displayedEarningsAmountText;
          if (pTVar6 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pTVar6->klass->vtable).set_text.methodPtr)
                      (pTVar6,::StringLiteral__,(pTVar6->klass->vtable).set_text.method);
            return;
          }
        }
      }
    }
  }
  else if (pGVar5 != (GameObject *)0x0) {
    if ((this->fields).currentFocusedEarning == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pGVar5 = (this->fields).displayedLargeGoldIcon;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pTVar6 = (this->fields).displayedEarningsDescriptionText;
      if (pTVar6 == (Text *)0x0) goto code_?;
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,StringLiteral_Boosters_,(pTVar6->klass->vtable).set_text.method);
      pLVar7 = (this->fields).tierEarnings;
      pTVar6 = (this->fields).displayedEarningsAmountText;
      if (pLVar7 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar8 = (this->fields).currentFocusedEarning;
      if ((uint)(pLVar7->fields)._size <= iVar8 + 1U) goto code_?;
      pIVar9 = (pLVar7->fields)._items;
      if (pIVar9 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar9->max_length <= iVar8 + 1U) goto code_?;
      aIStackX_8[0].m_value = pIVar9->vector[(longlong)iVar8 + 1];
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pGVar5 = (this->fields).displayedLargeGoldIcon;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pTVar6 = (this->fields).displayedEarningsDescriptionText;
      pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(this->fields).currentFocusedEarning,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Game_Tier_,pSVar10,(MethodInfo *)0x0);
      if (pTVar6 == (Text *)0x0) goto code_?;
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,pSVar10,(pTVar6->klass->vtable).set_text.method);
      pLVar7 = (this->fields).tierEarnings;
      pTVar6 = (this->fields).displayedEarningsAmountText;
      if (pLVar7 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar8 = (this->fields).currentFocusedEarning;
      if ((uint)(pLVar7->fields)._size <= iVar8 + 1U) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pIVar9 = (pLVar7->fields)._items;
      if (pIVar9 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar9->max_length <= iVar8 + 1U) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      aIStackX_8[0].m_value = pIVar9->vector[(longlong)iVar8 + 1];
    }
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar6,pSVar10,(pTVar6->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnProjectEarningsUpdatedCallback(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_OnProjectEarningsUpdatedCallback
               (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_03 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar1,(Delegate *)this_03,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
              FUN_?(pDVar2,
                            TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
    if (pAVar1 ==
        (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    lVar5 = FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__GamePassesProjectEarningsManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_,
                  projectEarningsReport,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar10 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  FUN_?(pLVar10);
  bVar11 = iRam_? != 0;
  (this->fields).tierEarnings = pLVar10;
  if (bVar11) {
    uVar6 = (uint)((ulonglong)&(this->fields).tierEarnings >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  pLVar12 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((((pMVar13 != (MVGameControllerBase *)0x0) &&
        (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar14->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar15 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar15 != (MVLocalPlayer *)0x0 && (projectEarningsReport != (ProjectEarningsReport *)0x0))))
     && (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                   (projectEarningsReport->fields).projectMemberEarningsReports,
        this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar16 = (pMVar15->fields)._._ProfileID_k__BackingField;
    iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_01,iVar16,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
    if (iVar17 < 0) {
      UVar18 = 0;
    }
    else {
      this_02 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if (((this_02 ==
            (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
             *)0x0) ||
          (pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar16,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                               ), pOVar19 == (Object *)0x0)) ||
         (pOVar19[1].klass == (Object__Class *)0x0)) goto code_?;
      UVar18 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport
               ::EarningsReport_GetTotalEarningsGold
                         ((EarningsReport *)pOVar19[1].klass,(MethodInfo *)0x0);
    }
    pMVar20 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar21 = &(pLVar12->fields)._version;
    *piVar21 = *piVar21 + 1;
    pUVar22 = (pLVar12->fields)._items;
    if (pUVar22 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar6 = (pLVar12->fields)._size;
    if (uVar6 < (uint)pUVar22->max_length) {
      (pLVar12->fields)._size = uVar6 + 1;
      if ((uint)pUVar22->max_length <= uVar6) goto code_?;
      pUVar22->vector[(int)uVar6] = UVar18;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,UVar18,pMVar20->klass->rgctx_data[0xe].method);
    }
    pLVar12 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
    pMVar20 = (MethodInfo *)0x0;
    UVar18 = GameEarningsMenu_GetTotalBoostEarnings(this,projectEarningsReport,(MethodInfo *)0x0);
    pMVar23 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar21 = &(pLVar12->fields)._version;
    *piVar21 = *piVar21 + 1;
    pUVar22 = (pLVar12->fields)._items;
    if (pUVar22 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar6 = (pLVar12->fields)._size;
    if (uVar6 < (uint)pUVar22->max_length) {
      (pLVar12->fields)._size = uVar6 + 1;
      if ((uint)pUVar22->max_length <= uVar6) goto code_?;
      pUVar22->vector[(int)uVar6] = UVar18;
    }
    else {
      pMVar20 = pMVar23->klass->rgctx_data[0xe].method;
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,UVar18,pMVar20);
    }
    pLVar12 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
    pMVar20 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar20 >> 8),1);
    UVar18 = GameEarningsMenu_GetTierEarnings
                       (this,projectEarningsReport,(GamePassTier__Enum)pMVar20,(MethodInfo *)0x0);
    pMVar23 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar21 = &(pLVar12->fields)._version;
    *piVar21 = *piVar21 + 1;
    pUVar22 = (pLVar12->fields)._items;
    if (pUVar22 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar6 = (pLVar12->fields)._size;
    if (uVar6 < (uint)pUVar22->max_length) {
      (pLVar12->fields)._size = uVar6 + 1;
      if ((uint)pUVar22->max_length <= uVar6) goto code_?;
      pUVar22->vector[(int)uVar6] = UVar18;
    }
    else {
      pMVar20 = pMVar23->klass->rgctx_data[0xe].method;
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,UVar18,pMVar20);
    }
    pLVar12 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
    pMVar20 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar20 >> 8),2);
    UVar18 = GameEarningsMenu_GetTierEarnings
                       (this,projectEarningsReport,(GamePassTier__Enum)pMVar20,(MethodInfo *)0x0);
    pMVar23 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar21 = &(pLVar12->fields)._version;
    *piVar21 = *piVar21 + 1;
    pUVar22 = (pLVar12->fields)._items;
    if (pUVar22 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar6 = (pLVar12->fields)._size;
    if (uVar6 < (uint)pUVar22->max_length) {
      (pLVar12->fields)._size = uVar6 + 1;
      if ((uint)pUVar22->max_length <= uVar6) goto code_?;
      pUVar22->vector[(int)uVar6] = UVar18;
    }
    else {
      pMVar20 = pMVar23->klass->rgctx_data[0xe].method;
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,UVar18,pMVar20);
    }
    pLVar12 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
    UVar18 = GameEarningsMenu_GetTierEarnings
                       (this,projectEarningsReport,
                        (GamePassTier__Enum)CONCAT71((int7)((ulonglong)pMVar20 >> 8),3),
                        (MethodInfo *)0x0);
    pMVar20 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar12 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar21 = &(pLVar12->fields)._version;
    *piVar21 = *piVar21 + 1;
    pUVar22 = (pLVar12->fields)._items;
    if (pUVar22 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar6 = (pLVar12->fields)._size;
    if (uVar6 < (uint)pUVar22->max_length) {
      (pLVar12->fields)._size = uVar6 + 1;
      if ((uint)pUVar22->max_length <= uVar6) goto code_?;
      pUVar22->vector[(int)uVar6] = UVar18;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar12,UVar18,pMVar20->klass->rgctx_data[0xe].method);
    }
    pLVar10 = (this->fields).tierEarnings;
    if (pLVar10 != (List_1_System_Int32_ *)0x0) {
      if ((uint)(pLVar10->fields)._size < 2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar24 = (pLVar10->fields)._items;
      if (pIVar24 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar24->max_length < 2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar16 = pIVar24->vector[1];
      if ((uint)(pLVar10->fields)._size < 3) goto code_?;
      if ((uint)pIVar24->max_length < 3) goto code_?;
      iVar17 = pIVar24->vector[2];
      if (pLVar10 == (List_1_System_Int32_ *)0x0) goto code_?;
      if ((uint)(pLVar10->fields)._size < 4) goto code_?;
      if ((uint)pIVar24->max_length < 4) goto code_?;
      tier2Earnings = pIVar24->vector[3];
      if (pLVar10 == (List_1_System_Int32_ *)0x0) goto code_?;
      if ((uint)(pLVar10->fields)._size < 5) goto code_?;
      if ((uint)pIVar24->max_length < 5) goto code_?;
      tier3Earnings = pIVar24->vector[4];
      if (pLVar10 == (List_1_System_Int32_ *)0x0) goto code_?;
      totalEarnings = pIVar24->vector[0];
      GameEarningsMenu_UpdateEarningsText
                (this,iVar16,iVar17,tier2Earnings,tier3Earnings,totalEarnings,(MethodInfo *)0x0);
      GameEarningsMenu_UpdateEarningPieChart
                (this,iVar16,iVar17,tier2Earnings,tier3Earnings,totalEarnings,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Boosters_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Game_Tier_);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar25 = (this->fields).displayedSmallGoldIcon;
      if ((this->fields).currentFocusedEarning == -1) {
        if (pGVar25 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar25,0,(MethodInfo *)0x0);
          pGVar25 = (this->fields).displayedLargeGoldIcon;
          if (pGVar25 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar25,1,(MethodInfo *)0x0);
            pTVar26 = (this->fields).displayedEarningsDescriptionText;
            if (pTVar26 != (Text *)0x0) {
              (*(pTVar26->klass->vtable).set_text.methodPtr)
                        (pTVar26,::StringLiteral__,(pTVar26->klass->vtable).set_text.method);
              pTVar26 = (this->fields).displayedEarningsAmountText;
              if (pTVar26 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pTVar26->klass->vtable).set_text.methodPtr)
                          (pTVar26,::StringLiteral__,(pTVar26->klass->vtable).set_text.method);
                return;
              }
            }
          }
        }
      }
      else if (pGVar25 != (GameObject *)0x0) {
        if ((this->fields).currentFocusedEarning == 0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar25,1,(MethodInfo *)0x0);
          pGVar25 = (this->fields).displayedLargeGoldIcon;
          if (pGVar25 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar25,0,(MethodInfo *)0x0);
          pTVar26 = (this->fields).displayedEarningsDescriptionText;
          if (pTVar26 == (Text *)0x0) goto code_?;
          (*(pTVar26->klass->vtable).set_text.methodPtr)
                    (pTVar26,StringLiteral_Boosters_,(pTVar26->klass->vtable).set_text.method);
          pLVar10 = (this->fields).tierEarnings;
          pTVar26 = (this->fields).displayedEarningsAmountText;
          if (pLVar10 == (List_1_System_Int32_ *)0x0) goto code_?;
          iVar27 = (this->fields).currentFocusedEarning;
          if ((uint)(pLVar10->fields)._size <= iVar27 + 1U) goto code_?;
          pIVar24 = (pLVar10->fields)._items;
          if (pIVar24 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar24->max_length <= iVar27 + 1U) goto code_?;
        }
        else {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar25,1,(MethodInfo *)0x0);
          pGVar25 = (this->fields).displayedLargeGoldIcon;
          if (pGVar25 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar25,0,(MethodInfo *)0x0);
          pTVar26 = (this->fields).displayedEarningsDescriptionText;
          pSVar28 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&(this->fields).currentFocusedEarning,(MethodInfo *)0x0);
          pSVar28 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Game_Tier_,pSVar28,(MethodInfo *)0x0);
          if (pTVar26 == (Text *)0x0) goto code_?;
          (*(pTVar26->klass->vtable).set_text.methodPtr)
                    (pTVar26,pSVar28,(pTVar26->klass->vtable).set_text.method);
          pLVar10 = (this->fields).tierEarnings;
          pTVar26 = (this->fields).displayedEarningsAmountText;
          if (pLVar10 == (List_1_System_Int32_ *)0x0) goto code_?;
          iVar27 = (this->fields).currentFocusedEarning;
          if ((uint)(pLVar10->fields)._size <= iVar27 + 1U) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pIVar24 = (pLVar10->fields)._items;
          if (pIVar24 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar24->max_length <= iVar27 + 1U) {
code_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pSVar28 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
        if (pTVar26 != (Text *)0x0) {
          UNRECOVERED_JUMPTABLE = (pTVar26->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (pTVar26,pSVar28,(pTVar26->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE)
          ;
          return;
        }
      }
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnStopHighlightEarning(Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_OnStopHighlightEarning
               (GameEarningsMenu *this,int32_t earningExited,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).currentFocusedEarning = -1;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).interpolationStartTime = fVar4;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boosters_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar5 = (this->fields).displayedSmallGoldIcon;
  if ((this->fields).currentFocusedEarning == -1) {
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pGVar5 = (this->fields).displayedLargeGoldIcon;
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,1,(MethodInfo *)0x0);
        pTVar6 = (this->fields).displayedEarningsDescriptionText;
        if (pTVar6 != (Text *)0x0) {
          (*(pTVar6->klass->vtable).set_text.methodPtr)
                    (pTVar6,::StringLiteral__,(pTVar6->klass->vtable).set_text.method);
          pTVar6 = (this->fields).displayedEarningsAmountText;
          if (pTVar6 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pTVar6->klass->vtable).set_text.methodPtr)
                      (pTVar6,::StringLiteral__,(pTVar6->klass->vtable).set_text.method);
            return;
          }
        }
      }
    }
  }
  else if (pGVar5 != (GameObject *)0x0) {
    if ((this->fields).currentFocusedEarning == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pGVar5 = (this->fields).displayedLargeGoldIcon;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pTVar6 = (this->fields).displayedEarningsDescriptionText;
      if (pTVar6 == (Text *)0x0) goto code_?;
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,StringLiteral_Boosters_,(pTVar6->klass->vtable).set_text.method);
      pLVar7 = (this->fields).tierEarnings;
      pTVar6 = (this->fields).displayedEarningsAmountText;
      if (pLVar7 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar8 = (this->fields).currentFocusedEarning;
      if ((uint)(pLVar7->fields)._size <= iVar8 + 1U) goto code_?;
      pIVar9 = (pLVar7->fields)._items;
      if (pIVar9 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar9->max_length <= iVar8 + 1U) goto code_?;
      aIStackX_8[0].m_value = pIVar9->vector[(longlong)iVar8 + 1];
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,1,(MethodInfo *)0x0);
      pGVar5 = (this->fields).displayedLargeGoldIcon;
      if (pGVar5 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,0,(MethodInfo *)0x0);
      pTVar6 = (this->fields).displayedEarningsDescriptionText;
      pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(this->fields).currentFocusedEarning,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Game_Tier_,pSVar10,(MethodInfo *)0x0);
      if (pTVar6 == (Text *)0x0) goto code_?;
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,pSVar10,(pTVar6->klass->vtable).set_text.method);
      pLVar7 = (this->fields).tierEarnings;
      pTVar6 = (this->fields).displayedEarningsAmountText;
      if (pLVar7 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar8 = (this->fields).currentFocusedEarning;
      if ((uint)(pLVar7->fields)._size <= iVar8 + 1U) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pIVar9 = (pLVar7->fields)._items;
      if (pIVar9 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar9->max_length <= iVar8 + 1U) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      aIStackX_8[0].m_value = pIVar9->vector[(longlong)iVar8 + 1];
    }
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar6,pSVar10,(pTVar6->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetHighlightEffects() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_ResetHighlightEffects
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).transformsToExpand;
  uVar2 = 0;
  uVar3 = 0;
  (this->fields).currentFocusedEarning = -1;
  (this->fields).interpolationStartTime = 0.0;
  if (pLVar1 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    lVar4 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar3) {
        pLVar1 = (this->fields).pieChartsToEnlargen;
        if (pLVar1 != (List_1_UnityEngine_RectTransform_ *)0x0) {
          lVar4 = 0x20;
          goto code_?;
        }
        break;
      }
      pLVar5 = (this->fields).originalWidthPositionsList;
      if (pLVar5 == (List_1_System_Single_ *)0x0) break;
      if ((uint)(pLVar5->fields)._size <= uVar3) goto code_?;
      pSVar6 = (pLVar5->fields)._items;
      if (pSVar6 == (Single__Array *)0x0) break;
      if ((uint)pSVar6->max_length <= uVar3) goto code_?;
      pLVar1 = (this->fields).transformsToExpand;
      if (pLVar1 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
      pRVar7 = (pLVar1->fields)._items;
      if (pRVar7 == (RectTransform__Array *)0x0) break;
      if ((uint)pRVar7->max_length <= uVar3) goto code_?;
      pOVar8 = *(Object **)((longlong)pRVar7->vector + lVar4 + -0x20);
      if (pOVar8 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar9 = pOVar8[1].klass;
      if (pOVar9 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pOVar9);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar9 = pOVar8[1].klass;
      if (pOVar9 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pOVar9);
      pLVar1 = (this->fields).transformsToExpand;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (pLVar1 != (List_1_UnityEngine_RectTransform_ *)0x0);
  }
  goto code_?;
code_?:
  do {
    if ((pLVar1->fields)._size <= (int)uVar2) {
      return;
    }
    pLVar5 = (this->fields).originalSizeList;
    if (pLVar5 == (List_1_System_Single_ *)0x0) break;
    if ((uint)(pLVar5->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pSVar6 = (pLVar5->fields)._items;
    if (pSVar6 == (Single__Array *)0x0) break;
    if ((uint)pSVar6->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pLVar1 = (this->fields).pieChartsToEnlargen;
    if (pLVar1 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
    if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
    pRVar7 = (pLVar1->fields)._items;
    if (pRVar7 == (RectTransform__Array *)0x0) break;
    if ((uint)pRVar7->max_length <= uVar2) goto code_?;
    pOVar8 = *(Object **)((longlong)pRVar7->vector + lVar4 + -0x20);
    if (pOVar8 == (Object *)0x0) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar9 = pOVar8[1].klass;
    if (pOVar9 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar8,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pOVar9);
    pLVar1 = (this->fields).pieChartsToEnlargen;
    uVar2 = uVar2 + 1;
    lVar4 = lVar4 + 8;
  } while (pLVar1 != (List_1_UnityEngine_RectTransform_ *)0x0);
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetUpWaitingForProjectEarningsReportUI() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_SetUpWaitingForProjectEarningsReportUI
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_2______);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_1______);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boosters______);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_3______);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GameEarningsMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    lVar5 = FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__GamePassesProjectEarningsManager->static_fields >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pTVar11 = (this->fields).totalEarningsAmount;
  if (pTVar11 != (Text *)0x0) {
    (*(pTVar11->klass->vtable).set_text.methodPtr)
              (pTVar11,::StringLiteral___,(pTVar11->klass->vtable).set_text.method);
    pTVar11 = (this->fields).boostEarningPercentage;
    if (pTVar11 != (Text *)0x0) {
      (*(pTVar11->klass->vtable).set_text.methodPtr)
                (pTVar11,StringLiteral_Boosters______,(pTVar11->klass->vtable).set_text.method);
      pTVar11 = (this->fields).tier1EarningPercentage;
      if (pTVar11 != (Text *)0x0) {
        (*(pTVar11->klass->vtable).set_text.methodPtr)
                  (pTVar11,StringLiteral_Game_Tier_1______,(pTVar11->klass->vtable).set_text.method);
        pTVar11 = (this->fields).tier2EarningPercentage;
        if (pTVar11 != (Text *)0x0) {
          (*(pTVar11->klass->vtable).set_text.methodPtr)
                    (pTVar11,StringLiteral_Game_Tier_2______,(pTVar11->klass->vtable).set_text.method)
          ;
          pTVar11 = (this->fields).tier3EarningPercentage;
          if (pTVar11 != (Text *)0x0) {
            (*(pTVar11->klass->vtable).set_text.methodPtr)
                      (pTVar11,StringLiteral_Game_Tier_3______,
                       (pTVar11->klass->vtable).set_text.method);
            pTVar11 = (this->fields).displayedEarningsDescriptionText;
            if (pTVar11 != (Text *)0x0) {
              (*(pTVar11->klass->vtable).set_text.methodPtr)
                        (pTVar11,::StringLiteral__,(pTVar11->klass->vtable).set_text.method);
              pTVar11 = (this->fields).displayedEarningsAmountText;
              if (pTVar11 != (Text *)0x0) {
                (*(pTVar11->klass->vtable).set_text.methodPtr)();
                value = _UNK_?;
                pIVar12 = (this->fields).boostCircularImage;
                if (pIVar12 != (Image *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                            (pIVar12,_UNK_?,(MethodInfo *)0x0);
                  pIVar12 = (this->fields).tier1CircularImage;
                  if (pIVar12 != (Image *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                              (pIVar12,value,(MethodInfo *)0x0);
                    pIVar12 = (this->fields).tier2CircularImage;
                    if (pIVar12 != (Image *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                                (pIVar12,value,(MethodInfo *)0x0);
                      pIVar12 = (this->fields).tier3CircularImage;
                      if (pIVar12 != (Image *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
                                  (pIVar12,value,(MethodInfo *)0x0);
                        pIVar12 = (this->fields).tier2CircularImage;
                        if (pIVar12 != (Image *)0x0) {
                          pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pIVar12,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
                          if (pTVar13 != (Transform *)0x0) {
                            aVStack_15[0].x = (pVVar14->forwardVector).x;
                            aVStack_15[0].y = (pVVar14->forwardVector).y;
                            aVStack_15[0].z = (pVVar14->forwardVector).z;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                                      (pTVar13,aVStack_15,_UNK_?,Space__Enum_Self,
                                       (MethodInfo *)0x0);
                            pIVar12 = (this->fields).tier2CircularImage;
                            if (pIVar12 != (Image *)0x0) {
                              pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pIVar12,(MethodInfo *)0x0);
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Vector3);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
                              if (pTVar13 != (Transform *)0x0) {
                                aVStack_15[0].x = (pVVar14->forwardVector).x;
                                aVStack_15[0].y = (pVVar14->forwardVector).y;
                                aVStack_15[0].z = (pVVar14->forwardVector).z;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_Rotate_4(pTVar13,aVStack_15,_UNK_?,
                                                   Space__Enum_Self,(MethodInfo *)0x0);
                                pIVar12 = (this->fields).tier3CircularImage;
                                if (pIVar12 != (Image *)0x0) {
                                  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pIVar12,(MethodInfo *)0x0);
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
                                  if (pTVar13 != (Transform *)0x0) {
                                    aVStack_15[0].x = (pVVar14->forwardVector).x;
                                    aVStack_15[0].y = (pVVar14->forwardVector).y;
                                    aVStack_15[0].z = (pVVar14->forwardVector).z;
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_Rotate_4(pTVar13,aVStack_15,_UNK_?,
                                                       Space__Enum_Self,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_Start
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<float>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Single_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<float>);
  FUN_?(pLVar1);
  bVar2 = iRam_? != 0;
  (this->fields).originalWidthPositionsList = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).originalWidthPositionsList >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar7 = (this->fields).transformsToExpand;
  uVar8 = 0;
  uVar3 = 0;
  if (pLVar7 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    lVar9 = 0x20;
    lVar10 = 0x20;
    while ((int)uVar3 < (pLVar7->fields)._size) {
      pLVar7 = (this->fields).transformsToExpand;
      pLVar1 = (this->fields).originalWidthPositionsList;
      if (pLVar7 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
      if ((uint)(pLVar7->fields)._size <= uVar3) goto code_?;
      pRVar11 = (pLVar7->fields)._items;
      if (pRVar11 == (RectTransform__Array *)0x0) goto code_?;
      if ((uint)pRVar11->max_length <= uVar3) goto code_?;
      pOVar12 = *(Object **)((longlong)pRVar11->vector + lVar10 + -0x20);
      if (pOVar12 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_13 = 0;
      uStack_14 = 0;
      pOVar15 = pOVar12[1].klass;
      if (pOVar15 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcRam_? = pcVar16;
      (*pcRam_?)(pOVar15,&uStack_13);
      pMVar18 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
      if (pLVar1 == (List_1_System_Single_ *)0x0) goto code_?;
      piVar19 = &(pLVar1->fields)._version;
      *piVar19 = *piVar19 + 1;
      pSVar20 = (pLVar1->fields)._items;
      if (pSVar20 == (Single__Array *)0x0) goto code_?;
      uVar21 = (pLVar1->fields)._size;
      if (uVar21 < (uint)pSVar20->max_length) {
        (pLVar1->fields)._size = uVar21 + 1;
        if ((uint)pSVar20->max_length <= uVar21) goto code_?;
        pSVar20->vector[(int)uVar21] = (float)uStack_14;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
        List_1_System_Single__AddWithResize
                  (pLVar1,(float)uStack_14,pMVar18->klass->rgctx_data[0xe].method);
      }
      pLVar7 = (this->fields).transformsToExpand;
      uVar3 = uVar3 + 1;
      lVar10 = lVar10 + 8;
      if (pLVar7 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    }
    pLVar1 = (List_1_System_Single_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<float>);
    FUN_?(pLVar1);
    bVar2 = iRam_? != 0;
    (this->fields).originalSizeList = pLVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).originalSizeList >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pLVar7 = (this->fields).pieChartsToEnlargen;
    if (pLVar7 == (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
    do {
      if ((pLVar7->fields)._size <= (int)uVar8) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        projectEarningsReport =
             TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
        if (projectEarningsReport == (ProjectEarningsReport *)0x0) {
          GameEarningsMenu_SetUpWaitingForProjectEarningsReportUI(this,(MethodInfo *)0x0);
        }
        else {
          GameEarningsMenu_UpdateEarningsData(this,projectEarningsReport,(MethodInfo *)0x0);
        }
        return;
      }
      pLVar7 = (this->fields).pieChartsToEnlargen;
      pLVar1 = (this->fields).originalSizeList;
      if (pLVar7 == (List_1_UnityEngine_RectTransform_ *)0x0) break;
      if ((uint)(pLVar7->fields)._size <= uVar8) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pRVar11 = (pLVar7->fields)._items;
      if (pRVar11 == (RectTransform__Array *)0x0) break;
      if ((uint)pRVar11->max_length <= uVar8) {
code_?:
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pOVar12 = *(Object **)((longlong)pRVar11->vector + lVar9 + -0x20);
      if (pOVar12 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_13 = 0;
      uStack_14 = 0;
      pOVar15 = pOVar12[1].klass;
      if (pOVar15 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcRam_? = pcVar16;
      (*pcRam_?)(pOVar15,&uStack_13);
      pMVar18 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
      if (pLVar1 == (List_1_System_Single_ *)0x0) break;
      piVar19 = &(pLVar1->fields)._version;
      *piVar19 = *piVar19 + 1;
      pSVar20 = (pLVar1->fields)._items;
      if (pSVar20 == (Single__Array *)0x0) break;
      uVar3 = (pLVar1->fields)._size;
      if (uVar3 < (uint)pSVar20->max_length) {
        (pLVar1->fields)._size = uVar3 + 1;
        if ((uint)pSVar20->max_length <= uVar3) goto code_?;
        pSVar20->vector[(int)uVar3] = (float)uStack_14;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Single]::
        List_1_System_Single__AddWithResize
                  (pLVar1,(float)uStack_14,pMVar18->klass->rgctx_data[0xe].method);
      }
      pLVar7 = (this->fields).pieChartsToEnlargen;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (pLVar7 != (List_1_UnityEngine_RectTransform_ *)0x0);
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_Update
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar3 = fVar3 - (this->fields).interpolationStartTime;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  if (fVar4 + _UNK_? < fVar3) {
    return;
  }
  pLVar5 = (this->fields).transformsToExpand;
  uVar6 = 0;
  uVar7 = 0;
  if (pLVar5 != (List_1_UnityEngine_RectTransform_ *)0x0) {
    lVar8 = 0x20;
    lVar9 = 0x20;
    while ((int)uVar7 < (pLVar5->fields)._size) {
      pLVar10 = (this->fields).originalWidthPositionsList;
      if (pLVar10 == (List_1_System_Single_ *)0x0) goto DAT_?;
      if ((uint)(pLVar10->fields)._size <= uVar7) goto code_?;
      pSVar11 = (pLVar10->fields)._items;
      if (pSVar11 == (Single__Array *)0x0) goto DAT_?;
      if ((uint)pSVar11->max_length <= uVar7) goto code_?;
      fVar4 = *(float *)((longlong)pSVar11->vector + lVar9 + -0x20);
      if (uVar7 == (this->fields).currentFocusedEarning) {
        fVar4 = fVar4 + (this->fields).widthExpandAmount;
      }
      pLVar5 = (this->fields).transformsToExpand;
      if ((pLVar5 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
         (pRVar12 = (RectTransform *)FUN_?(pLVar5,uVar7), pRVar12 == (RectTransform *)0x0))
      goto DAT_?;
      pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         (aRStack_14,pRVar12,(MethodInfo *)0x0);
      a = pRVar13->m_Width;
      pLVar5 = (this->fields).transformsToExpand;
      if ((pLVar5 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
         ((pRVar12 = (RectTransform *)FUN_?(pLVar5,uVar7),
          (this->fields).transformsToExpand == (List_1_UnityEngine_RectTransform_ *)0x0 ||
          (this_00 = (RectTransform *)FUN_?(), this_00 == (RectTransform *)0x0))))
      goto DAT_?;
      VVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                        (this_00,(MethodInfo *)0x0);
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(a,fVar4,fVar3,in_R9);
      fStackX_1c = VVar15.y;
      if (pRVar12 == (RectTransform *)0x0) goto DAT_?;
      VVar15.y = fStackX_1c;
      VVar15.x = fVar4;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar12,VVar15,(MethodInfo *)0x0);
      pLVar5 = (this->fields).transformsToExpand;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 4;
      if (pLVar5 == (List_1_UnityEngine_RectTransform_ *)0x0) goto DAT_?;
    }
    pLVar5 = (this->fields).pieChartsToEnlargen;
    if (pLVar5 != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_?:
  if ((pLVar5->fields)._size <= (int)uVar6) {
    return;
  }
  pLVar10 = (this->fields).originalSizeList;
  if (pLVar10 == (List_1_System_Single_ *)0x0) goto DAT_?;
  if ((uint)(pLVar10->fields)._size <= uVar6) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar11 = (pLVar10->fields)._items;
  if (pSVar11 == (Single__Array *)0x0) goto DAT_?;
  if ((uint)pSVar11->max_length <= uVar6) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar4 = *(float *)((longlong)pSVar11->vector + lVar8 + -0x20);
  if (uVar6 == (this->fields).currentFocusedEarning) {
    fVar4 = fVar4 * (this->fields).pieChartSizeIncreasePercentage;
  }
  pLVar5 = (this->fields).pieChartsToEnlargen;
  if ((pLVar5 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
     (pRVar12 = (RectTransform *)FUN_?(pLVar5,uVar6), pRVar12 == (RectTransform *)0x0))
  goto DAT_?;
  pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                     (aRStack_14,pRVar12,(MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                     (pRVar13->m_Width,fVar4,fVar3,in_R9);
  pLVar5 = (this->fields).pieChartsToEnlargen;
  if ((pLVar5 == (List_1_UnityEngine_RectTransform_ *)0x0) ||
     (pRVar12 = (RectTransform *)FUN_?(pLVar5,uVar6), pRVar12 == (RectTransform *)0x0))
  goto DAT_?;
  value.y = fVar4;
  value.x = fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            (pRVar12,value,(MethodInfo *)0x0);
  pLVar5 = (this->fields).pieChartsToEnlargen;
  uVar6 = uVar6 + 1;
  lVar8 = lVar8 + 4;
  if (pLVar5 == (List_1_UnityEngine_RectTransform_ *)0x0) goto DAT_?;
  goto code_?;
}


/* Void UpdateDisplayedText() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateDisplayedText
               (GameEarningsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boosters_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayedSmallGoldIcon;
  if ((this->fields).currentFocusedEarning == -1) {
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).displayedLargeGoldIcon;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
        pTVar2 = (this->fields).displayedEarningsDescriptionText;
        if (pTVar2 != (Text *)0x0) {
          (*(pTVar2->klass->vtable).set_text.methodPtr)
                    (pTVar2,::StringLiteral__,(pTVar2->klass->vtable).set_text.method);
          pTVar2 = (this->fields).displayedEarningsAmountText;
          if (pTVar2 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pTVar2->klass->vtable).set_text.methodPtr)
                      (pTVar2,::StringLiteral__,(pTVar2->klass->vtable).set_text.method);
            return;
          }
        }
      }
    }
  }
  else if (pGVar1 != (GameObject *)0x0) {
    if ((this->fields).currentFocusedEarning == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pGVar1 = (this->fields).displayedLargeGoldIcon;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pTVar2 = (this->fields).displayedEarningsDescriptionText;
      if (pTVar2 == (Text *)0x0) goto code_?;
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,StringLiteral_Boosters_,(pTVar2->klass->vtable).set_text.method);
      pLVar3 = (this->fields).tierEarnings;
      pTVar2 = (this->fields).displayedEarningsAmountText;
      if (pLVar3 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar4 = (this->fields).currentFocusedEarning;
      if ((uint)(pLVar3->fields)._size <= iVar4 + 1U) goto code_?;
      pIVar5 = (pLVar3->fields)._items;
      if (pIVar5 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar5->max_length <= iVar4 + 1U) goto code_?;
      aIStackX_8[0].m_value = pIVar5->vector[(longlong)iVar4 + 1];
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pGVar1 = (this->fields).displayedLargeGoldIcon;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pTVar2 = (this->fields).displayedEarningsDescriptionText;
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&(this->fields).currentFocusedEarning,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Game_Tier_,pSVar6,(MethodInfo *)0x0);
      if (pTVar2 == (Text *)0x0) goto code_?;
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar6,(pTVar2->klass->vtable).set_text.method);
      pLVar3 = (this->fields).tierEarnings;
      pTVar2 = (this->fields).displayedEarningsAmountText;
      if (pLVar3 == (List_1_System_Int32_ *)0x0) goto code_?;
      iVar4 = (this->fields).currentFocusedEarning;
      if ((uint)(pLVar3->fields)._size <= iVar4 + 1U) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pIVar5 = (pLVar3->fields)._items;
      if (pIVar5 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar5->max_length <= iVar4 + 1U) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      aIStackX_8[0].m_value = pIVar5->vector[(longlong)iVar4 + 1];
    }
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar2->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar2,pSVar6,(pTVar2->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateEarningPieChart(Int32, Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateEarningPieChart
               (GameEarningsMenu *this,int32_t boostersEarnings,int32_t tier1Earnings,
               int32_t tier2Earnings,int32_t tier3Earnings,int32_t totalEarnings,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pIVar2 = (this->fields).boostCircularImage;
  if (totalEarnings < 1) {
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar2,_UNK_?,(MethodInfo *)0x0);
    pIVar2 = (this->fields).tier1CircularImage;
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar2,fVar1,(MethodInfo *)0x0)
    ;
    pIVar2 = (this->fields).tier2CircularImage;
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar2,fVar1,(MethodInfo *)0x0)
    ;
    pIVar2 = (this->fields).tier3CircularImage;
    fVar3 = fVar1;
    fVar4 = fVar1;
    fVar5 = fVar1;
    if (pIVar2 == (Image *)0x0) goto code_?;
  }
  else {
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar2,(float)boostersEarnings / (float)totalEarnings,(MethodInfo *)0x0);
    pIVar2 = (this->fields).tier1CircularImage;
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar2,(float)tier1Earnings / (float)totalEarnings,(MethodInfo *)0x0);
    pIVar2 = (this->fields).tier2CircularImage;
    if (pIVar2 == (Image *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar2,(float)tier2Earnings / (float)totalEarnings,(MethodInfo *)0x0);
    pIVar2 = (this->fields).tier3CircularImage;
    if (pIVar2 == (Image *)0x0) goto code_?;
    fVar1 = (float)tier3Earnings / (float)totalEarnings;
    fVar3 = (float)tier1Earnings / (float)totalEarnings;
    fVar4 = (float)boostersEarnings / (float)totalEarnings;
    fVar5 = (float)tier2Earnings / (float)totalEarnings;
  }
  UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount(pIVar2,fVar1,(MethodInfo *)0x0);
  pIVar2 = (this->fields).tier1CircularImage;
  fVar1 = fVar4 * _UNK_?;
  if (pIVar2 != (Image *)0x0) {
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pIVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (pTVar6 != (Transform *)0x0) {
      aVStack_8[0].x = (pVVar7->forwardVector).x;
      aVStack_8[0].y = (pVVar7->forwardVector).y;
      aVStack_8[0].z = (pVVar7->forwardVector).z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                (pTVar6,aVStack_8,fVar1,Space__Enum_Self,(MethodInfo *)0x0);
      pIVar2 = (this->fields).tier2CircularImage;
      fVar1 = (fVar3 + fVar4) * _UNK_?;
      if (pIVar2 != (Image *)0x0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pIVar2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (pTVar6 != (Transform *)0x0) {
          aVStack_8[0].x = (pVVar7->forwardVector).x;
          aVStack_8[0].y = (pVVar7->forwardVector).y;
          aVStack_8[0].z = (pVVar7->forwardVector).z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                    (pTVar6,aVStack_8,fVar1,Space__Enum_Self,(MethodInfo *)0x0);
          pIVar2 = (this->fields).tier3CircularImage;
          fVar1 = (fVar3 + fVar4 + fVar5) * _UNK_?;
          if (pIVar2 != (Image *)0x0) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pIVar2,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
            if (pTVar6 != (Transform *)0x0) {
              aVStack_8[0].x = (pVVar7->forwardVector).x;
              aVStack_8[0].y = (pVVar7->forwardVector).y;
              aVStack_8[0].z = (pVVar7->forwardVector).z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                        (pTVar6,aVStack_8,fVar1,Space__Enum_Self,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateEarningsData(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateEarningsData
               (GameEarningsMenu *this,ProjectEarningsReport *projectEarningsReport,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>)
  ;
  FUN_?(pLVar1);
  bVar2 = iRam_? != 0;
  (this->fields).tierEarnings = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).tierEarnings >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pLVar7 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((((pMVar8 != (MVGameControllerBase *)0x0) &&
        (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar9->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar10 != (MVLocalPlayer *)0x0 && (projectEarningsReport != (ProjectEarningsReport *)0x0))))
     && (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                   (projectEarningsReport->fields).projectMemberEarningsReports,
        this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar11 = (pMVar10->fields)._._ProfileID_k__BackingField;
    iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_01,iVar11,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
    if (iVar12 < 0) {
      UVar13 = 0;
    }
    else {
      this_02 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if (((this_02 ==
            (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
             *)0x0) ||
          (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar11,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                               ), pOVar14 == (Object *)0x0)) ||
         (pOVar14[1].klass == (Object__Class *)0x0)) goto code_?;
      UVar13 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::EarningsReport
               ::EarningsReport_GetTotalEarningsGold
                         ((EarningsReport *)pOVar14[1].klass,(MethodInfo *)0x0);
    }
    pMVar15 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar7 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar16 = &(pLVar7->fields)._version;
    *piVar16 = *piVar16 + 1;
    pUVar17 = (pLVar7->fields)._items;
    if (pUVar17 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar7->fields)._size;
    if (uVar3 < (uint)pUVar17->max_length) {
      (pLVar7->fields)._size = uVar3 + 1;
      if ((uint)pUVar17->max_length <= uVar3) goto code_?;
      pUVar17->vector[(int)uVar3] = UVar13;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar7,UVar13,pMVar15->klass->rgctx_data[0xe].method);
    }
    pLVar7 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
    pMVar15 = (MethodInfo *)0x0;
    UVar13 = GameEarningsMenu_GetTotalBoostEarnings(this,projectEarningsReport,(MethodInfo *)0x0);
    pMVar18 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar7 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar16 = &(pLVar7->fields)._version;
    *piVar16 = *piVar16 + 1;
    pUVar17 = (pLVar7->fields)._items;
    if (pUVar17 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar7->fields)._size;
    if (uVar3 < (uint)pUVar17->max_length) {
      (pLVar7->fields)._size = uVar3 + 1;
      if ((uint)pUVar17->max_length <= uVar3) goto code_?;
      pUVar17->vector[(int)uVar3] = UVar13;
    }
    else {
      pMVar15 = pMVar18->klass->rgctx_data[0xe].method;
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar7,UVar13,pMVar15);
    }
    pLVar7 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
    pMVar15 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar15 >> 8),1);
    UVar13 = GameEarningsMenu_GetTierEarnings
                       (this,projectEarningsReport,(GamePassTier__Enum)pMVar15,(MethodInfo *)0x0);
    pMVar18 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar7 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar16 = &(pLVar7->fields)._version;
    *piVar16 = *piVar16 + 1;
    pUVar17 = (pLVar7->fields)._items;
    if (pUVar17 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar7->fields)._size;
    if (uVar3 < (uint)pUVar17->max_length) {
      (pLVar7->fields)._size = uVar3 + 1;
      if ((uint)pUVar17->max_length <= uVar3) goto code_?;
      pUVar17->vector[(int)uVar3] = UVar13;
    }
    else {
      pMVar15 = pMVar18->klass->rgctx_data[0xe].method;
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar7,UVar13,pMVar15);
    }
    pLVar7 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
    pMVar15 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar15 >> 8),2);
    UVar13 = GameEarningsMenu_GetTierEarnings
                       (this,projectEarningsReport,(GamePassTier__Enum)pMVar15,(MethodInfo *)0x0);
    pMVar18 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar7 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar16 = &(pLVar7->fields)._version;
    *piVar16 = *piVar16 + 1;
    pUVar17 = (pLVar7->fields)._items;
    if (pUVar17 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar7->fields)._size;
    if (uVar3 < (uint)pUVar17->max_length) {
      (pLVar7->fields)._size = uVar3 + 1;
      if ((uint)pUVar17->max_length <= uVar3) goto code_?;
      pUVar17->vector[(int)uVar3] = UVar13;
    }
    else {
      pMVar15 = pMVar18->klass->rgctx_data[0xe].method;
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar7,UVar13,pMVar15);
    }
    pLVar7 = (List_1_System_UInt32Enum_ *)(this->fields).tierEarnings;
    UVar13 = GameEarningsMenu_GetTierEarnings
                       (this,projectEarningsReport,
                        (GamePassTier__Enum)CONCAT71((int7)((ulonglong)pMVar15 >> 8),3),
                        (MethodInfo *)0x0);
    pMVar15 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
    if (pLVar7 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar16 = &(pLVar7->fields)._version;
    *piVar16 = *piVar16 + 1;
    pUVar17 = (pLVar7->fields)._items;
    if (pUVar17 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar3 = (pLVar7->fields)._size;
    if (uVar3 < (uint)pUVar17->max_length) {
      (pLVar7->fields)._size = uVar3 + 1;
      if ((uint)pUVar17->max_length <= uVar3) goto code_?;
      pUVar17->vector[(int)uVar3] = UVar13;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar7,UVar13,pMVar15->klass->rgctx_data[0xe].method);
    }
    pLVar1 = (this->fields).tierEarnings;
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      if ((uint)(pLVar1->fields)._size < 2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pIVar20 = (pLVar1->fields)._items;
      if (pIVar20 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar20->max_length < 2) {
code_?:
        FUN_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      iVar11 = pIVar20->vector[1];
      if ((uint)(pLVar1->fields)._size < 3) goto code_?;
      if ((uint)pIVar20->max_length < 3) goto code_?;
      iVar12 = pIVar20->vector[2];
      if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size < 4) goto code_?;
      if ((uint)pIVar20->max_length < 4) goto code_?;
      tier2Earnings = pIVar20->vector[3];
      if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size < 5) goto code_?;
      if ((uint)pIVar20->max_length < 5) goto code_?;
      tier3Earnings = pIVar20->vector[4];
      if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
      totalEarnings = pIVar20->vector[0];
      GameEarningsMenu_UpdateEarningsText
                (this,iVar11,iVar12,tier2Earnings,tier3Earnings,totalEarnings,(MethodInfo *)0x0);
      GameEarningsMenu_UpdateEarningPieChart
                (this,iVar11,iVar12,tier2Earnings,tier3Earnings,totalEarnings,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Boosters_);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Game_Tier_);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar21 = (this->fields).displayedSmallGoldIcon;
      if ((this->fields).currentFocusedEarning == -1) {
        if (pGVar21 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar21,0,(MethodInfo *)0x0);
          pGVar21 = (this->fields).displayedLargeGoldIcon;
          if (pGVar21 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar21,1,(MethodInfo *)0x0);
            pTVar22 = (this->fields).displayedEarningsDescriptionText;
            if (pTVar22 != (Text *)0x0) {
              (*(pTVar22->klass->vtable).set_text.methodPtr)
                        (pTVar22,::StringLiteral__,(pTVar22->klass->vtable).set_text.method);
              pTVar22 = (this->fields).displayedEarningsAmountText;
              if (pTVar22 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pTVar22->klass->vtable).set_text.methodPtr)
                          (pTVar22,::StringLiteral__,(pTVar22->klass->vtable).set_text.method);
                return;
              }
            }
          }
        }
      }
      else if (pGVar21 != (GameObject *)0x0) {
        if ((this->fields).currentFocusedEarning == 0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar21,1,(MethodInfo *)0x0);
          pGVar21 = (this->fields).displayedLargeGoldIcon;
          if (pGVar21 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar21,0,(MethodInfo *)0x0);
          pTVar22 = (this->fields).displayedEarningsDescriptionText;
          if (pTVar22 == (Text *)0x0) goto code_?;
          (*(pTVar22->klass->vtable).set_text.methodPtr)
                    (pTVar22,StringLiteral_Boosters_,(pTVar22->klass->vtable).set_text.method);
          pLVar1 = (this->fields).tierEarnings;
          pTVar22 = (this->fields).displayedEarningsAmountText;
          if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
          iVar23 = (this->fields).currentFocusedEarning;
          if ((uint)(pLVar1->fields)._size <= iVar23 + 1U) goto code_?;
          pIVar20 = (pLVar1->fields)._items;
          if (pIVar20 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar20->max_length <= iVar23 + 1U) goto code_?;
        }
        else {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar21,1,(MethodInfo *)0x0);
          pGVar21 = (this->fields).displayedLargeGoldIcon;
          if (pGVar21 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar21,0,(MethodInfo *)0x0);
          pTVar22 = (this->fields).displayedEarningsDescriptionText;
          pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&(this->fields).currentFocusedEarning,(MethodInfo *)0x0);
          pSVar24 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Game_Tier_,pSVar24,(MethodInfo *)0x0);
          if (pTVar22 == (Text *)0x0) goto code_?;
          (*(pTVar22->klass->vtable).set_text.methodPtr)
                    (pTVar22,pSVar24,(pTVar22->klass->vtable).set_text.method);
          pLVar1 = (this->fields).tierEarnings;
          pTVar22 = (this->fields).displayedEarningsAmountText;
          if (pLVar1 == (List_1_System_Int32_ *)0x0) goto code_?;
          iVar23 = (this->fields).currentFocusedEarning;
          if ((uint)(pLVar1->fields)._size <= iVar23 + 1U) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          pIVar20 = (pLVar1->fields)._items;
          if (pIVar20 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar20->max_length <= iVar23 + 1U) {
code_?:
            FUN_?();
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
        }
        pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
        if (pTVar22 != (Text *)0x0) {
          UNRECOVERED_JUMPTABLE = (pTVar22->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (pTVar22,pSVar24,(pTVar22->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE)
          ;
          return;
        }
      }
code_?:
      FUN_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void UpdateEarningsText(Int32, Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu_UpdateEarningsText
               (GameEarningsMenu *this,int32_t boostersEarnings,int32_t tier1Earnings,
               int32_t tier2Earnings,int32_t tier3Earnings,int32_t totalEarnings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Game_Tier_1__0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boosters__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_2__0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_2__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_3__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boosters__0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_3__0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_N0;
  pTVar2 = (this->fields).totalEarningsAmount;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar3 = 0;
  if (pSVar1 == (String *)0x0) {
    puVar4 = (uint16_t *)0x0;
    uVar5 = 0;
  }
  else {
    aRStack_6[0]._pointer._value = &(pSVar1->fields)._firstChar;
    uVar5 = (pSVar1->fields)._stringLength;
    aRStack_6[0]._12_4_ = 0;
    aRStack_6[0]._length = uVar5;
    puVar4 = aRStack_6[0]._pointer._value;
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_6[0]._12_4_ = 0;
  aRStack_6[0]._length = uVar5;
  aRStack_6[0]._pointer._value = puVar4;
  pSVar1 = mscorlib.dll::System::Number::Number_FormatInt32
                     (totalEarnings,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if ((pSVar1 != (String *)0x0) &&
     (pSVar1 = mscorlib.dll::System::String::String_Replace_1
                         (pSVar1,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
     pTVar2 != (Text *)0x0)) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar1);
    fVar7 = _UNK_?;
    if ((float)totalEarnings <= 0.0) {
      pTVar2 = (this->fields).boostEarningPercentage;
      if (pTVar2 != (Text *)0x0) {
        (*(pTVar2->klass->vtable).set_text.methodPtr)
                  (pTVar2,StringLiteral_Boosters__0__,(pTVar2->klass->vtable).set_text.method);
        pTVar2 = (this->fields).tier1EarningPercentage;
        if (pTVar2 != (Text *)0x0) {
          (*(pTVar2->klass->vtable).set_text.methodPtr)
                    (pTVar2,StringLiteral_Game_Tier_1__0__,(pTVar2->klass->vtable).set_text.method);
          pTVar2 = (this->fields).tier2EarningPercentage;
          if (pTVar2 != (Text *)0x0) {
            (*(pTVar2->klass->vtable).set_text.methodPtr)
                      (pTVar2,StringLiteral_Game_Tier_2__0__,(pTVar2->klass->vtable).set_text.method
                      );
            pTVar2 = (this->fields).tier3EarningPercentage;
            if (pTVar2 != (Text *)0x0) {
              (*(pTVar2->klass->vtable).set_text.methodPtr)
                        (pTVar2,StringLiteral_Game_Tier_3__0__,
                         (pTVar2->klass->vtable).set_text.method);
              return;
            }
          }
        }
      }
    }
    else {
      if (totalEarnings < 1) {
        value_01 = 0x19;
        value = 0x19;
        value_00 = 0x19;
        value_02 = 0x19;
      }
      else {
        value = FUN_?(((float)boostersEarnings / (float)totalEarnings) * _UNK_?);
        value_00 = FUN_?(((float)tier1Earnings / (float)totalEarnings) * fVar7);
        value_01 = FUN_?(((float)tier2Earnings / (float)totalEarnings) * fVar7);
        value_02 = FUN_?(((float)tier3Earnings / (float)totalEarnings) * fVar7);
        iVar8 = value_02 + value_01 + value_00 + value;
        if (iVar8 < 100) {
          uVar9 = (ulonglong)(100 - iVar8);
          do {
            if (iVar3 < 1) {
              bVar10 = GameEarningsMenu_IsPercentageWhole
                                (this,boostersEarnings,totalEarnings,(MethodInfo *)0x0);
              if (bVar10 == 0) {
                value = value + 1;
              }
              else {
code_?:
                bVar10 = GameEarningsMenu_IsPercentageWhole
                                  (this,tier1Earnings,totalEarnings,(MethodInfo *)0x0);
                if (bVar10 == 0) {
                  value_00 = value_00 + 1;
                }
                else {
code_?:
                  bVar10 = GameEarningsMenu_IsPercentageWhole
                                    (this,tier2Earnings,totalEarnings,(MethodInfo *)0x0);
                  if (bVar10 != 0) goto code_?;
                  value_01 = value_01 + 1;
                }
              }
            }
            else {
              if (iVar3 < 2) goto code_?;
              if (iVar3 < 3) goto code_?;
code_?:
              value_02 = value_02 + 1;
            }
            iVar3 = iVar3 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      pTVar2 = (this->fields).boostEarningPercentage;
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
      aRStack_6[0]._pointer._value = (uint16_t *)0x0;
      aRStack_6[0]._8_8_ = 0;
      pSVar1 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Boosters__,pSVar1,::StringLiteral___,(MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar1);
        pTVar2 = (this->fields).tier1EarningPercentage;
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
        aRStack_6[0]._pointer._value = (uint16_t *)0x0;
        aRStack_6[0]._8_8_ = 0;
        pSVar1 = mscorlib.dll::System::Number::Number_FormatInt32
                           (value_00,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_Game_Tier_1__,pSVar1,::StringLiteral___,(MethodInfo *)0x0)
        ;
        if (pTVar2 != (Text *)0x0) {
          (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar1);
          pTVar2 = (this->fields).tier2EarningPercentage;
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
          aRStack_6[0]._pointer._value = (uint16_t *)0x0;
          aRStack_6[0]._8_8_ = 0;
          pSVar1 = mscorlib.dll::System::Number::Number_FormatInt32
                             (value_01,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          pSVar1 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Game_Tier_2__,pSVar1,::StringLiteral___,
                              (MethodInfo *)0x0);
          if (pTVar2 != (Text *)0x0) {
            (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar1);
            pTVar2 = (this->fields).tier3EarningPercentage;
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
            aRStack_6[0]._pointer._value = (uint16_t *)0x0;
            aRStack_6[0]._8_8_ = 0;
            pSVar1 = mscorlib.dll::System::Number::Number_FormatInt32
                               (value_02,aRStack_6,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            pSVar1 = mscorlib.dll::System::String::String_Concat_5
                               (StringLiteral_Game_Tier_3__,pSVar1,::StringLiteral___,
                                (MethodInfo *)0x0);
            if (pTVar2 != (Text *)0x0) {
              (*(pTVar2->klass->vtable).set_text.methodPtr)
                        (pTVar2,pSVar1,(pTVar2->klass->vtable).set_text.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* GameEarningsMenu() */

void Assembly-CSharp.dll::GameEarningsMenu::GameEarningsMenu__ctor
               (GameEarningsMenu *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).currentFocusedEarning = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

