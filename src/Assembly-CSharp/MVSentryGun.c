
/* Void ApplyDamage(MVWorldObjectClient, InteractionDataHandlerBase) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_ApplyDamage
               (MVSentryGun *this,MVWorldObjectClient *wo,
               InteractionDataHandlerBase *interactionDataHandlerBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uVar3 = (this->fields).beamType;
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  puVar4 = (undefined8 *)
           (*(code *)(wo->klass->vtable).GetTargetPosition.method)
                     (&IStack_5.impulse.y,wo,wo->klass[1]._0.image);
  uStack_6 = *puVar4;
  fVar7 = *(float *)(puVar4 + 1);
  this_00 = (this->fields)._._.gameObject;
  if (this_00 == (GameObject *)0x0) goto code_?;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0);
  if (this_01 == (Transform *)0x0) goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&IStack_9.impulse.y,this_01,(MethodInfo *)0x0);
  IStack_5._12_8_ = *(undefined8 *)pVVar8;
  fVar10 = pVVar8->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar7;
  a.x = (float)(undefined4)uStack_6;
  a.y = (float)uStack_6._4_4_;
  b.z = fVar10;
  b._0_8_ = IStack_5._12_8_;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&IStack_9.impulse.y,a,b,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar8->x;
  uStack_1._4_4_ = pVVar8->y;
  fStack_2 = pVVar8->z;
  pVVar8 = (Vector3 *)func_?(&IStack_9.impulse.y,&uStack_1,0);
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&IStack_9.impulse.y,*pVVar8,(this->fields).pushBackStrength,
                      (MethodInfo *)0x0);
  if (uVar3 == 0) {
    pIVar11 = &IStack_9;
code_?:
    pIVar11 = SentryTowerFirePackage::SentryTowerFirePackage_Create(pIVar11,*pVVar8,(MethodInfo *)0x0)
    ;
  }
  else {
    if (uVar3 != 1) {
      pIVar11 = &IStack_12;
      goto code_?;
    }
    pIVar11 = SentryTowerIcePackage::SentryTowerIcePackage_Create
                       (&IStack_5,*pVVar8,(MethodInfo *)0x0);
  }
  if (interactionDataHandlerBase != (InteractionDataHandlerBase *)0x0) {
    InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
              (interactionDataHandlerBase,*pIVar11,1,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* InteractionData BeamTypeToInteractionPackageType(SentryGunBeamType, Vector3) */

InteractionData *
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_BeamTypeToInteractionPackageType
          (InteractionData *__return_storage_ptr__,SentryGunBeamType__Enum btype,Vector3 impulse,
          MethodInfo *method)

{
  if (((undefined1)btype == SentryGunBeamType__Enum_FireBeam) ||
     ((undefined1)btype != SentryGunBeamType__Enum_IceBeam)) {
    pIVar1 = SentryTowerFirePackage::SentryTowerFirePackage_Create
                       (&IStack_2,impulse,(MethodInfo *)0x0);
  }
  else {
    pIVar1 = SentryTowerIcePackage::SentryTowerIcePackage_Create
                       (&IStack_2,impulse,(MethodInfo *)0x0);
  }
  fVar3 = (pIVar1->impulse).x;
  fVar4 = (pIVar1->impulse).y;
  fVar5 = (pIVar1->impulse).z;
  uVar6 = pIVar1->interactionType;
  uVar7 = pIVar1->playerKilledByType;
  uVar8 = *(undefined2 *)&pIVar1->field_0x12;
  __return_storage_ptr__->damage = pIVar1->damage;
  (__return_storage_ptr__->impulse).x = fVar3;
  (__return_storage_ptr__->impulse).y = fVar4;
  (__return_storage_ptr__->impulse).z = fVar5;
  __return_storage_ptr__->interactionType = uVar6;
  __return_storage_ptr__->playerKilledByType = uVar7;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar8;
  return __return_storage_ptr__;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_CompareWithKoGaMaPackage
               (MVSentryGun *this,MVWorldObjectClient *wo,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *insertedBy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    this_00 = (PrefabPool *)0x0;
  }
  else {
    bVar1 = (TypeInfo__MVSentryGun->_1).naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar1) ||
       ((MVSentryGun__Class *)(wo->klass->_1).typeHierarchy[bVar1 - 1] != TypeInfo__MVSentryGun)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    this_00 = (PrefabPool *)0x0;
    if (bVar2) {
      this_00 = (PrefabPool *)wo;
    }
  }
  pDVar3 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar3 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar3,(Type *)StringLiteral_beamType,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__SentryGunBeamType,pPVar4);
    if (pPVar4 != (Pool *)0x0) {
      if ((pPVar4->klass->_0).element_class != (TypeInfo__SentryGunBeamType->_0).element_class)
      goto code_?;
      pcVar6 = (char *)func_?();
      cVar7 = *pcVar6;
      if (this_00 != (PrefabPool *)0x0) {
        pDVar3 = (Dictionary_2_System_Type_Pool_ *)
                 PrefabPool::PrefabPool_get_MVBatteryPrefab(this_00,(MethodInfo *)0x0);
        if (pDVar3 != (Dictionary_2_System_Type_Pool_ *)0x0) {
          pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             (pDVar3,(Type *)StringLiteral_beamType,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar5 = CONCAT44(TypeInfo__SentryGunBeamType,pPVar4);
          if (pPVar4 != (Pool *)0x0) {
            if ((pPVar4->klass->_0).element_class == (TypeInfo__SentryGunBeamType->_0).element_class
               ) {
              pcVar6 = (char *)func_?(pPVar4);
              return *pcVar6 == cVar7;
            }
            goto code_?;
          }
        }
      }
    }
  }
  uVar5 = func_?(0);
code_?:
  func_?(uVar5);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DeSelect(MVSentryGun *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Destroy(MVSentryGun *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (this->fields)._.cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
  }
  return;
}


/* Void DoFrameDelete() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DoFrameDelete
               (MVSentryGun *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  method_00 = in_stack_5;
  puVar6 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    method_00 = in_stack_5;
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  puStack_7 = (undefined *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  pLStack_9 = (LevelRewardsManager__Class *)0x0;
  pMStack_10 = (MonitorData *)0x0;
  pDStack_11 = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  iStack_12 = 0;
  func_?();
  this_00 = (this->fields).woIdsBeamsMap;
  pOStack_13 = (Object *)&stack0xffffff7c;
  puStack_4 = &stack0xffffff7c;
  if (this_00 != (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) {
    method_01.rgctx_data = (Il2CppRGCTXData *)&stack0xffffff9c;
    pOStack_13 = (Object *)&stack0xffffff7c;
    puStack_4 = &stack0xffffff7c;
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        method_01.methodMetadataHandle,
                        (Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                       );
    pLStack_9 = (LevelRewardsManager__Class *)pDVar14->dictionary;
    pMStack_10 = (MonitorData *)pDVar14->next;
    pDStack_11 = (Dictionary_2_System_Int32_System_Int32_ *)pDVar14->stamp;
    iStack_12 = (pDVar14->current).key;
    uStack_1 = 0;
code_?:
    cVar15 = func_?();
    if (cVar15 != '\0') {
      KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&pLStack_9,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                            );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      iVar16 = func_?();
      unaff_EDI = (ObjectPrefab *)0x0;
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        this_04 = (PrefabPool *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_03,iVar16,in_stack_17);
        if (this_04 == (PrefabPool *)0x0) {
code_?:
          method_01 = (_union_154)(this->fields).deleteList;
          item = func_?(&KStack_8,
                                 MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Key__
                                );
          unaff_EDI = (ObjectPrefab *)0x0;
          if (method_01.rgctx_data != (Il2CppRGCTXData *)0x0) goto code_?;
        }
        else {
          pOStack_18 = (ObjectPrefab *)
                       func_?(&KStack_8,
                                       MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Value__
                                      );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          in_stack_17 = (MethodInfo *)0x0;
          bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pOStack_18,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar19 != 0) goto code_?;
          pOStack_18 = PrefabPool::PrefabPool_get_MVNegatePrefab(this_04,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pOStack_18,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar19 != 0) goto code_?;
          unaff_EDI = PrefabPool::PrefabPool_get_MVNegatePrefab(this_04,(MethodInfo *)0x0);
          pGVar20 = (this->fields)._._.gameObject;
          if (((pGVar20 != (GameObject *)0x0) &&
              (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar20,in_stack_22),
              pTVar21 != (Transform *)0x0)) &&
             (pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)(auStack_24 + 0xc),pTVar21,method_00),
             unaff_EDI != (ObjectPrefab *)0x0)) {
            method_00 = (MethodInfo *)pVVar23->x;
            in_stack_22 = (MethodInfo *)auStack_24;
            pVVar23 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::
                      Collider_ClosestPointOnBounds
                                ((Vector3 *)in_stack_22,(Collider *)unaff_EDI,*pVVar23,
                                 in_stack_25);
            auStack_24._24_4_ = pVVar23->x;
            auStack_24._28_4_ = pVVar23->y;
            pOStack_18 = (ObjectPrefab *)pVVar23->z;
            pGVar20 = (this->fields)._._.gameObject;
            if ((pGVar20 != (GameObject *)0x0) &&
               (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform
                                    (pGVar20,(MethodInfo *)method_01.methodMetadataHandle),
               pTVar21 != (Transform *)0x0)) goto code_?;
          }
        }
      }
      goto code_?;
    }
    unaff_EDI = (ObjectPrefab *)0x0;
    pOStack_13->klass = (Object__Class *)0xf0;
    uStack_1 = 0xffffffff;
    func_?();
    pLVar26 = (this->fields).deleteList;
    if (pLVar26 == (List_1_System_Int32_ *)0x0) goto code_?;
    pOStack_13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar26,
                            MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    if (0 < (int)pOStack_13) {
      do {
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).woIdsBeamsMap;
        pLVar26 = (this->fields).deleteList;
        if ((pLVar26 == (List_1_System_Int32_ *)0x0) ||
           (iVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                     List_1_System_Int32__get_Item
                               (pLVar26,(int32_t)unaff_EDI,
                                MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
           this_01 ==
           (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (this_01,iVar16,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                  );
        unaff_EDI = (ObjectPrefab *)((int)&unaff_EDI->klass + 1);
      } while ((int)unaff_EDI < (int)pOStack_13);
    }
    this_02 = (List_1_UnityEngine_UIVertex_ *)(this->fields).deleteList;
    if (this_02 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_02,MethodInfo__System__Collections__Generic__List<int>__Clear__);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
code_?:
  pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&pIStack_28,pTVar21,(MethodInfo *)0x0);
  auStack_24._32_4_ = pVVar23->x;
  auStack_24._36_4_ = pVVar23->y;
  fVar29 = pVVar23->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  method_01 = SUB84(auStack_24._24_8_,4);
  a.z = (float)pOStack_18;
  a.x = (float)auStack_24._24_4_;
  a.y = (float)auStack_24._28_4_;
  b.z = fVar29;
  b.x = (float)auStack_24._32_4_;
  b.y = (float)auStack_24._36_4_;
  pOStack_18 = (ObjectPrefab *)
               UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                         (a,b,(MethodInfo *)0x0);
  pfVar30 = &(this->fields).laserRange;
  if (*pfVar30 <= (float)pOStack_18 && (float)pOStack_18 != *pfVar30) {
code_?:
    method_01 = (_union_154)(this->fields).deleteList;
    item = func_?();
    unaff_EDI = (ObjectPrefab *)0x0;
    if (method_01.rgctx_data == (Il2CppRGCTXData *)0x0) goto code_?;
code_?:
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)method_01.methodMetadataHandle,item,
               MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  goto code_?;
}


/* Boolean DoRespawn() */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DoRespawn(MVSentryGun *this,MethodInfo *method)

{
  if ((this->fields).wasDead != 0) {
    this_00 = (this->fields).interactable;
    if (this_00 == (ClientSideNPCInteractable *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    bVar2 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      (this->fields).wasDead = 0;
      return 1;
    }
  }
  return 0;
}


/* Boolean HitsTarget(Ray, Int32) */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_HitsTarget
               (MVSentryGun *this,Ray ray,int32_t woID,MethodInfo *method)

{
  func_?(&VStack_1,0,0x48);
  bVar2 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,&VStack_1,(this->fields).laserRange,
                     (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField,-5,
                     (MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  return VStack_1.woId == woID;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Initialize(MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)0x0,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                     ((DayNightCycle *)this,(MethodInfo *)0x0);
  if (pCVar2 != (CelestialParam *)0x0) {
    pCVar3 = (ClientSideNPCInteractable *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       ((GameObject *)pCVar2,
                        ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                       );
    (this->fields).interactable = pCVar3;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__MVSentryGun__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
               ,
               MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Action_System__Object__void__
              );
    if (pCVar3 != (ClientSideNPCInteractable *)0x0) {
      ClientSideNPCInteractable::ClientSideNPCInteractable_Init
                (pCVar3,(Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)pUVar4,
                 (MethodInfo *)0x0);
      MVSentryGun_InitializeCommon(this,(MethodInfo *)0x0);
      pCVar2 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)this,(MethodInfo *)0x0);
      if (pCVar2 != (CelestialParam *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar2,
                             ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                            );
        if (this_01 != (UseInteractorHandler *)0x0) {
          MVComponent::MVComponent_FindWorldObjectParent((MVComponent *)this_01,(MethodInfo *)0x0);
          pCVar3 = (this->fields).interactable;
          if (pCVar3 != (ClientSideNPCInteractable *)0x0) {
            bVar5 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
                              (pCVar3,(MethodInfo *)0x0);
            (this->fields).wasDead = bVar5;
            MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
            pUVar6 = (this->fields)._._.PositionChanged;
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)this,
                       MethodInfo__MVSentryGun__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                       ,
                       MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                      );
            pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pUVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
            pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
            if (pUVar7 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              if (pUVar7->klass ==
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 ) {
                pUVar6 = pUVar7;
              }
              if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
              goto code_?;
            }
            (this->fields)._._.PositionChanged = pUVar6;
            puVar8 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
            uVar9 = *puVar8;
            fVar10 = *(float *)(puVar8 + 1);
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)this,
                       MethodInfo__MVSentryGun__OnStateChange_UnityEngine__CullingGroupEvent_,
                       MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                      );
            this_02 = (CullingSubscriberBase *)func_?();
            position.z = fVar10;
            position.x = (float)(int)uVar9;
            position.y = (float)(int)((ulonglong)uVar9 >> 0x20);
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      (this_02,2.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar4,
                       (MethodInfo *)0x0);
            (this->fields)._.cullingSubscriberBase = this_02;
            if (this_02 != (CullingSubscriberBase *)0x0) {
              LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                        ((LockCursorManager3DMode *)this_02,(Action_1_Boolean_ *)0x3,
                         (MethodInfo *)0x0);
              pMVar11 = (this->fields).gunObject;
              if ((pMVar11 != (MVSentryGunObject *)0x0) &&
                 (this_00 = (pMVar11->fields).sentryGunScript, this_00 != (SentryGunScript *)0x0)) {
                SentryGunScript::SentryGunScript_SetLaserRange
                          (this_00,(this->fields).laserRange,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_InitializeCommon
               (MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_01 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_01,StringLiteral_beamType,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
code_?:
      pMVar2 = (this->fields).gunObject;
      if ((pMVar2 != (MVSentryGunObject *)0x0) &&
         (this_00 = (pMVar2->fields).sentryGunScript, this_00 != (SentryGunScript *)0x0)) {
        SentryGunScript::SentryGunScript_SetSentryGunBeamType
                  (this_00,(uint)(this->fields).beamType,(MethodInfo *)0x0);
        uVar3 = (this->fields).beamType;
        if (uVar3 == 0) {
          (this->fields).interactionType = 10;
        }
        else if (uVar3 == 1) {
          (this->fields).interactionType = 0xb;
          return;
        }
        return;
      }
    }
    else {
      this_02 = (Dictionary_2_System_Type_Pool_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (this_02 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_02,(Type *)StringLiteral_beamType,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar4 != (Pool *)0x0) {
          if ((pPVar4->klass->_0).element_class != (TypeInfo__SentryGunBeamType->_0).element_class)
          goto code_?;
          puVar5 = (uint8_t *)func_?();
          (this->fields).beamType = *puVar5;
          goto code_?;
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


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_InitializeInventory
               (MVSentryGun *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  MVSentryGun_InitializeCommon(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).gunObject;
  if (((pMVar1 != (MVSentryGunObject *)0x0) &&
      (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) &&
     (this_00 = (pSVar2->fields).glowPlane, this_00 != (Transform *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnPositionChanged
               (MVSentryGun *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (this_00 = (this->fields)._.cullingSubscriberBase, this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              (this_00,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnStateChange
               (MVSentryGun *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = cullingGroupEvent._4_4_;
  iVar2 = cullingGroupEvent.m_Index;
  this_00 = (this->fields)._.cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    uVar3 = cullingGroupEvent._4_4_;
    cullingGroupEvent.m_PrevState = (uint8_t)uVar1;
    cullingGroupEvent.m_ThisState = SUB41(uVar1,1);
    cullingGroupEvent._6_2_ = SUB42(uVar1,2);
    cullingGroupEvent_00.m_PrevState = cullingGroupEvent.m_PrevState;
    cullingGroupEvent_00.m_ThisState = cullingGroupEvent.m_ThisState;
    cullingGroupEvent_00._6_2_ = cullingGroupEvent._6_2_;
    cullingGroupEvent_00.m_Index = iVar2;
    cullingGroupEvent._4_4_ = uVar3;
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent_00,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    iVar4 = func_?(&cullingGroupEvent,0);
    if (iVar4 < 4) {
      value = 1;
    }
    this_01 = (this->fields)._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnUpdate(MVSentryGun *this,MethodInfo *method)

{
  pMVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffea4;
  puVar6 = &stack0xfffffea4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  fStack_7 = 0.0;
  iStack_8 = 0;
  pDStack_9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)0x0;
  auStack_10._20_8_ = 0;
  KStack_11.key = 0;
  KStack_11.value = 0;
  auStack_10._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_10._4_4_ = (GameObject *)0x0;
  auStack_10._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_10._12_4_ = 0;
  auStack_10._16_4_ = 0;
  auStack_12._0_4_ = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  auStack_12._4_4_ = (GameObject *)0x0;
  auStack_12._8_4_ = (Collider *)0x0;
  auStack_12._12_4_ = (Transform *)0x0;
  _Stack_94.genericMethod = (Il2CppGenericMethod *)0x0;
  KStack_13.key = 0;
  KStack_13.value = 0;
  auStack_12._16_4_ = (Il2CppClass *)0x0;
  pOStack_14 = (ObjectPrefab *)0x0;
  pMStack_15 = (MVGroup *)0x0;
  _Stack_98.rgctx_data = (Il2CppRGCTXData *)0x0;
  uVar16._0_4_ = (Il2CppClass *)0x0;
  uVar16._4_4_ = (Il2CppType *)0x0;
  func_?();
  iVar17 = -1;
  fStack_18 = -NAN;
  pMVar19 = this;
  pLStack_20 = (List_1_System_Int32_ *)&stack0xfffffea4;
  puStack_5 = &stack0xfffffea4;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((this->fields).wasDead == 0) {
code_?:
    if ((this->fields)._InputSignalReceiver_k__BackingField == (IInputSignalReceiver *)0x0)
    goto code_?;
    method_01 = (MethodInfo *)0x1;
    method_00 = (MethodInfo *)&UNK_?;
    method_02 = TypeInfo__IInputSignalReceiver;
    cVar21 = func_?();
    if (cVar21 == '\0') {
code_?:
      MVSentryGun_DoFrameDelete(this,(MethodInfo *)0x0);
      this_06 = (MVSentryGun__Class *)(this->fields).woIdsBeamsMap;
      if (this_06 != (MVSentryGun__Class *)0x0) {
        pMVar22 = (MethodInfo *)&UNK_?;
        pDVar23 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                            ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                              *)&stack0xffffff30,
                             (Dictionary_2_WinningConditionType_System_Object_ *)this_06,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                            );
        auStack_12._16_4_ = pDVar23->dictionary;
        pOStack_14 = (ObjectPrefab *)pDVar23->next;
        pMStack_15 = (MVGroup *)pDVar23->stamp;
        _Stack_98 = (_union_154)(pDVar23->current).key;
        _Stack_94 = (_union_155)(pDVar23->current).value;
        uStack_2 = 4;
        while (cVar21 = func_?(), iVar24 = iStack_8, cVar21 != '\0') {
          KStack_13 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)(auStack_12 + 0x10),
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                                );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar25 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pMStack_26 = pMVar25;
          iVar27 = func_?();
          if ((pMStack_26 == (MVWorldObjectClientManager *)0x0) ||
             (pMVar25 = pMStack_26,
             pPVar28 = (PrefabPool *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMStack_26,iVar27,method_00), pPVar28 == (PrefabPool *)0x0))
          goto code_?;
          pOVar29 = PrefabPool::PrefabPool_get_MVNegatePrefab(pPVar28,(MethodInfo *)0x0);
          pMStack_26 = (MVWorldObjectClientManager *)pOVar29;
          pSStack_30 = (SentryGunBeam *)func_?();
          pGVar31 = (this->fields)._._.gameObject;
          if ((pGVar31 == (GameObject *)0x0) ||
             (pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar31,(MethodInfo *)pMVar25),
             pTVar32 == (Transform *)0x0)) goto code_?;
          pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)(auStack_34 + 4),pTVar32,method_00);
          VStack_35.y = pVVar33->x;
          VStack_35.z = pVVar33->y;
          pHStack_36 = (HashSet_1_System_Int32_ *)pVVar33->z;
          if (pMStack_26 == (MVWorldObjectClientManager *)0x0) goto code_?;
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                    ((Bounds *)&stack0xfffffeb0,(Collider *)pMStack_26,(MethodInfo *)0x0);
          pMVar22 = (MethodInfo *)&stack0xfffffeec;
          pVVar33 = (Vector3 *)func_?();
          if (pSStack_30 == (SentryGunBeam *)0x0) goto code_?;
          method_00 = (MethodInfo *)pVVar33->x;
          method_01 = (MethodInfo *)pVVar33->y;
          start.z = (float)pHStack_36;
          start.x = VStack_35.y;
          start.y = VStack_35.z;
          SentryGunBeam::SentryGunBeam_SetBeamPositions(pSStack_30,start,*pVVar33,(MethodInfo *)0x0)
          ;
        }
        (&pLStack_20->monitor)[iVar17] = (MonitorData *)0x370;
        uStack_2 = 0xffffffff;
        func_?();
        if (iVar24 != 0) goto code_?;
        pDVar37 = (this->fields).woIdsBeamsMap;
        if (pDVar37 != (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) {
          pOVar38 = System.Core.dll::System::Linq::
                    Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                    KeyValuePair`2[System::Object,System::Object],System::Object]::
                    Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                              ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                *)pDVar37,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                              );
          if (0 < (int)pOVar38) {
            pMVar39 = (this->fields).gunObject;
            if ((pMVar39 == (MVSentryGunObject *)0x0) ||
               (pAVar40 = (pMVar39->fields).audioSource, pAVar40 == (AudioSource *)0x0))
            goto code_?;
            bVar41 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                     AudioSource_get_isPlaying(pAVar40,method_01);
            if (bVar41 == 0) {
              pMVar39 = (this->fields).gunObject;
              if ((pMVar39 == (MVSentryGunObject *)0x0) ||
                 (pAVar40 = (pMVar39->fields).audioSource, pAVar40 == (AudioSource *)0x0))
              goto code_?;
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                        (pAVar40,(MethodInfo *)0x0);
            }
          }
          pDVar37 = (this->fields).woIdsBeamsMap;
          if (pDVar37 != (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) {
            pOVar38 = System.Core.dll::System::Linq::
                      Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic
                      ::KeyValuePair`2[System::Object,System::Object],System::Object]::
                      Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                  *)pDVar37,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                                );
            if (pOVar38 == (Object *)0x0) {
              pMVar39 = (this->fields).gunObject;
              if ((pMVar39 == (MVSentryGunObject *)0x0) ||
                 (pAVar40 = (pMVar39->fields).audioSource, pAVar40 == (AudioSource *)0x0))
              goto code_?;
              bVar41 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                       AudioSource_get_isPlaying(pAVar40,pMVar22);
              if (bVar41 != 0) {
                pMVar39 = (this->fields).gunObject;
                if ((pMVar39 == (MVSentryGunObject *)0x0) ||
                   (pAVar40 = (pMVar39->fields).audioSource, pAVar40 == (AudioSource *)0x0))
                goto code_?;
                pMVar22 = (MethodInfo *)&UNK_?;
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                          (pAVar40,(MethodInfo *)this_06);
              }
            }
            pDVar37 = (this->fields).woIdsBeamsMap;
            if (pDVar37 != (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) {
              pOVar38 = System.Core.dll::System::Linq::
                        Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                        Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                    *)pDVar37,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                                  );
              pMVar19 = _UNK_?;
              if ((int)pOVar38 < 1) {
                pMVar19 = _UNK_?;
              }
              pCVar42 = (this->fields).interactable;
              if (pCVar42 != (ClientSideNPCInteractable *)0x0) {
                bVar41 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar42,pMVar22)
                ;
                this = pMVar19;
                if (bVar41 != 0) {
                  this = (MVSentryGun *)0x0;
                }
                pSStack_30 = (SentryGunBeam *)(pMVar1->fields).glowFactor;
                fVar43 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                pMStack_26 = (MVWorldObjectClientManager *)fVar43;
                if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                  func_?();
                }
                fVar43 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                                   ((float)pSStack_30,(float)this,(float)pMStack_26 * _UNK_?,
                                    (MethodInfo *)0x0);
                (pMVar1->fields).glowFactor = fVar43;
                *unaff_FS_OFFSET = uStack_4;
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pCVar42 = (this->fields).interactable;
    if (pCVar42 == (ClientSideNPCInteractable *)0x0) goto code_?;
    pMVar22 = (MethodInfo *)&UNK_?;
    bVar41 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar42,method_00);
    if (bVar41 != 0) goto code_?;
    method_01 = (MethodInfo *)(this->fields).intervalWithRandomSeed;
    if (method_01 == (MethodInfo *)0x0) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    bVar41 = IntervalWithRandomSeed::IntervalWithRandomSeed_Update
                       ((IntervalWithRandomSeed *)method_01,(MethodInfo *)method_02);
    if (bVar41 == 0) {
code_?:
      pMVar39 = (this->fields).gunObject;
      if ((pMVar39 != (MVSentryGunObject *)0x0) &&
         (this_01 = (pMVar39->fields).sentryGunScript, this_01 != (SentryGunScript *)0x0)) {
        SentryGunScript::SentryGunScript_UpdateAnimation(this_01,(MethodInfo *)in_stack_44);
        goto code_?;
      }
      goto code_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      in_stack_44 = TypeInfo__MVGameControllerBase;
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_02 == (MVNetworkGame *)0x0) goto code_?;
    method_01 = (MethodInfo *)&UNK_?;
    bVar41 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_02,(MethodInfo *)0x0);
    if (bVar41 == 0) goto code_?;
    pHStack_45 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHStack_45,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pGVar31 = (this->fields)._._.gameObject;
    if ((pGVar31 == (GameObject *)0x0) ||
       (pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar31,in_stack_46), pTVar32 == (Transform *)0x0))
    goto code_?;
    pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_35,pTVar32,in_stack_47);
    _pCStack_38 = *(undefined8 *)pVVar33;
    pIStack_48 = (Il2CppClass *)pVVar33->z;
    pLStack_49 = (List_1_UnityEngine_Vector4_ *)(this->fields).laserRange;
    if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
      func_?();
    }
    results = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    iVar27 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Player,(MethodInfo *)0x0);
    position.z = (float)pIStack_48;
    position._0_8_ = _pCStack_38;
    iVar27 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                       (position,(float)pLStack_49,results,1 << ((byte)iVar27 & 0x1f),
                        (MethodInfo *)0x0);
    pMStack_26 = (MVWorldObjectClientManager *)iVar27;
    pLStack_49 = (List_1_UnityEngine_Vector4_ *)0x0;
    if (0 < iVar27) {
      do {
        method_03 = (Il2CppClass *)uVar16;
        if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000
             ) != 0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
          func_?();
        }
        if ((TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer ==
             (Collider__Array *)0x0) ||
           (this_03 = (Component_1 *)func_?(), this_03 == (Component_1 *)0x0))
        goto code_?;
        pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            (this_03,(MethodInfo *)method_03);
        uVar16._0_4_ = (Il2CppClass *)0x0;
        uVar16._4_4_ = (Il2CppType *)0x0;
        this_04.methodMetadataHandle =
             (Il2CppMetadataMethodDefinitionHandle)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                       (pTVar32,(MethodInfo *)0x0);
        if (this_04.rgctx_data != (Il2CppRGCTXData *)0x0) {
          pIStack_48 = (Il2CppClass *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)this_04.methodMetadataHandle,
                                  (MethodInfo *)0x0);
          _Var31.genericMethod = (Il2CppGenericMethod *)0x0;
          pSVar50 = (SentryGunBeam *)
                    MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                              ((MVWorldObjectClient *)this_04.methodMetadataHandle,(MethodInfo *)0x0
                              );
          pSStack_30 = pSVar50;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          puVar51 = &UNK_?;
          pSVar52 = pSVar50;
          bVar41 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                             ((Object_1 *)pSVar50,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar41 == 0) {
            _uStack_58 = (float)CONCAT31(uStack_53,(this->fields).interactionType);
            if (pSVar50 == (SentryGunBeam *)0x0) goto code_?;
            uVar54._4_4_ = (float)&UNK_?;
            uVar54._0_4_ = (float)pSVar52;
            cVar21 = func_?();
            if (cVar21 != '\0') {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                this_04.rgctx_data = (Il2CppRGCTXData *)&UNK_?;
                _Var31 = (_union_155)TypeInfo__MVGameControllerBase;
                func_?();
              }
              pMVar25 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if ((pMVar25 == (MVWorldObjectClientManager *)0x0) ||
                 (wo = (MVWorldObjectClient *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar25,(int32_t)pIStack_48,(MethodInfo *)0x0),
                 wo == (MVWorldObjectClient *)0x0)) goto code_?;
              puVar55 = (undefined8 *)func_?();
              uVar56 = *puVar55;
              fStack_57 = *(float *)(puVar55 + 1);
              pGVar31 = (this->fields)._._.gameObject;
              if ((pGVar31 == (GameObject *)0x0) ||
                 (pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar31,(MethodInfo *)pMVar19),
                 pTVar32 == (Transform *)0x0)) goto code_?;
              pMVar19 = (MVSentryGun *)&stack0xfffffec8;
              pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)pMVar19,pTVar32,pMVar22);
              VStack_35.y = pVVar33->x;
              VStack_35.z = pVVar33->y;
              pDStack_58 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)pVVar33->z;
              pGVar31 = (this->fields)._._.gameObject;
              if ((pGVar31 == (GameObject *)0x0) ||
                 (pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar31,(MethodInfo *)pMVar25),
                 pTVar32 == (Transform *)0x0)) goto code_?;
              pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xfffffebc,pTVar32,(MethodInfo *)0x0);
              uVar59._0_4_ = (Dictionary_2_System_Object_System_Object_ *)pVVar33->x;
              uVar59._4_4_ = (int32_t)pVVar33->y;
              fStack_60 = pVVar33->z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar22 = (MethodInfo *)&UNK_?;
              a.z = fStack_57;
              a.x = (float)(int32_t)uVar56;
              a.y = (float)SUB84(uVar56,4);
              b.z = fStack_60;
              b.x = (float)(Dictionary_2_System_Object_System_Object_ *)uVar59;
              b.y = (float)SUB84(uVar59,4);
              pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  ((Vector3 *)&stack0xfffffee0,a,b,(MethodInfo *)0x0);
              auStack_10._20_8_ = *(undefined8 *)pVVar33;
              fStack_7 = pVVar33->z;
              func_?();
              func_?();
              ray.m_Origin.y = (float)this_04.rgctx_data;
              ray.m_Origin.x = (float)&UNK_?;
              ray.m_Origin.z = (float)_Var31.genericMethod;
              ray.m_Direction.x = (float)puVar51;
              ray.m_Direction.y = (float)uVar54;
              ray.m_Direction.z = SUB84(uVar54,4);
              bVar41 = MVSentryGun_HitsTarget(this,ray,(int32_t)pIStack_48,(MethodInfo *)0x0);
              if (bVar41 != 0) {
                if (pHStack_45 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0)
                goto code_?;
                uVar16._4_4_ = (Il2CppType *)
                               MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                ;
                uVar16._0_4_ = pIStack_48;
                bVar41 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::
                         Api::NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                   ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)pHStack_45,
                                    (NativeAdType__Enum)pIStack_48,
                                    MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                   );
                if (bVar41 == 0) {
                  pDStack_58 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)(this->fields).woIdsBeamsMap;
                  pIVar61 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
                  if (pDStack_58 ==
                      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
                  bVar41 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__TryGetValue
                                     (pDStack_58,(int32_t)pIVar61,
                                      (TerrainUtility_TerrainMap **)&pDStack_9,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__TryGetValue_int__SentryGunBeam__
                                     );
                  if (bVar41 == 0) {
code_?:
                    pDStack_58 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                  *)(this->fields).woIdsBeamsMap;
                    pIVar61 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                              ::Collection_1_VoxelHit__get_Items
                                        ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
                    if (pDStack_58 ==
                        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                              (pDStack_58,(int32_t)pIVar61,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                              );
                    uVar62 = (this->fields).beamType;
                    if (uVar62 == 0) {
                      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0)
                         && ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
                        auStack_34._4_4_ = TypeInfo__PrefabPool;
                        auStack_34._0_4_ = &UNK_?;
                        func_?();
                      }
                      pPVar28 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
                      if (pPVar28 == (PrefabPool *)0x0) goto code_?;
                      prefab = MVAvatar::MVAvatar_get_Body((MVAvatar *)pPVar28,(MethodInfo *)0x0);
                      fStack_63 = (float)CONCAT31(fStack_63._1_3_,(this->fields).beamType);
                      pDStack_9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                    *)SentryGunBeam::SentryGunBeam_Create
                                                ((SentryGunBeam *)prefab,
                                                 (SentryGunBeamType__Enum)fStack_63,this,
                                                 (MethodInfo *)0x0);
                    }
                    else if (uVar62 == 1) {
                      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0)
                         && ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
                        auStack_34._4_4_ = TypeInfo__PrefabPool;
                        auStack_34._0_4_ = &UNK_?;
                        func_?();
                      }
                      pPVar28 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
                      if (pPVar28 == (PrefabPool *)0x0) goto code_?;
                      pSVar50 = PrefabPool::PrefabPool_get_IceBeamObject(pPVar28,(MethodInfo *)0x0);
                      pHStack_36 = (HashSet_1_System_Int32_ *)
                                   CONCAT31(pHStack_36._1_3_,(this->fields).beamType);
                      pDStack_9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                    *)SentryGunBeam::SentryGunBeam_Create
                                                (pSVar50,(SentryGunBeamType__Enum)pHStack_36,this,
                                                 (MethodInfo *)0x0);
                    }
                    else {
                      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                        auStack_34._4_4_ = TypeInfo__UnityEngine__Debug;
                        auStack_34._0_4_ = &UNK_?;
                        func_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                                ((Object *)StringLiteral_Sentry_gun_have_an_invalid_beam_,
                                 (MethodInfo *)0x0);
                    }
                    pDStack_58 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                  *)(this->fields).woIdsBeamsMap;
                    pIVar61 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                              ::Collection_1_VoxelHit__get_Items
                                        ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
                    if (pDStack_58 ==
                        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Add
                              ((Dictionary_2_System_Int32_System_Object_ *)pDStack_58,
                               (int32_t)pIVar61,(Object *)pDStack_9,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Add_int__SentryGunBeam_
                              );
                  }
                  else {
                    pDStack_58 = pDStack_9;
                    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                      func_?();
                    }
                    bVar41 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                       ((Object_1 *)pDStack_58,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar41 == 0) goto code_?;
                    if (pDStack_9 ==
                        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
                    SentryGunBeam::SentryGunBeam_RefreshTime
                              ((SentryGunBeam *)pDStack_9,(MethodInfo *)in_stack_64);
                  }
                  MVSentryGun_ApplyDamage
                            (this,wo,(InteractionDataHandlerBase *)pSStack_30,(MethodInfo *)0x0);
                  item = (UnityWebRequest *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                         Collection_1_VoxelHit__get_Items
                                   ((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
                  System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
                  UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                            ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHStack_45,item,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                }
              }
            }
          }
        }
        pLStack_49 = (List_1_UnityEngine_Vector4_ *)((int)&pLStack_49->klass + 1);
      } while ((int)pLStack_49 < (int)pMStack_26);
    }
    this_05 = (List_1_UnityEngine_Vector4_ *)func_?();
    pLStack_49 = this_05;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_05,MethodInfo__System__Collections__Generic__List<int>__List__);
    pMStack_26 = (MVWorldObjectClientManager *)this_05;
    if ((this->fields).woIdsBeamsMap == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
    goto code_?;
    puVar65 = (undefined4 *)func_?();
    auStack_10._0_4_ = *puVar65;
    auStack_10._4_4_ = puVar65[1];
    auStack_10._8_4_ = puVar65[2];
    auStack_10._12_4_ = puVar65[3];
    auStack_10._16_4_ = puVar65[4];
    uStack_2 = 0;
    while (cVar21 = func_?(), cVar21 != '\0') {
      KStack_11 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_10,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                            );
      item_00 = func_?();
      if (pHStack_45 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0)
      goto code_?;
      bVar41 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
               NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                         ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)pHStack_45,item_00,
                          MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
      if (bVar41 == 0) {
        item_01 = func_?();
        if (this_05 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_05,item_01,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    iVar24 = 0;
    fStack_18 = 0.0;
    pLStack_20->klass = (List_1_System_Int32___Class *)0x294;
    uStack_2 = 0xffffffff;
    func_?();
    if (iStack_8 != 0) goto code_?;
    if (pLStack_20->klass == (List_1_System_Int32___Class *)0x294) {
      iVar24 = -1;
      fStack_18 = -NAN;
    }
    if (pLStack_49 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
    pLVar66 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__GetEnumerator
                        ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_34,
                         (List_1_UnityEngine_Color32_ *)pLStack_49,
                         MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    auStack_12._0_4_ = pLVar66->l;
    auStack_12._4_4_ = pLVar66->next;
    auStack_12._8_4_ = pLVar66->ver;
    auStack_12._12_4_ = (pLVar66->current).rgba;
    uStack_2 = 2;
    while( true ) {
      in_stack_44 = (MVGameControllerBase__Class *)&UNK_?;
      cVar21 = func_?();
      if (cVar21 == '\0') break;
      pOVar38 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)auStack_12,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                          );
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).woIdsBeamsMap;
      if (this_00 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (this_00,(int32_t)pOVar38,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                );
    }
    iVar17 = iVar24 + 1;
    (&pLStack_20->monitor)[iVar24] = (MonitorData *)0x2d8;
    uStack_2 = 0xffffffff;
    method_00 = (MethodInfo *)auStack_12;
    method_01 = MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__;
    func_?();
    if (iStack_8 == 0) {
      if (((iVar17 != -1) && ((&pLStack_20->monitor)[iVar24] == (MonitorData *)0x2d8)) &&
         (-1 < iVar17)) {
        iVar17 = iVar24;
      }
      goto code_?;
    }
  }
  else {
    pCVar42 = (this->fields).interactable;
    if (pCVar42 != (ClientSideNPCInteractable *)0x0) {
      bVar41 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar42,(MethodInfo *)0x0)
      ;
      if (bVar41 == 0) {
        (this->fields).wasDead = 0;
        MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
      }
      goto code_?;
    }
code_?:
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar67 = (code *)swi(3);
  (*pcVar67)();
  return;
}


/* Void ReceiveDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_ReceiveDamage
               (MVSentryGun *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (_UNK_? < amount) {
    pMVar1 = (this->fields).gunObject;
    if ((pMVar1 == (MVSentryGunObject *)0x0) ||
       (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 == (SentryGunScript *)0x0))
    goto code_?;
    SentryGunScript::SentryGunScript_BlinkDamage(pSVar2,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    bVar3 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    if (bVar3 == 0) {
code_?:
      MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = (this->fields).gunObject;
    if ((pMVar1 != (MVSentryGunObject *)0x0) &&
       (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) {
      SentryGunScript::SentryGunScript_Explode(pSVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields).gunObject;
      if ((pMVar1 != (MVSentryGunObject *)0x0) &&
         (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) {
        SentryGunScript::SentryGunScript_EnableSmoke(pSVar2,(MethodInfo *)0x0);
        (this->fields).wasDead = 1;
        goto code_?;
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Reset(MVSentryGun *this,MethodInfo *method)

{
  this_00 = (this->fields).interactable;
  (this->fields).wasDead = 0;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    ClientSideNPCInteractable::ClientSideNPCInteractable_Reset(this_00,(MethodInfo *)0x0);
    MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Select
               (MVSentryGun *this,Color color,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  return;
}


/* Void UpdateSentryState() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_UpdateSentryState
               (MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    bVar1 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields).gunObject;
    if (bVar1 == 0) {
      if ((pMVar2 != (MVSentryGunObject *)0x0) &&
         (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) {
        SentryGunScript::SentryGunScript_DisableSmoke(pSVar3,(MethodInfo *)0x0);
        pMVar2 = (this->fields).gunObject;
        if (pMVar2 != (MVSentryGunObject *)0x0) {
          pSVar3 = (pMVar2->fields).sentryGunScript;
          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                      (*(code *)(this->klass->vtable).get_RunTimeData.method)(this);
          if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Extensions->_1).cctor_started == 0)) {
            func_?(TypeInfo__Extensions);
          }
          this = (MVSentryGun *)
                 Extensions::Extensions_GetObscuredType
                           (hashtable,StringLiteral_health,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)
             ) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          }
          if (this != (MVSentryGun *)0x0) {
            pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
            if ((this->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class)
            goto code_?;
            pOVar5 = (ObscuredFloat *)func_?(this);
            value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit_1(*pOVar5,(MethodInfo *)0x0);
            if (pSVar3 != (SentryGunScript *)0x0) {
              SentryGunScript::SentryGunScript_SetHealth(pSVar3,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if ((pMVar2 != (MVSentryGunObject *)0x0) &&
            (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) {
      SentryGunScript::SentryGunScript_SetHealth(pSVar3,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pOVar4 = extraout_ECX;
code_?:
  func_?(this,pOVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVSentryGun(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun__ctor
               (MVSentryGun *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).laserRange = 20.0;
  (this->fields).pushBackStrength = 5.0;
  this_00 = (IntervalWithRandomSeed *)func_?(TypeInfo__IntervalWithRandomSeed);
  IntervalWithRandomSeed::IntervalWithRandomSeed__ctor(this_00,1.0,(MethodInfo *)0x0);
  (this->fields).intervalWithRandomSeed = this_00;
  this_01 = (Dictionary_2_System_Int32_SentryGunBeam_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Dictionary__)
  ;
  (this->fields).woIdsBeamsMap = this_01;
  this_02 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::List_1_System_Int32___ctor_1
            (this_02,8,MethodInfo__System__Collections__Generic__List<int>__List_int_);
  (this->fields).deleteList = this_02;
  (this->fields).glowFactor = 0.5;
  (this->fields).beamType = 1;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  this_03 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_03 != (PrefabPool *)0x0) {
    prefabObject = (ObjectPrefab *)
                   MVVehicleBase::MVVehicleBase_get_DocumentationType
                             ((MVVehicleBase *)this_03,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,prefabObject,
               (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?,(MethodInfo *)0x0);
    piVar1 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar1 = (uint)*piVar1 | 0x10000;
    pMVar2 = (MVSentryGunObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pMVar2 == (MVSentryGunObject *)0x0) {
      pMVar3 = (MVSentryGunObject *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVSentryGunObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment < bVar4) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__MVSentryGunObject)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar3 = (MVSentryGunObject *)0x0;
      if (bVar5) {
        pMVar3 = pMVar2;
      }
      if (pMVar3 == (MVSentryGunObject *)0x0) goto code_?;
    }
    (this->fields).gunObject = pMVar3;
    this_04 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_04,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    if (this_04 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,
                 (UnityWebRequest *)(this->fields)._._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField =
           (HashSet_1_System_Int32_ *)this_04;
      MVWorldObjectClient::MVWorldObjectClient_set_PlayInteractionType
                ((MVWorldObjectClient *)this,PlayInteractionType__Enum_HandlesHits,(MethodInfo *)0x0
                );
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SentryGunBeamType get_BeamType() */

SentryGunBeamType__Enum
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_BeamType(MVSentryGun *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)this >> 8),(this->fields).beamType);
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_DocumentationType
          (MVSentryGun *this,MethodInfo *method)

{
  uVar1 = (this->fields).beamType;
  if (uVar1 == 0) {
    return MVWorldObjectDocumentationType__Enum_FireSentryTower;
  }
  MVar2 = MVWorldObjectDocumentationType__Enum_Missing;
  if (uVar1 == 1) {
    MVar2 = MVWorldObjectDocumentationType__Enum_FrostSentryTower;
  }
  return MVar2;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVSentryGun *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0xc0000000,0,0,0);
  return __return_storage_ptr__;
}


/* HashSet`1[System.Int32] get_RaycastIgnoreWorldObjectIds() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_RaycastIgnoreWorldObjectIds
          (MVSentryGun *this,MethodInfo *method)

{
  return (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField;
}


/* Void set_RaycastIgnoreWorldObjectIds(HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_set_RaycastIgnoreWorldObjectIds
               (MVSentryGun *this,HashSet_1_System_Int32_ *value,MethodInfo *method)

{
  (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField = value;
  return;
}

