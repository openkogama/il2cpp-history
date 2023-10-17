
/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVJetPack::MVJetPack_CompareWithKoGaMaPackage
               (MVJetPack *this,MVWorldObjectClient *wo,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *insertedByProfileId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVJetPack);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    func_?();
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = TypeInfo__MVJetPack;
    if (((TypeInfo__MVJetPack->_1).typeHierarchyDepth <= (wo->klass->_1).typeHierarchyDepth) &&
       ((MVJetPack__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVJetPack->_1).typeHierarchyDepth - 1] ==
        TypeInfo__MVJetPack)) {
      if ((this->fields).jetPackType == *(uint8_t *)&wo[1].fields._.runTimeData) {
        bVar2 = MVBlueprintBase::MVBlueprintBase_CompareWithKoGaMaPackage
                          ((MVBlueprintBase *)this,wo,koGaMaPackageClient,insertedByProfileId,
                           (MethodInfo *)0x0);
        return bVar2;
      }
      return 0;
    }
  }
  func_?(wo,pMVar1);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* MVVehicleBase+LocalObjectsBase CreateLocalObjects(Int32, MVAvatarLocal) */

MVVehicleBase_LocalObjectsBase *
Assembly-CSharp.dll::MVJetPack::MVJetPack_CreateLocalObjects
          (MVJetPack *this,int32_t seatID,MVAvatarLocal *vehicleUser,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_)
    ;
    func_?(&TypeInfo__MVJetPack__LocalObjectsJetPack);
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields)._.seatManager;
  jetPackTypeParameters = (this->fields).jetPackParameters;
  if ((pVVar1 != (VehicleSeatManager *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pVVar1->fields).seats,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    seat = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,seatID,
                      MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_
                     );
    this_01 = (MVJetPack_LocalObjectsJetPack *)
              func_?(TypeInfo__MVJetPack__LocalObjectsJetPack);
    if (this_01 != (MVJetPack_LocalObjectsJetPack *)0x0) {
      MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack__ctor
                (this_01,this,vehicleUser,jetPackTypeParameters,(VehicleSeatBase *)seat,
                 (MethodInfo *)0x0);
      return (MVVehicleBase_LocalObjectsBase *)this_01;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MVVehicleBase_LocalObjectsBase *)(*pcVar2)();
  return pMVar3;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_Destroy(MVJetPack *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).cullingSubscriberDynamic != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
              ((this->fields).cullingSubscriberDynamic,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
    func_?(&(this->fields).cullingSubscriberDynamic,0);
  }
  return;
}


/* MVJetPack+JetPackType GetJetPackType(Dictionary`2[System.Object,System.Object]) */

MVJetPack_JetPackType__Enum
Assembly-CSharp.dll::MVJetPack::MVJetPack_GetJetPackType
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__MVJetPack__JetPackType);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&StringLiteral_WoData_does_not_contain_jetPackT);
    func_?(&StringLiteral_jetPackType);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb,
                           CONCAT13(7,(int3)in_ECX));
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__get_Item
                     (data,pOVar1,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if (this != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      if (((this->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        func_?(this,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        pMStack2 = extraout_EDX;
      }
      else {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this,(Object *)StringLiteral_jetPackType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar3 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_WoData_does_not_contain_jetPackT,(MethodInfo *)0x0);
        }
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this,
                            (Object *)StringLiteral_jetPackType,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar1 == (Object *)0x0) goto code_?;
        pMStack2 = TypeInfo__MVJetPack__JetPackType;
        if ((pOVar1->klass->_0).element_class ==
            (TypeInfo__MVJetPack__JetPackType->_0).element_class) {
          pMStack2 = (MVJetPack_JetPackType__Enum__Class *)pOVar1;
          puVar4 = (undefined1 *)func_?();
          return CONCAT31((int3)((uint)puVar4 >> 8),*puVar4);
        }
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  MVar6 = (*pcVar5)();
  return MVar6;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVJetPack::MVJetPack_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVJetPack *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

{
  if (((boundsContext != BoundsContext__Enum_Insert) &&
      (boundsContext != BoundsContext__Enum_BoxVisualization)) &&
     (boundsContext != BoundsContext__Enum_Preview)) {
    pBVar1 = MVGroup::MVGroup_GetLocalBounds
                       (&BStack_2,(MVGroup *)this,boundsContext,(MethodInfo *)0x0);
    fVar3 = (pBVar1->m_Center).y;
    fVar4 = (pBVar1->m_Center).z;
    fVar5 = (pBVar1->m_Extents).x;
    (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
    (__return_storage_ptr__->m_Center).y = fVar3;
    (__return_storage_ptr__->m_Center).z = fVar4;
    (__return_storage_ptr__->m_Extents).x = fVar5;
    fVar3 = (pBVar1->m_Extents).z;
    (__return_storage_ptr__->m_Extents).y = (pBVar1->m_Extents).y;
    (__return_storage_ptr__->m_Extents).z = fVar3;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_7._0_4_ = (pVVar6->zeroVector).x;
  uStack_7._4_4_ = (pVVar6->zeroVector).y;
  fVar3 = (pVVar6->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  BStack_2.m_Extents.x = (pVVar6->oneVector).x;
  BStack_2.m_Extents.y = (pVVar6->oneVector).y;
  BStack_2.m_Extents.z = (pVVar6->oneVector).z * _UNK_?;
  fVar5 = BStack_2.m_Extents.x * _UNK_?;
  fVar4 = BStack_2.m_Extents.y * _UNK_?;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  center.z = fVar3;
  center.x = (float)(undefined4)uStack_7;
  center.y = (float)uStack_7._4_4_;
  size.y = fVar4;
  size.x = fVar5;
  size.z = BStack_2.m_Extents.z;
  UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds__ctor
            (__return_storage_ptr__,center,size,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* VehicleBaseObject GetPickupPrefabName(Dictionary`2[System.Object,System.Object]) */

VehicleBaseObject *
Assembly-CSharp.dll::MVJetPack::MVJetPack_GetPickupPrefabName
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                   );
    cRam_? = '\x01';
  }
  this = PrefabPool::PrefabPool_get_JetPackPrefabLUT((MethodInfo *)0x0);
  MVar1 = MVJetPack_GetJetPackType(data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT31(data._1_3_,(char)MVar1);
  if (this != (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
               *)0x0) {
    pVVar2 = (VehicleBaseObject *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this,(ByteEnum__Enum)data,
                        MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
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
    func_?(&TypeInfo__CullingSubscriberDynamic);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&
                    InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                   );
    func_?(&
                    JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&MethodInfo__MVJetPack__OnIsDeadChange_System__Object_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_modifiers);
    func_?(&StringLiteral_JetPackCubeModel);
    func_?(&StringLiteral_jetMode);
    func_?(&StringLiteral_shield);
    func_?(&StringLiteral_health);
    cRam_? = '\x01';
  }
  MVVehicleBase::MVVehicleBase_Initialize((MVVehicleBase *)this,(MethodInfo *)0x0);
  worldObjectType = (this->fields)._._._._._.type;
  if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
  }
  this_00 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
            RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_health,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 == (Object *)0x0)) goto code_?;
  if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
  goto code_?;
  pfVar2 = (float *)func_?();
  pMVar3 = (this->fields)._._._._.runtimeDataVariables;
  if (pMVar3 == (MVRuntimeDataVariables *)0x0) {
code_?:
    func_?();
  }
  else {
    maxValue = *pfVar2;
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                        (pMVar3,StringLiteral_health,0.2,0,0.0,maxValue,(MethodInfo *)0x0);
    (this->fields).Health = pMVar4;
    func_?();
    pMVar3 = (this->fields)._._._._.runtimeDataVariables;
    if (pMVar3 == (MVRuntimeDataVariables *)0x0) goto code_?;
    pMVar4 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                        (pMVar3,StringLiteral_shield,0.2,0,0.0,maxValue,(MethodInfo *)0x0);
    (this->fields).shield = pMVar4;
    func_?();
    pMVar3 = (this->fields)._._._._.runtimeDataVariables;
    if (pMVar3 == (MVRuntimeDataVariables *)0x0) goto code_?;
    pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                        (pMVar3,StringLiteral_modifiers,1.0,0,(MethodInfo *)0x0);
    (this->fields).Modifiers = pMVar5;
    func_?();
    pMVar3 = (this->fields)._._._._.runtimeDataVariables;
    if (pMVar3 == (MVRuntimeDataVariables *)0x0) goto code_?;
    pMVar5 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                        (pMVar3,StringLiteral_jetMode,1.0,0,(MethodInfo *)0x0);
    (this->fields).JetMode = pMVar5;
    func_?();
    pMVar5 = (this->fields)._.IsVehicleDead;
    if (pMVar5 == (MVRuntimeDataVariable *)0x0) goto code_?;
    pMVar6 = (pMVar5->fields).OnChange;
    this_01 = (UnityAction_1_System_Object_ *)func_?();
    if (this_01 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__MVJetPack__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar6 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar7 = pMVar6;
      }
      if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar5->fields).OnChange = pMVar7;
        pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar7 = pMVar6;
        }
        if (pMVar7 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      }
code_?:
      func_?();
      goto code_?;
    }
    (pMVar5->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
    func_?();
    cubeModelBase =
         (MVCubeModelInstance *)
         MVBlueprintBase::MVBlueprintBase_GetChild
                   ((MVBlueprintBase *)this,StringLiteral_JetPackCubeModel,(MethodInfo *)0x0);
    if (cubeModelBase == (MVCubeModelInstance *)0x0) {
      cubeModelBase = (MVCubeModelInstance *)0x0;
    }
    else if (((cubeModelBase->klass->_1).typeHierarchyDepth <
              (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
            ((MVCubeModelInstance__Class *)
             (cubeModelBase->klass->_1).typeHierarchy
             [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
             TypeInfo__MVCubeModelInstance)) goto code_?;
    pJVar8 = (this->fields).jetPackParameters;
    if ((pJVar8 == (JetPackParameters *)0x0) ||
       (pIVar9 = (pJVar8->fields).lowerCubeConstraint, pIVar9 == (Int32__Array *)0x0))
    goto code_?;
    if (pIVar9->max_length != 0) {
      pIVar10 = (((this->fields).jetPackParameters)->fields).lowerCubeConstraint;
      if (pIVar10 != (Int32__Array *)0x0) {
        if (pIVar10->max_length < 2) goto code_?;
        pIVar11 = (((this->fields).jetPackParameters)->fields).lowerCubeConstraint;
        if (pIVar11 != (Int32__Array *)0x0) {
          if (pIVar11->max_length < 3) goto code_?;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    ((IntVector *)&stack0xffffffec,pIVar9->vector[0],pIVar10->vector[1],
                     pIVar11->vector[2],(MethodInfo *)0x0);
          pJVar8 = (this->fields).jetPackParameters;
          if ((pJVar8 != (JetPackParameters *)0x0) &&
             (pIVar9 = (pJVar8->fields).upperCubeConstraint, pIVar9 != (Int32__Array *)0x0)) {
            if (pIVar9->max_length == 0) goto code_?;
            pIVar10 = (((this->fields).jetPackParameters)->fields).upperCubeConstraint;
            if (pIVar10 != (Int32__Array *)0x0) {
              if (pIVar10->max_length < 2) goto code_?;
              pIVar11 = (((this->fields).jetPackParameters)->fields).upperCubeConstraint;
              if (pIVar11 != (Int32__Array *)0x0) {
                if (pIVar11->max_length < 3) goto code_?;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          ((IntVector *)&stack0xfffffff4,pIVar9->vector[0],pIVar10->vector[1],
                           pIVar11->vector[2],(MethodInfo *)0x0);
                pJVar8 = (this->fields).jetPackParameters;
                if (pJVar8 != (JetPackParameters *)0x0) {
                  minCubeCount = (pJVar8->fields).minNumberOfCubes;
                  puVar12 = &UNK_?;
                  pEVar13 = TypeInfo__EditableCubeModelWrapper;
                  this_02 = (EditableCubeModelWrapper *)func_?();
                  if (this_02 != (EditableCubeModelWrapper *)0x0) {
                    min.z = (int16_t)pEVar13;
                    min._0_4_ = puVar12;
                    max.z = (int16_t)pEVar13;
                    max._0_4_ = puVar12;
                    EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                              (this_02,cubeModelBase,min,max,minCubeCount,(MethodInfo *)0x0);
                    (this->fields).editableCubeModelWrapper = this_02;
                    func_?();
                    pGVar14 = (this->fields)._._._._.gameObject;
                    if (pGVar14 != (GameObject *)0x0) {
                      this_03 = (JetPackVisualization *)
                                Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                          ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar14,
                                           JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                                          );
                      isInSpawner = (*(this->klass->vtable).get_IsInSpawner.methodPtr)();
                      if (((cubeModelBase != (MVCubeModelInstance *)0x0) &&
                          (pGVar14 = (cubeModelBase->fields)._._.gameObject,
                          pGVar14 != (GameObject *)0x0)) &&
                         (jetPackCubeModel =
                               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform(pGVar14,(MethodInfo *)0x0),
                         this_03 != (JetPackVisualization *)0x0)) {
                        JetPackVisualization::JetPackVisualization_Init
                                  (this_03,isInSpawner,jetPackCubeModel,(this->fields).JetMode,
                                   (MethodInfo *)0x0);
                        (this->fields)._.visualization = (VehicleVisualizationBase *)this_03;
                        func_?();
                        cVar15 = (*(this->klass->vtable).get_IsInSpawner.methodPtr)();
                        if (cVar15 != '\0') {
                          return;
                        }
                        pGVar14 = (cubeModelBase->fields)._._.gameObject;
                        if ((pGVar14 != (GameObject *)0x0) &&
                           (pIVar16 = (InteractionDataHandlerBase *)
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_AddComponent_1
                                                (pGVar14,
                                                 InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                                                ), pIVar16 != (InteractionDataHandlerBase *)0x0)) {
                          (pIVar16->fields)._.worldObjectParent = (MVWorldObjectClient *)this;
                          func_?();
                          (this->fields)._._._._.interactionDataHandlerBase = pIVar16;
                          func_?();
                          (*(cubeModelBase->klass->vtable).set_Visible.methodPtr)
                                    (cubeModelBase,1,
                                     (short)(cubeModelBase->klass->vtable).set_Visible.method);
                          pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)this_03,(MethodInfo *)0x0)
                          ;
                          this_04 = (CullingSubscriberDynamic *)
                                    func_?(TypeInfo__CullingSubscriberDynamic);
                          if (this_04 != (CullingSubscriberDynamic *)0x0) {
                            CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                                      (this_04,4.0,3,pGVar14,(GameObject__Array *)0x0,
                                       (MethodInfo *)0x0);
                            (this->fields).cullingSubscriberDynamic = this_04;
                            func_?();
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
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_InitializeInventory
               (MVJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                   );
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  source = (this->fields)._._._._.gameObject;
  if (source != (GameObject *)0x0) {
    this_00 = (JetPackVisualization *)
              Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                        ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                         JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                        );
    if (this_00 != (JetPackVisualization *)0x0) {
      JetPackVisualization::JetPackVisualization_EnableThruster(this_00,1,(MethodInfo *)0x0);
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pMStack_1 = (pEStack_2->klass->vtable).OnEnterObject.method;
    pEStack_3 = e;
    bVar4 = (*(pEStack_2->klass->vtable).OnEnterObject.methodPtr)();
    return bVar4;
  }
  uVar5 = func_?(&pEStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVJetPack::MVJetPack_OnExitObject
               (MVJetPack *this,EditorStateMachine *e,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pMStack_1 = (pEStack_2->klass->vtable).OnExitObject.method;
    pEStack_3 = e;
    bVar4 = (*(pEStack_2->klass->vtable).OnExitObject.methodPtr)();
    return bVar4;
  }
  uVar5 = func_?(&pEStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_OnIsDeadChange
               (MVJetPack *this,Object *isDead,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
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
                          ((Quaternion *)&stack0xffffffd4,pTVar4,(MethodInfo *)0x0);
      fVar6 = pQVar5->x;
      fVar7 = pQVar5->y;
      fVar8 = pQVar5->z;
      fVar9 = pQVar5->w;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      rotation.y = fVar7;
      rotation.x = fVar6;
      rotation.z = fVar8;
      rotation.w = fVar9;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffd8,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->backVector,
                           (MethodInfo *)0x0);
      uStack_11._0_4_ = pVVar10->x;
      uStack_11._4_4_ = pVVar10->y;
      fStack_12 = pVVar10->z;
      if ((this->fields)._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar13 != (PrefabPool *)0x0) {
          pPVar14 = (pPVar13->fields).particleExplosion;
          pGVar3 = (this->fields)._._._._.gameObject;
          if ((pGVar3 != (GameObject *)0x0) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
             pTVar4 != (Transform *)0x0)) {
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_15,pTVar4,(MethodInfo *)0x0);
            uVar16 = pVVar10->x;
            uVar17 = pVVar10->y;
            VStack_15.x = (float)uStack_11 + (float)uVar16;
            VStack_15.y = uStack_11._4_4_ + (float)uVar17;
            VStack_15.z = fStack_12 + pVVar10->z;
            if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            position_00.y = VStack_15.y;
            position_00.x = VStack_15.x;
            position_00.z = VStack_15.z;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      (pPVar14,position_00,10.0,5.0,1000.0,1,(ExplosionEvent *)0x0,ignoreIDs,
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
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
          VStack_15.x = pVVar10->x;
          VStack_15.y = pVVar10->y;
          VStack_15.z = pVVar10->z;
          fVar6 = (float)uStack_11 + VStack_15.x;
          fVar7 = uStack_11._4_4_ + VStack_15.y;
          fVar8 = fStack_12 + VStack_15.z;
          this_00 = (ExplosionEvent *)
                    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          if (this_00 != (ExplosionEvent *)0x0) {
            worldPosition.z = fVar8;
            worldPosition.x = fVar6;
            worldPosition.y = fVar7;
            MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
            ExplosionEvent__ctor_3
                      (this_00,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__PrefabPool);
              cRam_? = '\x01';
            }
            pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
            if (pPVar13 != (PrefabPool *)0x0) {
              pPVar14 = (pPVar13->fields).particleExplosion;
              pGVar3 = (this->fields)._._._._.gameObject;
              if ((pGVar3 != (GameObject *)0x0) &&
                 (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
                 pTVar4 != (Transform *)0x0)) {
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_15,pTVar4,(MethodInfo *)0x0);
                uVar18 = pVVar10->x;
                uVar19 = pVVar10->y;
                VStack_15.x = (float)uStack_11 + (float)uVar18;
                VStack_15.y = uStack_11._4_4_ + (float)uVar19;
                VStack_15.z = fStack_12 + pVVar10->z;
                if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                position.y = VStack_15.y;
                position.x = VStack_15.x;
                position.z = VStack_15.z;
                SharedWorldObjectGameplayFunctions+Explosion::
                SharedWorldObjectGameplayFunctions_Explosion_Explode
                          (pPVar14,position,10.0,5.0,1000.0,0,this_00,ignoreIDs,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  isDead = extraout_ECX;
  pBVar1 = extraout_EDX;
code_?:
  func_?(isDead,pBVar1);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig() */

VehicleEnergyContainerConfig *
Assembly-CSharp.dll::MVJetPack::MVJetPack_SetupVehicleEnergyContainerConfig
          (VehicleEnergyContainerConfig *__return_storage_ptr__,MVJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                   );
    func_?(&StringLiteral_vehicleEnergyConsumption);
    func_?(&StringLiteral_vehicleEnergyUse);
    func_?(&StringLiteral_vehicleEnergyStorage);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->usingEnergy = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->storage = 0;
  __return_storage_ptr__->consumption = 0;
  if ((this->fields)._._.blueprintData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (this->fields)._._.blueprintData;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    bVar2 = Extensions::Extensions_GetBool
                      (pDVar1,StringLiteral_vehicleEnergyUse,0,(MethodInfo *)0x0);
    pJVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings;
    pDVar1 = (this->fields)._._.blueprintData;
    __return_storage_ptr__->usingEnergy = bVar2;
    if ((pJVar3->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pJVar3);
      pJVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings;
    }
    iVar4 = Extensions::Extensions_GetClampedInt
                      (pDVar1,StringLiteral_vehicleEnergyStorage,
                       (pJVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMinValue,
                       (pJVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMaxValue,0x14,(MethodInfo *)0x0);
    pJVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings;
    __return_storage_ptr__->storage = iVar4;
    iVar4 = Extensions::Extensions_GetClampedInt
                      ((this->fields)._._.blueprintData,StringLiteral_vehicleEnergyConsumption,
                       (pJVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       consumptionMinValue,
                       (pJVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       consumptionMaxValue,3,(MethodInfo *)0x0);
    __return_storage_ptr__->consumption = iVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->storage = -1;
  return __return_storage_ptr__;
}


/* Void VehicleEntered(MVAvatar, Int32) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_VehicleEntered
               (MVJetPack *this,MVAvatar *vehicleUser,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<int>__ExceptWith_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Failed_to_get_avatarPickupOwner);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,(ExceptionArgument__Enum)vehicleUser,(MethodInfo *)seatID);
  this_00 = (this->fields)._.seatManager;
  if (this_00 != (VehicleSeatManager *)0x0) {
    VehicleSeatManager::VehicleSeatManager_set_EnterVehicleDisabled(this_00,1,(MethodInfo *)0x0);
    if ((vehicleUser != (MVAvatar *)0x0) &&
       (this_01 = (vehicleUser->fields)._._.gameObject, this_01 != (GameObject *)0x0)) {
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    (this_01,
                     AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                    );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Failed_to_get_avatarPickupOwner,(MethodInfo *)0x0);
        return;
      }
      this_02 = (Object_1__Class *)
                MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (x != (Object_1 *)0x0) {
        pOVar2 = x->klass;
        uVar3._0_2_ = pOVar2[1]._0.this_arg.attrs;
        uVar3._2_1_ = pOVar2[1]._0.this_arg.type;
        uVar3._3_1_ = pOVar2[1]._0.this_arg.field_0x7;
        other = (IEnumerable_1_System_Int32_ *)(*(code *)pOVar2[1]._0.this_arg.data)(x,uVar3);
        if (this_02 != (Object_1__Class *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__ExceptWith
                    ((HashSet_1_System_Int32_ *)this_02,other,
                     MethodInfo__System__Collections__Generic__HashSet<int>__ExceptWith_System__Collections__Generic__IEnumerable<int>_
                    );
          x[7].klass = this_02;
          func_?(x + 7,this_02);
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


/* MVJetPack(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack__ctor
               (MVJetPack *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  data_00 = data;
  if (cRam_? == '\0') {
    func_?(&
                    WorldObjectTypes__JetPack__JetPackParameters_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectTypes::JetPack::JetPackParameters>__
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                   );
    cRam_? = '\x01';
  }
  this_01 = PrefabPool::PrefabPool_get_JetPackPrefabLUT((MethodInfo *)0x0);
  MVar1 = MVJetPack_GetJetPackType(data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT31(data._1_3_,(char)MVar1);
  if (this_01 !=
      (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_ *)
      0x0) {
    _vehiclePrefab =
         (VehicleBaseObject *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
         Dictionary_2_System_ByteEnum_System_Object__get_Item
                   ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,(ByteEnum__Enum)data,
                    MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                   );
    MVSimpleOneSeatVehicle::MVSimpleOneSeatVehicle__ctor
              ((MVSimpleOneSeatVehicle *)this,data_00,_vehiclePrefab,worldObjects,(MethodInfo *)0x0)
    ;
    uVar2 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 | 0x9000;
    *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar2;
    this_00 = (this->fields)._._._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      pJVar4 = (JetPackParameters *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          WorldObjectTypes__JetPack__JetPackParameters_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectTypes::JetPack::JetPackParameters>__
                         );
      (this->fields).jetPackParameters = pJVar4;
      func_?();
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
  func_?(&(this->fields).shield,value);
  return;
}

