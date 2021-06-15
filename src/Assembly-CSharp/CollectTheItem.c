
/* Boolean GetDoesWoFitDropOff(Int32) */

bool Assembly-CSharp.dll::CollectTheItem::CollectTheItem_GetDoesWoFitDropOff
               (CollectTheItem *this,int32_t keyId,MethodInfo *method)

{
  return (this->fields)._WoKeyInstance_k__BackingField == keyId;
}


/* Void Initialize() */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_Initialize
               (CollectTheItem *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (*(char *)&(in_stack_1->fields).mvTeleporterPrefab != '\0') {
    return;
  }
  *(undefined1 *)&(in_stack_1->fields).mvTeleporterPrefab = 1;
  pDVar2 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_1,(MethodInfo *)0x0);
  if ((pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pDVar2 = (Dictionary_2_System_Type_Pool_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (pDVar2,(Type *)StringLiteral_BlueprintData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar2 == (Dictionary_2_System_Type_Pool_ *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    this_00 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar4) {
      this_00 = pDVar2;
    }
    if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (this_00,(Type *)StringLiteral_ChildrenMap,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        table = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar5->klass->_1).naturalAligment < bVar3) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar5->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        table = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar4) {
          table = pDVar5;
        }
        if (table == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      pMVar6 = CollectTheItem_RetrieveWorldObject
                          ((CollectTheItem *)in_stack_1,table,
                           StringLiteral_CollectTheItemDropOff,(MethodInfo *)0x0);
      pMVar7 = pMVar6;
      if (pMVar6 != (MVWorldObjectClient *)0x0) {
        bVar3 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
        if (((pMVar6->klass->_1).naturalAligment < bVar3) ||
           ((CollectTheItemDropOff__Class *)(pMVar6->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__CollectTheItemDropOff)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pMVar7 = (MVWorldObjectClient *)0x0;
        if (bVar4) {
          pMVar7 = pMVar6;
        }
        if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
      }
      (in_stack_1->fields).mvSentryGunPrefab = (MVSentryGunObject *)pMVar7;
      pMVar6 = CollectTheItem_RetrieveWorldObject
                          ((CollectTheItem *)in_stack_1,table,
                           StringLiteral_CollectTheItemCollectable,(MethodInfo *)0x0);
      pMVar7 = pMVar6;
      if (pMVar6 != (MVWorldObjectClient *)0x0) {
        bVar3 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
        if (((pMVar6->klass->_1).naturalAligment < bVar3) ||
           ((CollectTheItemCollectable__Class *)(pMVar6->klass->_1).typeHierarchy[bVar3 - 1] !=
            TypeInfo__CollectTheItemCollectable)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pMVar7 = (MVWorldObjectClient *)0x0;
        if (bVar4) {
          pMVar7 = pMVar6;
        }
        if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
      }
      (in_stack_1->fields).shootableButtonPrefab = (ShootableButtonObject *)pMVar7;
      pMVar8 = (in_stack_1->fields).mvSentryGunPrefab;
      if (pMVar8 == (MVSentryGunObject *)0x0) goto code_?;
      pDVar9 = (Delegate *)pMVar8[3].fields.audioSource;
      pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar10,(Object *)in_stack_1,
                 MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
      pDVar9 = (Delegate *)0x0;
      if (pDVar11 == (Delegate *)0x0) {
code_?:
        pMVar8[3].fields.audioSource = (AudioSource *)pDVar9;
        pSVar12 = (in_stack_1->fields).shootableButtonPrefab;
        if (pSVar12 == (ShootableButtonObject *)0x0) goto code_?;
        pDVar9 = (Delegate *)pSVar12[2].fields.targetCollider2D;
        pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar10,(Object *)in_stack_1,
                   MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                            (pDVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
        pDVar9 = (Delegate *)0x0;
        if (pDVar11 != (Delegate *)0x0) {
          if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)pDVar11->klass
              == 
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
             ) {
            pDVar9 = pDVar11;
          }
          if (pDVar9 == (Delegate *)0x0) goto code_?;
        }
        pSVar12[2].fields.targetCollider2D = (Collider *)pDVar9;
        pGVar13 = (in_stack_1->fields).mvTeleportGroupPrefab;
        if (pGVar13 != (GameObject *)0x0) {
          pLVar14 = pGVar13[1].fields._.m_CachedPtr;
          pPVar15 = (PrefabPool *)(in_stack_1->fields).mvSentryGunPrefab;
          if (((pPVar15 != (PrefabPool *)0x0) &&
              (pMVar16 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar15,(MethodInfo *)0x0),
              pMVar16 != (MVPointLightObject *)0x0)) &&
             (pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xfffffff8,(Transform *)pMVar16,
                                   (MethodInfo *)0x0), pLVar14 != (LineRenderer *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      (pLVar14,0,*pVVar17,(MethodInfo *)0x0);
            pGVar13 = (in_stack_1->fields).mvTeleportGroupPrefab;
            if (pGVar13 != (GameObject *)0x0) {
              pPVar15 = (PrefabPool *)(in_stack_1->fields).shootableButtonPrefab;
              pLVar14 = pGVar13[1].fields._.m_CachedPtr;
              if (((pPVar15 != (PrefabPool *)0x0) &&
                  (pMVar16 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar15,(MethodInfo *)0x0)
                  , pMVar16 != (MVPointLightObject *)0x0)) &&
                 (pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xfffffff8,(Transform *)pMVar16,
                                       (MethodInfo *)0x0), pLVar14 != (LineRenderer *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                          (pLVar14,1,*pVVar17,(MethodInfo *)0x0);
                pMVar8 = (in_stack_1->fields).mvSentryGunPrefab;
                if (pMVar8 != (MVSentryGunObject *)0x0) {
                  pMVar8[8].fields.sentryGunScript = (SentryGunScript *)in_stack_1;
                  pPVar15 = (PrefabPool *)(in_stack_1->fields).shootableButtonPrefab;
                  if (pPVar15 != (PrefabPool *)0x0) {
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    (pPVar15->fields).useLeverPrefab = (UseLeverObject *)in_stack_1;
                    CollectTheItemCollectable::CollectTheItemCollectable_SetupCollectableModel
                              ((CollectTheItemCollectable *)pPVar15,(MethodInfo *)0x0);
                    pSVar12 = (pPVar15->fields).shootableButtonPrefab;
                    if (pSVar12 != (ShootableButtonObject *)0x0) {
                      pUVar18 = (UseLeverObject *)
                                mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                          ((Collection_1_VoxelHit_ *)pSVar12,(MethodInfo *)0x0);
                      (in_stack_1->fields).useLeverPrefab = pUVar18;
                      pMVar16 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                          (pPVar15,(MethodInfo *)0x0);
                      if (pMVar16 != (MVPointLightObject *)0x0) {
                        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffec,(Transform *)pMVar16,
                                             (MethodInfo *)0x0);
                        lVar19._0_4_ = pVVar17->x;
                        lVar19._4_4_ = pVVar17->y;
                        fVar20 = pVVar17->z;
                        lVar21 = lVar19 << 0x20;
                        pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar10,(Object *)pPVar15,
                                   MethodInfo__CollectTheItemCollectable__OnStateChanged_UnityEngine__CullingGroupEvent_
                                   ,
                                   MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                                  );
                        this_01 = (CullingSubscriberBase *)func_?();
                        position.y = (float)lVar19._4_4_;
                        position.x = (float)((ulonglong)lVar21 >> 0x20);
                        position.z = fVar20;
                        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                                  (this_01,2.0,position,
                                   (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar10,
                                   (MethodInfo *)0x0);
                        pDVar9 = (Delegate *)pUVar10[2].monitor;
                        pUVar10[4].fields._._.delegate_trampoline = this_01;
                        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (this_02,(Object *)pUVar10,
                                   MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                   ,
                                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                                  );
                        pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                            (pDVar9,(Delegate *)this_02,(MethodInfo *)0x0);
                        pDVar9 = (Delegate *)0x0;
                        if (pDVar11 == (Delegate *)0x0) {
code_?:
                          pUVar10[2].monitor = (MonitorData *)pDVar9;
                          return;
                        }
                        if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                            pDVar11->klass ==
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           ) {
                          pDVar9 = pDVar11;
                        }
                        if (pDVar9 != (Delegate *)0x0) goto code_?;
                        goto code_?;
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
      if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)pDVar11->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pDVar9 = pDVar11;
      }
      if (pDVar9 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnCollectablePositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_OnCollectablePositionChanged
               (CollectTheItem *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pCVar1 = (this->fields).objectPrefab;
  if (((pCVar1 != (CollectTheItemLineObject *)0x0) &&
      (positionChangedEventArgs != (PositionChangedEventArgs *)0x0)) &&
     (this_00 = (pCVar1->fields).lineRenderer, this_00 != (LineRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (this_00,1,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDropOffPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_OnDropOffPositionChanged
               (CollectTheItem *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  pCVar1 = (this->fields).objectPrefab;
  if (((pCVar1 != (CollectTheItemLineObject *)0x0) &&
      (positionChangedEventArgs != (PositionChangedEventArgs *)0x0)) &&
     (this_00 = (pCVar1->fields).lineRenderer, this_00 != (LineRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
              (this_00,0,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectClient RetrieveWorldObject(Dictionary`2[System.Object,System.Object], String) */

MVWorldObjectClient *
Assembly-CSharp.dll::CollectTheItem::CollectTheItem_RetrieveWorldObject
          (CollectTheItem *this,Dictionary_2_System_Object_System_Object_ *table,String *id,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (table != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)table,id,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      return (MVWorldObjectClient *)0x0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)table,(Type *)id,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_00 != (MVWorldObjectClientManager *)0x0) && (pPVar2 != (Pool *)0x0)) {
      if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        pMVar4 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,*piVar3,(MethodInfo *)0x0);
        if (pMVar4 == (MVWorldObjectClient *)0x0) {
          return (MVWorldObjectClient *)0x0;
        }
        pCStack5 = TypeInfo__CollectTheItemDropOff;
        pMStack6 = pMVar4;
        iVar7 = func_?();
        if (iVar7 == 0) {
          pCStack5 = (CollectTheItemDropOff__Class *)TypeInfo__CollectTheItemCollectable;
          pMStack6 = pMVar4;
          iVar7 = func_?();
          if (iVar7 == 0) {
            return (MVWorldObjectClient *)0x0;
          }
        }
        return pMVar4;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar8)();
  return pMVar4;
}


/* Void SetupReferences() */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem_SetupReferences
               (CollectTheItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).hasInitializedReferences != 0) {
    return;
  }
  (this->fields).hasInitializedReferences = 1;
  pDVar1 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if ((pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pDVar1 = (Dictionary_2_System_Type_Pool_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (pDVar1,(Type *)StringLiteral_BlueprintData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_01 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar3) {
      this_01 = pDVar1;
    }
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (this_01,(Type *)StringLiteral_ChildrenMap,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pDVar4 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        table = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar4->klass->_1).naturalAligment < bVar2) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar4->klass->_1).typeHierarchy[bVar2 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        table = (Dictionary_2_System_Object_System_Object_ *)0x0;
        if (bVar3) {
          table = pDVar4;
        }
        if (table == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      }
      pCVar5 = (CollectTheItemDropOff *)
                CollectTheItem_RetrieveWorldObject
                          (this,table,StringLiteral_CollectTheItemDropOff,(MethodInfo *)0x0);
      pCVar6 = pCVar5;
      if (pCVar5 != (CollectTheItemDropOff *)0x0) {
        bVar2 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
        if (((pCVar5->klass->_1).naturalAligment < bVar2) ||
           ((CollectTheItemDropOff__Class *)(pCVar5->klass->_1).typeHierarchy[bVar2 - 1] !=
            TypeInfo__CollectTheItemDropOff)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pCVar6 = (CollectTheItemDropOff *)0x0;
        if (bVar3) {
          pCVar6 = pCVar5;
        }
        if (pCVar6 == (CollectTheItemDropOff *)0x0) goto code_?;
      }
      (this->fields).dropOff = pCVar6;
      pCVar7 = (CollectTheItemCollectable *)
                CollectTheItem_RetrieveWorldObject
                          (this,table,StringLiteral_CollectTheItemCollectable,(MethodInfo *)0x0);
      pCVar8 = pCVar7;
      if (pCVar7 != (CollectTheItemCollectable *)0x0) {
        bVar2 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
        if (((pCVar7->klass->_1).naturalAligment < bVar2) ||
           ((CollectTheItemCollectable__Class *)(pCVar7->klass->_1).typeHierarchy[bVar2 - 1] !=
            TypeInfo__CollectTheItemCollectable)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pCVar8 = (CollectTheItemCollectable *)0x0;
        if (bVar3) {
          pCVar8 = pCVar7;
        }
        if (pCVar8 == (CollectTheItemCollectable *)0x0) goto code_?;
      }
      (this->fields).collectable = pCVar8;
      pCVar6 = (this->fields).dropOff;
      if (pCVar6 == (CollectTheItemDropOff *)0x0) goto code_?;
      pUVar9 = (pCVar6->fields)._._._.PositionChanged;
      pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar10,(Object *)this,
                 MethodInfo__CollectTheItem__OnDropOffPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
      pUVar9 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar11 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
code_?:
        (pCVar6->fields)._._._.PositionChanged = pUVar9;
        pCVar8 = (this->fields).collectable;
        if (pCVar8 == (CollectTheItemCollectable *)0x0) goto code_?;
        pUVar9 = (pCVar8->fields)._._._.PositionChanged;
        pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar10,(Object *)this,
                   MethodInfo__CollectTheItem__OnCollectablePositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pUVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
        pUVar9 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        if (pUVar11 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          if (pUVar11->klass ==
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
             ) {
            pUVar9 = pUVar11;
          }
          if (pUVar9 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
          goto code_?;
        }
        (pCVar8->fields)._._._.PositionChanged = pUVar9;
        pCVar12 = (this->fields).objectPrefab;
        if (pCVar12 != (CollectTheItemLineObject *)0x0) {
          pLVar13 = (pCVar12->fields).lineRenderer;
          pPVar14 = (PrefabPool *)(this->fields).dropOff;
          if (((pPVar14 != (PrefabPool *)0x0) &&
              (pMVar15 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar14,(MethodInfo *)0x0),
              pMVar15 != (MVPointLightObject *)0x0)) &&
             (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xfffffff0,(Transform *)pMVar15,
                                   (MethodInfo *)0x0), pLVar13 != (LineRenderer *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      (pLVar13,0,*pVVar16,(MethodInfo *)0x0);
            pCVar12 = (this->fields).objectPrefab;
            if (pCVar12 != (CollectTheItemLineObject *)0x0) {
              pPVar14 = (PrefabPool *)(this->fields).collectable;
              pLVar13 = (pCVar12->fields).lineRenderer;
              if (((pPVar14 != (PrefabPool *)0x0) &&
                  (pMVar15 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar14,(MethodInfo *)0x0)
                  , pMVar15 != (MVPointLightObject *)0x0)) &&
                 (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xfffffff0,(Transform *)pMVar15,
                                       (MethodInfo *)0x0), pLVar13 != (LineRenderer *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                          (pLVar13,1,*pVVar16,(MethodInfo *)0x0);
                pCVar6 = (this->fields).dropOff;
                if (pCVar6 != (CollectTheItemDropOff *)0x0) {
                  (pCVar6->fields).controller = this;
                  pPVar14 = (PrefabPool *)(this->fields).collectable;
                  if (pPVar14 != (PrefabPool *)0x0) {
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    (pPVar14->fields).useLeverPrefab = (UseLeverObject *)this;
                    CollectTheItemCollectable::CollectTheItemCollectable_SetupCollectableModel
                              ((CollectTheItemCollectable *)pPVar14,(MethodInfo *)0x0);
                    this_00 = (pPVar14->fields).shootableButtonPrefab;
                    if (this_00 != (ShootableButtonObject *)0x0) {
                      pIVar17 = mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                          ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
                      (this->fields)._WoKeyInstance_k__BackingField = (int32_t)pIVar17;
                      pMVar15 = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                          (pPVar14,(MethodInfo *)0x0);
                      if (pMVar15 != (MVPointLightObject *)0x0) {
                        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffe4,(Transform *)pMVar15,
                                             (MethodInfo *)0x0);
                        fVar18 = pVVar16->x;
                        fVar19 = pVVar16->y;
                        fVar20 = pVVar16->z;
                        pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar10,(Object *)pPVar14,
                                   MethodInfo__CollectTheItemCollectable__OnStateChanged_UnityEngine__CullingGroupEvent_
                                   ,
                                   MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                                  );
                        this_02 = (CullingSubscriberBase *)func_?();
                        position.y = fVar19;
                        position.x = fVar18;
                        position.z = fVar20;
                        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                                  (this_02,2.0,position,
                                   (UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar10,
                                   (MethodInfo *)0x0);
                        pDVar21 = (Delegate *)pUVar10[2].monitor;
                        pUVar10[4].fields._._.delegate_trampoline = this_02;
                        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                   *)func_?();
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (this_03,(Object *)pUVar10,
                                   MethodInfo__CollectTheItemCollectable__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                                   ,
                                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                                  );
                        pDVar22 = mscorlib.dll::System::Delegate::Delegate_Combine
                                            (pDVar21,(Delegate *)this_03,(MethodInfo *)0x0);
                        pDVar21 = (Delegate *)0x0;
                        if (pDVar22 == (Delegate *)0x0) {
code_?:
                          pUVar10[2].monitor = (MonitorData *)pDVar21;
                          return;
                        }
                        if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                            pDVar22->klass ==
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           ) {
                          pDVar21 = pDVar22;
                        }
                        if (pDVar21 != (Delegate *)0x0) goto code_?;
                        goto code_?;
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
      if (pUVar11->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar9 = pUVar11;
      }
      if (pUVar9 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* CollectTheItem(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItem::CollectTheItem__ctor
               (CollectTheItem *this,Dictionary_2_System_Object_System_Object_ *data,
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
    prefabObject = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                             ((AvatarUIHandlerRemote *)this_00,(MethodInfo *)0x0);
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,(ObjectPrefab *)prefabObject,worldObjects,
               (MethodInfo *)0x0);
    pCVar1 = (CollectTheItemLineObject *)(this->fields)._._._.component;
    if (pCVar1 == (CollectTheItemLineObject *)0x0) {
      pCVar2 = (CollectTheItemLineObject *)0x0;
    }
    else {
      bVar3 = (TypeInfo__CollectTheItemLineObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pCVar1->klass)->_1).naturalAligment < bVar3) ||
         ((((ObjectPrefab__Class *)pCVar1->klass)->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__CollectTheItemLineObject)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pCVar2 = (CollectTheItemLineObject *)0x0;
      if (bVar4) {
        pCVar2 = pCVar1;
      }
      if (pCVar2 == (CollectTheItemLineObject *)0x0) goto code_?;
    }
    (this->fields).objectPrefab = pCVar2;
    IVar5 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,
               IVar5 & (InteractionFlags__Enum_CanEnterPlay|
                        InteractionFlags__Enum_CanEarnGamePointsMinor|
                        InteractionFlags__Enum_CanEarnGamePoints|
                        InteractionFlags__Enum_CanUseGameRank|InteractionFlags__Enum_GlobalSounds|
                        InteractionFlags__Enum_CanCloneRoot|InteractionFlags__Enum_CanUseTeam|
                        InteractionFlags__Enum_Sounds|InteractionFlags__Enum_TranslatbleXZ2D|
                        InteractionFlags__Enum_CanUseStars|InteractionFlags__Enum_CanUseLevel|
                        InteractionFlags__Enum_CanUseGameCoins|
                        InteractionFlags__Enum_CantAddChildren|InteractionFlags__Enum_IsUsable|
                        InteractionFlags__Enum_IsPreview|InteractionFlags__Enum_CanResetLogic|
                        InteractionFlags__Enum_HasSettings|InteractionFlags__Enum_CanAddToInventory|
                        InteractionFlags__Enum_CanEdit|InteractionFlags__Enum_NotTranslatbleXZ|
                        InteractionFlags__Enum_NotTranslatbleY|InteractionFlags__Enum_CanRotateZ|
                        InteractionFlags__Enum_CanRotateY|InteractionFlags__Enum_CanRotateX|
                        InteractionFlags__Enum_DontPushGroupToSelectionStack|
                        InteractionFlags__Enum_NotUserTransformable|
                        InteractionFlags__Enum_SelectionRequiresEditGroup|
                        InteractionFlags__Enum_DirectlySelectable|InteractionFlags__Enum_IsTerrain|
                        InteractionFlags__Enum_HasCubeModel|InteractionFlags__Enum_Selectable),
               method_00);
    IVar5 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,
               IVar5 | InteractionFlags__Enum_DontPushGroupToSelectionStack,method_01);
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::CollectTheItem::CollectTheItem_get_DocumentationType
          (CollectTheItem *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_CollectTheItem;
}


/* Int32 get_DropOffId() */

int32_t Assembly-CSharp.dll::CollectTheItem::CollectTheItem_get_DropOffId
                  (CollectTheItem *this,MethodInfo *method)

{
  pCVar1 = (this->fields).dropOff;
  if (pCVar1 != (CollectTheItemDropOff *)0x0) {
    return (pCVar1->fields)._._._._.id;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

