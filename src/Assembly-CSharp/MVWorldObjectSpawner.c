
/* Void Destroy() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Destroy
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).spawnStateWrapper == (SpawnStateWrapper *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    iVar2 = 0;
    (this_00->fields)._._._._.m_CachedPtr = in_stack_3;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar4 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar4 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar4->max_length <= iVar2) {
        return;
      }
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      if (TypeInfo__UpdateController->static_fields->updateBuckets ==
          (List_1_PriorityDataUpdate___Array *)0x0) break;
      this_01 = (List_1_UnityEngine_Vector3_ *)func_?(iVar2);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_00,
                 MethodInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0____m__0_PriorityDataUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataUpdate>__Predicate_System__Object__void__
                );
      if (this_01 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_01,(Predicate_1_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      iVar2 = iVar2 + 1;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Initialize
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar1,(Type *)StringLiteral_RespawnInterval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 == (Pool *)0x0) goto code_?;
    if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      hashtable = (Dictionary_2_System_Object_System_Object_ *)
                  (*(code *)(this->klass->vtable).get_RunTimeData.method)();
      if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Extensions->_1).cctor_started == 0)) {
        func_?();
      }
      pOVar3 = Extensions::Extensions_GetObscuredType
                         (hashtable,StringLiteral_UseTime,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
        func_?();
      }
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class !=
            (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class)
        goto code_?;
        pOVar4 = (ObscuredInt *)func_?();
        takenTime = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit_1(*pOVar4,(MethodInfo *)0x0);
        pAVar5 = TypeInfo__System__Action<SpawnState>;
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        method_1 = (this->klass->vtable).__unknown.methodPtr;
        auVar6._8_4_ = method_1;
        auVar6._4_4_ = this;
        auVar6._0_4_ = this_02;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,method_1,
                   MethodInfo__System__Action<SpawnState>__Action_System__Object__void__);
        auVar7._0_8_ = auVar6._0_8_;
        auVar7._8_4_ = &UNK_?;
        this_03 = (MethodInfo *)func_?();
        SpawnStateWrapper::SpawnStateWrapper__ctor
                  ((SpawnStateWrapper *)this_03,auVar7._4_4_,takenTime,
                   (Action_1_SpawnState_ *)this_02,(MethodInfo *)0x0);
        this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)(pAVar5->vtable).Clone.methodPtr;
        (pAVar5->vtable).Clone_1.method = this_03;
        if (this_00 !=
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) {
          bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (this_00,StringLiteral_spawnWorldObjectID,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar8 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_No_spawnWorldObject,(MethodInfo *)0x0);
            return;
          }
          pDVar1 = (Dictionary_2_System_Type_Pool_ *)(pAVar5->vtable).Clone.methodPtr;
          if (pDVar1 != (Dictionary_2_System_Type_Pool_ *)0x0) {
            pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               (pDVar1,(Type *)StringLiteral_spawnWorldObjectID,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pPVar2 != (Pool *)0x0) {
              if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              puVar9 = (undefined4 *)func_?();
              (pAVar5->vtable).GetObjectData_1.methodPtr = (Il2CppMethodPointer)*puVar9;
              this_01 = (GameObject *)(pAVar5->_1).element_size;
              if (this_01 != (GameObject *)0x0) {
                x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_29
                              (this_01,
                               TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<TriggerBoxEvents>__
                              );
                (pAVar5->vtable).GetObjectData_1.method = (MethodInfo *)x;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                  ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar8 != 0) {
                  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                            ((Object *)StringLiteral_Did_not_find_triggerBoxEvents,(MethodInfo *)0x0
                            );
                }
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnSpawnStateChange(SpawnState) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_OnSpawnStateChange
               (MVWorldObjectSpawner *this,SpawnState__Enum spawnState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (spawnState == SpawnState__Enum_None) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_SpawnState_is_none,(MethodInfo *)0x0);
    return;
  }
  if (spawnState == SpawnState__Enum_Listening) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Switch_to_listening,(MethodInfo *)0x0);
  }
  else if (spawnState == SpawnState__Enum_Taken) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Switch_to_taken,(MethodInfo *)0x0);
    return;
  }
  return;
}


/* Void Take(Int32) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Take
               (MVWorldObjectSpawner *this,int32_t takeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,takeTime,(MethodInfo *)0x0);
  pEVar2 = (Extensions__Class *)pOVar1->currentCryptoKey;
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    pEVar2 = TypeInfo__Extensions;
    func_?();
  }
  value.hiddenValue = iVar3;
  value.currentCryptoKey = (int32_t)pEVar2;
  value.fakeValue = iVar4;
  value.inited = pOVar1->inited;
  value._13_3_ = *(undefined3 *)&pOVar1->field_0xd;
  Extensions::Extensions_SetObscuredType_2
            (hashtable,StringLiteral_UseTime,value,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  this_00 = (this->fields).spawnStateWrapper;
  if (this_00 != (SpawnStateWrapper *)0x0) {
    LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
              ((LockCursorManager3DMode *)this_00,(Action_1_Boolean_ *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectSpawner(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner__ctor
               (MVWorldObjectSpawner *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).spawnWorldObjectID = -1;
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
  (this->fields)._.idChildMap = this_00;
  MVGroup::MVGroup__ctor_2((MVGroup *)this,data,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  return;
}


/* MVWorldObjectSpawner(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner__ctor_1
               (MVWorldObjectSpawner *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).spawnWorldObjectID = -1;
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
  (this->fields)._.idChildMap = this_00;
  MVGroup::MVGroup__ctor_1((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  return;
}

