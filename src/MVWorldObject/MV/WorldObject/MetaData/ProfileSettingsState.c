
/* Dictionary`2[MV.WorldObject.MetaData.ProfileSettingKey,System.Object]
   GetDefaultProfileSettingsValues(SettingsPlatform) */

Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *
MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
ProfileSettingsState_GetDefaultProfileSettingsValues
          (SettingsPlatform__Enum platform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__FilterMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (platform == SettingsPlatform__Enum_Standalone) {
    pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
              );
    auStackX_8[0] = 0x424a0000;
    pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
    if (pDVar1 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 4;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 1;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 2;
    pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__FilterMode,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 5;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,auStackX_8
                           );
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,4,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 2;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,5,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 2;
code_?:
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,auStackX_8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,6,pOVar2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    return (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)pDVar1;
  }
  if (platform == SettingsPlatform__Enum_WebGL) {
    pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
              );
    auStackX_8[0] = 0x424a0000;
    pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
    if (pDVar1 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 4;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 1;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 1;
    pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__FilterMode,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 4;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,auStackX_8
                           );
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,4,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 1;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,5,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 1;
    goto code_?;
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
            );
  auStackX_8[0] = 0x424a0000;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  uVar4 = (undefined7)((ulonglong)in_R9 >> 8);
  if (platform == SettingsPlatform__Enum_Touch) {
    if (pDVar1 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    uVar3 = CONCAT71(uVar4,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 4;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 1;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 1;
    pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__FilterMode,auStackX_8);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 3;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,auStackX_8
                           );
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,4,pOVar2,
               (InsertionBehavior__Enum)uVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    pAVar6 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
    pOVar2 = (Object *)0x0;
    value = (Object *)0x0;
    uStackX_18 = 0;
    iVar7._0_2_ = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).byval_arg.attrs;
    iVar7._2_1_ = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).byval_arg.type;
    iVar7._3_1_ = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).byval_arg.field_0xb;
    if (iVar7 < 0) {
      if (((TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_1).field_0x6d & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
        FUN_?(pOVar2 + 1,&uStackX_18,(longlong)(int)(pAVar6->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          uVar5 = (ulonglong)(uVar8 & 0x3f);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << uVar5;
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
    }
    else {
      pOVar2 = (Object *)((ulonglong)uStackX_1c << 0x20);
    }
    uVar3 = CONCAT71((int7)(uVar5 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,5,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    pLVar13 = TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    uStackX_18 = 0;
    iVar14._0_2_ = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).byval_arg.attrs;
    iVar14._2_1_ = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).byval_arg.type;
    iVar14._3_1_ = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).byval_arg.
                  field_0xb;
    if (iVar14 < 0) {
      if (((TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_1).field_0x6d & 8) == 0)) {
        value = (Object *)FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
        FUN_?(value + 1,&uStackX_18,(longlong)(int)(pLVar13->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)(value + 1) >> 0xc);
          uVar5 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar9 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
      goto code_?;
    }
  }
  else {
    if (pDVar1 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    {
code_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      pDVar16 = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)
                (*pcVar15)();
      return pDVar16;
    }
    uVar3 = CONCAT71(uVar4,2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_8[0] = 4;
    pOVar2 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,auStackX_8);
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,pOVar2,
               (InsertionBehavior__Enum)uVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    pTVar17 = TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
    value = (Object *)0x0;
    uStackX_18 = 0;
    iVar18._0_2_ = (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).byval_arg.attrs;
    iVar18._2_1_ = (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).byval_arg.type;
    iVar18._3_1_ = (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).byval_arg.field_0xb
    ;
    if (iVar18 < 0) {
      if (((TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (pOVar2 = value,
         ((TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_1).field_0x6d & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
        FUN_?(pOVar2 + 1,&uStackX_18,(longlong)(int)(pTVar17->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          uVar5 = (ulonglong)(uVar8 & 0x3f);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << uVar5;
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
    }
    else {
      pOVar2 = (Object *)((ulonglong)uStackX_1c << 0x20);
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,pOVar2,
               (InsertionBehavior__Enum)uVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    pFVar19 = TypeInfo__UnityEngine__FilterMode;
    uStackX_18 = 0;
    iVar20._0_2_ = (TypeInfo__UnityEngine__FilterMode->_0).byval_arg.attrs;
    iVar20._2_1_ = (TypeInfo__UnityEngine__FilterMode->_0).byval_arg.type;
    iVar20._3_1_ = (TypeInfo__UnityEngine__FilterMode->_0).byval_arg.field_0xb;
    if (iVar20 < 0) {
      if (((TypeInfo__UnityEngine__FilterMode->_0).generic_class == (Il2CppGenericClass *)0x0) ||
         (pOVar2 = value, ((TypeInfo__UnityEngine__FilterMode->_1).field_0x6d & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(TypeInfo__UnityEngine__FilterMode);
        FUN_?(pOVar2 + 1,&uStackX_18,(longlong)(int)(pFVar19->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          uVar5 = (ulonglong)(uVar8 & 0x3f);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << uVar5;
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
    }
    else {
      pOVar2 = (Object *)((ulonglong)uStackX_1c << 0x20);
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,pOVar2,
               (InsertionBehavior__Enum)uVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    pAVar21 = TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    uStackX_18 = 0;
    iVar22._0_2_ = (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).byval_arg.
                  attrs;
    iVar22._2_1_ = (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).byval_arg.type
    ;
    iVar22._3_1_ = (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).byval_arg.
                  field_0xb;
    if (iVar22 < 0) {
      if (((TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (pOVar2 = value,
         ((TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_1).field_0x6d & 8) == 0))
      {
        pOVar2 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
        FUN_?(pOVar2 + 1,&uStackX_18,(longlong)(int)(pAVar21->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar5 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar9 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
    }
    else {
      pOVar2 = (Object *)((ulonglong)uStackX_1c << 0x20);
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,4,pOVar2,
               (InsertionBehavior__Enum)uVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    pAVar6 = TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel;
    uStackX_18 = 0;
    iVar23._0_2_ = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).byval_arg.attrs;
    iVar23._2_1_ = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).byval_arg.type;
    iVar23._3_1_ = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).byval_arg.field_0xb;
    if (iVar23 < 0) {
      if (((TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (pOVar2 = value,
         ((TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_1).field_0x6d & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
        FUN_?(pOVar2 + 1,&uStackX_18,(longlong)(int)(pAVar6->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          uVar5 = (ulonglong)(uVar8 & 0x3f);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << uVar5;
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
    }
    else {
      pOVar2 = (Object *)((ulonglong)uStackX_1c << 0x20);
    }
    uVar3 = CONCAT71((int7)(uVar5 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,5,pOVar2,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
               ->klass->rgctx_data[0x22].method);
    pLVar13 = TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
    uStackX_18 = 0;
    iVar24._0_2_ = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).byval_arg.attrs;
    iVar24._2_1_ = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).byval_arg.type;
    iVar24._3_1_ = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).byval_arg.
                  field_0xb;
    if (iVar24 < 0) {
      if (((TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).generic_class ==
           (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_1).field_0x6d & 8) == 0)) {
        value = (Object *)FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
        FUN_?(value + 1,&uStackX_18,(longlong)(int)(pLVar13->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)(value + 1) >> 0xc);
          uVar5 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar9 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
      goto code_?;
    }
  }
  uStackX_18 = 0;
  value = (Object *)((ulonglong)uStackX_1c << 0x20);
code_?:
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,6,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)pDVar1;
}


/* Object GetProfileSettingValue(SettingsPlatform, ProfileSettingKey) */

Object * MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
         ProfileSettingsState_GetProfileSettingValue
                   (ProfileSettingsState *this,SettingsPlatform__Enum settingsPlatform,
                   ProfileSettingKey__Enum key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__get_Item_MV__WorldObject__MetaData__SettingsPlatform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ProfileSettingsData;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_SettingsPlatform_Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_
       *)0x0) {
    this_01 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,settingsPlatform,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__get_Item_MV__WorldObject__MetaData__SettingsPlatform_
                        );
    pMVar1 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
    ;
    if (this_01 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_01,key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar2 < 0) {
        uVar3 = func_?(pMVar1->klass->rgctx_data,0xe);
        pOVar4 = (Object *)func_?(uVar3);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (pOVar4,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar5)();
        return pOVar4;
      }
      pDVar6 = (this_01->fields)._entries;
      if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_UnityEngine_Vector3___Array *)
                    0x0) {
        if (uVar2 < (uint)pDVar6->max_length) {
          return *(Object **)&pDVar6->vector[(int)uVar2].value.y;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar5)();
        return pOVar4;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      pOVar4 = (Object *)(*pcVar5)();
      return pOVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar5)();
  return pOVar4;
}


/* ProfileSettingsState() */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState__ctor
               (ProfileSettingsState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Add_MV__WorldObject__MetaData__SettingsPlatform__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Dictionary__
            );
  pDVar1 = ProfileSettingsState_GetDefaultProfileSettingsValues
                     (SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)pDVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Add_MV__WorldObject__MetaData__SettingsPlatform__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_
             ->klass->rgctx_data[0x22].method);
  pDVar1 = ProfileSettingsState_GetDefaultProfileSettingsValues
                     (SettingsPlatform__Enum_WebGL,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,(Object *)pDVar1,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Add_MV__WorldObject__MetaData__SettingsPlatform__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_
             ->klass->rgctx_data[0x22].method);
  pDVar1 = ProfileSettingsState_GetDefaultProfileSettingsValues
                     (SettingsPlatform__Enum_Touch,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,(Object *)pDVar1,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Add_MV__WorldObject__MetaData__SettingsPlatform__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_
             ->klass->rgctx_data[0x22].method);
  bVar4 = iRam_? != 0;
  (this->fields).ProfileSettingsData =
       (Dictionary_2_MV_WorldObject_MetaData_SettingsPlatform_Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_
        *)this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return;
}

