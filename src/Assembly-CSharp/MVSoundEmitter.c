
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Delete
               (MVSoundEmitter *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  this_00 = (this->fields).soundLoader;
  if (this_00 != (SoundLoader *)0x0) {
    SoundLoader::SoundLoader_StopAndDestroySound(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields)._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      if (worldObjectClientManager != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (worldObjectClientManager,(this->fields)._._._.id,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Destroy
               (MVSoundEmitter *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).soundLoader != (SoundLoader *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,in_stack_1,
               MethodInfo__SoundLoader__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single GetMaxDistanceFromRangeAmbient(SoundRangeDistance) */

float Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_GetMaxDistanceFromRangeAmbient
                (SoundRangeDistance__Enum range,MethodInfo *method)

{
  if (range == SoundRangeDistance__Enum_Short) {
    return _UNK_?;
  }
  if (range != SoundRangeDistance__Enum_Medium) {
    if (range != SoundRangeDistance__Enum_Long) {
      return _UNK_?;
    }
    return _UNK_?;
  }
  return _UNK_?;
}


/* Single GetMinDistanceFromRangeAmbient(SoundRangeDistance) */

float Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_GetMinDistanceFromRangeAmbient
                (SoundRangeDistance__Enum range,MethodInfo *method)

{
  if (range == SoundRangeDistance__Enum_Short) {
    return _UNK_?;
  }
  if (range != SoundRangeDistance__Enum_Medium) {
    if (range != SoundRangeDistance__Enum_Long) {
      return _UNK_?;
    }
    return _UNK_?;
  }
  return _UNK_?;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_Initialize
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__MVSoundEmitter__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
             ,
             MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
            );
  pIVar2 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                      ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                       (Action_2_LogicInputState_LogicObjectManager_ *)pUVar1,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar2;
  this_00 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
            (this->fields).soundEmitterObject;
  if ((this_00 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) ||
     (this_03 = (SoundEmitterActiveCheck *)
                System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Int32]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                          (this_00,(MethodInfo *)0x0), this_03 == (SoundEmitterActiveCheck *)0x0))
  goto code_?;
  SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize(this_03,this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_01 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)
            (this->fields).soundEmitterObject;
  pSVar3 = (this->fields).soundLoader;
  if ((this_01 ==
       (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)
     || (value = (BitArray *)
                 System.Core.dll::System::Linq::
                 Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                 JsonSchemaType]::
                 Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                           (this_01,(MethodInfo *)0x0), pSVar3 == (SoundLoader *)0x0))
  goto code_?;
  MaterialDescription::MaterialDescription_set_SpecialProperties
            ((MaterialDescription *)pSVar3,value,(MethodInfo *)0x0);
  pSVar3 = (this->fields).soundLoader;
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,MethodInfo__MVSoundEmitter__UpdateSound__,(MethodInfo *)0x0);
  if (pSVar3 == (SoundLoader *)0x0) goto code_?;
  (pSVar3->fields).callback = (SoundLoader_UpdateSoundCallback *)pUVar1;
  this_02 = (this->fields).soundEmitterObject;
  if (this_02 == (SoundEmitterObject *)0x0) goto code_?;
  lodGameObject =
       (GameObject *)
       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
       KogamaSettingNumericBase`1[System::Single]::
       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                 ((KogamaSettingNumericBase_1_System_Single_ *)this_02,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,lodGameObject,2.0,(MethodInfo *)0x0);
  this_04 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_04 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) goto code_?;
  bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_04,StringLiteral_url,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar4 == 0) {
    pSVar3 = (this->fields).soundLoader;
    if (pSVar3 == (SoundLoader *)0x0) goto code_?;
    this_05 = (Dictionary_2_System_Type_Pool_ *)0x0;
    value_00 = (Action_1_Boolean_ *)StringLiteral_AmbientAudio_Nature_kgm_amb_fore;
    goto code_?;
  }
  pSVar3 = (SoundLoader *)&UNK_?;
  this_05 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_05 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  value_00 = (Action_1_Boolean_ *)&UNK_?;
  pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      (this_05,(Type *)StringLiteral_url,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pPVar5 == (Pool *)0x0) goto code_?;
  this_07 = (Pool *)0x0;
  if ((String__Class *)pPVar5->klass == TypeInfo__System__String) {
    this_07 = pPVar5;
  }
  if (this_07 == (Pool *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_07,(MethodInfo *)0x0);
  if ((int)pIVar7 < 1) {
    return;
  }
  pSVar8 = (this->fields).soundLoader;
  this_06 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_06 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  in_stack_9 = (SoundLoader *)StringLiteral_url;
  pMVar10 = (MethodInfo *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      (this_06,(Type *)StringLiteral_url,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pSVar8 == (SoundLoader *)0x0) goto code_?;
  in_stack_11 = (MethodInfo *)0x0;
  if (pMVar10 != (MethodInfo *)0x0) {
    if ((String__Class *)pMVar10->methodPointer == TypeInfo__System__String) {
      in_stack_11 = pMVar10;
    }
    if (in_stack_11 == (MethodInfo *)0x0) {
      func_?();
      goto code_?;
    }
  }
code_?:
  LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
            ((LockCursorManager3DMode *)pSVar3,value_00,(MethodInfo *)this_05);
  if ((this->fields).soundLoader == (SoundLoader *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar12 = (in_stack_9->fields).url;
  b = (in_stack_9->fields).currentUrl;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = mscorlib.dll::System::String::String_op_Inequality(pSVar12,b,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    pAVar13 = (in_stack_9->fields).audioSource;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    if ((in_stack_9->fields).callback != (SoundLoader_UpdateSoundCallback *)0x0) {
      if (*(SoundLoader_UpdateSoundCallback **)(in_stack_14 + 0x2c) !=
          (SoundLoader_UpdateSoundCallback *)0x0) {
        SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                  (*(SoundLoader_UpdateSoundCallback **)(in_stack_14 + 0x2c),in_stack_15
                  );
      }
      method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(in_stack_14 + 0x14)
      ;
      pcVar6 = *(code **)(in_stack_14 + 8);
      piVar16 = *(int **)(in_stack_14 + 0x10);
      if ((short)method_00[5].key == -1) {
        func_?();
      }
      cVar17 = func_?();
      if (cVar17 == '\0') {
        if (*(char *)((int)&method_00[5].key + 2) == '\0') {
          (*pcVar6)();
          return;
        }
      }
      else if (((short)method_00[5].key != -1) &&
              (((piVar16 == (int *)0x0 || ((*(uint *)(*piVar16 + 0xa0) & 0x100) == 0)) &&
               (*(int *)(in_stack_14 + 0xc) != 0)))) {
        cVar17 = func_?();
        if (cVar17 != '\0') {
          return;
        }
        cVar17 = func_?();
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
        Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                  (method_00,(MethodInfo *)method_00);
        cVar18 = func_?();
        if (cVar17 == '\0') {
          if (cVar18 != '\0') {
            mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
            Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                      (method_00,in_stack_11);
            func_?();
            return;
          }
          func_?();
          return;
        }
        if (cVar18 == '\0') {
          puVar19 = (undefined4 *)func_?();
          (*(code *)*puVar19)();
          return;
        }
        uVar20 = 0;
        uVar21 = *(ushort *)(*piVar16 + 0xb6);
        if (uVar21 != 0) {
          do {
            if (*(Object **)(*(int *)(*piVar16 + 0x58) + (uint)uVar20 * 8) == method_00[1].value)
            goto code_?;
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar21);
        }
        func_?();
code_?:
        puVar19 = (undefined4 *)func_?();
        (*(code *)*puVar19)();
        return;
      }
      (*pcVar6)();
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
        func_?();
      }
      pUVar22 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)in_stack_9,MethodInfo__SoundLoader__LoadSound__,
                 (MethodInfo *)0x0);
      pUVar23 = (Urls_OnStreamingAssetsUrlAvailable *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar22,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pUVar22 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar23 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        if (pUVar23->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar22 = pUVar23;
        }
        if (pUVar22 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar22;
      return;
    }
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    pUVar22 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)in_stack_9,MethodInfo__SoundLoader__LoadSound__,
               (MethodInfo *)0x0);
    pUVar23 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar22,(Delegate *)pUVar1,(MethodInfo *)0x0);
    pUVar22 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar23 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      if (pUVar23->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar22 = pUVar23;
      }
      if (pUVar22 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    }
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar22;
    pAVar13 = (in_stack_9->fields).audioSource;
    if (pAVar13 != (AudioSource *)0x0) {
      bVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar13,(MethodInfo *)0x0);
      if (bVar4 == 0) {
code_?:
        pSVar12 = (in_stack_9->fields).url;
        (in_stack_9->fields).currentUrl = pSVar12;
        SoundLoader::SoundLoader_Download(in_stack_9,pSVar12,(MethodInfo *)0x0);
        return;
      }
      pAVar13 = (in_stack_9->fields).audioSource;
      if (pAVar13 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                  (pAVar13,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_InputStateUpdateCallback
               (MVSoundEmitter *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((logicInputState != LogicInputState__Enum_Cold) &&
     (logicInputState != LogicInputState__Enum_Hot)) {
    pEVar1 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *
             )(this->fields).soundEmitterObject;
    if (pEVar1 == (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                   *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    x = (Object_1 *)
        System.Core.dll::System::Linq::Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::
        Json::Schema::JsonSchemaType]::
        Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                  (pEVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      bVar3 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pEVar1 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                  *)(this->fields).soundEmitterObject;
        if ((pEVar1 == (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)0x0) ||
           (pAVar4 = (AudioSource *)
                     System.Core.dll::System::Linq::
                     Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                     JsonSchemaType]::
                     Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                               (pEVar1,(MethodInfo *)0x0), pAVar4 == (AudioSource *)0x0))
        goto code_?;
        bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar4,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          MVSoundEmitter_UpdateSound(this,(MethodInfo *)0x0);
        }
      }
      bVar3 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pEVar1 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                  *)(this->fields).soundEmitterObject;
        if ((pEVar1 == (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)0x0) ||
           (pAVar4 = (AudioSource *)
                     System.Core.dll::System::Linq::
                     Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                     JsonSchemaType]::
                     Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                               (pEVar1,(MethodInfo *)0x0), pAVar4 == (AudioSource *)0x0))
        goto code_?;
        bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar4,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          MVSoundEmitter_UpdateSound(this,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_OnDataUpdate
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)pIVar1,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_00,StringLiteral_url,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 == 0) {
    this_03 = (this->fields).soundLoader;
    value = (Action_1_Boolean_ *)StringLiteral_AmbientAudio_Nature_kgm_amb_fore;
    if (this_03 == (SoundLoader *)0x0) goto code_?;
    goto code_?;
  }
  pDVar3 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (pDVar3,(Type *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pPVar4 == (Pool *)0x0)) goto code_?;
  this_02 = (Pool *)0x0;
  if ((String__Class *)pPVar4->klass == TypeInfo__System__String) {
    this_02 = pPVar4;
  }
  if (this_02 == (Pool *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
  if ((int)pIVar1 < 1) {
    pDVar3 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    in_stack_6 = (SoundLoader *)StringLiteral_url;
    if ((pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
       (pMVar7 = (MethodInfo *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (pDVar3,(Type *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pMVar7 == (MethodInfo *)0x0)) goto code_?;
    in_stack_8 = (MethodInfo *)0x0;
    if ((String__Class *)pMVar7->methodPointer == TypeInfo__System__String) {
      in_stack_8 = pMVar7;
    }
    if (in_stack_8 == (MethodInfo *)0x0) goto code_?;
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)in_stack_8,(MethodInfo *)0x0);
    if (0 < (int)pIVar1) {
      return;
    }
    this_01 = (Dictionary_2_System_String_Theme_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_01,StringLiteral_url,(Theme *)StringLiteral_AmbientAudio_Nature_kgm_amb_fore,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    this_03 = (this->fields).soundLoader;
    in_stack_9 = &UNK_?;
    pDVar3 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pAVar10 = (Action_1_Boolean_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        (pDVar3,(Type *)StringLiteral_url,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    in_stack_11 = this;
  }
  else {
    this_03 = (this->fields).soundLoader;
    pDVar3 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    in_stack_6 = (SoundLoader *)StringLiteral_url;
    if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pAVar10 = (Action_1_Boolean_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        (pDVar3,(Type *)StringLiteral_url,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  }
  if (this_03 == (SoundLoader *)0x0) goto code_?;
  value = (Action_1_Boolean_ *)0x0;
  if (pAVar10 != (Action_1_Boolean_ *)0x0) {
    value = (Action_1_Boolean_ *)0x0;
    if ((String__Class *)pAVar10->klass == TypeInfo__System__String) {
      value = pAVar10;
    }
    if (value == (Action_1_Boolean_ *)0x0) {
      func_?();
      goto code_?;
    }
  }
code_?:
  LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
            ((LockCursorManager3DMode *)this_03,value,(MethodInfo *)0x0);
  if ((this->fields).soundLoader == (SoundLoader *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pSVar12 = (in_stack_6->fields).url;
  b = (in_stack_6->fields).currentUrl;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = mscorlib.dll::System::String::String_op_Inequality(pSVar12,b,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pAVar13 = (in_stack_6->fields).audioSource;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pAVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((in_stack_6->fields).callback != (SoundLoader_UpdateSoundCallback *)0x0) {
      if (*(SoundLoader_UpdateSoundCallback **)(in_stack_9 + 0x2c) !=
          (SoundLoader_UpdateSoundCallback *)0x0) {
        SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                  (*(SoundLoader_UpdateSoundCallback **)(in_stack_9 + 0x2c),
                   (MethodInfo *)in_stack_11);
      }
      method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(in_stack_9 + 0x14)
      ;
      pcVar5 = *(code **)(in_stack_9 + 8);
      piVar14 = *(int **)(in_stack_9 + 0x10);
      if ((short)method_00[5].key == -1) {
        func_?();
      }
      cVar15 = func_?();
      if (cVar15 == '\0') {
        if (*(char *)((int)&method_00[5].key + 2) == '\0') {
          (*pcVar5)();
          return;
        }
      }
      else if (((short)method_00[5].key != -1) &&
              (((piVar14 == (int *)0x0 || ((*(uint *)(*piVar14 + 0xa0) & 0x100) == 0)) &&
               (*(int *)(in_stack_9 + 0xc) != 0)))) {
        cVar15 = func_?();
        if (cVar15 != '\0') {
          return;
        }
        cVar15 = func_?();
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
        Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                  (method_00,(MethodInfo *)method_00);
        cVar16 = func_?();
        if (cVar15 == '\0') {
          if (cVar16 == '\0') {
            func_?();
            return;
          }
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
          Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                    (method_00,in_stack_8);
          func_?();
          return;
        }
        if (cVar16 == '\0') {
          puVar17 = (undefined4 *)func_?();
          (*(code *)*puVar17)();
          return;
        }
        uVar18 = 0;
        uVar19 = *(ushort *)(*piVar14 + 0xb6);
        if (uVar19 != 0) {
          do {
            if (*(Object **)(*(int *)(*piVar14 + 0x58) + (uint)uVar18 * 8) == method_00[1].value)
            goto code_?;
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar19);
        }
        func_?();
code_?:
        puVar17 = (undefined4 *)func_?();
        (*(code *)*puVar17)();
        return;
      }
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
        func_?();
      }
      pUVar20 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pUVar21 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar21,(Object *)in_stack_6,MethodInfo__SoundLoader__LoadSound__,
                 (MethodInfo *)0x0);
      pUVar22 = (Urls_OnStreamingAssetsUrlAvailable *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar20,(Delegate *)pUVar21,(MethodInfo *)0x0);
      pUVar20 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar22 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        if (pUVar22->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar20 = pUVar22;
        }
        if (pUVar20 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar20;
      return;
    }
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    pUVar20 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pUVar21 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar21,(Object *)in_stack_6,MethodInfo__SoundLoader__LoadSound__,
               (MethodInfo *)0x0);
    pUVar22 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar20,(Delegate *)pUVar21,(MethodInfo *)0x0);
    pUVar20 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar22 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      if (pUVar22->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar20 = pUVar22;
      }
      if (pUVar20 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    }
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar20;
    pAVar13 = (in_stack_6->fields).audioSource;
    if (pAVar13 != (AudioSource *)0x0) {
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar13,(MethodInfo *)0x0);
      if (bVar2 == 0) {
code_?:
        pSVar12 = (in_stack_6->fields).url;
        (in_stack_6->fields).currentUrl = pSVar12;
        SoundLoader::SoundLoader_Download(in_stack_6,pSVar12,(MethodInfo *)0x0);
        return;
      }
      pAVar13 = (in_stack_6->fields).audioSource;
      if (pAVar13 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                  (pAVar13,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean ShouldPlay() */

bool Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_ShouldPlay
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_mute,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pcVar2 = (char *)func_?();
      if (*pcVar2 != '\0') {
        return 0;
      }
      if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
        cVar3 = func_?();
        return cVar3 != '\0';
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void UpdateSound() */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_UpdateSound
               (MVSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).soundEmitterObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_soundEmitterObject_is_null,(MethodInfo *)0x0);
    return;
  }
  this_00 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)
            (this->fields).soundEmitterObject;
  if (this_00 !=
      (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0) {
    this_01 = (AudioSource *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_audioSource_for_soundEmitterObje,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (((pDVar2 != (Dictionary_2_System_Type_Pool_ *)0x0) &&
        (pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (pDVar2,(Type *)StringLiteral_volume,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_01 != (AudioSource *)0x0)) && (pPVar3 != (Pool *)0x0)) {
      if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar4 = (float *)func_?();
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_01,*pfVar4,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Type_Pool_ *)
                 PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        if ((pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
           (pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               (pDVar2,(Type *)StringLiteral_pitch,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pPVar3 == (Pool *)0x0)) goto code_?;
        if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar4 = (float *)func_?();
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (this_01,*pfVar4,(MethodInfo *)0x0);
          pDVar2 = (Dictionary_2_System_Type_Pool_ *)
                   PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
          if ((pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
             (pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 (pDVar2,(Type *)StringLiteral_loop,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pPVar3 == (Pool *)0x0)) goto code_?;
          if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
            pbVar5 = (bool *)func_?();
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                      (this_01,*pbVar5,(MethodInfo *)0x0);
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_rolloffMode
                      (this_01,AudioRolloffMode__Enum_Custom,(MethodInfo *)0x0);
            pDVar2 = (Dictionary_2_System_Type_Pool_ *)
                     PrefabPool::PrefabPool_get_MVBatteryPrefab
                               ((PrefabPool *)this,(MethodInfo *)0x0);
            if ((pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
               (pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   (pDVar2,(Type *)StringLiteral_range,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pPVar3 == (Pool *)0x0)) goto code_?;
            if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar6 = (int *)func_?();
              iVar7 = *piVar6;
              fVar8 = _UNK_?;
              if (((iVar7 != 0) && (fVar8 = _UNK_?, iVar7 != 1)) &&
                 (fVar8 = _UNK_?, iVar7 != 2)) {
                fVar8 = _UNK_?;
              }
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_minDistance
                        (this_01,fVar8,(MethodInfo *)0x0);
              pDVar2 = (Dictionary_2_System_Type_Pool_ *)
                       PrefabPool::PrefabPool_get_MVBatteryPrefab
                                 ((PrefabPool *)this,(MethodInfo *)0x0);
              if ((pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
                 (pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                     (pDVar2,(Type *)StringLiteral_range,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     ), pPVar3 == (Pool *)0x0)) goto code_?;
              if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                piVar6 = (int *)func_?();
                iVar7 = *piVar6;
                fVar8 = _UNK_?;
                if (((iVar7 != 0) && (fVar8 = _UNK_?, iVar7 != 1)) &&
                   (fVar8 = _UNK_?, iVar7 != 2)) {
                  fVar8 = _UNK_?;
                }
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_maxDistance
                          (this_01,fVar8,(MethodInfo *)0x0);
                bVar1 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
                bVar9 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                        AudioSource_get_isPlaying(this_01,(MethodInfo *)0x0);
                if (bVar1 == bVar9) {
                  return;
                }
                bVar1 = MVSoundEmitter_ShouldPlay(this,(MethodInfo *)0x0);
                if (bVar1 == 0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                          (this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVSoundEmitter(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter__ctor
               (MVSoundEmitter *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SoundEmitterObject__Class *)func_?(TypeInfo__SoundLoader);
  SoundLoader::SoundLoader__ctor((SoundLoader *)this_00,(MethodInfo *)0x0);
  (this->fields).soundLoader = (SoundLoader *)this_00;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_01 == (PrefabPool *)0x0) {
    func_?();
    pSStack1 = extraout_EDX;
  }
  else {
    pSVar2 = PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_01,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)pSVar2,worldObjects,(MethodInfo *)0x0);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x1008000;
    pSStack1 = (SoundEmitterObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pSStack1 == (SoundEmitterObject *)0x0) {
      (this->fields).soundEmitterObject = (SoundEmitterObject *)0x0;
      return;
    }
    bVar4 = (TypeInfo__SoundEmitterObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSStack1->klass)->_1).naturalAligment < bVar4) ||
       ((((ObjectPrefab__Class *)pSStack1->klass)->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pSVar2 = (SoundEmitterObject *)0x0;
    if (bVar5) {
      pSVar2 = pSStack1;
    }
    this_00 = TypeInfo__SoundEmitterObject;
    if (pSVar2 != (SoundEmitterObject *)0x0) {
      (this->fields).soundEmitterObject = pSVar2;
      return;
    }
  }
  pSStack6 = this_00;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_get_DocumentationType
          (MVSoundEmitter *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_SoundEmitter;
}


/* IInputSignalReceiver get_InputSignalReceiver() */

IInputSignalReceiver *
Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_get_InputSignalReceiver
          (MVSoundEmitter *this,MethodInfo *method)

{
  return (this->fields)._InputSignalReceiver_k__BackingField;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::MVSoundEmitter::MVSoundEmitter_set_InputSignalReceiver
               (MVSoundEmitter *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  return;
}

