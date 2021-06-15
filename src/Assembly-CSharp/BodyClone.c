
/* Void Destroy() */

void Assembly-CSharp.dll::BodyClone::BodyClone_Destroy(BodyClone *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 == (BodyAccessoriesController *)0x0) {
    iStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_2 = -1;
  puStack_4 = &DAT_?;
  pOStack_5 = (Object__Array *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_5;
  pWStack_6 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  pWVar7 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pWVar7 = pWStack_6;
  }
  pWStack_6 = pWVar7;
  KStack_8.key = 0;
  KStack_8.value = 0;
  func_?();
  this_00 = (pBVar1->fields).accessoryLoader;
  pLStack_9 = (Link__Array *)&stack0xffffffa8;
  pWStack_6 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
  if (this_00 != (AccessoryLoader *)0x0) {
    pLStack_9 = (Link__Array *)&stack0xffffffa8;
    pWStack_6 = (WinningConditionType__Enum__Array *)&stack0xffffffa8;
    Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader_Destroy
              (this_00,(MethodInfo *)0x0);
  }
  this_01 = (pBVar1->fields).accessoryMap;
  (pBVar1->fields).accessoryLoader = (AccessoryLoader *)0x0;
  if (this_01 != (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_11,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                       );
    auStack_12._0_4_ = pDVar10->dictionary;
    auStack_12._4_4_ = pDVar10->next;
    auStack_12._8_4_ = pDVar10->stamp;
    auStack_12._12_4_ = (pDVar10->current).key;
    auStack_12._16_4_ = (pDVar10->current).value;
    iStack_2 = 0;
    while (cVar13 = func_?(), cVar13 != '\0') {
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_12,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                            );
      DStack_11.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_8;
      DStack_11.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
      ;
      this_02 = (Component_1 *)func_?();
      if (this_02 == (Component_1 *)0x0) {
        func_?();
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      (this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    pLStack_9->klass = (Link__Array__Class *)0x72;
    iStack_2 = -1;
    func_?();
    (pBVar1->fields).accessoryMap = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0
    ;
    (pBVar1->fields).accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  *unaff_FS_OFFSET = pOStack_5;
  return;
}


/* Void Initialize(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyClone::BodyClone_Initialize
               (BodyClone *this,int32_t bodyWoId,
               Dictionary_2_System_Object_System_Object_ *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
             *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this,
                          MVBodyObject_MethodInfo__UnityEngine__Component__GetComponent<MVBodyObject>__
                         );
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (this_01 !=
        (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
         *)0x0) {
      System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
      Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
      Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                (this_01,(MethodInfo *)0x0);
      this_02 = (ScaleAnimationBase *)func_?(TypeInfo__BodyAccessoriesController);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_03 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      puVar2 = &UNK_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
                );
      (this_02->fields).state = (int32_t)this_03;
      this_04 = (AccessoryLoader *)func_?();
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
                (this_04,(MethodInfo *)0x0);
      (this_02->fields).originalScale.x = (float)this_04;
      ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,in_stack_3);
      (this_02->fields).target = (Transform *)bodyWoId;
      (this_02->fields).originalScale.z = (float)puVar2;
      (this_02->fields).originalScale.y = (float)accessoryData;
      *(undefined1 *)&(this_02->fields).testState = 1;
      (this->fields).bodyAccessoriesController = (BodyAccessoriesController *)this_02;
      BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                ((BodyAccessoriesController *)this_02,1,(MethodInfo *)0x0);
      this_00 = (this->fields).bodyAccessoriesController;
      if (this_00 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                  (this_00,accessoryData,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Failed_to_get_MVBodyObject,(MethodInfo *)0x0);
  return;
}


/* Void RefreshAccessories(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyClone::BodyClone_RefreshAccessories
               (BodyClone *this,Dictionary_2_System_Object_System_Object_ *accessoryData,
               MethodInfo *method)

{
  this_01 = (this->fields).bodyAccessoriesController;
  if (this_01 == (BodyAccessoriesController *)0x0) {
    uStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_1 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff5c;
  puVar6 = &stack0xffffff5c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  pOStack_7 = (Object *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  iStack_9 = 0;
  auStack_10._20_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  pIStack_11 = (IEqualityComparer_1_WinningConditionType_ *)0x0;
  pSStack_12 = (SerializationInfo *)0x0;
  iStack_13 = 0;
  auStack_10._16_4_ = (Object *)0x0;
  MStack_14._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0x0;
  KStack_15.key = 0;
  KStack_15.value = 0;
  auStack_10._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_10._4_4_ = (Object__Array *)0x0;
  auStack_10._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_10._12_4_ = 0;
  func_?();
  (this_01->fields).accessoryData = accessoryData;
  pDStack_16 = (Dictionary_2_System_Object_System_Object_ *)0xffffffff;
  piStack_17 = (int *)&stack0xffffff5c;
  puStack_5 = &stack0xffffff5c;
  this_02 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__);
  pDVar18 = (this_01->fields).accessoryMap;
  pLStack_19 = this_02;
  if (pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
  goto code_?;
  pDVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                      &stack0xffffff68,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar18,
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                     );
  auStack_10._20_4_ = pDVar20->dictionary;
  pIStack_11 = (IEqualityComparer_1_WinningConditionType_ *)pDVar20->next;
  pSStack_12 = (SerializationInfo *)pDVar20->stamp;
  iStack_13 = (pDVar20->current).key;
  pOStack_7 = (pDVar20->current).value;
  uStack_1 = 0;
  while (cVar21 = func_?(), cVar21 != '\0') {
    KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)(auStack_10 + 0x14),
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                          );
    in_stack_22 =
         MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
    ;
    pAVar23 = (AvatarAccessory *)func_?();
    bVar24 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
                      (this_01,pAVar23,(MethodInfo *)0x0);
    if (bVar24 == 0) {
      item = func_?();
      if (this_02 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_02,item,
                 MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                );
    }
  }
  accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pDStack_16 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  *piStack_17 = 100;
  uStack_1 = 0xffffffff;
  pMVar25 = 
  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
  ;
  func_?();
  iVar26 = iStack_9;
  if (iStack_9 == 0) {
    if (*piStack_17 == 100) {
      accessoryData = (Dictionary_2_System_Object_System_Object_ *)0xffffffff;
      pDStack_16 = accessoryData;
    }
    if (this_02 == (List_1_UnityEngine_Vector4_ *)0x0) {
code_?:
      iVar26 = func_?();
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff6c,
               (List_1_UnityEngine_Color32_ *)this_02,
               MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
              );
    uStack_1 = 2;
    while( true ) {
      auStack_10._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
      ;
      auStack_10._0_4_ = &stack0xffffff88;
      cVar21 = func_?();
      if (cVar21 == '\0') break;
      pLStack_19 = (List_1_UnityEngine_Vector4_ *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              &stack0xffffff88,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__get_Current__
                             );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar18 = (this_01->fields).accessoryMap;
      if (((pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
          (pAVar23 = (AvatarAccessory *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    AccessorySlotType,System::Object]::
                    Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar18,
                               (AccessorySlotType__Enum)pLStack_19,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                              ), pAVar23 == (AvatarAccessory *)0x0)) ||
         (pMVar25 = (MethodInfo *)AvatarAccessory::AvatarAccessory_get_Transform(pAVar23,pMVar25),
         pMVar25 == (MethodInfo *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                ((Transform *)pMVar25,(Transform *)0x0,in_stack_22);
      pDVar18 = (this_01->fields).accessoryMap;
      if (pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
      goto code_?;
      in_stack_22 = (MethodInfo *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::AccessorySlotType,System
      ::Object]::Dictionary_2_MV_Common_AccessorySlotType_System_Object__Remove
                ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar18,
                 (AccessorySlotType__Enum)pLStack_19,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                );
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pAVar23,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    pDVar27 = (Dictionary_2_System_Object_System_Object_ *)((int)&accessoryData->klass + 1);
    piStack_17[(int)pDVar27] = 0x9f;
    uStack_1 = 0xffffffff;
    func_?(&stack0xffffff88,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                   );
    iVar26 = iStack_9;
    if (iStack_9 == 0) {
      if (((pDVar27 != (Dictionary_2_System_Object_System_Object_ *)0xffffffff) &&
          (piStack_17[(int)pDVar27] == 0x9f)) && (-1 < (int)pDVar27)) {
        pDVar27 = accessoryData;
      }
      accessoryData = pDVar27;
      pDVar27 = (this_01->fields).accessoryData;
      if (pDVar27 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar20 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                             *)&stack0xffffff68,
                            (Dictionary_2_WinningConditionType_System_Object_ *)pDVar27,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                           );
        auStack_10._0_4_ = pDVar20->dictionary;
        auStack_10._4_4_ = pDVar20->next;
        auStack_10._8_4_ = pDVar20->stamp;
        auStack_10._12_4_ = (pDVar20->current).key;
        auStack_10._16_4_ = (pDVar20->current).value;
        uStack_1 = 4;
        while (cVar21 = func_?(), iVar26 = iStack_9, cVar21 != '\0') {
          KStack_15 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)auStack_10,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                                );
          pSVar28 = (String *)func_?();
          pSVar29 = (String *)0x0;
          if (pSVar28 != (String *)0x0) {
            if (pSVar28->klass == TypeInfo__System__String) {
              pSVar29 = pSVar28;
            }
            if (pSVar29 == (String *)0x0) goto code_?;
          }
          pMVar25 = (MethodInfo *)0x0;
          MStack_14._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0xffffffff;
          bVar24 = mscorlib.dll::System::Int32::Int32_TryParse
                            (pSVar29,(int32_t *)&MStack_14,(MethodInfo *)0x0);
          if (bVar24 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
          }
          else {
            this_03 = (ScaleAnimationBase *)func_?();
            ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,pMVar25);
            if (this_03 == (ScaleAnimationBase *)0x0) goto code_?;
            (this_03->fields).state = (int32_t)this_01;
            (this_03->fields)._._._._.m_CachedPtr = (void *)MStack_14._._._.m_CachedPtr;
            func_?();
            this_04 = (Dictionary_2_System_Type_Pool_ *)func_?();
            pLStack_19 = (List_1_UnityEngine_Vector4_ *)0x4;
            pEVar30 = (Enum *)func_?();
            if ((pEVar30 == (Enum *)0x0) ||
               (pMVar25 = (MethodInfo *)StringLiteral_d,
               pSVar29 = mscorlib.dll::System::Enum::Enum_ToString_2
                                   (pEVar30,StringLiteral_d,(MethodInfo *)0x0),
               this_04 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      (this_04,(Type *)pSVar29,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
            pDStack_16 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            pDVar18 = (this_01->fields).accessoryMap;
            if (pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
            goto code_?;
            bVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    AccessorySlotType,System::Object]::
                    Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                              ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar18,
                               (AccessorySlotType__Enum)(this_03->fields)._._._._.m_CachedPtr,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar24 == 0) {
code_?:
              this_00 = (this_01->fields).accessoryLoader;
              pAStack_31 = (Action_1_AvatarAccessory_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)pAStack_31,(Object *)this_03,
                         MethodInfo__BodyAccessoriesController___RefreshAccessories_c__AnonStorey0____m__0_AvatarAccessory_
                         ,MethodInfo__System__Action<AvatarAccessory>__Action_System__Object__void__
                        );
              if (this_00 == (AccessoryLoader *)0x0) goto code_?;
              Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
              AccessoryLoader_LoadAccessory
                        (this_00,(String *)pDStack_16,pAStack_31,(MethodInfo *)0x0);
            }
            else {
              pDVar18 = (this_01->fields).accessoryMap;
              if ((pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
                 (pCVar32 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                            AccessorySlotType,System::Object]::
                            Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                                      ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)
                                       pDVar18,(AccessorySlotType__Enum)
                                              (this_03->fields)._._._._.m_CachedPtr,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      ),
                 pCVar32 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0))
              goto code_?;
              pAStack_31 = (Action_1_AvatarAccessory_ *)
                           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                           Json::Serialization::JsonProperty]::
                           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                     (pCVar32,(MethodInfo *)in_stack_33);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              in_stack_33 = pAStack_31;
              bVar24 = mscorlib.dll::System::String::String_op_Inequality
                                ((String *)pAStack_31,(String *)pDStack_16,(MethodInfo *)0x0);
              if (bVar24 != 0) goto code_?;
              pDVar18 = (this_01->fields).accessoryMap;
              if (pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
              goto code_?;
              bVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      AccessorySlotType,System::Object]::
                      Dictionary_2_MV_Common_AccessorySlotType_System_Object__ContainsKey
                                ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)pDVar18,
                                 (AccessorySlotType__Enum)(this_03->fields)._._._._.m_CachedPtr,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                                );
              if (bVar24 != 0) {
                pDVar18 = (this_01->fields).accessoryMap;
                if ((pDVar18 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
                   (pCVar32 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                              AccessorySlotType,System::Object]::
                              Dictionary_2_MV_Common_AccessorySlotType_System_Object__get_Item
                                        ((Dictionary_2_MV_Common_AccessorySlotType_System_Object_ *)
                                         pDVar18,(AccessorySlotType__Enum)
                                                (this_03->fields)._._._._.m_CachedPtr,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                        ),
                   pCVar32 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0))
                goto code_?;
                pAStack_31 = (Action_1_AvatarAccessory_ *)
                             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft
                             ::Json::Serialization::JsonProperty]::
                             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                       (pCVar32,pMVar25);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar24 = mscorlib.dll::System::String::String_op_Equality
                                  ((String *)pAStack_31,(String *)pDStack_16,(MethodInfo *)0x0);
                if (bVar24 != 0) {
                  pAStack_31 = (Action_1_AvatarAccessory_ *)0x3;
                  pEVar30 = (Enum *)func_?();
                  if (pEVar30 == (Enum *)0x0) goto code_?;
                  pSVar29 = mscorlib.dll::System::Enum::Enum_ToString_2
                                      (pEVar30,StringLiteral_d,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_04,(Type *)pSVar29,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
                  pfVar34 = (float *)func_?();
                  BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
                            (this_01,*pfVar34,
                             (AccessorySlotType__Enum)(this_03->fields)._._._._.m_CachedPtr,
                             (MethodInfo *)0x0);
                  uStack_35 = 5;
                  pEVar30 = (Enum *)func_?();
                  if (pEVar30 == (Enum *)0x0) goto code_?;
                  pSVar29 = mscorlib.dll::System::Enum::Enum_ToString_2
                                      (pEVar30,StringLiteral_d,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (this_04,(Type *)pSVar29,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
                  pfVar34 = (float *)func_?();
                  BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                            (this_01,*pfVar34,
                             (AccessorySlotType__Enum)(this_03->fields)._._._._.m_CachedPtr,
                             (MethodInfo *)0x0);
                }
              }
            }
          }
        }
        piStack_17[(int)((int)&accessoryData->klass + 1)] = 0x238;
        uStack_1 = 0xffffffff;
        func_?();
        if (iVar26 == 0) {
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
code_?:
    iVar26 = func_?(iVar26);
  }
  func_?(iVar26);
  pSVar28 = extraout_ECX;
code_?:
  func_?(pSVar28);
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

