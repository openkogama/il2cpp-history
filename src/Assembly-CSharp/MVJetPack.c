
/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVJetPack::MVJetPack_CompareWithKoGaMaPackage
               (MVJetPack *this,MVWorldObjectClient *wo,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *insertedByProfileId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVJetPack;
  if (wo == (MVWorldObjectClient *)0x0) {
    func_?(0);
    wo = extraout_EDX;
  }
  else {
    bVar2 = (TypeInfo__MVJetPack->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar2) ||
       ((MVJetPack__Class *)(wo->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVJetPack)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVWorldObjectClient *)0x0;
    if (bVar3) {
      pMVar4 = wo;
    }
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      if ((this->fields).jetPackType == (uint8_t)pMVar4[1].fields._.type) {
        bVar5 = MVBlueprintBase::MVBlueprintBase_CompareWithKoGaMaPackage
                          ((MVBlueprintBase *)this,wo,koGaMaPackageClient,insertedByProfileId,
                           (MethodInfo *)0x0);
        return bVar5;
      }
      return 0;
    }
  }
  func_?(wo,pMVar1);
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* MVVehicleBase+LocalObjectsBase CreateLocalObjects(Int32, MVAvatarLocal) */

MVVehicleBase_LocalObjectsBase *
Assembly-CSharp.dll::MVJetPack::MVJetPack_CreateLocalObjects
          (MVJetPack *this,int32_t seatID,MVAvatarLocal *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  jetPackTypeParameters = (this->fields).jetPackParameters;
  pVVar1 = (this->fields)._.seatManager;
  if ((pVVar1 != (VehicleSeatManager *)0x0) &&
     (this_00 = (pVVar1->fields).seats, this_00 != (List_1_VehicleSeatBase_ *)0x0)) {
    seat = (VehicleSeatBase *)
           mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
           IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,seatID,
                      MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                     );
    this_01 = (MVJetPack_LocalObjectsJetPack *)
              func_?(TypeInfo__MVJetPack__LocalObjectsJetPack);
    MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack__ctor
              (this_01,this,vehicleUser,jetPackTypeParameters,seat,(MethodInfo *)0x0);
    return (MVVehicleBase_LocalObjectsBase *)this_01;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVVehicleBase_LocalObjectsBase *)(*pcVar2)();
  return pMVar3;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_Destroy(MVJetPack *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberDynamic;
  if (this_00 != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
  }
  return;
}


/* MVJetPack+JetPackType GetJetPackType(Dictionary`2[System.Object,System.Object]) */

MVJetPack_JetPackType__Enum
Assembly-CSharp.dll::MVJetPack::MVJetPack_GetJetPackType
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                &stack0xfffffffb,CONCAT13(7,(int3)in_ECX));
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)data,key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (pDVar1 != (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      this = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)0x0;
      if (bVar3) {
        this = pDVar1;
      }
      if (this == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) {
        uVar4 = func_?(pDVar1,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      }
      else {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (this,StringLiteral_jetPackType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar5 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_WoData_does_not_contain_jetPackT,(MethodInfo *)0x0);
        }
        pPStack6 =
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this,(Type *)StringLiteral_jetPackType,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
        uVar4 = CONCAT44(TypeInfo__MVJetPack__JetPackType,pPStack6);
        if (pPStack6 == (Pool *)0x0) goto code_?;
        if ((pPStack6->klass->_0).element_class ==
            (TypeInfo__MVJetPack__JetPackType->_0).element_class) {
          puVar7 = (undefined1 *)func_?();
          return CONCAT31((int3)((uint)puVar7 >> 8),*puVar7);
        }
      }
      _puStack00000014 = uVar4;
      func_?();
    }
  }
code_?:
  pPStack6 = (Pool *)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  MVar9 = (*pcVar8)();
  return MVar9;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVJetPack::MVJetPack_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVJetPack *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((boundsContext != BoundsContext__Enum_Insert) &&
      (boundsContext != BoundsContext__Enum_BoxVisualization)) &&
     (boundsContext != BoundsContext__Enum_Preview)) {
    pBVar1 = MVGroup::MVGroup_GetLocalBounds
                       ((Bounds *)&stack0xffffffd0,(MVGroup *)this,boundsContext,(MethodInfo *)0x0);
    fVar2 = (pBVar1->m_Center).y;
    fVar3 = (pBVar1->m_Center).z;
    fVar4 = (pBVar1->m_Extents).x;
    (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
    (__return_storage_ptr__->m_Center).y = fVar2;
    (__return_storage_ptr__->m_Center).z = fVar3;
    (__return_storage_ptr__->m_Extents).x = fVar4;
    fVar2 = (pBVar1->m_Extents).z;
    (__return_storage_ptr__->m_Extents).y = (pBVar1->m_Extents).y;
    (__return_storage_ptr__->m_Extents).z = fVar2;
    return __return_storage_ptr__;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_6,(MethodInfo *)0x0);
  uStack_7._0_4_ = pVVar5->x;
  uStack_7._4_4_ = pVVar5->y;
  fVar2 = pVVar5->z;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&VStack_6,(MethodInfo *)0x0);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_6,*pVVar5,2.0,(MethodInfo *)0x0);
  uVar8 = uStack_7;
  uVar9 = pVVar5->x;
  uVar10 = pVVar5->y;
  VStack_6.y = pVVar5->z;
  VStack_6.z = 0.0;
  puVar11 = &stack0xffffffd0;
  puVar12 = &UNK_?;
  VStack_6.x = (float)uVar10;
  func_?();
  fStack_13 = (float)((ulonglong)uVar8 >> 0x20);
  (__return_storage_ptr__->m_Center).x = (float)puVar12;
  (__return_storage_ptr__->m_Center).y = (float)puVar11;
  (__return_storage_ptr__->m_Center).z = (float)uVar8;
  (__return_storage_ptr__->m_Extents).x = fStack_13;
  (__return_storage_ptr__->m_Extents).y = fVar2;
  (__return_storage_ptr__->m_Extents).z = (float)uVar9;
  return __return_storage_ptr__;
}


/* VehicleBaseObject GetPickupPrefabName(Dictionary`2[System.Object,System.Object]) */

VehicleBaseObject *
Assembly-CSharp.dll::MVJetPack::MVJetPack_GetPickupPrefabName
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this = PrefabPool::PrefabPool_get_JetPackPrefabLUT((MethodInfo *)0x0);
  MVar1 = MVJetPack_GetJetPackType(data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT31(data._1_3_,(char)MVar1);
  if (this != (Dictionary_2_MVJetPack_JetPackType_VehicleBaseObject_ *)0x0) {
    pVVar2 = (VehicleBaseObject *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[MVJetPack+JetPackType,System::
             Object]::Dictionary_2_MVJetPack_JetPackType_System_Object__get_Item
                       ((Dictionary_2_MVJetPack_JetPackType_System_Object_ *)this,
                        (MVJetPack_JetPackType__Enum)data,
                        MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                       );
    return pVVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar2 = (VehicleBaseObject *)(*pcVar3)();
  return pVVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_Initialize(MVJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVVehicleBase::MVVehicleBase_Initialize((MVVehicleBase *)this,(MethodInfo *)0x0);
  worldObjectType =
       System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
       Object,System::Object]::
       Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                 ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                  this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
            RuntimeVariablesRepository_GetRuntimeVariables
                      ((WorldObjectType__Enum)worldObjectType,(MethodInfo *)0x0);
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_health,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar1 == (Pool *)0x0)) goto code_?;
  if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
    pfVar2 = (float *)func_?();
    maxValue = *pfVar2;
    pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pOVar3 == (ObjectPrefab *)0x0) goto code_?;
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                        ((MVRuntimeDataVariables *)pOVar3,StringLiteral_health,0.2,0,0.0,maxValue,
                         (MethodInfo *)0x0);
    (this->fields).Health = pMVar4;
    pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pOVar3 == (ObjectPrefab *)0x0) goto code_?;
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                        ((MVRuntimeDataVariables *)pOVar3,StringLiteral_shield,0.2,0,0.0,maxValue,
                         (MethodInfo *)0x0);
    (this->fields).shield = pMVar4;
    pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pOVar3 == (ObjectPrefab *)0x0) goto code_?;
    pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                        ((MVRuntimeDataVariables *)pOVar3,StringLiteral_modifiers,1.0,0,
                         (MethodInfo *)0x0);
    (this->fields).Modifiers = pMVar5;
    pOVar3 = PrefabPool::PrefabPool_get_MVTimeTriggerPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (pOVar3 == (ObjectPrefab *)0x0) goto code_?;
    pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                        ((MVRuntimeDataVariables *)pOVar3,StringLiteral_jetMode,1.0,0,
                         (MethodInfo *)0x0);
    (this->fields).JetMode = pMVar5;
    pMVar5 = (this->fields)._.IsVehicleDead;
    if (pMVar5 == (MVRuntimeDataVariable *)0x0) goto code_?;
    a = (pMVar5->fields).OnChange;
    puVar6 = &UNK_?;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__MVJetPack__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    pDVar8 = (Delegate *)0x0;
    if (pDVar7 != (Delegate *)0x0) {
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pDVar7->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pDVar8 = pDVar7;
      }
      if (pDVar8 == (Delegate *)0x0) goto code_?;
    }
    *(Delegate **)(puVar6 + 0x20) = pDVar8;
    pMVar9 = MVBlueprintBase::MVBlueprintBase_GetChild
                        ((MVBlueprintBase *)this,StringLiteral_JetPackCubeModel,(MethodInfo *)0x0);
    if (pMVar9 == (MVWorldObjectClient *)0x0) {
code_?:
      pJVar10 = (this->fields).jetPackParameters;
      if ((pJVar10 != (JetPackParameters *)0x0) &&
         (pIVar11 = (pJVar10->fields).lowerCubeConstraint, pIVar11 != (Int32__Array *)0x0)) {
        uVar12 = pIVar11->max_length;
        if (uVar12 == 0) goto code_?;
        if ((pJVar10 != (JetPackParameters *)0x0) && (pIVar11 != (Int32__Array *)0x0)) {
          if (uVar12 < 2) goto code_?;
          if (pIVar11 != (Int32__Array *)0x0) {
            if (uVar12 < 3) goto code_?;
            func_?();
            pJVar10 = (this->fields).jetPackParameters;
            if ((pJVar10 != (JetPackParameters *)0x0) &&
               (pIVar11 = (pJVar10->fields).upperCubeConstraint, pIVar11 != (Int32__Array *)0x0)) {
              uVar12 = pIVar11->max_length;
              if (uVar12 == 0) goto code_?;
              iVar13 = pIVar11->vector[0];
              if ((pJVar10 != (JetPackParameters *)0x0) && (pIVar11 != (Int32__Array *)0x0)) {
                if (uVar12 < 2) goto code_?;
                if (pIVar11 != (Int32__Array *)0x0) {
                  if (uVar12 < 3) goto code_?;
                  iVar14 = (int16_t)&stack0xfffffff0;
                  iVar15 = 0;
                  puVar6 = &UNK_?;
                  func_?();
                  pJVar10 = (this->fields).jetPackParameters;
                  if (pJVar10 != (JetPackParameters *)0x0) {
                    minCubeCount = (pJVar10->fields).minNumberOfCubes;
                    cubeModelBase = (MVCubeModelInstance *)&UNK_?;
                    this_02 = (EditableCubeModelWrapper *)func_?();
                    min.z = iVar14;
                    min._0_4_ = puVar6;
                    max.z = iVar15;
                    max.x = (short)iVar13;
                    max.y = (short)((uint)iVar13 >> 0x10);
                    EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                              (this_02,cubeModelBase,min,max,minCubeCount,(MethodInfo *)0x0);
                    pGVar16 = (this->fields)._._._._.gameObject;
                    (this->fields).editableCubeModelWrapper = this_02;
                    if (pGVar16 != (GameObject *)0x0) {
                      this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentsInChildren_29
                                          (pGVar16,
                                           JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                                          );
                      (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
                      if (((cubeModelBase != (MVCubeModelInstance *)0x0) &&
                          (pCVar17 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                               ((DayNightCycle *)cubeModelBase,(MethodInfo *)0x0),
                          pCVar17 != (CelestialParam *)0x0)) &&
                         (jetPackCubeModel =
                               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform((GameObject *)pCVar17,(MethodInfo *)0x0),
                         this_03 != (UseInteratorVisualization__Array *)0x0)) {
                        pMVar5 = (this->fields).JetMode;
                        JetPackVisualization::JetPackVisualization_Init
                                  ((JetPackVisualization *)this_03,(bool)pMVar5,jetPackCubeModel,
                                   pMVar5,(MethodInfo *)0x0);
                        pMVar18 = this->klass;
                        (this->fields)._.visualization = (VehicleVisualizationBase *)this_03;
                        cVar19 = (*(code *)(pMVar18->vtable).get_IsInSpawner.method)();
                        if (cVar19 != '\0') {
                          return;
                        }
                        pCVar17 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                            ((DayNightCycle *)cubeModelBase,(MethodInfo *)0x0);
                        if ((pCVar17 != (CelestialParam *)0x0) &&
                           (this_04 = (MaterialDescription *)
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_AddComponent_85
                                                ((GameObject *)pCVar17,
                                                 InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                                                ), this_04 != (MaterialDescription *)0x0)) {
                          pMVar20 = this;
                          MaterialDescription::MaterialDescription_set_SpecialProperties
                                    (this_04,(BitArray *)this,(MethodInfo *)0x0);
                          (this->fields)._._._._.interactionDataHandlerBase =
                               (InteractionDataHandlerBase *)pMVar20;
                          (*(code *)(cubeModelBase->klass->vtable).set_Visible.method)();
                          pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_1_get_gameObject
                                              ((Component_1 *)this_03,(MethodInfo *)0x0);
                          this_05 = (CullingSubscriberDynamic *)func_?();
                          CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                                    (this_05,4.0,3,pGVar16,(GameObject__Array *)0x0,
                                     (MethodInfo *)0x0);
                          (this->fields).cullingSubscriberDynamic = this_05;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar21 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar9->klass->_1).naturalAligment < bVar21) ||
       ((MVCubeModelInstance__Class *)(pMVar9->klass->_1).typeHierarchy[bVar21 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    pMVar23 = (MVWorldObjectClient *)0x0;
    if (bVar22) {
      pMVar23 = pMVar9;
    }
    if (pMVar23 != (MVWorldObjectClient *)0x0) goto code_?;
  }
  else {
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
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_InitializeInventory
               (MVJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        (this_00,
                         JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                        );
    if (this_01 != (UseInteratorVisualization__Array *)0x0) {
      JetPackVisualization::JetPackVisualization_EnableThruster
                ((JetPackVisualization *)this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVJetPack::MVJetPack_OnEnterObject
               (MVJetPack *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    bVar2 = (*(code *)(pEVar1->klass->vtable).OnEnterObject.method)
                      (pEVar1,e,(pEVar1->klass->vtable).OnExitObject.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVJetPack::MVJetPack_OnExitObject
               (MVJetPack *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    bVar2 = (*(code *)(pEVar1->klass->vtable).OnExitObject.method)
                      (pEVar1,e,pEVar1->klass[1]._0.image);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_OnIsDeadChange
               (MVJetPack *this,Object *isDead,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (isDead != (Object *)0x0) {
    pBVar1 = TypeInfo__System__Boolean;
    if ((isDead->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
    goto code_?;
    pcVar2 = (char *)func_?(isDead);
    if (*pcVar2 == '\0') {
      return;
    }
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    pGVar3 = (this->fields)._._._._.gameObject;
    if ((pGVar3 != (GameObject *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd0,pTVar4,(MethodInfo *)0x0);
      fVar6 = pQVar5->x;
      VStack_7.x = pQVar5->y;
      VStack_7.y = pQVar5->z;
      VStack_7.z = pQVar5->w;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_back
                         ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
      uVar9._0_4_ = pVVar8->x;
      uVar9._4_4_ = pVVar8->y;
      fVar10 = pVVar8->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      rotation.y = VStack_7.x;
      rotation.x = fVar6;
      rotation.z = VStack_7.y;
      rotation.w = VStack_7.z;
      point.z = fVar10;
      point.x = (float)uVar9;
      point.y = SUB84(uVar9,4);
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffd4,rotation,point,(MethodInfo *)0x0);
      uVar11._0_4_ = pVVar8->x;
      uVar11._4_4_ = pVVar8->y;
      fVar6 = pVVar8->z;
      if ((this->fields)._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        pPVar12 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (pPVar12 != (PrefabPool *)0x0) {
          particlePrefab = PrefabPool::PrefabPool_get_ParticleExplosion(pPVar12,(MethodInfo *)0x0);
          pGVar3 = (this->fields)._._._._.gameObject;
          if ((pGVar3 != (GameObject *)0x0) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_7,pTVar4,(MethodInfo *)0x0);
            uVar13._0_4_ = pVVar8->x;
            uVar13._4_4_ = pVVar8->y;
            fVar10 = pVVar8->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            a_00.z = fVar10;
            a_00.x = (float)uVar13;
            a_00.y = SUB84(uVar13,4);
            b_01.z = fVar6;
            b_01.x = (float)uVar11;
            b_01.y = SUB84(uVar11,4);
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffe0,a_00,b_01,(MethodInfo *)0x0);
            uVar14._0_4_ = pVVar8->x;
            uVar14._4_4_ = pVVar8->y;
            fVar6 = pVVar8->z;
            if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0)) {
              func_?();
            }
            pEVar15 = (ExplosionEvent *)0x0;
            local = 1;
code_?:
            position.z = fVar6;
            position.x = (float)uVar14;
            position.y = SUB84(uVar14,4);
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (particlePrefab,position,10.0,5.0,1000.0,local,pEVar15,ignoreIDs,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pGVar3 = (this->fields)._._._._.gameObject;
        if ((pGVar3 != (GameObject *)0x0) &&
           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd4,pTVar4,(MethodInfo *)0x0);
          VStack_7.y = pVVar8->x;
          VStack_7.z = pVVar8->y;
          fVar10 = pVVar8->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.z = fVar10;
          a.x = VStack_7.y;
          a.y = VStack_7.z;
          b.z = fVar6;
          b.x = (float)uVar11;
          b.y = SUB84(uVar11,4);
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             (&VStack_7,a,b,(MethodInfo *)0x0);
          uVar16._0_4_ = pVVar8->x;
          uVar16._4_4_ = pVVar8->y;
          fVar10 = pVVar8->z;
          pEVar15 = (ExplosionEvent *)
                   func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          VStack_7.z = (float)pEVar15;
          worldPosition.z = fVar10;
          worldPosition.x = (float)uVar16;
          worldPosition.y = SUB84(uVar16,4);
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                    (pEVar15,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            func_?(TypeInfo__PrefabPool);
          }
          pPVar12 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (pPVar12 != (PrefabPool *)0x0) {
            particlePrefab = PrefabPool::PrefabPool_get_ParticleExplosion(pPVar12,(MethodInfo *)0x0);
            pGVar3 = (this->fields)._._._._.gameObject;
            if ((pGVar3 != (GameObject *)0x0) &&
               (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
               pTVar4 != (Transform *)0x0)) {
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffd4,pTVar4,(MethodInfo *)0x0);
              b_00.z = fVar6;
              b_00.x = (float)uVar11;
              b_00.y = SUB84(uVar11,4);
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffffe0,*pVVar8,b_00,(MethodInfo *)0x0);
              uVar14._0_4_ = pVVar8->x;
              uVar14._4_4_ = pVVar8->y;
              fVar6 = pVVar8->z;
              if ((((uint)(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->vtable).Equals.
                          methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).cctor_started == 0))
              {
                func_?();
              }
              local = 0;
              pEVar15 = (ExplosionEvent *)VStack_7.z;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?(0);
  isDead = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(isDead,pBVar1);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void VehicleEntered(MVAvatar, Int32) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_VehicleEntered
               (MVJetPack *this,MVAvatar *vehicleUser,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)vehicleUser,(MethodInfo *)seatID);
  this_00 = (this->fields)._.seatManager;
  if (this_00 != (VehicleSeatManager *)0x0) {
    VehicleSeatManager::VehicleSeatManager_set_EnterVehicleDisabled(this_00,1,(MethodInfo *)0x0);
    if (vehicleUser != (MVAvatar *)0x0) {
      this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
      if (this_01 != (CelestialParam *)0x0) {
        this_02 = (AvatarPickupOwner *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)this_01,
                             AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                            );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Failed_to_get_avatarPickupOwner,(MethodInfo *)0x0);
          return;
        }
        this_03 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
        if (this_02 != (AvatarPickupOwner *)0x0) {
          other = (IEnumerable_1_System_Int32_ *)
                  (*(code *)(this_02->klass->vtable).get_IgnoreWOIDs.method)
                            (this_02,this_02->klass[1]._0.image);
          if (this_03 != (HashSet_1_System_Int32_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__ExceptWith
                      (this_03,other,
                       MethodInfo__System__Collections__Generic__HashSet<int>__ExceptWith_System__Collections__Generic__IEnumerable<int>_
                      );
            AvatarPickupOwner::AvatarPickupOwner_set_AdditionalIgnoreWOIDS
                      (this_02,this_03,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVJetPack(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack__ctor
               (MVJetPack *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  data_00 = data;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_01 = PrefabPool::PrefabPool_get_JetPackPrefabLUT((MethodInfo *)0x0);
  MVar1 = MVJetPack_GetJetPackType(data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT31(data._1_3_,(char)MVar1);
  if (this_01 != (Dictionary_2_MVJetPack_JetPackType_VehicleBaseObject_ *)0x0) {
    vehiclePrefab =
         (ObjectPrefab *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[MVJetPack+JetPackType,System::
         Object]::Dictionary_2_MVJetPack_JetPackType_System_Object__get_Item
                   ((Dictionary_2_MVJetPack_JetPackType_System_Object_ *)this_01,
                    (MVJetPack_JetPackType__Enum)data,
                    MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                   );
    MVVehicleBase::MVVehicleBase__ctor
              ((MVVehicleBase *)this,data_00,vehiclePrefab,worldObjects,(MethodInfo *)0x0);
    uVar2 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x1000;
    *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar2;
    this_00 = (this->fields)._._._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      pUVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                         (this_00,
                          JetPackParameters_MethodInfo__UnityEngine__GameObject__GetComponent<JetPackParameters>__
                         );
      (this->fields).jetPackParameters = (JetPackParameters *)pUVar4;
      MVar1 = MVJetPack_GetJetPackType(data_00,(MethodInfo *)0x0);
      (this->fields).jetPackType = (uint8_t)MVar1;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVJetPack::MVJetPack_get_DocumentationType(MVJetPack *this,MethodInfo *method)

{
  uVar1 = (this->fields).jetPackType;
  if (uVar1 == 0) {
    return MVWorldObjectDocumentationType__Enum_SmallJetpack;
  }
  MVar2 = MVWorldObjectDocumentationType__Enum_Missing;
  if (uVar1 == 1) {
    MVar2 = MVWorldObjectDocumentationType__Enum_BigJetpack;
  }
  return MVar2;
}


/* MVRuntimeDataVariableClampedFloat get_Shield() */

MVRuntimeDataVariableClampedFloat *
Assembly-CSharp.dll::MVJetPack::MVJetPack_get_Shield(MVJetPack *this,MethodInfo *method)

{
  return (this->fields).shield;
}


/* Void set_Shield(MVRuntimeDataVariableClampedFloat) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_set_Shield
               (MVJetPack *this,MVRuntimeDataVariableClampedFloat *value,MethodInfo *method)

{
  (this->fields).shield = value;
  return;
}

