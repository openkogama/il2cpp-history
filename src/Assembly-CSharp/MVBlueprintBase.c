
/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Clone
          (MVBlueprintBase *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  uStack_6 = 0;
  _Stack_18.dummy = (void *)0x0;
  _Stack_20.dummy = (void *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  pIStack_8 = (Il2CppImage *)0xffffffff;
  piStack_9 = (int *)&stack0xffffff80;
  puStack_4 = &stack0xffffff80;
  pMVar10 = MVGroup::MVGroup_Clone
                     ((MVGroup *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,worldObjects,
                      prototypes,(MethodInfo *)0x0);
  if (pMVar10 == (MVWorldObjectClient *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar11 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((pMVar10->klass->_1).naturalAligment < bVar11) ||
       ((MVBlueprintBase__Class *)(pMVar10->klass->_1).typeHierarchy[bVar11 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    pMVar13 = (MVWorldObjectClient *)0x0;
    if (bVar12) {
      pMVar13 = pMVar10;
    }
    if (pMVar13 == (MVWorldObjectClient *)0x0) {
      func_?();
      goto code_?;
    }
    this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)pMVar13[1].fields._.id;
    pMStack_14 = pMVar13;
    if (this_00 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = pIStack_3;
      return pMVar13;
    }
    uStack_6 = 2;
    piVar15 = (int *)func_?();
    if (piVar15 == (int *)0x0) goto code_?;
    pSVar16 = (String *)(**(code **)(*piVar15 + 0xd8))();
    puVar17 = (ushort *)func_?();
    uStack_6 = (uint)*puVar17;
    if (this_00 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) goto code_?;
    bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,pSVar16,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar18 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_children_map,(MethodInfo *)0x0);
      goto code_?;
    }
    _Stack_20.__klassIndex = 2;
    piVar15 = (int *)func_?();
    if (piVar15 == (int *)0x0) goto code_?;
    key = (Type *)(**(code **)(*piVar15 + 0xd8))();
    puVar17 = (ushort *)func_?();
    _Stack_20.__klassIndex._2_2_ = 0;
    _Stack_20.__klassIndex._0_2_ = *puVar17;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
    Dictionary_2_System_Type_Pool__get_Item
              ((Dictionary_2_System_Type_Pool_ *)this_00,key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
              );
    this_02 = (Dictionary_2_System_String_Theme_ *)func_?();
    this_03 = (Dictionary_2_System_String_Theme_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pDStack_19 = this_03;
    pIVar20 = (Il2CppImage *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)pIVar20,
               MethodInfo__System__Collections__Generic__List<System::Object>__List__);
    pIStack_21 = pIVar20;
    if ((this_02 == (Dictionary_2_System_String_Theme_ *)0x0) ||
       (this_04 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)this_02,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                            ),
       this_04 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) goto code_?;
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&stack0xffffffa0,
               (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
               this_04,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
              );
    pIStack_1 = (Il2CppClass *)0x0;
    while (cVar22 = func_?(), cVar22 != '\0') {
      item = func_?();
      if (pIVar20 == (Il2CppImage *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pIVar20,item,
                 MethodInfo__System__Collections__Generic__List<System::Object>__Add_System__Object_
                );
    }
    prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0;
    *piStack_9 = 0xac;
    pIStack_1 = (Il2CppClass *)0xffffffff;
    func_?();
    if (_Stack_18.dummy == (void *)0x0) {
      if (*piStack_9 == 0xac) {
        prototypes = (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0xffffffff;
      }
      if (pIVar20 != (Il2CppImage *)0x0) {
        pLVar23 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__GetEnumerator
                            ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffa4,
                             (List_1_UnityEngine_Color32_ *)pIVar20,
                             MethodInfo__System__Collections__Generic__List<System::Object>__GetEnumerator__
                            );
        CStack_7.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar23->l;
        CStack_7.monitor = (MonitorData *)pLVar23->next;
        CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar23->ver;
        CStack_7.fields.syncRoot = (Object *)(pLVar23->current).rgba;
        pIStack_1 = (Il2CppClass *)0x2;
        while (cVar22 = func_?(), cVar22 != '\0') {
          value = (Theme *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     (&CStack_7,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Object>__get_Current__
                                     );
          if ((((cloneBookkeeping == (CloneBookkeeping *)0x0) ||
               (this_01 = (cloneBookkeeping->fields).worldObjectIdsMaps,
               this_02 == (Dictionary_2_System_String_Theme_ *)0x0)) ||
              (pPVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   ((Dictionary_2_System_Type_Pool_ *)this_02,(Type *)value,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), this_01 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) ||
             (pPVar24 == (Pool *)0x0)) goto code_?;
          if ((pPVar24->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar25 = (int32_t *)func_?();
          pIVar20 = (Il2CppImage *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                              (this_01,*piVar25,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                              );
          pIStack_8 = pIVar20;
          value_00 = (Theme *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    (this_02,(String *)value,value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          CStack_7.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&pIStack_21;
          pIStack_21 = pIVar20;
          pSVar16 = (String *)func_?();
          if (this_03 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
          Dictionary_2_System_String_Theme__set_Item
                    (this_03,pSVar16,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        piStack_9[(int)((int)&prototypes->klass + 1)] = 0x11b;
        pIStack_1 = (Il2CppClass *)0xffffffff;
        func_?();
        if (_Stack_18.dummy != (void *)0x0) goto code_?;
        if (pMVar13 != (MVWorldObjectClient *)0x0) {
          pMVar13[1].fields._.itemId = (int32_t)this_03;
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  pMVar10 = (MVWorldObjectClient *)(*pcVar26)();
  return pMVar10;
}


/* Void Compare(MVWorldObjectClient, Boolean, Int32 ByRef, Int32 ByRef) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Compare
               (MVBlueprintBase *this,MVWorldObjectClient *wo,bool visibleCubesOnly,
               int32_t *matchingCubeCount,int32_t *investigatedCubeCount,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_4 = (MethodInfo *)&stack0xffffffa4;
  func_?();
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  pOVar5 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
           Object,System::Object]::
           Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *
                      )wo,(MethodInfo *)0x0);
  pOVar6 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
           Object,System::Object]::
           Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *
                      )this,(MethodInfo *)0x0);
  if (pOVar5 != pOVar6) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Trying_to_compare_different_type,(MethodInfo *)0x0);
  }
  bVar7 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
  if (((wo->klass->_1).naturalAligment < bVar7) ||
     ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[bVar7 - 1] !=
      TypeInfo__MVBlueprintBase)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  pMVar9 = (MVWorldObjectClient *)0x0;
  if (bVar8) {
    pMVar9 = wo;
  }
  if (pMVar9 == (MVWorldObjectClient *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Not_a_blue_print,(MethodInfo *)0x0);
  }
  bVar7 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
  if (((wo->klass->_1).naturalAligment < bVar7) ||
     ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[bVar7 - 1] !=
      TypeInfo__MVBlueprintBase)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  this_03 = (MVBlueprintBase *)0x0;
  if (bVar8) {
    this_03 = (MVBlueprintBase *)wo;
  }
  if (this_03 == (MVBlueprintBase *)0x0) goto code_?;
  pDVar10 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((pDVar10 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pDVar10 = (Dictionary_2_System_Type_Pool_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (pDVar10,(Type *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pDVar10 == (Dictionary_2_System_Type_Pool_ *)0x0)) {
code_?:
    func_?();
    func_?();
  }
  else {
    bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar10->klass->_1).naturalAligment < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar10->klass->_1).typeHierarchy[bVar7 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    this_00 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar8) {
      this_00 = pDVar10;
    }
    if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pDVar11 = (Dictionary_2_WinningConditionType_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_00,(Type *)StringLiteral_ChildrenMap,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar11 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
        bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar11->klass->_1).naturalAligment < bVar7) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar11->klass->_1).typeHierarchy[bVar7 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        this_01 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
        if (bVar8) {
          this_01 = pDVar11;
        }
        if (this_01 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
        Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                   &stack0xffffffb0,this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                  );
        uStack_1 = 0;
        while( true ) {
          cVar12 = func_?();
          if (cVar12 == '\0') {
            pMStack_4->methodPointer = (Il2CppMethodPointer)0xe1;
            uStack_1 = 0xffffffff;
            func_?();
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          LevelRewardsManager::LevelRewardsManager_get_NextReward
                    ((LevelRewardsManager *)&stack0xffffffc4,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                    );
          pMStack_4 = 
          MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
          ;
          pSVar13 = (String *)func_?();
          pSVar14 = (String *)0x0;
          if (pSVar13 != (String *)0x0) break;
code_?:
          pMVar9 = MVBlueprintBase_GetChild(this,pSVar14,(MethodInfo *)0x0);
          pSVar14 = (String *)func_?();
          if (this_03 == (MVBlueprintBase *)0x0) goto code_?;
          pSVar13 = (String *)0x0;
          if (pSVar14 != (String *)0x0) {
            if (pSVar14->klass == TypeInfo__System__String) {
              pSVar13 = pSVar14;
            }
            if (pSVar13 == (String *)0x0) goto code_?;
          }
          this_02 = MVBlueprintBase_GetChild(this_03,pSVar13,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClient *)0x0) {
            pOVar5 = System.Core.dll::System::Linq::
                     Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]
                     ::
                     Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                 *)this_02,(MethodInfo *)0x0);
            if (pMVar9 == (MVWorldObjectClient *)0x0) goto code_?;
            pOVar6 = System.Core.dll::System::Linq::
                     Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]
                     ::
                     Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                                 *)pMVar9,(MethodInfo *)0x0);
            if (pOVar5 == pOVar6) {
              func_?();
            }
          }
        }
        if (pSVar13->klass == TypeInfo__System__String) {
          pSVar14 = pSVar13;
        }
        if (pSVar14 != (String *)0x0) goto code_?;
code_?:
        func_?();
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_CompareWithKoGaMaPackage
               (MVBlueprintBase *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  this_00 = (this->fields).childIdMap;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                        ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                        );
    if (this_02 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffb8,
                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                 this_02,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        cVar4 = func_?();
        if (cVar4 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          bVar5 = MVBlueprintBase_CompareWorldObjectsInChildrenMap
                            (this,wo,koGaMaPackageClient,(List_1_System_String_ *)this_01,
                             insertedByProfileId,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return bVar5;
        }
        piVar6 = (int *)func_?();
        item = (int *)0x0;
        if (piVar6 != (int *)0x0) {
          if ((String__Class *)*piVar6 == TypeInfo__System__String) {
            item = piVar6;
          }
          if (item == (int *)0x0) goto code_?;
        }
        if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)item,
                   MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  );
      } while( true );
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Boolean CompareWorldObjectsInChildrenMap(MVWorldObjectClient, KoGaMaPackageClient,
   List`1[System.String], Int32 ByRef) */

bool Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_CompareWorldObjectsInChildrenMap
               (MVBlueprintBase *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,List_1_System_String_ *compareChildren,
               int32_t *insertedByProfileId,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  message = (KoGaMaPackageClient *)0x0;
  piVar4 = (int32_t *)&stack0xffffffb0;
  func_?();
  if (wo == (MVWorldObjectClient *)0x0) {
code_?:
    func_?();
  }
  else {
    pTVar5 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
    pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if (pTVar5 != pTVar6) {
      pTVar5 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
      pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar7 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_Types_does_not_match_this__0__an,(Object *)pTVar5,
                          (Object *)pTVar6,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar7,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    bVar8 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar8) ||
       ((MVBlueprintBase__Class *)(wo->klass->_1).typeHierarchy[bVar8 - 1] !=
        TypeInfo__MVBlueprintBase)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    this_00 = (MVBlueprintBase *)0x0;
    if (bVar9) {
      this_00 = (MVBlueprintBase *)wo;
    }
    if (this_00 == (MVBlueprintBase *)0x0) goto code_?;
    if (compareChildren == (List_1_System_String_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffbc,
               (List_1_UnityEngine_Color32_ *)compareChildren,
               MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__);
    uStack_1 = 0;
    do {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *piVar4 = 0xaf;
        goto code_?;
      }
      pSVar7 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          &stack0xffffffcc,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                         );
      if (this_00 == (MVBlueprintBase *)0x0) goto code_?;
      pMVar11 = MVBlueprintBase_GetChild(this_00,pSVar7,(MethodInfo *)0x0);
      if (pMVar11 == (MVWorldObjectClient *)0x0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        message = (KoGaMaPackageClient *)
                  mscorlib.dll::System::String::String_Format
                            (StringLiteral_otherChild__0__is_null,(Object *)pSVar7,(MethodInfo *)0x0
                            );
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        piVar4 = (int *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        *piVar4 = 0xb1;
        goto code_?;
      }
      pMVar11 = MVBlueprintBase_GetChild(this,pSVar7,(MethodInfo *)0x0);
      if (pMVar11 == (MVWorldObjectClient *)0x0) goto code_?;
      message = koGaMaPackageClient;
      piVar4 = insertedByProfileId;
      cVar10 = func_?();
    } while (cVar10 != '\0');
    *piVar4 = 0xb1;
code_?:
    uStack_1 = 0xffffffff;
    func_?();
    if (message == (KoGaMaPackageClient *)0x0) {
      if (*piVar4 != 0xb1) {
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* MVWorldObjectClient GetChild(String) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_GetChild
          (MVBlueprintBase *this,String *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).childIdMap;
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar1,child,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Format_1
                          (StringLiteral_Child_with_name__0__not_found_in,(Object *)child,
                           (Object *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return (MVWorldObjectClient *)0x0;
    }
    pDVar1 = (this->fields).childIdMap;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar1,(Type *)child,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar3 != (Pool *)0x0) {
        if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar4 = (int32_t *)func_?();
          pMVar5 = MVGroup::MVGroup_GetChild((MVGroup *)this,*piVar4,(MethodInfo *)0x0);
          return pMVar5;
        }
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar5;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_Initialize
               (MVBlueprintBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  puStack_6 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Color32_ *)
            MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              (&LStack_7,this_00,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    uStack_1 = 0;
    while( true ) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        *puStack_6 = 0x97;
        uStack_1 = 0xffffffff;
        func_?(&stack0xffffffc4,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_01 = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                           &stack0xffffffc4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                          );
      unaff_ESI = 0;
      if (this_01 == (MVWorldObjectClient *)0x0) break;
      bVar9 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((this_01->klass->_1).naturalAligment < bVar9) ||
         ((MVCubeModelInstance__Class *)(this_01->klass->_1).typeHierarchy[bVar9 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      pMVar11 = (MVWorldObjectClient *)0x0;
      if (bVar10) {
        pMVar11 = this_01;
      }
      if (((pMVar11 != (MVWorldObjectClient *)0x0) &&
          (((this->fields)._._.interactionFlags & 0x4000) != 0)) &&
         (IVar12 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                            (this_01,(MethodInfo *)0x0),
         (IVar12 & InteractionFlags__Enum_CanAddToInventory) == InteractionFlags__Enum_CanRespawn)) {
        uVar13 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
        *(uint *)&(this->fields)._._.interactionFlags =
             (uint)(this->fields)._._.interactionFlags & 0xffffbfff;
        *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar13;
      }
      IVar12 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                        (this_01,(MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                (this_01,IVar12 & (InteractionFlags__Enum_CanEnterPlay|
                                  InteractionFlags__Enum_CanEarnGamePointsMinor|
                                  InteractionFlags__Enum_CanEarnGamePoints|
                                  InteractionFlags__Enum_CanUseGameRank|
                                  InteractionFlags__Enum_GlobalSounds|
                                  InteractionFlags__Enum_CanCloneRoot|
                                  InteractionFlags__Enum_CanUseTeam|InteractionFlags__Enum_Sounds|
                                  InteractionFlags__Enum_TranslatbleXZ2D|
                                  InteractionFlags__Enum_CanUseStars|
                                  InteractionFlags__Enum_CanUseLevel|
                                  InteractionFlags__Enum_CanUseGameCoins|
                                  InteractionFlags__Enum_CantAddChildren|
                                  InteractionFlags__Enum_IsUsable|InteractionFlags__Enum_IsPreview|
                                  InteractionFlags__Enum_CanResetLogic|
                                  InteractionFlags__Enum_HasSettings|InteractionFlags__Enum_CanClone
                                  |InteractionFlags__Enum_CanEdit|
                                  InteractionFlags__Enum_NotTranslatbleXZ|
                                  InteractionFlags__Enum_NotTranslatbleY|
                                  InteractionFlags__Enum_CanRotateZ|
                                  InteractionFlags__Enum_CanRotateY|
                                  InteractionFlags__Enum_CanRotateX|
                                  InteractionFlags__Enum_DontPushGroupToSelectionStack|
                                  InteractionFlags__Enum_NotUserTransformable|
                                  InteractionFlags__Enum_SelectionRequiresEditGroup|
                                  InteractionFlags__Enum_DirectlySelectable|
                                  InteractionFlags__Enum_IsTerrain|
                                  InteractionFlags__Enum_HasCubeModel|
                                 InteractionFlags__Enum_Selectable),method_00);
    }
  }
  func_?();
  func_?(unaff_ESI,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void MapDataToFields() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_MapDataToFields
               (MVBlueprintBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_4 = (undefined *)0x0;
  stack0xffffffe0 = 0;
  ppuStack_5 = (undefined **)&stack0xffffffa8;
  func_?();
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar6 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_01,(Type *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      pDVar8 = pDVar7;
      if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((((Dictionary_2_System_Type_Pool___Class *)pDVar7->klass)->_1).naturalAligment < bVar9)
           || ((Dictionary_2_System_Object_System_Object___Class *)
               (((Dictionary_2_System_Type_Pool___Class *)pDVar7->klass)->_1).typeHierarchy
               [bVar9 - 1] !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pDVar8 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar10) {
          pDVar8 = pDVar7;
        }
        if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      (this->fields).blueprintData = pDVar8;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar8,
                            (Type *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        pDVar8 = pDVar7;
        if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((((Dictionary_2_WinningConditionType_System_Object___Class *)pDVar7->klass)->_1).
               naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (((Dictionary_2_WinningConditionType_System_Object___Class *)pDVar7->klass)->_1).
              typeHierarchy[bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          pDVar8 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (bVar10) {
            pDVar8 = pDVar7;
          }
          if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        }
        (this->fields).childIdMap = pDVar8;
        if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
          Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                     &stack0xffffffb4,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                    );
          uStack_1 = 0;
          while( true ) {
            _puStack_24 = (KeyValuePair_2_System_Int32_System_Int32_)
                          CONCAT44(&stack0xffffffc8,&UNK_?);
            cVar11 = func_?();
            if (cVar11 == '\0') break;
            _puStack_24 = (KeyValuePair_2_System_Int32_System_Int32_)
                          CONCAT44((LevelRewardsManager *)&stack0xffffffc8,&UNK_?);
            _puStack_24 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                    ((LevelRewardsManager *)&stack0xffffffc8,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                    );
            pDVar8 = (this->fields).idChildMap;
            key = (String *)func_?();
            ppuStack_5 = &puStack_4;
            value = (Theme *)func_?();
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)pDVar8,key,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          *ppuStack_5 = (undefined *)0xab;
          uStack_1 = 0xffffffff;
          _puStack_24 = (KeyValuePair_2_System_Int32_System_Int32_)
                        CONCAT44(&stack0xffffffc8,&UNK_?);
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  stack0xffffffe0 = 0;
  puStack_4 = (undefined *)unaff_ESI;
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase_OnDataUpdate
               (MVBlueprintBase *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_2 = (undefined *)0x0;
  stack0xffffffe8 = 0;
  ppuStack_3 = (undefined **)&stack0xffffffb0;
  func_?();
  this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_4,(MethodInfo *)0x0);
  if (this_01 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_01,StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uVar1;
      return;
    }
    pDVar6 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_4,(MethodInfo *)0x0);
    if (pDVar6 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pDVar7 = (Dictionary_2_System_Type_Pool_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (pDVar6,(Type *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
      ;
      pDVar6 = pDVar7;
      if (pDVar7 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar7->klass->_1).naturalAligment < bVar8) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar7->klass->_1).typeHierarchy[bVar8 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        pDVar6 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar9) {
          pDVar6 = pDVar7;
        }
        if (pDVar6 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      }
      (in_stack_4->fields).mvMovingPlatformNodePrefab = (GameObject *)pDVar6;
      if (pDVar6 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pDVar10 = (Dictionary_2_WinningConditionType_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar6,(Type *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        unaff_ESI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        this_02 = pDVar10;
        if (pDVar10 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
          bVar8 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar10->klass->_1).naturalAligment < bVar8) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar10->klass->_1).typeHierarchy[bVar8 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          this_02 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
          if (bVar9) {
            this_02 = pDVar10;
          }
          if (this_02 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0)
          goto code_?;
        }
        (in_stack_4->fields).mvObjectEnablerPrefab = (MVObjectEnablerObject *)this_02;
        if (this_02 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
          Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                    ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                     &stack0xffffffbc,this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                    );
          while( true ) {
            _puStack_1c = (KeyValuePair_2_System_Int32_System_Int32_)
                          CONCAT44(&stack0xffffffd0,&UNK_?);
            cVar11 = func_?();
            if (cVar11 == '\0') break;
            _puStack_1c = (KeyValuePair_2_System_Int32_System_Int32_)
                          CONCAT44((LevelRewardsManager *)&stack0xffffffd0,&UNK_?);
            _puStack_1c = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                    ((LevelRewardsManager *)&stack0xffffffd0,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                    );
            this_00 = (Dictionary_2_System_String_Theme_ *)
                      (in_stack_4->fields).mvKillLimitPrefab;
            key = (String *)func_?();
            ppuStack_3 = &puStack_2;
            value = (Theme *)func_?();
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
            if (this_00 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      (this_00,key,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          *ppuStack_3 = (undefined *)0xab;
          _puStack_1c = (KeyValuePair_2_System_Int32_System_Int32_)
                        CONCAT44(&stack0xffffffd0,&UNK_?);
          func_?();
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  stack0xffffffe8 = 0;
  puStack_2 = (undefined *)unaff_ESI;
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).idChildMap = this_00;
  MVGroup::MVGroup__ctor_2((MVGroup *)this,data,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase_MapDataToFields(this,(MethodInfo *)0x0);
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor_1
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).idChildMap = this_00;
  MVGroup::MVGroup__ctor_1((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase_MapDataToFields(this,(MethodInfo *)0x0);
  return;
}


/* MVBlueprintBase(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBlueprintBase::MVBlueprintBase__ctor_2
               (MVBlueprintBase *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).idChildMap = this_00;
  MVGroup::MVGroup__ctor((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase_MapDataToFields(this,(MethodInfo *)0x0);
  return;
}

