
/* Void Initialize() */

void Assembly-CSharp.dll::MVPointLightPreset::MVPointLightPreset_Initialize
               (MVPointLightPreset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (pDVar1,StringLiteral_color,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Inserted_Preset_Waterplane_witho,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)in_stack_4,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_4,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar1,StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar3 == 0) {
code_?:
      pGVar5 = (in_stack_4->fields).mvTeleportGroupPrefab;
      if (pGVar5 != (GameObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling
                  ((MVLogicObject *)in_stack_4,(GameObject *)pGVar5[2].klass,2.0,
                   (MethodInfo *)0x0);
        MVPointLight::MVPointLight_SetLightToData
                  ((MVPointLight *)in_stack_4,(MethodInfo *)0x0);
        MVPointLight::MVPointLight_UpdateTexture
                  ((MVPointLight *)in_stack_4,(MethodInfo *)0x0);
        MVPointLight::MVPointLight_UpdateVisible
                  ((MVPointLight *)in_stack_4,(MethodInfo *)0x0);
        MVPointLight::MVPointLight_UpdateColorForLightSphere
                  ((MVPointLight *)in_stack_4,(MethodInfo *)0x0);
        this_00 = (in_stack_4->fields).mvTeleporterPrefab;
        if (this_00 != (MVTeleporterObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_range
                    ((Light *)this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (in_stack_4->fields).mvSentryGunPrefab;
          if (this_01 != (MVSentryGunObject *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy
                      ((CullingSubscriberBase *)this_01,(MethodInfo *)0x0);
            iVar6 = (**(code **)&in_stack_4->klass[1]._1.nested_type_count)();
            radius = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>;
            fVar7 = *(float *)(iVar6 + 8);
            pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar8,(Object *)in_stack_4,
                       in_stack_4->klass[3].vtable.Equals.method,
                       MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                      );
            pCVar9 = TypeInfo__CullingSubscriberBase;
            worldObject = (MVWorldObject *)func_?();
            position.z = fVar7;
            position.x = (float)&UNK_?;
            position.y = (float)pCVar9;
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      ((CullingSubscriberBase *)worldObject,(float)radius,position,
                       (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar8,(MethodInfo *)0x0);
            worldObject[2].fields.itemId = (int32_t)worldObject;
            pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar8,(Object *)worldObject,
                       MethodInfo__MVPointLight__OnInputStateUpdate_LogicInputState__LogicObjectManager_
                       ,
                       MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
                      );
            pIVar10 = LogicClientsideFactory::
                      LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                                (worldObject,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                                 (Action_2_LogicInputState_LogicObjectManager_ *)pUVar8,
                                 (MethodInfo *)0x0);
            this_02 = worldObject[2].fields.inputLinkRefs;
            worldObject[2].fields.position.y = (float)pIVar10;
            if (pIVar10 != (IInputSignalReceiver *)0x0) {
              bVar3 = func_?();
              if (this_02 != (List_1_MV_WorldObject_Link_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this_02,bVar3,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      this_03 = (Dictionary_2_System_Type_Pool_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_4,(MethodInfo *)0x0);
      if (this_03 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_03,(Type *)StringLiteral_hide,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar11 != (Pool *)0x0) {
          if ((pPVar11->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pcVar12 = (char *)func_?();
          *(bool *)&(in_stack_4->fields).mvCountingCubePrefab = *pcVar12 == '\0';
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVPointLightPreset(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPointLightPreset::MVPointLightPreset__ctor
               (MVPointLightPreset *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVPointLight::MVPointLight__ctor((MVPointLight *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,unaff_ESI);
  if (bVar3 != 0) {
    uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 & 0xffff7fff;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
  }
  return;
}

