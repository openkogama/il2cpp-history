
/* Void Destroy() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Destroy(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).inventoryObject == 0) {
    pSVar1 = (this->fields).skybox;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pSVar1 = (this->fields).skybox;
      if (pSVar1 != (SkyboxManager *)0x0) {
        SkyboxManager::SkyboxManager_Remove(pSVar1,this,(MethodInfo *)0x0);
        pSVar1 = (this->fields).skybox;
        if (pSVar1 != (SkyboxManager *)0x0) {
          SkyboxManager::SkyboxManager_RefreshColor(pSVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Initialize(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  (this->fields).skybox = pSVar1;
  if (pSVar1 != (SkyboxManager *)0x0) {
    SkyboxManager::SkyboxManager_Add(pSVar1,this,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_01,*pVVar2,(MethodInfo *)0x0);
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,
                   MethodInfo__MVSkybox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   ,
                   MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
                  );
        pIVar3 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                           ((MVWorldObject *)this,1,
                            (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                            (Action_2_LogicInputState_LogicObjectManager_ *)this_02,
                            (MethodInfo *)0x0);
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar3;
        pSVar1 = (this->fields).skybox;
        if (pSVar1 != (SkyboxManager *)0x0) {
          SkyboxManager::SkyboxManager_RefreshColor(pSVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_InitializeInventory(MVSkybox *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  (this->fields).inventoryObject = 1;
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_InputStateUpdateCallback
               (MVSkybox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState == LogicInputState__Enum_FromColdToHot) ||
     (logicInputState == LogicInputState__Enum_FromHotToCold)) {
    this_00 = (this->fields).skybox;
    if (this_00 == (SkyboxManager *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SkyboxManager::SkyboxManager_RefreshColor(this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_OnDataUpdate(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Reset(MVSkybox *this,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (SkyboxManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((this_00->fields).initialized != 0) {
      SkyboxManager::SkyboxManager_ComputeSkyboxSettings
                (this_00,&(this_00->fields).targetColor,&(this_00->fields).targetSunAngle,
                 &(this_00->fields).targetFogDensity,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
                ((MonoBehaviour *)this_00,StringLiteral_DoAnimate,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
                ((MonoBehaviour *)this_00,StringLiteral_DoAnimate,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetDefaultInteractionFlags() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_SetDefaultInteractionFlags
               (MVSkybox *this,MethodInfo *method)

{
  *(int *)&(this->fields)._._.interactionFlags = (int)(this->fields).defaultInteractionFlags;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
       *(undefined4 *)((int)&(this->fields).defaultInteractionFlags + 4);
  return;
}


/* Void SetDeleteOnlyInteractionFlags() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags
               (MVSkybox *this,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._._.interactionFlags = 1;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = 0;
  return;
}


/* MVSkybox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSkybox::MVSkybox__ctor
               (MVSkybox *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = CloudyThemeBase::CloudyThemeBase_get_Skybox
                             ((CloudyThemeBase *)this_00,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x18000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar1;
    uVar1 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    *(int *)&(this->fields).defaultInteractionFlags = (int)(this->fields)._._.interactionFlags;
    *(undefined4 *)((int)&(this->fields).defaultInteractionFlags + 4) = uVar1;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSkybox::MVSkybox_get_DocumentationType(MVSkybox *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Skybox;
}


/* Single get_FogDensity() */

float Assembly-CSharp.dll::MVSkybox::MVSkybox_get_FogDensity(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,StringLiteral_fogDensity,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_fog,(MethodInfo *)0x0);
      return _UNK_?;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPStack2 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_01,(Type *)StringLiteral_fogDensity,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      uVar3 = CONCAT44(TypeInfo__System__Single,pPStack2);
      if (pPStack2 != (Pool *)0x0) {
        if ((pPStack2->klass->_0).element_class ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar4 = (float *)func_?();
          return *pfVar4;
        }
        goto code_?;
      }
    }
  }
  pPStack2 = (Pool *)0x0;
  uVar3 = func_?();
code_?:
  _puStack0000001c = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Boolean get_SkyboxActive() */

bool Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SkyboxActive(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    bVar2 = func_?(1,TypeInfo__IInputSignalReceiver,pIVar1);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Color get_SkyboxColor() */

Color * Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SkyboxColor
                  (Color *__return_storage_ptr__,MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_col,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = TypeInfo__SkyboxManager->static_fields;
      fVar3 = (pSVar2->defaultColor).g;
      fVar4 = (pSVar2->defaultColor).b;
      fVar5 = (pSVar2->defaultColor).a;
      __return_storage_ptr__->r = (pSVar2->defaultColor).r;
      __return_storage_ptr__->g = fVar3;
      __return_storage_ptr__->b = fVar4;
      __return_storage_ptr__->a = fVar5;
      return __return_storage_ptr__;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_01,(Type *)StringLiteral_color,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar6 == (Pool *)0x0) goto code_?;
    iVar7 = func_?();
    if (iVar7 == 0) goto code_?;
    uVar8 = *(uint *)(iVar7 + 0xc);
    if (uVar8 == 0) goto code_?;
    if (uVar8 < 2) goto code_?;
    pCVar9 = *(Color **)(iVar7 + 0x14);
    if (2 < uVar8) {
      fVar3 = 0.0;
      fVar4 = 0.0;
      puVar10 = &UNK_?;
      func_?();
      pCVar9->r = fVar3;
      pCVar9->g = 0.0;
      pCVar9->b = fVar4;
      pCVar9->a = (float)puVar10;
      return pCVar9;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar11)();
  return pCVar9;
}


/* Single get_SunAngle() */

float Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SunAngle(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_00,StringLiteral_sunAngle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_sun,(MethodInfo *)0x0);
      return _UNK_?;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPStack2 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_01,(Type *)StringLiteral_sunAngle,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      uVar3 = CONCAT44(TypeInfo__System__Single,pPStack2);
      if (pPStack2 != (Pool *)0x0) {
        if ((pPStack2->klass->_0).element_class ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar4 = (float *)func_?();
          return *pfVar4;
        }
        goto code_?;
      }
    }
  }
  pPStack2 = (Pool *)0x0;
  uVar3 = func_?();
code_?:
  _puStack0000001c = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}

