
/* Void Initialize() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_Initialize
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  this_03 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_03 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_03,StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
code_?:
      pMVar2 = (this->fields).lightObject;
      if (pMVar2 != (MVPointLightObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)this,(pMVar2->fields).visualObject,2.0,(MethodInfo *)0x0);
        MVPointLight_SetLightToData(this,(MethodInfo *)0x0);
        MVPointLight_UpdateTexture(this,(MethodInfo *)0x0);
        MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
        MVPointLight_UpdateColorForLightSphere(this,(MethodInfo *)0x0);
        this_00 = (this->fields).lightComponent;
        if (this_00 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range(this_00,(MethodInfo *)0x0)
          ;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (this->fields)._.cullingSubscriberBase;
          if (this_01 != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
            iVar3 = (*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
            fVar4 = *(float *)(iVar3 + 8);
            radius = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>;
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this,
                       (this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
                       MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                      );
            uVar6 = CONCAT44(TypeInfo__CullingSubscriberBase,&UNK_?);
            worldObject = (MVWorldObject *)func_?();
            position.z = fVar4;
            position.x = (float)(int)uVar6;
            position.y = (float)(int)((ulonglong)uVar6 >> 0x20);
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      ((CullingSubscriberBase *)worldObject,(float)radius,position,
                       (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar5,(MethodInfo *)0x0);
            worldObject[2].fields.itemId = (int32_t)worldObject;
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)worldObject,
                       MethodInfo__MVPointLight__OnInputStateUpdate_LogicInputState__LogicObjectManager_
                       ,
                       MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
                      );
            pIVar7 = LogicClientsideFactory::
                     LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                               (worldObject,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                                (Action_2_LogicInputState_LogicObjectManager_ *)pUVar5,
                                (MethodInfo *)0x0);
            this_02 = worldObject[2].fields.inputLinkRefs;
            worldObject[2].fields.position.y = (float)pIVar7;
            if (pIVar7 != (IInputSignalReceiver *)0x0) {
              bVar1 = func_?();
              if (this_02 != (List_1_MV_WorldObject_Link_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this_02,bVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      this_04 = (Dictionary_2_System_Type_Pool_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (this_04 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_04,(Type *)StringLiteral_hide,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar8 != (Pool *)0x0) {
          if ((pPVar8->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pcVar9 = (char *)func_?();
          (this->fields).inputVisible = *pcVar9 == '\0';
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::MVPointLight::MVPointLight_IsVisible
               (MVPointLight *this,MethodInfo *method)

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
                      (this_00,StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if ((bVar1 == 0) || ((this->fields).inputVisible == 0)) {
      return 0;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPStack2 =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_01,(Type *)StringLiteral_hide,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      uVar3 = CONCAT44(TypeInfo__System__Boolean,pPStack2);
      if (pPStack2 != (Pool *)0x0) {
        if ((pPStack2->klass->_0).element_class ==
            (TypeInfo__System__Boolean->_0).element_class) {
          pcVar4 = (char *)func_?();
          return *pcVar4 == '\0';
        }
        goto code_?;
      }
    }
  }
  pPStack2 = (Pool *)0x0;
  uVar3 = func_?();
code_?:
  _puStack00000018 = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_OnDataUpdate
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVPointLight_SetLightToData(this,(MethodInfo *)0x0);
  MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
  MVPointLight_UpdateTexture(this,(MethodInfo *)0x0);
  MVPointLight_UpdateColorForLightSphere(this,(MethodInfo *)0x0);
  woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void OnInputStateUpdate(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_OnInputStateUpdate
               (MVPointLight *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pLVar1 = (this->fields).lightComponent;
    if (pLVar1 == (Light *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pLVar1,1,(MethodInfo *)0x0);
    (this->fields).inputVisible = 1;
    MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
  }
  else if (logicInputState == LogicInputState__Enum_FromHotToCold) {
    pLVar1 = (this->fields).lightComponent;
    if (pLVar1 != (Light *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pLVar1,0,(MethodInfo *)0x0);
      (this->fields).inputVisible = 0;
      MVPointLight_UpdateVisible(this,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  return;
}


/* Void SetLightToData() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_SetLightToData
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (pDVar1,StringLiteral_color,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar2 == 0) {
code_?:
    pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar1,StringLiteral_intensity,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar1,StringLiteral_range,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar3 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if ((pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
       (pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (pDVar3,(Type *)StringLiteral_range,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pPVar4 == (Pool *)0x0)) goto code_?;
    if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar5 = (float *)func_?();
      fVar6 = *pfVar5;
      pDVar3 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if ((pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
         (pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (pDVar3,(Type *)StringLiteral_intensity,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pPVar4 == (Pool *)0x0)) goto code_?;
      if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar5 = (float *)func_?();
        pLVar7 = (this->fields).lightComponent;
        if (pLVar7 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar7,*pfVar5,(MethodInfo *)0x0);
          pLVar7 = (this->fields).lightComponent;
          if (pLVar7 != (Light *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_range
                      (pLVar7,fVar6,(MethodInfo *)0x0);
            fVar8 = (this->fields).minumumScale;
            fVar6 = (fVar6 / (this->fields).rangeMaxValue) / (this->fields).scaleRestriction;
            if (fVar8 <= fVar6) {
              fVar8 = fVar6;
            }
            pMVar9 = (this->fields).lightObject;
            if (pMVar9 != (MVPointLightObject *)0x0) {
              this_00 = (pMVar9->fields).pointLightPlaneTransform;
              uVar10 = CONCAT44(&stack0xffffffec,&UNK_?);
              fVar6 = fVar8;
              func_?();
              if (this_00 != (Transform *)0x0) {
                value_00.z = fVar8;
                value_00.x = (float)(int)uVar10;
                value_00.y = (float)(int)((ulonglong)uVar10 >> 0x20);
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (this_00,value_00,(MethodInfo *)0x0);
                this_01 = (this->fields)._.cullingSubscriberBase;
                if (this_01 != (CullingSubscriberBase *)0x0) {
                  CullingSubscriberBase::CullingSubscriberBase_set_Radius
                            (this_01,fVar6,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pDVar3 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar3 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar3,(Type *)StringLiteral_color,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    iVar11 = 0;
    if ((pPVar4 == (Pool *)0x0) || (iVar11 = func_?(), iVar11 != 0)) {
      pLVar7 = (this->fields).lightComponent;
      if (iVar11 == 0) goto code_?;
      uVar12 = *(uint *)(iVar11 + 0xc);
      if (uVar12 == 0) goto code_?;
      fVar6 = *(float *)(iVar11 + 0x10);
      if (uVar12 < 2) goto code_?;
      if (2 < uVar12) {
        puVar13 = &stack0xffffffe8;
        uVar14 = 0;
        puVar15 = &UNK_?;
        func_?();
        if (pLVar7 == (Light *)0x0) goto code_?;
        value.g = (float)puVar15;
        value.r = (float)uVar14;
        value.b = (float)puVar13;
        value.a = fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                  (pLVar7,value,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetupLightCulling(Single) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_SetupLightCulling
               (MVPointLight *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar1,(MethodInfo *)0x0);
    pVVar2 = (Vector3 *)
             (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                       (&stack0xffffffe8,this,(this->klass->vtable).set_WorldPosition.methodPtr);
    position = *pVVar2;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    pCVar1 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (pCVar1,radius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
               (MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = pCVar1;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateColorForLightSphere() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateColorForLightSphere
               (MVPointLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_02,(Type *)StringLiteral_color,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 == (Pool *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = func_?();
      if (iVar2 == 0) goto code_?;
    }
    pMVar3 = (this->fields).lightObject;
    if ((pMVar3 == (MVPointLightObject *)0x0) ||
       (this_00 = (pMVar3->fields).pointLightPlaneMesh, this_00 == (MeshRenderer *)0x0))
    goto code_?;
    pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                       ((Renderer *)this_00,(MethodInfo *)0x0);
    if (pMVar4 == (Material__Array *)0x0) goto code_?;
    if (pMVar4->max_length == 0) goto code_?;
    this_01 = pMVar4->vector[0];
    if (iVar2 == 0) goto code_?;
    uVar5 = *(uint *)(iVar2 + 0xc);
    if (uVar5 == 0) goto code_?;
    if (uVar5 < 2) goto code_?;
    uVar6 = *(undefined4 *)(iVar2 + 0x14);
    if (2 < uVar5) {
      uVar7 = *(undefined4 *)(iVar2 + 0x18);
      func_?(&stack0xffffffe8,*(undefined4 *)(iVar2 + 0x10));
      if (this_01 != (Material *)0x0) {
        value.y = (float)uVar7;
        value.x = (float)uVar6;
        value.z = 1.0;
        value.w = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_01,StringLiteral__TintColor,value,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateTexture() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateTexture
               (MVPointLight *this,MethodInfo *method)

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
                      (this_00,StringLiteral_halo,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return;
    }
    pMVar2 = (this->fields).lightObject;
    if (((pMVar2 != (MVPointLightObject *)0x0) &&
        (pSVar3 = (pMVar2->fields).streamedTexture, pSVar3 != (StreamedTextureToMeshRenderer *)0x0))
       && (this_01 = (Collection_1_VoxelHit_ *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pSVar3,
                                (MethodInfo *)0x0), this_01 != (Collection_1_VoxelHit_ *)0x0)) {
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
      arg0 = mscorlib.dll::System::String::String_Remove
                       ((String *)this_01,(int32_t)((int)&pIVar4[-2].monitor + 3),(MethodInfo *)0x0)
      ;
      this_02 = (Dictionary_2_System_Type_Pool_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if ((this_02 != (Dictionary_2_System_Type_Pool_ *)0x0) &&
         (pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_02,(Type *)StringLiteral_halo,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pPVar5 != (Pool *)0x0)) {
        if ((pPVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?();
        arg1 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        value = (Action_1_Boolean_ *)
                mscorlib.dll::System::String::String_Concat_1
                          ((Object *)arg0,arg1,(Object *)StringLiteral__unity3d,(MethodInfo *)0x0);
        pMVar2 = (this->fields).lightObject;
        if ((pMVar2 != (MVPointLightObject *)0x0) &&
           (pSVar3 = (pMVar2->fields).streamedTexture,
           pSVar3 != (StreamedTextureToMeshRenderer *)0x0)) {
          LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                    ((LockCursorManager3DMode *)pSVar3,value,(MethodInfo *)0x0);
          pMVar2 = (this->fields).lightObject;
          if ((pMVar2 != (MVPointLightObject *)0x0) &&
             (pSVar3 = (pMVar2->fields).streamedTexture,
             pSVar3 != (StreamedTextureToMeshRenderer *)0x0)) {
            StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer_ReDownload
                      (pSVar3,(MethodInfo *)0x0);
            return;
          }
        }
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


/* Void UpdateVisible() */

void Assembly-CSharp.dll::MVPointLight::MVPointLight_UpdateVisible
               (MVPointLight *this,MethodInfo *method)

{
  pMVar1 = (this->fields).lightObject;
  if (pMVar1 != (MVPointLightObject *)0x0) {
    this_00 = (pMVar1->fields).pointLightPlaneMesh;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_01,StringLiteral_hide,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if ((bVar2 == 0) || ((this->fields).inputVisible == 0)) {
        this._0_1_ = false;
code_?:
        if (this_00 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)this_00,this._0_1_,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        this_02 = (Dictionary_2_System_Type_Pool_ *)
                  PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        if (this_02 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (this_02,(Type *)StringLiteral_hide,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar4 = CONCAT44(TypeInfo__System__Boolean,pPVar3);
          if (pPVar3 != (Pool *)0x0) {
            if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
            goto code_?;
            pcVar5 = (char *)func_?();
            this._0_1_ = *pcVar5 == '\0';
            goto code_?;
          }
        }
      }
    }
  }
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVPointLight(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPointLight::MVPointLight__ctor
               (MVPointLight *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).minumumScale = 0.03;
  (this->fields).rangeMaxValue = 10.0;
  (this->fields).scaleRestriction = 2.0;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    pMVar1 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)pMVar1,worldObjects,(MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x18000;
    pMVar1 = (MVPointLightObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pMVar1 == (MVPointLightObject *)0x0) {
      pMVar3 = (MVPointLightObject *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVPointLightObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVPointLightObject)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar3 = (MVPointLightObject *)0x0;
      if (bVar5) {
        pMVar3 = pMVar1;
      }
      if (pMVar3 == (MVPointLightObject *)0x0) goto code_?;
    }
    (this->fields).lightObject = pMVar3;
    if (pMVar3 != (MVPointLightObject *)0x0) {
      this_00 = (pMVar3->fields).pointLight;
      (this->fields).lightComponent = this_00;
      if (this_00 != (Light *)0x0) {
        VStack_6.z = (float)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        this_01 = (this->fields)._._.gameObject;
        if (this_01 != (GameObject *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                             (&VStack_6,(MethodInfo *)0x0);
          if (this_03 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (this_03,*pVVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVPointLight::MVPointLight_get_DocumentationType
          (MVPointLight *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_PointLight;
}

