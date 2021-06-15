
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_Delete
               (MVGlobalSoundEmitter *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  this_00 = (this->fields).soundLoader;
  if (this_00 != (SoundLoader *)0x0) {
    SoundLoader::SoundLoader_StopAndDestroySound(this_00,(MethodInfo *)0x0);
    bVar1 = MVWorldObjectClient::MVWorldObjectClient_Delete
                      ((MVWorldObjectClient *)this,worldObjectClientManager,errorText,
                       (MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_Initialize
               (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
            (this->fields).soundEmitterObject;
  if ((this_01 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) ||
     (this_04 = (SoundEmitterActiveCheck *)
                System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Int32]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                          (this_01,(MethodInfo *)0x0), this_04 == (SoundEmitterActiveCheck *)0x0))
  goto code_?;
  SoundEmitterActiveCheck::SoundEmitterActiveCheck_Initialize_1(this_04,this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_02 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)
            (this->fields).soundEmitterObject;
  pSVar1 = (this->fields).soundLoader;
  if ((this_02 ==
       (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)
     || (value = (BitArray *)
                 System.Core.dll::System::Linq::
                 Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                 JsonSchemaType]::
                 Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                           (this_02,(MethodInfo *)0x0), pSVar1 == (SoundLoader *)0x0))
  goto code_?;
  MaterialDescription::MaterialDescription_set_SpecialProperties
            ((MaterialDescription *)pSVar1,value,(MethodInfo *)0x0);
  pSVar1 = (this->fields).soundLoader;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__MVGlobalSoundEmitter__UpdateSound__,
             (MethodInfo *)0x0);
  if (pSVar1 == (SoundLoader *)0x0) goto code_?;
  (pSVar1->fields).callback = (SoundLoader_UpdateSoundCallback *)pUVar2;
  this_03 = (this->fields).soundEmitterObject;
  if (this_03 == (SoundEmitterObject *)0x0) goto code_?;
  lodGameObject =
       (GameObject *)
       MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
       KogamaSettingNumericBase`1[System::Single]::
       KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                 ((KogamaSettingNumericBase_1_System_Single_ *)this_03,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,lodGameObject,2.0,(MethodInfo *)0x0);
  pDVar3 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
  pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
            Dictionary_2_System_Type_Pool__get_Item
                      (pDVar3,(Type *)StringLiteral_url,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  uVar5 = CONCAT44(TypeInfo__System__String,pPVar4);
  if (pPVar4 == (Pool *)0x0) goto code_?;
  this_05 = (Pool *)0x0;
  if ((String__Class *)pPVar4->klass == TypeInfo__System__String) {
    this_05 = pPVar4;
  }
  if (this_05 == (Pool *)0x0) {
code_?:
    func_?(uVar5);
code_?:
    func_?(0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_05,(MethodInfo *)0x0);
  if ((int)pIVar7 < 1) {
    return;
  }
  pSVar1 = (this->fields).soundLoader;
  pDVar3 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pAVar8 = (Action_1_Boolean_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (pDVar3,(Type *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pSVar1 == (SoundLoader *)0x0)) goto code_?;
  value_00 = (Action_1_Boolean_ *)0x0;
  if (pAVar8 != (Action_1_Boolean_ *)0x0) {
    if ((String__Class *)pAVar8->klass == TypeInfo__System__String) {
      value_00 = pAVar8;
    }
    if (value_00 == (Action_1_Boolean_ *)0x0) {
      uVar5 = func_?(pAVar8,TypeInfo__System__String);
      goto code_?;
    }
  }
  LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
            ((LockCursorManager3DMode *)pSVar1,value_00,(MethodInfo *)0x0);
  if ((this->fields).soundLoader == (SoundLoader *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  a = _UNK_?;
  b = _UNK_?;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String,unaff_EBP,unaff_retaddr);
  }
  bVar9 = mscorlib.dll::System::String::String_op_Inequality(a,b,(MethodInfo *)0x0);
  x = _UNK_?;
  if (bVar9 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      return;
    }
    if (_UNK_? != 0) {
      if (*(SoundLoader_UpdateSoundCallback **)(in_stack_10 + 0x2c) !=
          (SoundLoader_UpdateSoundCallback *)0x0) {
        SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                  (*(SoundLoader_UpdateSoundCallback **)(in_stack_10 + 0x2c),in_stack_11
                  );
      }
      this_00 = *(MethodInfo **)(in_stack_10 + 0x14);
      pcVar6 = *(code **)(in_stack_10 + 8);
      piVar12 = *(int **)(in_stack_10 + 0x10);
      if (this_00->flags == 0xffff) {
        func_?();
      }
      cVar13 = func_?();
      if (cVar13 == '\0') {
        if ((char)this_00->iflags == '\0') {
          (*pcVar6)();
          return;
        }
      }
      else if ((this_00->flags != 0xffff) &&
              (((piVar12 == (int *)0x0 || ((*(uint *)(*piVar12 + 0xa0) & 0x100) == 0)) &&
               (*(int *)(in_stack_10 + 0xc) != 0)))) {
        cVar13 = func_?();
        if (cVar13 != '\0') {
          return;
        }
        method_00 = this_00;
        cVar13 = func_?();
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
        Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                  ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,method_00);
        cVar14 = func_?();
        if (cVar13 == '\0') {
          if (cVar14 != '\0') {
            mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
            Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                      ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,
                       in_stack_15);
            func_?();
            return;
          }
          func_?();
          return;
        }
        if (cVar14 == '\0') {
          puVar16 = (undefined4 *)func_?();
          (*(code *)*puVar16)(piVar12);
          return;
        }
        uVar17 = 0;
        uVar18 = *(ushort *)(*piVar12 + 0xb6);
        if (uVar18 != 0) {
          do {
            if (*(char **)(*(int *)(*piVar12 + 0x58) + (uint)uVar17 * 8) == this_00->name)
            goto code_?;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar18);
        }
        func_?();
code_?:
        puVar16 = (undefined4 *)func_?();
        (*(code *)*puVar16)(piVar12);
        return;
      }
      (*pcVar6)(piVar12);
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    bVar9 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar9 == 0) {
      if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
        func_?();
      }
      pUVar19 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)&UNK_?,MethodInfo__SoundLoader__LoadSound__,
                 (MethodInfo *)0x0);
      pUVar20 = (Urls_OnStreamingAssetsUrlAvailable *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar19,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pUVar19 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar20 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        if (pUVar20->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar19 = pUVar20;
        }
        if (pUVar19 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar19;
      return;
    }
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    pUVar19 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)&UNK_?,MethodInfo__SoundLoader__LoadSound__,
               (MethodInfo *)0x0);
    pUVar20 = (Urls_OnStreamingAssetsUrlAvailable *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar19,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pUVar19 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar20 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      if (pUVar20->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar19 = pUVar20;
      }
      if (pUVar19 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    }
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar19;
    if (_UNK_? != (AudioSource *)0x0) {
      bVar9 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (_UNK_?,(MethodInfo *)0x0);
      if (bVar9 == 0) {
code_?:
        _UNK_? = _UNK_?;
        SoundLoader::SoundLoader_Download
                  ((SoundLoader *)&UNK_?,_UNK_?,(MethodInfo *)0x0);
        return;
      }
      if (_UNK_? != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                  (_UNK_?,(MethodInfo *)0x0);
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


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_OnDataUpdate
               (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (pDVar1,(Type *)StringLiteral_url,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pPVar2 == (Pool *)0x0)) goto code_?;
  this_04 = (Pool *)0x0;
  if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
    this_04 = pPVar2;
  }
  if (this_04 == (Pool *)0x0) {
code_?:
    func_?();
code_?:
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar4 = &UNK_?;
  pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
            Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_04,(MethodInfo *)0x0);
  if ((int)pIVar5 < 1) {
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if ((pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
       (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (pDVar1,(Type *)StringLiteral_url,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pPVar2 == (Pool *)0x0)) goto code_?;
    this_05 = (Pool *)0x0;
    if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
      this_05 = pPVar2;
    }
    if (this_05 == (Pool *)0x0) goto code_?;
    in_stack_6 = (MethodInfo *)&UNK_?;
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_05,(MethodInfo *)0x0);
    if (0 < (int)pIVar5) {
      return;
    }
    in_stack_7 =
         (Dictionary_2_System_String_Theme_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (in_stack_7 == (Dictionary_2_System_String_Theme_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (in_stack_7,StringLiteral_url,
               (Theme *)StringLiteral_AmbientAudio_Music_slowstones_un,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    this_02 = (this->fields).soundLoader;
    in_stack_8 = (MethodInfo *)&UNK_?;
    this_03 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pAVar9 = (Action_1_Boolean_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        (this_03,(Type *)StringLiteral_url,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  }
  else {
    this_02 = (this->fields).soundLoader;
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pAVar9 = (Action_1_Boolean_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
              Dictionary_2_System_Type_Pool__get_Item
                        (pDVar1,(Type *)StringLiteral_url,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
  }
  if (this_02 == (SoundLoader *)0x0) goto code_?;
  value = (Action_1_Boolean_ *)0x0;
  if (pAVar9 != (Action_1_Boolean_ *)0x0) {
    value = (Action_1_Boolean_ *)0x0;
    if ((String__Class *)pAVar9->klass == TypeInfo__System__String) {
      value = pAVar9;
    }
    if (value == (Action_1_Boolean_ *)0x0) {
      func_?(pAVar9,TypeInfo__System__String);
      goto code_?;
    }
  }
  LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
            ((LockCursorManager3DMode *)this_02,value,(MethodInfo *)0x0);
  if ((this->fields).soundLoader == (SoundLoader *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar10 = (pDVar1->fields).linkSlots;
  pIVar11 = (pDVar1->fields).table;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String,puVar4,this_04);
  }
  bVar12 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)pLVar10,(String *)pIVar11,(MethodInfo *)0x0);
  if (bVar12 == 0) {
    pTVar13 = (pDVar1->fields).keySlots;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar13,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      return;
    }
    if ((pDVar1->fields).valueSlots != (Pool__Array *)0x0) {
      this_00 = (SoundLoader_UpdateSoundCallback *)(in_stack_7->fields).serialization_info;
      if (this_00 != (SoundLoader_UpdateSoundCallback *)0x0) {
        SoundLoader+UpdateSoundCallback::SoundLoader_UpdateSoundCallback_Invoke
                  (this_00,in_stack_8);
      }
      this_01 = (in_stack_7->fields).valueSlots;
      pIVar11 = (in_stack_7->fields).table;
      pSVar14 = (in_stack_7->fields).keySlots;
      if (*(short *)(this_01->vector + 6) == -1) {
        func_?();
      }
      cVar15 = func_?();
      if (cVar15 == '\0') {
        if (*(char *)((int)this_01->vector + 0x1a) == '\0') {
          (*(code *)pIVar11)();
          return;
        }
      }
      else if ((*(short *)(this_01->vector + 6) != -1) &&
              (((pSVar14 == (String__Array *)0x0 || (((pSVar14->klass->_1).token & 0x100) == 0)) &&
               ((in_stack_7->fields).linkSlots != (Link__Array *)0x0)))) {
        cVar15 = func_?();
        if (cVar15 != '\0') {
          return;
        }
        method_00 = this_01;
        cVar15 = func_?();
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
        Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                  ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                   (MethodInfo *)method_00);
        cVar16 = func_?();
        if (cVar15 == '\0') {
          if (cVar16 == '\0') {
            func_?();
            return;
          }
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
          Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                    ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,in_stack_6
                    );
          func_?();
          return;
        }
        if (cVar16 == '\0') {
          puVar17 = (undefined4 *)func_?();
          (*(code *)*puVar17)(pSVar14);
          return;
        }
        pSVar18 = pSVar14->klass;
        uVar19 = 0;
        uVar20._0_1_ = (pSVar18->_1).rank;
        uVar20._1_1_ = (pSVar18->_1).minimumAlignment;
        if (uVar20 != 0) {
          do {
            if (pSVar18->interfaceOffsets[uVar19].interfaceType == (Il2CppClass *)this_01->max_length
               ) goto code_?;
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar20);
        }
        func_?();
code_?:
        puVar17 = (undefined4 *)func_?();
        (*(code *)*puVar17)(pSVar14);
        return;
      }
      (*(code *)pIVar11)(pSVar14);
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    bVar12 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
    if (bVar12 == 0) {
      if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
        func_?();
      }
      pUVar21 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
      pUVar22 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar22,(Object *)pDVar1,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
      pUVar23 = (Urls_OnStreamingAssetsUrlAvailable *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar21,(Delegate *)pUVar22,(MethodInfo *)0x0);
      pUVar21 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      if (pUVar23 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
        if (pUVar23->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
          pUVar21 = pUVar23;
        }
        if (pUVar21 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
      }
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar21;
      return;
    }
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    pUVar21 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pUVar22 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar22,(Object *)pDVar1,MethodInfo__SoundLoader__LoadSound__,(MethodInfo *)0x0);
    pUVar23 = (Urls_OnStreamingAssetsUrlAvailable *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar21,(Delegate *)pUVar22,(MethodInfo *)0x0);
    pUVar21 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
    if (pUVar23 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      if (pUVar23->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
        pUVar21 = pUVar23;
      }
      if (pUVar21 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
    }
    TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar21;
    pTVar13 = (pDVar1->fields).keySlots;
    if (pTVar13 != (Type__Array *)0x0) {
      bVar12 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        ((AudioSource *)pTVar13,(MethodInfo *)0x0);
      if (bVar12 == 0) {
code_?:
        pLVar10 = (pDVar1->fields).linkSlots;
        (pDVar1->fields).table = (Int32__Array *)pLVar10;
        SoundLoader::SoundLoader_Download((SoundLoader *)pDVar1,(String *)pLVar10,(MethodInfo *)0x0)
        ;
        return;
      }
      pTVar13 = (pDVar1->fields).keySlots;
      if (pTVar13 != (Type__Array *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                  ((AudioSource *)pTVar13,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSound() */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_UpdateSound
               (MVGlobalSoundEmitter *this,MethodInfo *method)

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
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_spatialBlend
                    (this_01,0.0,(MethodInfo *)0x0);
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (this_01,1,(MethodInfo *)0x0);
          bVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            (this_01,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            return;
          }
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (this_01,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVGlobalSoundEmitter(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter__ctor
               (MVGlobalSoundEmitter *this,Dictionary_2_System_Object_System_Object_ *data,
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
    prefabObject = (ObjectPrefab *)
                   CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_01,(MethodInfo *)0x0)
    ;
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    pSStack1 = (SoundEmitterObject *)(this->fields)._._.component;
    *(uint *)&(this->fields)._._.interactionFlags =
         (uint)(this->fields)._._.interactionFlags & 0xffffdfff | 0x8008000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar2;
    if (pSStack1 == (SoundEmitterObject *)0x0) {
      (this->fields).soundEmitterObject = (SoundEmitterObject *)0x0;
      return;
    }
    bVar3 = (TypeInfo__SoundEmitterObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pSStack1->klass)->_1).naturalAligment < bVar3) ||
       ((((ObjectPrefab__Class *)pSStack1->klass)->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__SoundEmitterObject)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pSVar5 = (SoundEmitterObject *)0x0;
    if (bVar4) {
      pSVar5 = pSStack1;
    }
    this_00 = TypeInfo__SoundEmitterObject;
    if (pSVar5 != (SoundEmitterObject *)0x0) {
      (this->fields).soundEmitterObject = pSVar5;
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
Assembly-CSharp.dll::MVGlobalSoundEmitter::MVGlobalSoundEmitter_get_DocumentationType
          (MVGlobalSoundEmitter *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_GlobalSoundEmitter;
}

