
/* Void PartialDataRemove(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialDataRemove
               (MVGameOptionDataObject *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffffc);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x13,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      piVar2 = *(int **)(arg1 + 0x10);
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
        func_?();
      }
      pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (piVar2 != (int *)0x0) {
        iVar5 = *piVar2;
        pSStack3 = *(SendOptions__Class **)(iVar5 + 0x114);
        puStack6._0_1_ = (pSVar4->SendReliable).Encrypt;
        puStack6._1_1_ = (pSVar4->SendReliable).Channel;
        puStack6._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
        (**(code **)(iVar5 + 0x110))();
        return;
      }
    }
    pSStack3 = (SendOptions__Class *)0x0;
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PartialDataUpdate(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialDataUpdate
               (MVGameOptionDataObject *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffffc);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x12,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      piVar2 = *(int **)(arg1 + 0x10);
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
        func_?();
      }
      pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (piVar2 != (int *)0x0) {
        iVar5 = *piVar2;
        pSStack3 = *(SendOptions__Class **)(iVar5 + 0x114);
        puStack6._0_1_ = (pSVar4->SendReliable).Encrypt;
        puStack6._1_1_ = (pSVar4->SendReliable).Channel;
        puStack6._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
        (**(code **)(iVar5 + 0x110))();
        return;
      }
    }
    pSStack3 = (SendOptions__Class *)0x0;
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialRemoveFromWOData
               (MVGameOptionDataObject *this,
               Dictionary_2_System_Object_System_Object_ *entriesToRemove,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     (entriesToRemove,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  this_00 = (PrefabPool *)
            mscorlib.dll::System::String::String_Concat_2
                      (StringLiteral_entriesToRemoveu000A,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)this_00,(MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     (pDVar2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_data_beforeu000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            (pDVar2,(Dictionary_2_System_Object_System_Object_ *)0x0,1,(MethodInfo *)0x0);
  pPVar3 = this_00->klass;
  uStack4._0_1_ = pPVar3[2]._1.typeHierarchyDepth;
  uStack4._1_1_ = pPVar3[2]._1.genericRecursionDepth;
  uStack4._2_1_ = pPVar3[2]._1.rank;
  uStack4._3_1_ = pPVar3[2]._1.minimumAlignment;
  pPStack5 = this_00;
  (**(code **)&pPVar3[2]._1.interfaces_count)();
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     (pDVar2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_data_afteru000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialUpdateWOData
               (MVGameOptionDataObject *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     (woData,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  this_00 = (PrefabPool *)
            mscorlib.dll::System::String::String_Concat_2
                      (StringLiteral_woDatau000A,pSVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)this_00,(MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     (pDVar2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_data_beforeu000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
            ((MVWorldObjectClient *)this_00,(Dictionary_2_System_Object_System_Object_ *)0x0,
             (MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     (pDVar2,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_data_afteru000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void RemoveSetting(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_RemoveSetting
               (MVGameOptionDataObject *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 == (SettingsManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
  pSVar4 = (pSVar1->fields).settingsReporter;
  if (pSVar4 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    target = (pSVar4->fields).DeltaRemovalData;
    if (target == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      target = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)target,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      (pSVar4->fields).DeltaRemovalData = target;
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (target,pDVar3,(MethodInfo *)0x0);
    this_00 = (PrefabPool *)(pSVar4->fields).worldObject;
    if (this_00 != (PrefabPool *)0x0) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
                (pDVar3,(pSVar4->fields).DeltaRemovalData,(MethodInfo *)0x0);
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (pSVar4->fields).OnValueRemovedLocal;
      if (this_01 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_01,(Dictionary_2_System_String_System_Object_ *)
                           (pSVar4->fields).DeltaRemovalData,
                   MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                  );
      }
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Submit() */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_Submit
               (MVGameOptionDataObject *this,MethodInfo *method)

{
  this_00 = (this->fields).settingsManager;
  if (this_00 == (SettingsManager *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager::
  SettingsManager_Submit(this_00,(MethodInfo *)0x0);
  PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  uVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = register0x00000010;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  KStack_4.key = 0;
  KStack_4.value = 0;
  CStack_5.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_5.monitor = (MonitorData *)0x0;
  CStack_5.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_5.fields.syncRoot = (Object *)0x0;
  piVar6 = (int *)&stack0xffffff94;
  func_?();
  uStack_7 = 0xffffffff;
  pDVar8 = (Dictionary_2_System_Object_System_Object___Class *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)pDVar8,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pDVar9 = pDVar8;
  pDStack_10 = pDVar8;
  if (in_stack_11 ==
      (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
       *)0x0) {
code_?:
    pDVar3 = (Dictionary_2_System_Object_System_Object___Class *)func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)auStack_12
               ,(Dictionary_2_WinningConditionType_System_Object_ *)in_stack_11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
              );
    while (cVar13 = func_?(), cVar13 != '\0') {
      KStack_4 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffffa0,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      piVar14 = (int *)func_?();
      pDVar9 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (piVar14 != (int *)0x0) {
        bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((*(byte *)(*piVar14 + 0xb8) < bVar15) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*piVar14 + 100) + -4 + (uint)bVar15 * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        piVar17 = (int *)0x0;
        if (bVar16) {
          piVar17 = piVar14;
        }
        if (piVar17 != (int *)0x0) {
          func_?();
          target = (Dictionary_2_System_Object_System_Object_ *)func_?();
          bVar18 = MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
                            (target,(MethodInfo *)0x0);
          if (bVar18 != 0) {
            func_?();
            method_00 = 
            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
            if (pDVar8 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
            goto code_?;
            item = func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add((List_1_UIPushOption_ *)pDVar8,item,method_00);
          }
        }
      }
    }
    pDVar19 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    *piVar6 = 0x66;
    func_?();
    pDVar9 = pDVar19;
    if (pDVar3 == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      if (*piVar6 == 0x66) {
        pDVar19 = (Dictionary_2_System_Object_System_Object___Class *)0xffffffff;
      }
      pDVar9 = pDVar19;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__GetEnumerator
                            ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_12 + 4),
                             (List_1_UnityEngine_Color32_ *)pDVar8,
                             MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                            );
        CStack_5.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar20->l;
        CStack_5.monitor = (MonitorData *)pLVar20->next;
        CStack_5.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar20->ver;
        CStack_5.fields.syncRoot = (Object *)(pLVar20->current).rgba;
        pDVar9 = pDVar3;
        while (cVar13 = func_?(), cVar13 != '\0') {
          pDVar8 = pDVar9;
          key = (String *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_5,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                          );
          pDVar9 = pDVar19;
          if (in_stack_11 ==
              (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                    (in_stack_11,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
          pDVar9 = pDVar8;
        }
        piVar6[(int)((int)&(pDVar19->_0).image + 1)] = 0x99;
        func_?(&CStack_5,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                       );
        if (pDVar9 != (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
        if (in_stack_11 !=
            (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)0x0) {
          System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
          Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
          Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                    ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                      *)in_stack_11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                    );
          *unaff_FS_OFFSET = uVar2;
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(pDVar3);
code_?:
  func_?(pDVar9);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateSetting(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
               (MVGameOptionDataObject *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 == (SettingsManager *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  source = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
  pSVar3 = (pSVar1->fields).settingsReporter;
  if (pSVar3 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pDVar4 = (pSVar3->fields).DeltaData;
    if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      (pSVar3->fields).DeltaData = pDVar4;
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              (pDVar4,source,(MethodInfo *)0x0);
    this_00 = (PrefabPool *)(pSVar3->fields).worldObject;
    if (this_00 != (PrefabPool *)0x0) {
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                (pDVar4,source,(MethodInfo *)0x0);
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (pSVar3->fields).OnValueChangedLocal;
      if (this_01 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_01,(Dictionary_2_System_String_System_Object_ *)source,
                   MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                  );
      }
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVGameOptionDataObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject__ctor
               (MVGameOptionDataObject *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVWorldObjectClient);
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  dictionary = (Dictionary_2_System_Object_System_Object_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  message = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                      (dictionary,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__MVGameOptionDataObject__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__MVGameOptionDataObject__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  worldObject = 
  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter;
  commandComponents = (String__Array *)func_?();
  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsReporter::
  SettingsReporter__ctor
            ((SettingsReporter *)commandComponents,(MVWorldObject *)worldObject,
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             this_00,(Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                      *)this_01,(MethodInfo *)0x0);
  (worldObject->vtable).GetHashCode.method = (MethodInfo *)commandComponents;
  pSStack1 =
       TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager;
  this_02 = (TextCommand_Command *)func_?();
  TextCommand+Command::TextCommand_Command__ctor(this_02,commandComponents,(MethodInfo *)0x0);
  (worldObject->vtable).ToString.methodPtr = (Il2CppMethodPointer)this_02;
  return;
}


/* GameBoosterSettingsManager get_GameBoosterSettingsManager() */

GameBoosterSettingsManager *
Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
          (MVGameOptionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  commandComponents =
       (String__Array *)
       PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  this_00 = (TextCommand_Command *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingsManager
                           );
  TextCommand+Command::TextCommand_Command__ctor(this_00,commandComponents,(MethodInfo *)0x0);
  return (GameBoosterSettingsManager *)this_00;
}


/* GameOptionSettingsManager get_GameOptionSettingsManager() */

GameOptionSettingsManager *
Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
          (MVGameOptionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  commandComponents =
       (String__Array *)
       PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  this_00 = (TextCommand_Command *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager
                           );
  TextCommand+Command::TextCommand_Command__ctor(this_00,commandComponents,(MethodInfo *)0x0);
  return (GameOptionSettingsManager *)this_00;
}

