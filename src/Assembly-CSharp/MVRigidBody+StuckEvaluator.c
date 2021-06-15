
/* Dictionary`2[System.Int32,MVOverlapResult] GetOverlapDictionary() */

Dictionary_2_System_Int32_MVOverlapResult_ *
Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
          (MVRigidBody_StuckEvaluator *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff88;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  LStack_8.fields._NextReward_k__BackingField.value = 0;
  LStack_8.klass = (LevelRewardsManager__Class *)0x0;
  LStack_8.monitor = (MonitorData *)0x0;
  LStack_8.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  LStack_8.fields._NextReward_k__BackingField.key = 0;
  func_?();
  this_00 = (this->fields).getOverlappingObjects;
  puStack_9 = (undefined4 *)&stack0xffffff88;
  puStack_5 = &stack0xffffff88;
  if ((this_00 != (Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)0x0) &&
     (puStack_9 = (undefined4 *)&stack0xffffff88, puStack_5 = &stack0xffffff88,
     this_01 = System.Core.dll::System::Func`1[System::Collections::Generic::
               List`1[MVOverlapResult]]::
               Func_1_System_Collections_Generic_List_1_MVOverlapResult__Invoke
                         (this_00,
                          MethodInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>__Invoke__
                         ), unaff_ESI = (IntVector__Array *)0x0,
     this_01 != (List_1_MVOverlapResult_ *)0x0)) {
    pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                        MethodInfo__System__Collections__Generic__List<MVOverlapResult>__get_Count__
                       );
    if (pOVar10 == (Object *)0x0) {
      pDVar11 = (Dictionary_2_System_Int32_MVOverlapResult_ *)0x0;
    }
    else {
      pDVar11 = (Dictionary_2_System_Int32_MVOverlapResult_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Dictionary__
                );
      pDStack_12 = pDVar11;
      pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
               List_1_UnityEngine_Vector2__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Vector2_ *)&stack0xffffff98,
                          (List_1_UnityEngine_Vector2_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                         );
      LStack_8.klass = (LevelRewardsManager__Class *)pLVar13->l;
      LStack_8.monitor = (MonitorData *)pLVar13->next;
      LStack_8.fields.unseenLevelRewards = (Dictionary_2_System_Int32_System_Int32_ *)pLVar13->ver;
      LStack_8.fields._NextReward_k__BackingField.key = (int32_t)(pLVar13->current).x;
      LStack_8.fields._NextReward_k__BackingField.value = (int32_t)(pLVar13->current).y;
      uStack_2 = 0;
      while (cVar14 = func_?(), cVar14 != '\0') {
        KVar15 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                          (&LStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__get_Current__
                          );
        unaff_ESI = (IntVector__Array *)KVar15.value;
        iStack_16 = KVar15.key;
        if (pDVar11 == (Dictionary_2_System_Int32_MVOverlapResult_ *)0x0) goto code_?;
        bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Int32,MVOverlapResult]::Dictionary_2_System_Int32_MVOverlapResult__ContainsKey
                          (pDVar11,iStack_16,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                          );
        if (bVar17 == 0) {
          value.localCubePos = unaff_ESI;
          value.woId = iStack_16;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,MVOverlapResult]::
          Dictionary_2_System_Int32_MVOverlapResult__Add
                    (pDVar11,iStack_16,value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Add_int__MVOverlapResult_
                    );
        }
        else {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_This_happens_due_to_error_in_MVE,(MethodInfo *)0x0);
        }
      }
      *puStack_9 = 0x81;
      uStack_2 = 0xffffffff;
      func_?(&LStack_8,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                     );
    }
    *unaff_FS_OFFSET = uStack_4;
    return pDVar11;
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar18 = (code *)swi(3);
  pDVar11 = (Dictionary_2_System_Int32_MVOverlapResult_ *)(*pcVar18)();
  return pDVar11;
}


/* Boolean Update() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
               (MVRigidBody_StuckEvaluator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff38;
  puVar5 = &stack0xffffff38;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  uStack_7 = 0;
  iStack_8 = 0;
  pDStack_9 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_10 = 0;
  iStack_11 = 0;
  iStack_12 = 0;
  fStack_13 = 0.0;
  CStack_14.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_14.monitor = (MonitorData *)0x0;
  CStack_14.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_14.fields.syncRoot = (Object *)0x0;
  pOStack_15 = (Object *)0x0;
  IStack_16.klass = (InputToPlayerMovementAndroid__Class *)0x0;
  IStack_16.monitor = (MonitorData *)0x0;
  IStack_16.fields.jump = 0;
  IStack_16.fields.jumpFrameUpdate = 0;
  IStack_16.fields.jumpFixedUpdate = 0;
  IStack_16.fields._3_1_ = 0;
  IStack_16.fields.direction.x = 0.0;
  bStack_17 = 0;
  IStack_16.fields.direction.y = 0.0;
  IStack_16.fields.direction.z = 0.0;
  pDStack_18 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_19 = 0;
  iStack_20 = 0;
  iStack_21 = 0;
  func_?();
  pDStack_22 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
  piStack_23 = (int *)&stack0xffffff38;
  puStack_4 = &stack0xffffff38;
  pDStack_24 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((float)pDStack_24 - (this->fields).updateTime < (this->fields).updateInterval) {
    pDVar25 = (this->fields).stuckObjects;
    if (pDVar25 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) {
      pOVar26 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)pDVar25,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                         );
      if (pOVar26 != (Object *)0x0) goto code_?;
code_?:
      bStack_17 = 0;
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return bStack_17;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
code_?:
    fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).updateTime = fVar27;
    pDStack_24 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)MVRigidBody_StuckEvaluator_GetOverlapDictionary(this,(MethodInfo *)0x0);
    if (pDStack_24 ==
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pDVar28 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).stuckObjects;
      if (pDVar28 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDVar28,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
        goto code_?;
      }
      goto code_?;
    }
    pDVar29 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)func_?();
    pDStack_30 = pDVar29;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)pDVar29,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pDVar25 = (this->fields).stuckObjects;
    pDStack_31 = pDVar29;
    if ((pDVar25 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) ||
       (this_00 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar25,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                            ),
       this_00 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) goto code_?;
    pDVar32 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                         *)&stack0xffffff48,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                       );
    pDStack_9 = (pDVar32->host_enumerator).dictionary;
    iStack_10 = (pDVar32->host_enumerator).next;
    iStack_11 = (pDVar32->host_enumerator).stamp;
    iStack_12 = (pDVar32->host_enumerator).current.key;
    pOStack_6 = (pDVar32->host_enumerator).current.value;
    uStack_1 = 0;
    while (cVar33 = func_?(), cVar33 != '\0') {
      pMStack_34 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
      bVar35 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,MVOverlapResult]::Dictionary_2_System_Int32_MVOverlapResult__ContainsKey
                        ((Dictionary_2_System_Int32_MVOverlapResult_ *)pDStack_24,
                         (int32_t)pMStack_34,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                        );
      if (bVar35 == 0) {
        if (pDVar29 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pDVar29,(UIPushOption__Enum)pMStack_34,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    pDVar25 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0;
    pDStack_22 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0;
    *piStack_23 = 0xa4;
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_8 != 0) goto code_?;
    if (*piStack_23 == 0xa4) {
      pDVar25 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
      pDStack_22 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
    }
    if (pDStack_30 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
    goto code_?;
    pLVar36 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff4c,
                        (List_1_UnityEngine_Color32_ *)pDStack_30,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    CStack_14.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar36->l;
    CStack_14.monitor = (MonitorData *)pLVar36->next;
    CStack_14.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar36->ver;
    CStack_14.fields.syncRoot = (Object *)(pLVar36->current).rgba;
    uStack_1 = 2;
    while (cVar33 = func_?(), piVar37 = piStack_23, cVar33 != '\0') {
      pOVar26 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_14,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                         );
      pDVar28 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).stuckObjects;
      if (pDVar28 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (pDVar28,(int32_t)pOVar26,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                );
    }
    pDVar29 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
             ((int)&pDVar25->klass + 1);
    piStack_23[(int)pDVar29] = 0xe7;
    uStack_1 = 0xffffffff;
    pDStack_30 = pDVar29;
    pDStack_22 = pDVar29;
    func_?();
    if (iStack_8 != 0) goto code_?;
    if (((pDVar29 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff)
        && (piVar37[(int)pDVar29] == 0xe7)) && (-1 < (int)pDVar29)) {
      pDStack_30 = pDVar25;
      pDStack_22 = pDVar25;
    }
    if (pDStack_24 ==
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) goto code_?;
    pDVar38 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
              TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
              Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                          *)&stack0xffffff44,
                         (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                          *)pDStack_24,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                        );
    IStack_16.klass = (InputToPlayerMovementAndroid__Class *)pDVar38->dictionary;
    IStack_16.monitor = (MonitorData *)pDVar38->next;
    IStack_16.fields._0_4_ = pDVar38->stamp;
    IStack_16.fields.direction.x = (float)(pDVar38->current).key.tileX;
    IStack_16.fields.direction._4_8_ = *(undefined8 *)&(pDVar38->current).key.tileZ;
    uStack_1 = 4;
    while (cVar33 = func_?(), piVar37 = piStack_23, pDVar25 = pDStack_30, cVar33 != '\0') {
      pVVar39 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          ((Vector3 *)&stack0xffffff50,&IStack_16,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                          );
      pDVar25 = (this->fields).stuckObjects;
      uStack_7._0_4_ = pVVar39->x;
      uStack_7._4_4_ = pVVar39->y;
      fStack_13 = pVVar39->z;
      iVar40 = func_?();
      if (pDVar25 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
      goto code_?;
      bVar35 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar25,iVar40,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                        );
      if (bVar35 == 0) {
        pDStack_31 = (this->fields).stuckObjects;
        iStack_41 = func_?();
        overlapResult = (MVOverlapResult)func_?();
        pMStack_34 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
        MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                  (pMStack_34,overlapResult,(MethodInfo *)0x0);
        if (pDStack_31 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDStack_31,iStack_41,
                   (Object *)pMStack_34,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                  );
      }
      else {
        pDVar28 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).stuckObjects;
        iVar40 = func_?();
        if (pDVar28 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        pTVar42 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar28,iVar40,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                            );
        uVar43 = func_?();
        if (pTVar42 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
        (pTVar42->fields).m_patchSize.y = (float)(int)uVar43;
        (pTVar42->fields).m_patchSize.z = (float)(int)((ulonglong)uVar43 >> 0x20);
      }
    }
    pDVar29 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
             ((int)&pDStack_30->klass + 1);
    piStack_23[(int)pDVar29] = 0x174;
    uStack_1 = 0xffffffff;
    pDStack_22 = pDVar29;
    func_?();
    if (iStack_8 == 0) {
      if (((pDVar29 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
                      0xffffffff) && (piVar37[(int)pDVar29] == 0x174)) && (-1 < (int)pDVar29)) {
        pDStack_22 = pDVar25;
        pDVar29 = pDVar25;
      }
      if (pDStack_24 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDStack_24,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                  );
        pDVar25 = (this->fields).stuckObjects;
        if ((pDVar25 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) &&
           (this_01 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Values
                                ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar25,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                ),
           this_01 !=
           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
          pDVar32 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                               *)&stack0xffffff48,this_01,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                             );
          pDStack_18 = (pDVar32->host_enumerator).dictionary;
          iStack_19 = (pDVar32->host_enumerator).next;
          iStack_20 = (pDVar32->host_enumerator).stamp;
          iStack_21 = (pDVar32->host_enumerator).current.key;
          pOStack_15 = (pDVar32->host_enumerator).current.value;
          uStack_1 = 6;
          do {
            cVar33 = func_?();
            if (cVar33 == '\0') {
              piStack_23[(int)((int)&pDVar29->klass + 1)] = 0x1cd;
              goto code_?;
            }
            this_02 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
            if (this_02 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
            fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
          } while ((fVar27 - (this_02->fields).stuckTime < _UNK_?) ||
                  (bVar35 = MVRigidBody+StuckEvaluator+StuckObject::
                           MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                     (this_02,(MethodInfo *)0x0), bVar35 != 0));
          bStack_17 = 1;
          piStack_23[(int)((int)&pDVar29->klass + 1)] = 0x1cf;
code_?:
          piVar37 = piStack_23;
          puVar5 = (undefined1 *)((int)&pDVar29->klass + 1);
          uStack_1 = 0xffffffff;
          func_?();
          if (iStack_8 != 0) goto code_?;
          if ((puVar5 != (undefined1 *)0xffffffff) && (piVar37[(int)puVar5] == 0x1cf))
          goto code_?;
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar44 = (code *)swi(3);
  bVar35 = (*pcVar44)();
  return bVar35;
}


/* MVRigidBody+StuckEvaluator(Func`1[System.Collections.Generic.List`1[MVOverlapResult]]) */

void Assembly-CSharp.dll::MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
               (MVRigidBody_StuckEvaluator *this,
               Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *getOverlappingObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>;
  this_00 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dictionary__
            );
  (this->fields).stuckObjects = this_00;
  (this->fields).updateInterval = 0.2;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).updateTime = fVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).getOverlappingObjects = getOverlappingObjects;
  return;
}

