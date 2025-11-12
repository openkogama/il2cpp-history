
/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVJetPack::MVJetPack_CompareWithKoGaMaPackage
               (MVJetPack *this,MVWorldObjectClient *wo,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *insertedByProfileId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVJetPack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVJetPack->_1).naturalAligment;
    if ((bVar1 <= (wo->klass->_1).naturalAligment) &&
       ((MVJetPack__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] ==
        TypeInfo__MVJetPack)) {
      if ((this->fields).jetPackType == *(uint8_t *)&wo[1].fields.PositionChanged) {
        bVar2 = MVBlueprintBase::MVBlueprintBase_CompareWithKoGaMaPackage
                          ((MVBlueprintBase *)this,wo,koGaMaPackageClient,insertedByProfileId,
                           (MethodInfo *)0x0);
      }
      else {
        bVar2 = 0;
      }
      return bVar2;
    }
    FUN_?(wo);
    pcVar3 = (code *)swi(3);
    bVar2 = (*pcVar3)();
    return bVar2;
  }
  FUN_?();
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields)._.seatManager;
  jetPackTypeParameters = (this->fields).jetPackParameters;
  if ((pVVar1 != (VehicleSeatManager *)0x0) &&
     (pLVar2 = (pVVar1->fields).seats, pLVar2 != (List_1_VehicleSeatBase_ *)0x0)) {
    if ((uint)(pLVar2->fields)._size <= (uint)seatID) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVVehicleBase_LocalObjectsBase *)(*pcVar3)();
      return pMVar4;
    }
    pVVar5 = (pLVar2->fields)._items;
    if (pVVar5 != (VehicleSeatBase__Array *)0x0) {
      if ((uint)seatID < (uint)pVVar5->max_length) {
        seat = pVVar5->vector[seatID];
        this_00 = (MVJetPack_LocalObjectsJetPack *)
                  FUN_?(TypeInfo__MVJetPack__LocalObjectsJetPack);
        MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack__ctor
                  (this_00,this,vehicleUser,jetPackTypeParameters,seat,(MethodInfo *)0x0);
        return (MVVehicleBase_LocalObjectsBase *)this_00;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      pMVar4 = (MVVehicleBase_LocalObjectsBase *)(*pcVar3)();
      return pMVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVVehicleBase_LocalObjectsBase *)(*pcVar3)();
  return pMVar4;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_Destroy(MVJetPack *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).cullingSubscriberDynamic != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
              ((this->fields).cullingSubscriberDynamic,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberDynamic >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  return;
}


/* MVJetPack+JetPackType GetJetPackType(Dictionary`2[System.Object,System.Object]) */

MVJetPack_JetPackType__Enum
Assembly-CSharp.dll::MVJetPack::MVJetPack_GetJetPackType
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVJetPack__JetPackType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WoData_does_not_contain_jetPackT);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_jetPackType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = 7;
  pOVar1 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((this->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(this);
        pcVar3 = (code *)swi(3);
        MVar4 = (*pcVar3)();
        return MVar4;
      }
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this,(Object *)StringLiteral_jetPackType,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar5 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_WoData_does_not_contain_jetPackT,(MethodInfo *)0x0);
      }
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this,
                          (Object *)StringLiteral_jetPackType,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class ==
            (TypeInfo__MVJetPack__JetPackType->_0).element_class) {
          return (MVJetPack_JetPackType__Enum)*(byte *)&pOVar1[1].klass;
        }
        FUN_?(pOVar1,TypeInfo__MVJetPack__JetPackType);
        pcVar3 = (code *)swi(3);
        MVar4 = (*pcVar3)();
        return MVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  MVar4 = (*pcVar3)();
  return MVar4;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVJetPack::MVJetPack_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVJetPack *this,BoundsContext__Enum boundsContext
                   ,MethodInfo *method)

{
  if ((BoundsContext__Enum_BoxVisualization < boundsContext) &&
     (boundsContext != BoundsContext__Enum_Preview)) {
    woList = MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
    pBVar1 = MVGroup::MVGroup_ComputeBoundsForWOs
                        (aBStack_2,woList,boundsContext,(MethodInfo *)0x0);
    fVar3 = (pBVar1->m_Center).y;
    uVar4 = *(undefined8 *)&(pBVar1->m_Center).z;
    fVar5 = (pBVar1->m_Extents).y;
    fVar6 = (pBVar1->m_Extents).z;
    (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
    (__return_storage_ptr__->m_Center).y = fVar3;
    *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar4;
    (__return_storage_ptr__->m_Extents).y = fVar5;
    (__return_storage_ptr__->m_Extents).z = fVar6;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar7->zeroVector).x;
  fVar6 = (pVVar7->zeroVector).y;
  fVar3 = (pVVar7->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar8 = _UNK_?;
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar7->oneVector).y;
  fVar10 = (pVVar7->oneVector).z;
  uVar11 = (pVVar7->oneVector).x;
  fVar12 = (float)uVar11 * TypeRef__System__Activator__T._0_4_;
  (__return_storage_ptr__->m_Center).x = fVar5;
  (__return_storage_ptr__->m_Center).y = fVar6;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = fVar12 * fVar8;
  (__return_storage_ptr__->m_Extents).y = (fVar9 + fVar9) * fVar8;
  (__return_storage_ptr__->m_Extents).z = (fVar10 + fVar10) * fVar8;
  return __return_storage_ptr__;
}


/* VehicleBaseObject GetPickupPrefabName(Dictionary`2[System.Object,System.Object]) */

VehicleBaseObject *
Assembly-CSharp.dll::MVJetPack::MVJetPack_GetPickupPrefabName
          (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    this = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
            *)(pPVar1->fields).jetPackPrefabLUT;
    BVar2 = MVJetPack_GetJetPackType(data,(MethodInfo *)0x0);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
    ;
    if (this != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
              WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
              Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                        (this,BVar2 & 0xff,
                         MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pVVar7 = (VehicleBaseObject *)(*pcVar6)();
        return pVVar7;
      }
      pDVar8 = (this->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___Array
                     *)0x0) {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(VehicleBaseObject **)&pDVar8->vector[(int)uVar4].value.centerDamage;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pVVar7 = (VehicleBaseObject *)(*pcVar6)();
        return pVVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pVVar7 = (VehicleBaseObject *)(*pcVar6)();
      return pVVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (VehicleBaseObject *)(*pcVar6)();
  return pVVar7;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_Initialize(MVJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberDynamic);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVJetPack__OnIsDeadChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JetPackCubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_jetMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVVehicleBase::MVVehicleBase_Initialize((MVVehicleBase *)this,(MethodInfo *)0x0);
  worldObjectType = (this->fields)._._._._._.type;
  if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
            RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
  if ((this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_00,(Object *)StringLiteral_health,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pMVar3 = (this->fields)._._._._.runtimeDataVariables;
    if (pMVar3 != (MVRuntimeDataVariables *)0x0) {
      fVar4 = *(float *)&pOVar1[1].klass;
      pMVar5 = (MVCubeModelInstance *)0x0;
      pMVar6 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                          (pMVar3,StringLiteral_health,_UNK_?,0,0.0,fVar4,(MethodInfo *)0x0)
      ;
      bVar7 = iRam_? != 0;
      (this->fields).Health = pMVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).Health >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      pMVar3 = (this->fields)._._._._.runtimeDataVariables;
      if (pMVar3 != (MVRuntimeDataVariables *)0x0) {
        pMVar6 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                            (pMVar3,StringLiteral_shield,_UNK_?,0,0.0,fVar4,
                             (MethodInfo *)0x0);
        bVar7 = iRam_? != 0;
        (this->fields).shield = pMVar6;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).shield >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        fVar4 = _UNK_?;
        pMVar3 = (this->fields)._._._._.runtimeDataVariables;
        if (pMVar3 != (MVRuntimeDataVariables *)0x0) {
          pMVar12 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                              (pMVar3,StringLiteral_modifiers,_UNK_?,0,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          (this->fields).Modifiers = pMVar12;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).Modifiers >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          pMVar3 = (this->fields)._._._._.runtimeDataVariables;
          if (pMVar3 != (MVRuntimeDataVariables *)0x0) {
            pMVar12 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                (pMVar3,StringLiteral_jetMode,fVar4,0,(MethodInfo *)0x0);
            bVar7 = iRam_? != 0;
            (this->fields).JetMode = pMVar12;
            if (bVar7) {
              uVar8 = (uint)((ulonglong)&(this->fields).JetMode >> 0xc);
              uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
              do {
                uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                LOCK();
                bVar7 = uVar10 == *puVar11;
                if (bVar7) {
                  *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (!bVar7);
            }
            pMVar12 = (this->fields)._.IsVehicleDead;
            if (pMVar12 != (MVRuntimeDataVariable *)0x0) {
              a = (pMVar12->fields).OnChange;
              this_01 = (UnityAction_1_System_Object_ *)
                        FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_01,(Object *)this,
                         MethodInfo__MVJetPack__OnIsDeadChange_System__Object_,(MethodInfo *)0x0);
              pMVar13 = (MVCubeModelInstance *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
              if (pMVar13 == (MVCubeModelInstance *)0x0) {
                (pMVar12->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              }
              else {
                pMVar14 = pMVar5;
                if (pMVar13->klass ==
                    (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                {
                  pMVar14 = pMVar13;
                }
                if (pMVar14 == (MVCubeModelInstance *)0x0) {
                  FUN_?();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (pMVar12->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pMVar14;
                pMVar14 = pMVar5;
                if (pMVar13->klass ==
                    (MVCubeModelInstance__Class *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                {
                  pMVar14 = pMVar13;
                }
                if (pMVar14 == (MVCubeModelInstance *)0x0) {
                  FUN_?();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar8 = (uint)((ulonglong)&(pMVar12->fields).OnChange >> 0xc);
                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar7 = uVar10 == *puVar11;
                  if (bVar7) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar7);
              }
              pMVar13 = (MVCubeModelInstance *)
                        MVBlueprintBase::MVBlueprintBase_GetChild
                                  ((MVBlueprintBase *)this,StringLiteral_JetPackCubeModel,
                                   (MethodInfo *)0x0);
              if (pMVar13 != (MVCubeModelInstance *)0x0) {
                bVar15 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
                if (((pMVar13->klass->_1).naturalAligment < bVar15) ||
                   (pMVar5 = pMVar13,
                   (MVCubeModelInstance__Class *)
                   (pMVar13->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
                   TypeInfo__MVCubeModelInstance)) {
                  FUN_?(pMVar13);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              pJVar16 = (this->fields).jetPackParameters;
              if ((pJVar16 != (JetPackParameters *)0x0) &&
                 (pIVar17 = (pJVar16->fields).lowerCubeConstraint, pIVar17 != (Int32__Array *)0x0))
              {
                if ((int)pIVar17->max_length != 0) {
                  aIStackX_18[0]._0_4_ = pIVar17->vector[0];
                  pJVar16 = (this->fields).jetPackParameters;
                  pIVar17 = (pJVar16->fields).lowerCubeConstraint;
                  if (1 < (uint)pIVar17->max_length) {
                    iVar18 = pIVar17->vector[1];
                    if (pJVar16 != (JetPackParameters *)0x0) {
                      if ((uint)pIVar17->max_length < 3) goto code_?;
                      iVar19 = pIVar17->vector[2];
                      pJVar16 = (this->fields).jetPackParameters;
                      if ((pJVar16 != (JetPackParameters *)0x0) &&
                         (pIVar17 = (pJVar16->fields).upperCubeConstraint,
                         pIVar17 != (Int32__Array *)0x0)) {
                        if ((int)pIVar17->max_length == 0) goto code_?;
                        iVar20 = pIVar17->vector[0];
                        pJVar16 = (this->fields).jetPackParameters;
                        if (pJVar16 != (JetPackParameters *)0x0) {
                          pIVar17 = (pJVar16->fields).upperCubeConstraint;
                          if ((uint)pIVar17->max_length < 2) goto code_?;
                          iVar21 = pIVar17->vector[1];
                          if (pJVar16 != (JetPackParameters *)0x0) {
                            if ((uint)pIVar17->max_length < 3) goto code_?;
                            iVar22 = pIVar17->vector[2];
                            if (pJVar16 != (JetPackParameters *)0x0) {
                              minCubeCount = (pJVar16->fields).minNumberOfCubes;
                              this_02 = (EditableCubeModelWrapper *)
                                        FUN_?(TypeInfo__EditableCubeModelWrapper);
                              bVar7 = iRam_? != 0;
                              aIStack_23[0].y = (int16_t)iVar21;
                              aIStack_23[0].x = (int16_t)iVar20;
                              (this_02->fields).cubeModelBase = pMVar5;
                              if (bVar7) {
                                uVar8 = (uint)((ulonglong)&this_02->fields >> 0xc);
                                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                do {
                                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                  LOCK();
                                  bVar7 = uVar10 == *puVar11;
                                  if (bVar7) {
                                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar7);
                              }
                              if (pMVar5 != (MVCubeModelInstance *)0x0) {
                                piVar24 = &(pMVar5->fields)._._.interactionFlags;
                                *piVar24 = *piVar24 | 0x10;
                                aIStackX_18[0]._0_4_ =
                                     CONCAT22((short)iVar18,(short)aIStackX_18[0]._0_4_);
                                aIStackX_18[0].z = (int16_t)iVar19;
                                aIStack_23[0].z = (int16_t)iVar22;
                                EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
                                          (this_02,aIStackX_18,aIStack_23,minCubeCount,
                                           (MethodInfo *)0x0);
                                bVar7 = iRam_? != 0;
                                (this->fields).editableCubeModelWrapper = this_02;
                                if (bVar7) {
                                  uVar8 = (uint)((ulonglong)
                                                  &(this->fields).editableCubeModelWrapper >> 0xc);
                                  uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                  do {
                                    uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                    puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                    LOCK();
                                    bVar7 = uVar10 == *puVar11;
                                    if (bVar7) {
                                      *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar7);
                                }
                                pMVar25 = 
                                JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                                ;
                                pGVar26 = (this->fields)._._._._.gameObject;
                                if (pGVar26 != (GameObject *)0x0) {
                                  if ((
                                      JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                                      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                    FUN_?(
                                                 JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                                                 );
                                  }
                                  this_03 = (JetPackVisualization *)
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_GetComponentInChildren_3
                                                      (pGVar26,0,
                                                       ((pMVar25->field7_0x38).rgctx_data)->method);
                                  isInSpawner = (*(this->klass->vtable).get_IsInSpawner.methodPtr)
                                                          (this);
                                  pGVar26 = (pMVar5->fields)._._.gameObject;
                                  if ((pGVar26 != (GameObject *)0x0) &&
                                     (jetPackCubeModel =
                                           UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                           GameObject_get_transform(pGVar26,(MethodInfo *)0x0),
                                     this_03 != (JetPackVisualization *)0x0)) {
                                    JetPackVisualization::JetPackVisualization_Init
                                              (this_03,isInSpawner,jetPackCubeModel,
                                               (this->fields).JetMode,(MethodInfo *)0x0);
                                    bVar7 = iRam_? != 0;
                                    (this->fields)._.visualization =
                                         (VehicleVisualizationBase *)this_03;
                                    if (bVar7) {
                                      uVar8 = (uint)((ulonglong)&(this->fields)._.visualization >>
                                                     0xc);
                                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                      do {
                                        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                        LOCK();
                                        bVar7 = uVar10 == *puVar11;
                                        if (bVar7) {
                                          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar7);
                                    }
                                    cVar27 = (*(this->klass->vtable).get_IsInSpawner.methodPtr)
                                                       (this,(this->klass->vtable).get_IsInSpawner.
                                                             method);
                                    if (cVar27 == '\0') {
                                      pGVar26 = (pMVar5->fields)._._.gameObject;
                                      if ((pGVar26 == (GameObject *)0x0) ||
                                         (pMVar25 = 
                                          InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                                         , pIVar28 = (InteractionDataHandlerBase *)
                                                     UnityEngine.CoreModule.dll::UnityEngine::
                                                     GameObject::GameObject_AddComponent_1
                                                               (pGVar26,
                                                  InteractionDataHandler_MethodInfo__UnityEngine__GameObject__AddComponent<InteractionDataHandler>__
                                                  ), iVar29 = iRam_?,
                                         pIVar28 == (InteractionDataHandlerBase *)0x0))
                                      goto code_?;
                                      (pIVar28->fields)._.worldObjectParent =
                                           (MVWorldObjectClient *)this;
                                      if (iVar29 != 0) {
                                        uVar8 = (uint)((ulonglong)
                                                        &(pIVar28->fields)._.worldObjectParent >>
                                                       0xc);
                                        pMVar25 = (MethodInfo *)
                                                  (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                        do {
                                          uVar9 = *(ulonglong *)
                                                    ((longlong)pMVar25 * 8 + 0xADDR);
                                          puVar11 = (ulonglong *)
                                                   ((longlong)pMVar25 * 8 + 0xADDR);
                                          LOCK();
                                          bVar7 = uVar9 == *puVar11;
                                          if (bVar7) {
                                            *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
                                          }
                                          UNLOCK();
                                          iVar29 = iRam_?;
                                        } while (!bVar7);
                                      }
                                      (this->fields)._._._._.interactionDataHandlerBase = pIVar28;
                                      if (iVar29 != 0) {
                                        uVar8 = (uint)((ulonglong)
                                                        &(this->fields)._._._._.
                                                         interactionDataHandlerBase >> 0xc);
                                        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                        do {
                                          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                          pMVar25 = (MethodInfo *)
                                                    (uVar10 | 1L << (ulonglong)(uVar8 & 0x3f));
                                          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                          LOCK();
                                          bVar7 = uVar10 == *puVar11;
                                          if (bVar7) {
                                            *puVar11 = (ulonglong)pMVar25;
                                          }
                                          UNLOCK();
                                        } while (!bVar7);
                                      }
                                      (*(pMVar5->klass->vtable).set_Visible.methodPtr)
                                                (pMVar5,CONCAT71((int7)((ulonglong)pMVar25 >> 8),1)
                                                 ,(pMVar5->klass->vtable).set_Visible.method);
                                      pGVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_gameObject
                                                          ((Component *)this_03,(MethodInfo *)0x0);
                                      this_04 = (CullingSubscriberDynamic *)
                                                FUN_?(TypeInfo__CullingSubscriberDynamic);
                                      CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                                                (this_04,_UNK_?,3,pGVar26,
                                                 (GameObject__Array *)0x0,0,(MethodInfo *)0x0);
                                      bVar7 = iRam_? != 0;
                                      (this->fields).cullingSubscriberDynamic = this_04;
                                      if (bVar7) {
                                        uVar8 = (uint)((ulonglong)
                                                        &(this->fields).cullingSubscriberDynamic >>
                                                       0xc);
                                        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                                        do {
                                          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                                          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                                          LOCK();
                                          bVar7 = uVar10 == *puVar11;
                                          if (bVar7) {
                                            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar7);
                                      }
                                    }
                                    return;
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
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_InitializeInventory
               (MVJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&
                  JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)&UNK_?;
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  pMVar2 = 
  JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
  ;
  this_00 = (this->fields)._._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    if ((
        JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      LStack_1._list = (List_1_System_Object_ *)&UNK_?;
      FUN_?(
                   JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                   );
    }
    LStack_1._list = (List_1_System_Object_ *)&UNK_?;
    pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_3
                       (this_00,0,((pMVar2->field7_0x38).rgctx_data)->method);
    if (pOVar3 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                      ,1,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOStackX_20 = (Object *)0x0;
      pLVar4 = (List_1_System_Object_ *)pOVar3[9].monitor;
      if (pLVar4 != (List_1_System_Object_ *)0x0) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
          uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
        uStack_12 = 0;
        LStack_1._8_8_ = pLStack_11;
        LStack_1._current = (Object *)0x0;
        uStack_6 = 0;
        pLStack_11 = &LStack_1;
        LStack_1._list = pLVar4;
        while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                       Object]::List_1_T_Enumerator_System_Object__MoveNext
                                 (&LStack_1,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                                 ), bVar13 != 0) {
          if (LStack_1._current == (Object *)0x0) goto code_?;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&stack0x00000008 >> 0xc);
            uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pOStackX_20 = LStack_1._current;
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0))
          goto code_?;
          pcRam_? = pcVar14;
          (*pcRam_?)(&pOStackX_20,1);
        }
        pOVar3 = (Object *)pOVar3[7].monitor;
        if (pOVar3 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar15 = pOVar3[1].klass;
          if (pOVar15 != (Object__Class *)0x0) {
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pOVar15,_UNK_?);
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar3,(MethodInfo *)0x0);
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      FUN_?();
code_?:
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
code_?:
      FUN_?();
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  LStack_1._list = (List_1_System_Object_ *)&UNK_?;
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVJetPack::MVJetPack_OnEnterObject
               (MVJetPack *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pEVar1->klass->vtable).OnEnterObject.methodPtr)
                      (pEVar1,e,(pEVar1->klass->vtable).OnEnterObject.method);
    return bVar2;
  }
  FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pEVar1->klass->vtable).OnExitObject.methodPtr)
                      (pEVar1,e,(pEVar1->klass->vtable).OnExitObject.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnIsDeadChange(Object) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack_OnIsDeadChange
               (MVJetPack *this,Object *isDead,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedWorldObjectGameplayFunctions__Explosion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (isDead == (Object *)0x0) goto code_?;
  if ((isDead->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(isDead);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)&isDead[1].klass != '\0') {
    ignoreIDs = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._._._._.gameObject;
    if ((pGVar2 == (GameObject *)0x0) ||
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_4._0_4_ = 0.0;
    auStack_4._4_4_ = 0.0;
    uStack_5 = 0;
    pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar6);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar8 = (float)uStack_5 + (float)uStack_5;
    fVar9 = (float)auStack_4._4_4_ + (float)auStack_4._4_4_;
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar11 = ((float)auStack_4._0_4_ + (float)auStack_4._0_4_) * (float)auStack_4._0_4_;
    uVar7._0_4_ = (pVVar10->backVector).x;
    uVar7._4_4_ = (pVVar10->backVector).y;
    fVar12 = (pVVar10->backVector).z;
    fVar13 = ((float)auStack_4._0_4_ + (float)auStack_4._0_4_) * uStack_5._4_4_;
    fVar14 = (_UNK_? - (fVar8 * (float)uStack_5 + fVar9 * (float)auStack_4._4_4_)) *
             (float)uVar7 +
             (fVar9 * (float)auStack_4._0_4_ - fVar8 * uStack_5._4_4_) * uVar7._4_4_ +
             (fVar9 * uStack_5._4_4_ + fVar8 * (float)auStack_4._0_4_) * fVar12;
    fVar15 = (fVar8 * (float)auStack_4._0_4_ - fVar9 * uStack_5._4_4_) * (float)uVar7 +
             (fVar13 + fVar8 * (float)auStack_4._4_4_) * uVar7._4_4_ +
             (_UNK_? - (fVar9 * (float)auStack_4._4_4_ + fVar11)) * fVar12;
    afStackX_10[0] =
         (_UNK_? - (fVar8 * (float)uStack_5 + fVar11)) * uVar7._4_4_ +
         (fVar8 * uStack_5._4_4_ + fVar9 * (float)auStack_4._0_4_) * (float)uVar7 +
         (fVar8 * (float)auStack_4._4_4_ - fVar13) * fVar12;
    auStack_4 = (undefined1  [8])uVar7;
    if ((this->fields)._.localObjects == (MVVehicleBase_LocalObjectsBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar16 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar16 == (PrefabPool *)0x0) goto code_?;
      pGVar2 = (this->fields)._._._._.gameObject;
      particlePrefab = (pPVar16->fields).particleExplosion;
      if ((pGVar2 == (GameObject *)0x0) ||
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_4._0_4_ = 0.0;
      auStack_4._4_4_ = 0.0;
      uStack_5 = uStack_5 & 0xffffffff00000000;
      pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6,auStack_4);
      fVar14 = (float)auStack_4._0_4_ + fVar14;
      fVar15 = (float)uStack_5 + fVar15;
      fVar12 = (float)auStack_4._4_4_ + afStackX_10[0];
      if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0) {
        FUN_?();
      }
      explosionEvent = (ExplosionEvent *)0x0;
      local = 1;
      uStack_5 = CONCAT44(uStack_5._4_4_,fVar15);
      auStack_4._4_4_ = fVar12;
      auStack_4._0_4_ = fVar14;
    }
    else {
      pGVar2 = (this->fields)._._._._.gameObject;
      if ((pGVar2 == (GameObject *)0x0) ||
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_4._0_4_ = 0.0;
      auStack_4._4_4_ = 0.0;
      uStack_5 = uStack_5 & 0xffffffff00000000;
      pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6,auStack_4);
      explosionEvent =
           (ExplosionEvent *)FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)
      ;
      fVar12 = afStackX_10[0];
      (explosionEvent->fields)._._RuntimeEventType_k__BackingField = 3;
      uStack_5 = CONCAT44(uStack_5._4_4_,(float)uStack_5 + fVar15);
      auStack_4._4_4_ = (float)auStack_4._4_4_ + afStackX_10[0];
      auStack_4._0_4_ = (float)auStack_4._0_4_ + fVar14;
      pIVar17 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_WorldPosToFineGrainedLocalPos
                         ((IntVector *)afStackX_10,(Vector3 *)auStack_4,(MethodInfo *)0x0);
      bVar18 = cRam_? == '\0';
      iVar19 = pIVar17->y;
      iVar20 = pIVar17->z;
      (explosionEvent->fields)._.position.x = pIVar17->x;
      (explosionEvent->fields)._.position.y = iVar19;
      (explosionEvent->fields)._.position.z = iVar20;
      if (bVar18) {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar16 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar16 == (PrefabPool *)0x0) goto code_?;
      pGVar2 = (this->fields)._._._._.gameObject;
      particlePrefab = (pPVar16->fields).particleExplosion;
      if ((pGVar2 == (GameObject *)0x0) ||
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_4._0_4_ = 0.0;
      auStack_4._4_4_ = 0.0;
      uStack_5 = uStack_5 & 0xffffffff00000000;
      pvVar6 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar6,auStack_4);
      fVar12 = (float)auStack_4._4_4_ + fVar12;
      fVar14 = (float)auStack_4._0_4_ + fVar14;
      fVar15 = (float)uStack_5 + fVar15;
      if (*(int *)&(TypeInfo__SharedWorldObjectGameplayFunctions__Explosion->_1).field_0x1c == 0) {
        FUN_?();
      }
      local = 0;
      uStack_5 = CONCAT44(uStack_5._4_4_,fVar15);
      auStack_4._4_4_ = fVar12;
      auStack_4._0_4_ = fVar14;
    }
    SharedWorldObjectGameplayFunctions+Explosion::
    SharedWorldObjectGameplayFunctions_Explosion_Explode
              (particlePrefab,(Vector3 *)auStack_4,_UNK_?,_UNK_?,_UNK_?,
               local,explosionEvent,ignoreIDs,(MethodInfo *)0x0);
  }
  return;
}


/* VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig() */

VehicleEnergyContainerConfig *
Assembly-CSharp.dll::MVJetPack::MVJetPack_SetupVehicleEnergyContainerConfig
          (VehicleEnergyContainerConfig *__return_storage_ptr__,MVJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->usingEnergy = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->storage = 0;
  __return_storage_ptr__->consumption = 0;
  if ((this->fields)._._.blueprintData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar1 = (this->fields)._._.blueprintData;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = Extensions::Extensions_GetBool
                      (pDVar1,StringLiteral_vehicleEnergyUse,0,(MethodInfo *)0x0);
    pJVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings;
    pDVar1 = (this->fields)._._.blueprintData;
    __return_storage_ptr__->usingEnergy = bVar2;
    if (*(int *)&(pJVar3->_1).field_0x1c == 0) {
      FUN_?(pJVar3);
      pJVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings;
    }
    iVar4 = Extensions::Extensions_GetClampedInt
                      (pDVar1,StringLiteral_vehicleEnergyStorage,
                       (pJVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMinValue,
                       (pJVar3->static_fields->VehicleEnergyForVehicleSettingsConfig).
                       storageMaxValue,0x14,(MethodInfo *)0x0);
    key = StringLiteral_vehicleEnergyConsumption;
    pDVar1 = (this->fields)._._.blueprintData;
    __return_storage_ptr__->storage = iVar4;
    iVar4 = Extensions::Extensions_GetClampedInt
                      (pDVar1,key,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMinValue,
                       (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings
                        ->static_fields->VehicleEnergyForVehicleSettingsConfig).consumptionMaxValue,
                       3,(MethodInfo *)0x0);
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
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<int>__ExceptWith_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_avatarPickupOwner);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields)._.seatManager;
  if (pVVar1 == (VehicleSeatManager *)0x0) goto code_?;
  bVar2 = cRam_? == '\0';
  (pVVar1->fields).enterVehicleDisabled = 1;
  if (bVar2) {
    FUN_?(&MethodInfo__System__Collections__Generic__List<VehicleSeatBase>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((pVVar1->fields).isDead == 0) && ((pVVar1->fields).enterVehicleDisabled == 0)) {
    pLVar3 = (pVVar1->fields).seats;
    if (pLVar3 == (List_1_VehicleSeatBase_ *)0x0) goto code_?;
    this_03 = (pVVar1->fields).triggerBoxEvents;
    if (this_03 == (TriggerBoxEvents *)0x0) goto code_?;
    if ((pVVar1->fields).occupiedSeatCount == (pLVar3->fields)._size) goto code_?;
    this_01 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_03,(MethodInfo *)0x0);
    if (this_01 == (Collider *)0x0) goto code_?;
    value = 1;
  }
  else {
    this_03 = (pVVar1->fields).triggerBoxEvents;
    if (this_03 == (TriggerBoxEvents *)0x0) goto code_?;
code_?:
    this_01 = TriggerBoxEvents::TriggerBoxEvents_get_Collider(this_03,(MethodInfo *)0x0);
    if (this_01 == (Collider *)0x0) goto code_?;
    value = 0;
  }
  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
            (this_01,value,(MethodInfo *)0x0);
  if ((vehicleUser != (MVAvatar *)0x0) &&
     (this_00 = (vehicleUser->fields)._._.gameObject, this_00 != (GameObject *)0x0)) {
    pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (this_00,
                         AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                        );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar4 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar4[1].klass != (Object__Class *)0x0) {
        this_02 = (Object__Class *)
                  MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
        pOVar5 = pOVar4->klass;
        uVar6._0_2_ = pOVar5[1]._0.this_arg.attrs;
        uVar6._2_1_ = pOVar5[1]._0.this_arg.type;
        uVar6._3_5_ = *(undefined5 *)&pOVar5[1]._0.this_arg.field_0xb;
        other = (IEnumerable_1_System_Int32_ *)(*(code *)pOVar5[1]._0.this_arg.data)(pOVar4,uVar6);
        if (this_02 != (Object__Class *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__ExceptWith
                    ((HashSet_1_System_Int32_ *)this_02,other,
                     MethodInfo__System__Collections__Generic__HashSet<int>__ExceptWith_System__Collections__Generic__IEnumerable<int>_
                    );
          bVar2 = iRam_? != 0;
          pOVar4[9].klass = this_02;
          if (bVar2) {
            uVar7 = (uint)((ulonglong)(pOVar4 + 9) >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          return;
        }
        goto code_?;
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar11 = StringLiteral_Failed_to_get_avatarPickupOwner;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar12 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar12 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar12,0,pSVar11);
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* MVJetPack(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVJetPack::MVJetPack__ctor
               (MVJetPack *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  WorldObjectTypes__JetPack__JetPackParameters_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectTypes::JetPack::JetPackParameters>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    this_00 = (pPVar1->fields).jetPackPrefabLUT;
    BVar2 = MVJetPack_GetJetPackType(data,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
         *)0x0) {
      vehiclePrefab =
           (ObjectPrefab *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BVar2 & 0xff,
                      MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__get_Item_MVJetPack__JetPackType_
                     );
      MVVehicleBase::MVVehicleBase__ctor
                ((MVVehicleBase *)this,data,vehiclePrefab,worldObjects,(MethodInfo *)0x0);
      this_01 = (this->fields)._._._._.gameObject;
      piVar3 = &(this->fields)._._._._.interactionFlags;
      *piVar3 = *piVar3 | 0x9000;
      if (this_01 != (GameObject *)0x0) {
        pJVar4 = (JetPackParameters *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (this_01,
                            WorldObjectTypes__JetPack__JetPackParameters_MethodInfo__UnityEngine__GameObject__GetComponent<WorldObjectTypes::JetPack::JetPackParameters>__
                           );
        bVar5 = iRam_? != 0;
        (this->fields).jetPackParameters = pJVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this->fields).jetPackParameters >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
        MVar10 = MVJetPack_GetJetPackType(data,(MethodInfo *)0x0);
        (this->fields).jetPackType = (uint8_t)MVar10;
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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

