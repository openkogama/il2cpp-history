
/* List`1[Highlight`1[MV.WorldObject.HighlightSystem.HighlightPayloads.HighlightAccessoryBundle]]
   GetHighLights[HighlightAccessoryBundle](HighlightType) */

List_1_Highlight_1_MV_WorldObject_HighlightSystem_HighlightPayloads_HighlightAccessoryBundle_ *
Assembly-CSharp.dll::HighlightManager::HighlightManager_GetHighLights_2
          (HighlightType__Enum highlightType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  iStack_7 = 0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pIVar9 = *method->parameters;
  puStack_10 = (undefined4 *)&stack0xffffff7c;
  puStack_4 = &stack0xffffff7c;
  if ((pIVar9[0x17].type & 1) == 0) {
    puStack_10 = (undefined4 *)&stack0xffffff7c;
    puStack_4 = &stack0xffffff7c;
    func_?(pIVar9);
  }
  pLVar11 = (List_1_Highlight_1_MV_WorldObject_HighlightSystem_HighlightPayloads_HighlightAccessoryBundle_
            *)func_?(pIVar9);
  pLStack_12 = pLVar11;
  (*(code *)method->parameters[1]->data)(pLVar11,method->parameters[1]);
  pLStack_13 = pLVar11;
  if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__HighlightManager);
  }
  this = TypeInfo__HighlightManager->static_fields->highlightDatas;
  if (this == (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
              0x0) {
code_?:
    iVar14 = func_?(0);
  }
  else {
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_16,(Dictionary_2_WinningConditionType_System_Object_ *)this,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar15->dictionary;
    auStack_6._4_4_ = pDVar15->next;
    auStack_6._8_4_ = pDVar15->stamp;
    auStack_6._12_4_ = (pDVar15->current).key;
    auStack_6._16_4_ = (pDVar15->current).value;
    uStack_1 = 0;
    while (cVar17 = func_?(auStack_6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__MoveNext__
                                  ), cVar17 != '\0') {
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__get_Current__
                            );
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
      if (*(char *)(iVar14 + 0x10) == (undefined1)highlightType) {
        iVar14 = func_?(&KStack_8,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__get_Value__
                                );
        if (iVar14 == 0) goto code_?;
        uVar18 = *(undefined4 *)(iVar14 + 0x14);
        if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        uStack_19 = (*(code *)method->parameters[2]->data)(uVar18,method->parameters[2]);
        iVar14 = func_?(&KStack_8,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__get_Value__
                                );
        if (iVar14 == 0) goto code_?;
        uVar18 = *(undefined4 *)(iVar14 + 8);
        uVar20 = func_?(method->parameters[3]);
        uVar20 = func_?(uVar20);
        (*(code *)method->parameters[4]->data)(uVar20,uVar18,uStack_19,method->parameters[4]);
        if (pLStack_12 ==
            (List_1_Highlight_1_MV_WorldObject_HighlightSystem_HighlightPayloads_HighlightAccessoryBundle_
             *)0x0) goto code_?;
        (*(code *)method->parameters[5]->data)(pLStack_12,uVar20,method->parameters[5]);
      }
    }
    *puStack_10 = 0x7d;
    uStack_1 = 0xffffffff;
    pOStack_21 = (Object *)auStack_6._16_4_;
    uVar22 = 0;
    pDStack_23 = 
    TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
    ;
    uStack_24 = 0xffffffff;
    pLStack_25 = (LevelRewardsManager__Class *)auStack_6._0_4_;
    pMStack_26 = (MonitorData *)auStack_6._4_4_;
    pDStack_27 = (Dictionary_2_System_Int32_System_Int32_ *)auStack_6._8_4_;
    iStack_28 = auStack_6._12_4_;
    uVar29._0_1_ = (
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                  ->_1).rank;
    uVar29._1_1_ = (
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                  ->_1).minimumAlignment;
    if (uVar29 != 0) {
      do {
        if (TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
            ->interfaceOffsets[uVar22].interfaceType == (Il2CppClass *)TypeInfo__System__IDisposable)
        {
          ppMVar30 = &(&(
                        TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                        ->vtable).Equals)
                      [TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                       ->interfaceOffsets[uVar22].offset].method;
          goto code_?;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar29);
    }
    ppMVar30 = (MethodInfo **)func_?(&pDStack_23,TypeInfo__System__IDisposable,0);
code_?:
    (*(code *)*ppMVar30)(&pDStack_23,ppMVar30[1]);
    auStack_6._16_4_ = pOStack_21;
    auStack_6._0_4_ = pLStack_25;
    auStack_6._4_4_ = pMStack_26;
    auStack_6._8_4_ = pDStack_27;
    auStack_6._12_4_ = iStack_28;
    iVar14 = iStack_7;
    if (iStack_7 == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return pLStack_12;
    }
  }
  func_?(iVar14,0,0);
  pcVar31 = (code *)swi(3);
  pLVar11 = (List_1_Highlight_1_MV_WorldObject_HighlightSystem_HighlightPayloads_HighlightAccessoryBundle_
            *)(*pcVar31)();
  return pLVar11;
}


/* Void Init(String) */

void Assembly-CSharp.dll::HighlightManager::HighlightManager_Init
               (String *availableHighlightDatasString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
           Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                     (availableHighlightDatasString,
                      System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>_>_System__String_
                     );
  if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__HighlightManager);
  }
  TypeInfo__HighlightManager->static_fields->highlightDatas = pDVar1;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::HighlightManager::HighlightManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
            );
  if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__HighlightManager->static_fields->highlightDatas = this;
  return;
}


/* Void SetHighlightToSeen(Int32) */

void Assembly-CSharp.dll::HighlightManager::HighlightManager_SetHighlightToSeen
               (int32_t highlightId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__HighlightManager);
  }
  this = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )TypeInfo__HighlightManager->static_fields->highlightDatas;
  if (this != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
              (this,highlightId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Remove_int_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      highlightId = (int32_t)TypeInfo__MVGameControllerBase;
      func_?();
    }
    this_00 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVJetPack *)0x0) {
      this_01 = MVJetPack::MVJetPack_get_Shield(this_00,(MethodInfo *)0x0);
      if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetHighlightToSeen
                  ((MVNetworkGame_OperationRequests *)this_01,highlightId,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* HighlightManager() */

void Assembly-CSharp.dll::HighlightManager::HighlightManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
            );
  TypeInfo__HighlightManager->static_fields->highlightDatas = this;
  return;
}

