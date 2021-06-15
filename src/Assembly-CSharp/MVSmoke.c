
/* Void Initialize() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_Initialize(MVSmoke *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).particleSystem;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (pDVar1,(MethodInfo *)0x0);
    fVar2 = (float10)func_?();
    MVSmoke_SetupSmokeCulling(this,(float)fVar2,(this->fields)._._.gameObject,(MethodInfo *)0x0);
    MVSmoke_SetSmokeProperties(this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__MVSmoke__OnInputStateUpdate_LogicInputState__LogicObjectManager_,
               MethodInfo__System__Action<LogicInputState,_LogicObjectManager>__Action_System__Object__void__
              );
    pIVar3 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar3;
    if (pIVar3 != (IInputSignalReceiver *)0x0) {
      func_?();
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).particleSystem;
      if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                  (pDVar1,(MethodInfo *)0x0);
        func_?();
        this_00 = (this->fields).particleSystem;
        if (this_00 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (this_00,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVSmoke::MVSmoke_InitializeInventory(MVSmoke *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).particleSystem == (ParticleSystem *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar2 = func_?(&UNK_?,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  uStack3 = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_OnDataUpdate(MVSmoke *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVSmoke_SetSmokeProperties(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVSmoke::MVSmoke_OnInputStateUpdate
               (MVSmoke *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).particleSystem;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      logicInputState =
           (LogicInputState__Enum)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (pDVar1,(MethodInfo *)0x0);
      func_?(&logicInputState,1,0);
      return;
    }
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (logicInputState == LogicInputState__Enum_FromHotToCold) {
    logicInputState = LogicInputState__Enum_FromColdToHot;
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).particleSystem;
    if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) goto code_?;
    logicInputState =
         (LogicInputState__Enum)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
         Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
         Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                   (pDVar1,(MethodInfo *)0x0);
    func_?(&logicInputState,0,0);
  }
  return;
}


/* Void SetSmokeProperties() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_SetSmokeProperties(MVSmoke *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  pOStack_3 = (Object *)0x0;
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).particleSystem;
  pOStack_5 = (Object *)0x0;
  if (pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) goto code_?;
  pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        (pDVar4,(MethodInfo *)0x0);
  func_?(&pOStack_1,0);
  pDVar6 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
            *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar6 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)0x0) goto code_?;
  bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (pDVar6,StringLiteral_color,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  if (bVar7 == 0) {
code_?:
    this = (MVSmoke *)0x0;
    pDVar6 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this_02,(MethodInfo *)0x0);
    if (pDVar6 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar6,StringLiteral_length,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar7 == 0) {
      return;
    }
    pDVar6 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this_02,(MethodInfo *)0x0);
    if (pDVar6 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (pDVar6,StringLiteral_wind,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar7 == 0) {
code_?:
      pDVar8 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this_02,(MethodInfo *)0x0);
      if ((pDVar8 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
         (pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (pDVar8,(Type *)StringLiteral_length,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pPVar9 == (Pool *)0x0)) goto code_?;
      if ((pPVar9->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar10 = (float *)func_?(pPVar9);
        fStack_11 = *pfVar10;
        MVSmoke_SetupSmokeCulling
                  (this_02,(this_02->fields).lengthCullingScale * fStack_11,
                   (this_02->fields)._._.gameObject,(MethodInfo *)0x0);
        pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_02->fields).particleSystem;
        if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          pOStack_3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                 (pDVar4,(MethodInfo *)0x0);
          func_?(&pOStack_3,fStack_11 / ((float)this + _UNK_?),0);
          this_00 = (this_02->fields).particleSystem;
          if (this_00 != (ParticleSystem *)0x0) {
            this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_00,(MethodInfo *)0x0);
            this_01 = (this_02->fields)._._.transform;
            if ((this_01 != (Transform *)0x0) &&
               (pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                    (&QStack_13,this_01,(MethodInfo *)0x0),
               this_03 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (this_03,*pQVar12,(MethodInfo *)0x0);
              pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)(this_02->fields).particleSystem;
              if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)0x0) {
                pOStack_5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar4,(MethodInfo *)0x0);
                this_04 = (AnimationCurve *)func_?(TypeInfo__UnityEngine__AnimationCurve);
                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
                          (this_04,(MethodInfo *)0x0);
                if (this_04 != (AnimationCurve *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                            (this_04,0.0,0.0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                            (this_04,0.05,(float)this,(MethodInfo *)0x0);
                  func_?();
                  func_?(&pOStack_5,0,0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
    else {
      pDVar8 = (Dictionary_2_System_Type_Pool_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this_02,(MethodInfo *)0x0);
      if ((pDVar8 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
         (pPVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (pDVar8,(Type *)StringLiteral_wind,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pPVar9 == (Pool *)0x0)) goto code_?;
      if ((pPVar9->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        puVar14 = (undefined4 *)func_?(pPVar9);
        this = (MVSmoke *)*puVar14;
        goto code_?;
      }
    }
    func_?(pPVar9,TypeInfo__System__Single);
code_?:
    uVar15 = func_?(0);
    func_?(uVar15);
code_?:
    uVar15 = func_?(0);
    func_?(uVar15);
code_?:
    uVar15 = func_?(0);
    func_?(uVar15);
code_?:
    uVar15 = func_?(0);
    func_?(uVar15);
  }
  else {
    pDVar8 = (Dictionary_2_System_Type_Pool_ *)
             PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pDVar8 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (pDVar8,(Type *)StringLiteral_color,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this = (MVSmoke *)TypeInfo__System__Single;
    if (unaff_EBX == (Pool *)0x0) {
      iVar16 = 0;
code_?:
      pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this_02->fields).particleSystem;
      if ((pDVar4 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) ||
         (pOStack_2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                (pDVar4,(MethodInfo *)0x0), iVar16 == 0)) goto code_?;
      uVar17 = *(uint *)(iVar16 + 0xc);
      if (uVar17 == 0) goto code_?;
      if (uVar17 < 2) goto code_?;
      if (uVar17 < 3) goto code_?;
      if (3 < uVar17) {
        QStack_13.x = 0.0;
        QStack_13.y = 0.0;
        QStack_13.z = 0.0;
        QStack_13.w = 0.0;
        func_?(&QStack_13,*(undefined4 *)(iVar16 + 0x10),*(undefined4 *)(iVar16 + 0x14),
                        *(undefined4 *)(iVar16 + 0x18),*(undefined4 *)(iVar16 + 0x1c),0);
        color.g = QStack_13.y;
        color.r = QStack_13.x;
        color.b = QStack_13.z;
        color.a = QStack_13.w;
        pPVar18 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                 ParticleSystem_MinMaxGradient_op_Implicit
                           ((ParticleSystem_MinMaxGradient *)&stack0xffffffac,color,
                            (MethodInfo *)0x0);
        func_?(&pOStack_2,pPVar18->m_Mode,pPVar18->m_GradientMin,pPVar18->m_GradientMax,
                        (pPVar18->m_ColorMin).r,(pPVar18->m_ColorMin).g,(pPVar18->m_ColorMin).b,
                        (pPVar18->m_ColorMin).a);
        goto code_?;
      }
      goto code_?;
    }
    iVar16 = func_?(unaff_EBX,TypeInfo__System__Single);
    if (iVar16 != 0) goto code_?;
  }
  func_?(unaff_EBX,this);
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* CullingSubscriberBase SetupSmokeCulling(Single, GameObject) */

CullingSubscriberBase *
Assembly-CSharp.dll::MVSmoke::MVSmoke_SetupSmokeCulling
          (MVSmoke *this,float radius,GameObject *lodGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar1,(MethodInfo *)0x0);
  }
  pVVar2 = (Vector3 *)
           (*(code *)(this->klass->vtable).get_WorldPosition_1.method)(&stack0xffffffe8,this);
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
  return pCVar1;
}


/* Void ToggleEmitter(Boolean) */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_ToggleEmitter
               (MVSmoke *this,bool toggle,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).particleSystem;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          (this_00,(MethodInfo *)0x0);
    func_?(&pOStack_1,_toggle,0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVSmoke(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSmoke::MVSmoke__ctor
               (MVSmoke *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).lengthCullingScale = 1.5;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    prefabObject = PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar1,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x18000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar2;
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pSVar4 = (SentryGunBeam *)
               PrefabPool::PrefabPool_get_ParticleFluffySmoke(pPVar1,(MethodInfo *)0x0);
      pGVar5 = (this->fields)._._.gameObject;
      if ((pGVar5 != (GameObject *)0x0) &&
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_8 + 4),pTVar6,(MethodInfo *)0x0);
        uVar9._0_4_ = pVVar7->x;
        uVar9._4_4_ = pVVar7->y;
        fVar10 = pVVar7->z;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?();
        }
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                            ((Quaternion *)auStack_8,(MethodInfo *)0x0);
        auStack_8._0_4_ = pQVar11->x;
        auStack_8._4_4_ = pQVar11->y;
        fStack_12 = pQVar11->z;
        puStack_13 = (undefined *)pQVar11->w;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        position.z = fVar10;
        position.x = (float)(int)uVar9;
        position.y = (float)(int)((ulonglong)uVar9 >> 0x20);
        rotation.y = (float)auStack_8._4_4_;
        rotation.x = (float)auStack_8._0_4_;
        rotation.z = fStack_12;
        rotation.w = (float)puStack_13;
        pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                           (pSVar4,position,rotation,
                            UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                           );
        (this->fields).particleSystem = (ParticleSystem *)pSVar4;
        if (pSVar4 != (SentryGunBeam *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pSVar4,(MethodInfo *)0x0);
          pGVar5 = (this->fields)._._.gameObject;
          if ((pGVar5 != (GameObject *)0x0) &&
             (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar6,value,(MethodInfo *)0x0);
            this_00 = (this->fields).particleSystem;
            if (this_00 != (ParticleSystem *)0x0) {
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Stop_2(this_00,(MethodInfo *)0x0);
              this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)(this->fields).particleSystem;
              if (this_01 !=
                  (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          (this_01,(MethodInfo *)0x0);
                func_?();
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSmoke::MVSmoke_get_DocumentationType(MVSmoke *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Smoke;
}

