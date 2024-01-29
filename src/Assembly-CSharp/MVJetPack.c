
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
    if (((TypeInfo__MVJetPack->_1).naturalAligment <= (wo->klass->_1).naturalAligment) &&
       ((MVJetPack__Class *)
        (wo->klass->_1).typeHierarchy[(TypeInfo__MVJetPack->_1).naturalAligment - 1] ==
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
  jetPackTypeParameters = (this->fields).jetPackParameters;
  pVVar1 = (this->fields)._.seatManager;
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
    MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack__ctor
              (this_01,this,vehicleUser,jetPackTypeParameters,(VehicleSeatBase *)seat,
               (MethodInfo *)0x0);
    return (MVVehicleBase_LocalObjectsBase *)this_01;
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
  key = (Object *)
        func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb,
                        CONCAT13(7,(int3)in_ECX));
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if ((*(byte *)(*(int *)TVar1.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)TVar1.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        func_?(TVar1.m_Index);
        TStack2.m_Index = (int32_t)extraout_EDX;
      }
      else {
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           TVar1.m_Index,(Object *)StringLiteral_jetPackType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar3 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_WoData_does_not_contain_jetPackT,(MethodInfo *)0x0);
        }
        TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (TVar1.m_Index,(Object *)StringLiteral_jetPackType,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar1.m_Index == 0) goto code_?;
        TStack2.m_Index = (int32_t)TypeInfo__MVJetPack__JetPackType;
        if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
            (TypeInfo__MVJetPack__JetPackType->_0).element_class) {
          TStack2 = TVar1;
          puVar4 = (undefined1 *)func_?();
          return CONCAT31((int3)((uint)puVar4 >> 8),*puVar4);
        }
      }
      func_?();
    }
  }
code_?:
  TStack2.m_Index = (int32_t)&UNK_?;
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
  uVar8 = (pVVar6->oneVector).x;
  uVar9 = (pVVar6->oneVector).y;
  fVar10 = (float)uVar8 * _UNK_?;
  fVar11 = (float)uVar9 * _UNK_?;
  fVar5 = (pVVar6->oneVector).z * _UNK_?;
  (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_7;
  fVar4 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = (float)uStack_7._4_4_;
  fVar5 = fVar5 * _UNK_?;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = fVar10 * fVar4;
  (__return_storage_ptr__->m_Extents).y = fVar11 * fVar4;
  (__return_storage_ptr__->m_Extents).z = fVar5;
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
            RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_health,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar1.m_Index == 0)) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) !=
        (TypeInfo__System__Single->_0).element_class) {
      func_?();
      goto code_?;
    }
    pfVar2 = (float *)func_?();
    pMVar3 = (this->fields)._._._._.runtimeDataVariables;
    if (pMVar3 == (MVRuntimeDataVariables *)0x0) goto code_?;
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
    this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_01,(Object *)this,MethodInfo__MVJetPack__OnIsDeadChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar5->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      func_?();
      cubeModelBase =
           (MVCubeModelInstance *)
           MVBlueprintBase::MVBlueprintBase_GetChild
                     ((MVBlueprintBase *)this,StringLiteral_JetPackCubeModel,(MethodInfo *)0x0);
      if ((cubeModelBase == (MVCubeModelInstance *)0x0) ||
         (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
           (cubeModelBase->klass->_1).naturalAligment &&
          ((MVCubeModelInstance__Class *)
           (cubeModelBase->klass->_1).typeHierarchy
           [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
           TypeInfo__MVCubeModelInstance)))) {
        pJVar7 = (this->fields).jetPackParameters;
        if ((pJVar7 == (JetPackParameters *)0x0) ||
           (pIVar8 = (pJVar7->fields).lowerCubeConstraint, pIVar8 == (Int32__Array *)0x0))
        goto code_?;
        if (pIVar8->max_length != 0) {
          pIVar9 = (((this->fields).jetPackParameters)->fields).lowerCubeConstraint;
          if (pIVar9 != (Int32__Array *)0x0) {
            if (pIVar9->max_length < 2) goto code_?;
            pIVar10 = (((this->fields).jetPackParameters)->fields).lowerCubeConstraint;
            if (pIVar10 != (Int32__Array *)0x0) {
              if (pIVar10->max_length < 3) goto code_?;
              uVar11 = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        ((IntVector *)&stack0xffffffec,pIVar8->vector[0],pIVar9->vector[1],
                         pIVar10->vector[2],(MethodInfo *)0x0);
              pJVar7 = (this->fields).jetPackParameters;
              if ((pJVar7 != (JetPackParameters *)0x0) &&
                 (pIVar8 = (pJVar7->fields).upperCubeConstraint, pIVar8 != (Int32__Array *)0x0)) {
                if (pIVar8->max_length == 0) goto code_?;
                pIVar9 = (((this->fields).jetPackParameters)->fields).upperCubeConstraint;
                if (pIVar9 != (Int32__Array *)0x0) {
                  if (pIVar9->max_length < 2) goto code_?;
                  pIVar10 = (((this->fields).jetPackParameters)->fields).upperCubeConstraint;
                  if (pIVar10 != (Int32__Array *)0x0) {
                    if (pIVar10->max_length < 3) goto code_?;
                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                              ((IntVector *)&stack0xfffffff4,pIVar8->vector[0],pIVar9->vector[1],
                               pIVar10->vector[2],(MethodInfo *)0x0);
                    pJVar7 = (this->fields).jetPackParameters;
                    if (pJVar7 != (JetPackParameters *)0x0) {
                      minCubeCount = (pJVar7->fields).minNumberOfCubes;
                      puVar12 = &UNK_?;
                      this_02 = (EditableCubeModelWrapper *)func_?();
                      min.z = 0;
                      min.x = (short)uVar11;
                      min.y = (short)(uVar11 >> 0x10);
                      max.z = 0;
                      max._0_4_ = puVar12;
                      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                                (this_02,cubeModelBase,min,max,minCubeCount,(MethodInfo *)0x0);
                      (this->fields).editableCubeModelWrapper = this_02;
                      func_?();
                      pGVar13 = (this->fields)._._._._.gameObject;
                      if (pGVar13 != (GameObject *)0x0) {
                        this_03 = (JetPackVisualization *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_GetComponentInChildren_1
                                            (pGVar13,
                                             JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                                            );
                        isInSpawner = (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
                        if (((cubeModelBase != (MVCubeModelInstance *)0x0) &&
                            (pGVar13 = (cubeModelBase->fields)._._.gameObject,
                            pGVar13 != (GameObject *)0x0)) &&
                           (jetPackCubeModel =
                                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_transform(pGVar13,(MethodInfo *)0x0),
                           this_03 != (JetPackVisualization *)0x0)) {
                          JetPackVisualization::JetPackVisualization_Init
                                    (this_03,isInSpawner,jetPackCubeModel,(this->fields).JetMode,
                                     (MethodInfo *)0x0);
                          (this->fields)._.visualization = (VehicleVisualizationBase *)this_03;
                          func_?();
                          cVar14 = (*(code *)(this->klass->vtable).get_IsInSpawner.method)();
                          if (cVar14 != '\0') {
                            return;
                          }
                          pGVar13 = (cubeModelBase->fields)._._.gameObject;
                          if ((pGVar13 != (GameObject *)0x0) &&
                             (pIVar15 = (InteractionDataHandlerBase *)
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_AddComponent_1
                                                  (pGVar13,
                                                  InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                                                  ), pIVar15 != (InteractionDataHandlerBase *)0x0))
                          {
                            (pIVar15->fields)._.worldObjectParent = (MVWorldObjectClient *)this;
                            func_?();
                            (this->fields)._._._._.interactionDataHandlerBase = pIVar15;
                            func_?();
                            (*(code *)(cubeModelBase->klass->vtable).set_Visible.method)
                                      (cubeModelBase,1,
                                       (short)(cubeModelBase->klass->vtable).GetTargetPosition.
                                              methodPtr);
                            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)this_03,(MethodInfo *)0x0);
                            this_04 = (CullingSubscriberDynamic *)
                                      func_?(TypeInfo__CullingSubscriberDynamic);
                            CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                                      (this_04,4.0,3,pGVar13,(GameObject__Array *)0x0,
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
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar16 = pMVar6;
    }
    if (pMVar16 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar5->fields).OnChange = pMVar16;
    pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar16 = pMVar6;
    }
    if (pMVar16 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
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
  this_00 = (this->fields)._._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = (JetPackVisualization *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_1
                        (this_00,
                         JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                        );
    if (this_01 != (JetPackVisualization *)0x0) {
      JetPackVisualization::JetPackVisualization_EnableThruster(this_01,1,(MethodInfo *)0x0);
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
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pIStack_1 = (pEStack_2->klass->vtable).OnExitObject.methodPtr;
    pEStack_3 = e;
    bVar4 = (*(code *)(pEStack_2->klass->vtable).OnEnterObject.method)();
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
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pIStack_1 = pEStack_2->klass[1]._0.image;
    pEStack_3 = e;
    bVar4 = (*(code *)(pEStack_2->klass->vtable).OnExitObject.method)();
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
                          ((Quaternion *)&stack0xffffffb0,pTVar4,(MethodInfo *)0x0);
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
                          (&VStack_11,rotation,
                           TypeInfo__UnityEngine__Vector3->static_fields->backVector,
                           (MethodInfo *)0x0);
      uStack_12._0_4_ = pVVar10->x;
      uStack_12._4_4_ = pVVar10->y;
      fStack_13 = pVVar10->z;
      if ((this->fields)._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar14 != (PrefabPool *)0x0) {
          pEStack_15 = (ExplosionEvent *)(pPVar14->fields).particleExplosion;
          pGVar3 = (this->fields)._._._._.gameObject;
          if ((pGVar3 != (GameObject *)0x0) &&
             (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
             pTVar4 != (Transform *)0x0)) {
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffb0,pTVar4,(MethodInfo *)0x0);
            uVar16 = pVVar10->x;
            uVar17 = pVVar10->y;
            VStack_11.x = (float)uStack_12 + (float)uVar16;
            VStack_11.y = uStack_12._4_4_ + (float)uVar17;
            VStack_11.z = fStack_13 + pVVar10->z;
            if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            position_00.y = VStack_11.y;
            position_00.x = VStack_11.x;
            position_00.z = VStack_11.z;
            SharedWorldObjectGameplayFunctions+Explosion::
            SharedWorldObjectGameplayFunctions_Explosion_Explode
                      ((ParticleSystem *)pEStack_15,position_00,10.0,5.0,1000.0,1,
                       (ExplosionEvent *)0x0,ignoreIDs,(MethodInfo *)0x0);
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
                              ((Vector3 *)&stack0xffffffb0,pTVar4,(MethodInfo *)0x0);
          VStack_11.x = pVVar10->x;
          VStack_11.y = pVVar10->y;
          fVar6 = (float)uStack_12 + VStack_11.x;
          pPStack_18 = (ParticleSystem *)(uStack_12._4_4_ + VStack_11.y);
          VStack_11.z = fStack_13 + pVVar10->z;
          pEStack_15 = (ExplosionEvent *)
                       func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          worldPosition.y = (float)pPStack_18;
          worldPosition.x = fVar6;
          worldPosition.z = VStack_11.z;
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                    (pEStack_15,RuntimeEventType__Enum_Bazooka,worldPosition,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar14 != (PrefabPool *)0x0) {
            pPStack_18 = (pPVar14->fields).particleExplosion;
            pGVar3 = (this->fields)._._._._.gameObject;
            if ((pGVar3 != (GameObject *)0x0) &&
               (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar3,(MethodInfo *)0x0),
               pTVar4 != (Transform *)0x0)) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffb0,pTVar4,(MethodInfo *)0x0);
              uVar19 = pVVar10->x;
              uVar20 = pVVar10->y;
              VStack_11.x = (float)uStack_12 + (float)uVar19;
              VStack_11.y = uStack_12._4_4_ + (float)uVar20;
              VStack_11.z = fStack_13 + pVVar10->z;
              if ((TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              position.y = VStack_11.y;
              position.x = VStack_11.x;
              position.z = VStack_11.z;
              SharedWorldObjectGameplayFunctions+Explosion::
              SharedWorldObjectGameplayFunctions_Explosion_Explode
                        (pPStack_18,position,10.0,5.0,1000.0,0,pEStack_15,ignoreIDs,
                         (MethodInfo *)0x0);
              return;
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_get_avatarPickupOwner,(MethodInfo *)0x0);
        return;
      }
      this_02 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if (x != (Object_1 *)0x0) {
        other = (IEnumerable_1_System_Int32_ *)
                (**(code **)&x->klass[1]._0.this_arg.attrs)(x,x->klass[1]._0.element_class);
        if (this_02 != (HashSet_1_System_Int32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__ExceptWith
                    (this_02,other,
                     MethodInfo__System__Collections__Generic__HashSet<int>__ExceptWith_System__Collections__Generic__IEnumerable<int>_
                    );
          x[7].monitor = (MonitorData *)this_02;
          func_?(&x[7].monitor,this_02);
          return;
        }
      }
    }
  }
  func_?();
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

