
/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_CompareWithKoGaMaPackage
               (MVSentryGunBlueprint *this,MVWorldObjectClient *wo,
               KoGaMaPackageClient *koGaMaPackageClient,int32_t *insertedByProfileId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVCubeModelInstance__Class *)TypeInfo__MVSentryGunBlueprint;
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  bVar2 = (TypeInfo__MVSentryGunBlueprint->_1).naturalAligment;
  if (((wo->klass->_1).naturalAligment < bVar2) ||
     ((MVSentryGunBlueprint__Class *)(wo->klass->_1).typeHierarchy[bVar2 - 1] !=
      TypeInfo__MVSentryGunBlueprint)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this_01 = (PrefabPool *)0x0;
  if (bVar3) {
    this_01 = (PrefabPool *)wo;
  }
  if (this_01 == (PrefabPool *)0x0) {
code_?:
    func_?(wo,pMVar1);
  }
  else {
    this_02 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0);
    if ((this_02 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
       (wo = (MVWorldObjectClient *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_02,(Type *)StringLiteral_BlueprintData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       ),
       pMVar1 = (MVCubeModelInstance__Class *)
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       wo == (MVWorldObjectClient *)0x0)) goto code_?;
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((wo->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(wo->klass->_1).typeHierarchy[bVar2 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVWorldObjectClient *)0x0;
    if (bVar3) {
      pMVar4 = wo;
    }
    if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
    pMVar5 = (MVCubeModelInstance__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pMVar4,(Type *)StringLiteral_ChildrenMap,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pMVar5 == (MVCubeModelInstance__Class *)0x0) goto code_?;
    pIVar6 = (pMVar5->_0).image;
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)&pIVar6[4].assembly < bVar2) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         ((pIVar6[2].typeCount - 4) + (uint)bVar2 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar1 = (MVCubeModelInstance__Class *)0x0;
    if (bVar3) {
      pMVar1 = pMVar5;
    }
    if (pMVar1 == (MVCubeModelInstance__Class *)0x0) goto code_?;
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pMVar1,
                        (Type *)StringLiteral_editableCubeModel,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar7 == (Pool *)0x0) goto code_?;
    if ((pPVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar8 = (int32_t *)func_?();
      this_00 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      key = *piVar8;
      pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pMVar1,(Type *)StringLiteral_sentryGun,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar7 == (Pool *)0x0) goto code_?;
      if ((pPVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar8 = (int32_t *)func_?();
      key_00 = *piVar8;
      if ((koGaMaPackageClient == (KoGaMaPackageClient *)0x0) ||
         (pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(koGaMaPackageClient->fields).worldObjects,
         pDVar9 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)0x0)) {
code_?:
        func_?();
      }
      else {
        wo = (MVWorldObjectClient *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (pDVar9,key,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
        pMVar1 = TypeInfo__MVCubeModelInstance;
        if (wo != (MVWorldObjectClient *)0x0) {
          bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
          if (((wo->klass->_1).naturalAligment < bVar2) ||
             ((MVCubeModelInstance__Class *)(wo->klass->_1).typeHierarchy[bVar2 - 1] !=
              TypeInfo__MVCubeModelInstance)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          pMVar4 = (MVWorldObjectClient *)0x0;
          if (bVar3) {
            pMVar4 = wo;
          }
          if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
        }
        pDVar9 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(koGaMaPackageClient->fields).worldObjects;
        if (pDVar9 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        wo = (MVWorldObjectClient *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (pDVar9,key_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
        if (wo != (MVWorldObjectClient *)0x0) {
          bVar2 = (TypeInfo__MVSentryGun->_1).naturalAligment;
          if (((wo->klass->_1).naturalAligment < bVar2) ||
             ((MVSentryGun__Class *)(wo->klass->_1).typeHierarchy[bVar2 - 1] !=
              TypeInfo__MVSentryGun)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          pMVar4 = (MVWorldObjectClient *)0x0;
          if (bVar3) {
            pMVar4 = wo;
          }
          pMVar1 = (MVCubeModelInstance__Class *)TypeInfo__MVSentryGun;
          if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
        }
        pMVar5 = (MVCubeModelInstance__Class *)
                 MVBlueprintBase::MVBlueprintBase_GetChild
                           ((MVBlueprintBase *)this_00,StringLiteral_editableCubeModel,
                            (MethodInfo *)0x0);
        if (pMVar5 == (MVCubeModelInstance__Class *)0x0) {
          pMVar1 = (MVCubeModelInstance__Class *)0x0;
code_?:
          pMVar4 = MVBlueprintBase::MVBlueprintBase_GetChild
                              ((MVBlueprintBase *)StringLiteral_sentryGun,StringLiteral_sentryGun,
                               (MethodInfo *)0x0);
          if (pMVar4 != (MVWorldObjectClient *)0x0) {
            bVar2 = (TypeInfo__MVSentryGun->_1).naturalAligment;
            if (((pMVar4->klass->_1).naturalAligment < bVar2) ||
               ((MVSentryGun__Class *)(pMVar4->klass->_1).typeHierarchy[bVar2 - 1] !=
                TypeInfo__MVSentryGun)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            pMVar10 = (MVWorldObjectClient *)0x0;
            if (bVar3) {
              pMVar10 = pMVar4;
            }
            if (pMVar10 == (MVWorldObjectClient *)0x0) goto code_?;
            cVar11 = (*(code *)(pMVar10->klass->vtable).CompareWithKoGaMaPackage.method)();
            if (cVar11 == '\0') {
              return 0;
            }
            if (pMVar1 != (MVCubeModelInstance__Class *)0x0) {
              cVar11 = (*(code *)(pMVar1->_0).image[0xc].assembly)();
              return cVar11 != '\0';
            }
          }
          goto code_?;
        }
        pIVar6 = (pMVar5->_0).image;
        bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if ((*(byte *)&pIVar6[4].assembly < bVar2) ||
           (*(MVCubeModelInstance__Class **)((pIVar6[2].typeCount - 4) + (uint)bVar2 * 4) !=
            TypeInfo__MVCubeModelInstance)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pMVar1 = (MVCubeModelInstance__Class *)0x0;
        if (bVar3) {
          pMVar1 = pMVar5;
        }
        if (pMVar1 != (MVCubeModelInstance__Class *)0x0) goto code_?;
      }
code_?:
      func_?();
      wo = extraout_EDX;
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_Initialize
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVSentryGunBlueprint_InitializeCommon(this,(MethodInfo *)0x0);
  if ((this->fields).editableCubes != (MVCubeModelInstance *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)in_stack_1,
               MethodInfo__MVCubeModelInstance__OnStateChanged_UnityEngine__CullingGroupEvent_,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    MVCubeModelInstance::MVCubeModelInstance_SetupCulling
              (in_stack_1,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_InitializeCommon
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar1,(Type *)StringLiteral_BlueprintData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
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
    this_00 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar3) {
      this_00 = pDVar1;
    }
    if (this_00 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_ChildrenMap,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar4 == (Pool *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_MVSentryGunBlueprint_does_not_ha,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_03,(this->fields)._._._._.id,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pPVar4->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pPVar4->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pPVar5 = (Pool *)0x0;
    if (bVar3) {
      pPVar5 = pPVar4;
    }
    if (pPVar5 == (Pool *)0x0) goto code_?;
    pMVar6 = (MVCubeModelInstance *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,StringLiteral_editableCubeModel,(MethodInfo *)0x0);
    pMVar7 = pMVar6;
    if (pMVar6 != (MVCubeModelInstance *)0x0) {
      bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar6->klass->_1).naturalAligment < bVar2) ||
         ((MVCubeModelInstance__Class *)(pMVar6->klass->_1).typeHierarchy[bVar2 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pMVar7 = (MVCubeModelInstance *)0x0;
      if (bVar3) {
        pMVar7 = pMVar6;
      }
      if (pMVar7 == (MVCubeModelInstance *)0x0) goto code_?;
    }
    (this->fields).editableCubes = pMVar7;
    pMVar8 = (MVSentryGun *)
             MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)this,StringLiteral_sentryGun,(MethodInfo *)0x0);
    if (pMVar8 == (MVSentryGun *)0x0) {
      pMVar9 = (MVSentryGun *)0x0;
code_?:
      (this->fields).gun = pMVar9;
      if ((this->fields).editableCubes == (MVCubeModelInstance *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Missing_editable_cubes,(MethodInfo *)0x0);
        return;
      }
      if (pMVar9 == (MVSentryGun *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Missing_gun,(MethodInfo *)0x0);
        return;
      }
      this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      pMVar8 = (this->fields).gun;
      if (pMVar8 != (MVSentryGun *)0x0) {
        pUVar10 = (UnityWebRequest *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pMVar8,(MethodInfo *)0x0);
        if (this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,pUVar10,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          pMVar7 = (this->fields).editableCubes;
          if (pMVar7 != (MVCubeModelInstance *)0x0) {
            pUVar10 = (UnityWebRequest *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                      Collection_1_VoxelHit__get_Items
                                ((Collection_1_VoxelHit_ *)pMVar7,(MethodInfo *)0x0);
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,pUVar10,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            (pMVar9->fields)._RaycastIgnoreWorldObjectIds_k__BackingField =
                 (HashSet_1_System_Int32_ *)this_01;
            pMVar8 = (this->fields).gun;
            if (pMVar8 != (MVSentryGun *)0x0) {
              IVar11 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                                 ((MVWorldObjectClient *)pMVar8,(MethodInfo *)0x0);
              MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                        ((MVWorldObjectClient *)pMVar8,
                         IVar11 | (InteractionFlags__Enum_NotUserTransformable|
                                  InteractionFlags__Enum_SelectionRequiresEditGroup),method_00);
              pMVar7 = (this->fields).editableCubes;
              if (pMVar7 != (MVCubeModelInstance *)0x0) {
                IVar11 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                                   ((MVWorldObjectClient *)pMVar7,(MethodInfo *)0x0);
                uVar12 = 0;
                MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                          ((MVWorldObjectClient *)pMVar7,
                           IVar11 | (InteractionFlags__Enum_NotUserTransformable|
                                    InteractionFlags__Enum_SelectionRequiresEditGroup),method_01);
                pMVar7 = (this->fields).editableCubes;
                this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(TypeInfo__System__Func<IModelingConstraint>,uVar12);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_02,(Object *)this,
                           MethodInfo__MVSentryGunBlueprint___InitializeCommon_m__0__,
                           MethodInfo__System__Func<IModelingConstraint>__Func_System__Object__void__
                          );
                if (pMVar7 != (MVCubeModelInstance *)0x0) {
                  MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
                            ((MVPreviewAvatar *)pMVar7,(int32_t)this_02,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar2 = (TypeInfo__MVSentryGun->_1).naturalAligment;
    if (((pMVar8->klass->_1).naturalAligment < bVar2) ||
       ((MVSentryGun__Class *)(pMVar8->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVSentryGun)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar9 = (MVSentryGun *)0x0;
    if (bVar3) {
      pMVar9 = pMVar8;
    }
    if (pMVar9 != (MVSentryGun *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_InitializeInventory
               (MVSentryGunBlueprint *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Type_Pool_ *)
           PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_2,(MethodInfo *)0x0);
  if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pDVar1 = (Dictionary_2_System_Type_Pool_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (pDVar1,(Type *)StringLiteral_BlueprintData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pDVar1 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar3) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    this_03 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar4) {
      this_03 = pDVar1;
    }
    if (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_03,(Type *)StringLiteral_ChildrenMap,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar5 == (Pool *)0x0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_MVSentryGunBlueprint_does_not_ha,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_06 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                  (this_06,(int32_t)(in_stack_2->fields)._._._._.m_CachedPtr,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pPVar5->klass->_1).naturalAligment < bVar3) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pPVar5->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pPVar6 = (Pool *)0x0;
    if (bVar4) {
      pPVar6 = pPVar5;
    }
    if (pPVar6 == (Pool *)0x0) goto code_?;
    pMVar7 = MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)in_stack_2,StringLiteral_editableCubeModel,
                        (MethodInfo *)0x0);
    pMVar8 = pMVar7;
    if (pMVar7 != (MVWorldObjectClient *)0x0) {
      bVar3 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if (((pMVar7->klass->_1).naturalAligment < bVar3) ||
         ((MVCubeModelInstance__Class *)(pMVar7->klass->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__MVCubeModelInstance)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pMVar8 = (MVWorldObjectClient *)0x0;
      if (bVar4) {
        pMVar8 = pMVar7;
      }
      if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
    }
    (in_stack_2->fields).mvSentryGunPrefab = (MVSentryGunObject *)pMVar8;
    pMVar8 = MVBlueprintBase::MVBlueprintBase_GetChild
                       ((MVBlueprintBase *)in_stack_2,StringLiteral_sentryGun,
                        (MethodInfo *)0x0);
    if (pMVar8 == (MVWorldObjectClient *)0x0) {
      pMVar7 = (MVWorldObjectClient *)0x0;
code_?:
      (in_stack_2->fields).shootableButtonPrefab = (ShootableButtonObject *)pMVar7;
      if ((in_stack_2->fields).mvSentryGunPrefab == (MVSentryGunObject *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Missing_editable_cubes,(MethodInfo *)0x0);
        return;
      }
      if (pMVar7 == (MVWorldObjectClient *)0x0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Missing_gun,(MethodInfo *)0x0);
        return;
      }
      this_04 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_04,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      this_00 = (in_stack_2->fields).shootableButtonPrefab;
      if (this_00 != (ShootableButtonObject *)0x0) {
        pUVar9 = (UnityWebRequest *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
        if (this_04 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,pUVar9,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          this_01 = (in_stack_2->fields).mvSentryGunPrefab;
          if (this_01 != (MVSentryGunObject *)0x0) {
            pUVar9 = (UnityWebRequest *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_04,pUVar9,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            pMVar7[1].fields._.ownerActorNr = (int32_t)this_04;
            pMVar8 = (MVWorldObjectClient *)(in_stack_2->fields).shootableButtonPrefab;
            if (pMVar8 != (MVWorldObjectClient *)0x0) {
              IVar10 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                                 (pMVar8,(MethodInfo *)0x0);
              MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                        (pMVar8,IVar10 | (InteractionFlags__Enum_NotUserTransformable|
                                         InteractionFlags__Enum_SelectionRequiresEditGroup),
                         method_00);
              pMVar8 = (MVWorldObjectClient *)(in_stack_2->fields).mvSentryGunPrefab;
              if (pMVar8 != (MVWorldObjectClient *)0x0) {
                IVar10 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                                   (pMVar8,(MethodInfo *)0x0);
                MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                          (pMVar8,IVar10 | (InteractionFlags__Enum_NotUserTransformable|
                                           InteractionFlags__Enum_SelectionRequiresEditGroup),
                           method_01);
                this_02 = (MVPreviewAvatar *)(in_stack_2->fields).mvSentryGunPrefab;
                this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(TypeInfo__System__Func<IModelingConstraint>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_05,(Object *)in_stack_2,
                           MethodInfo__MVSentryGunBlueprint___InitializeCommon_m__0__,
                           MethodInfo__System__Func<IModelingConstraint>__Func_System__Object__void__
                          );
                if (this_02 != (MVPreviewAvatar *)0x0) {
                  MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
                            (this_02,(int32_t)this_05,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar3 = (TypeInfo__MVSentryGun->_1).naturalAligment;
    if (((pMVar8->klass->_1).naturalAligment < bVar3) ||
       ((MVSentryGun__Class *)(pMVar8->klass->_1).typeHierarchy[bVar3 - 1] != TypeInfo__MVSentryGun)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar7 = (MVWorldObjectClient *)0x0;
    if (bVar4) {
      pMVar7 = pMVar8;
    }
    if (pMVar7 != (MVWorldObjectClient *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_OnEnterObject
               (MVSentryGunBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    pMVar1 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_01,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).FocusOnObject.method)(pMVar1,this,0x40000000,0,0,0);
      this_00 = (this->fields).editableCubes;
      if (this_00 != (MVCubeModelInstance *)0x0) {
        id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
        if (e != (EditorStateMachine *)0x0) {
          EditorStateMachine::EditorStateMachine_SelectWO(e,(int32_t)id,0,1,(MethodInfo *)0x0);
          value = (Object *)func_?();
          FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_OnExitObject
               (MVSentryGunBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = e;
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroup(e,(MethodInfo *)0x0);
    e = (EditorStateMachine *)0x2f;
    value = (Object *)func_?(TypeInfo__EditorEvent,&e);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* IModelingConstraint <InitializeCommon>m__0() */

IModelingConstraint *
Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint__InitializeCommon_m__0
          (MVSentryGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cubeModel = (this->fields).editableCubes;
  uStack_1 = 0;
  iStack_2 = 0;
  func_?((short)&uStack_1,0xfffffffc,0xfffe,0xfffffffc,0);
  uStack_3 = 0;
  iStack_4 = 0;
  func_?(&uStack_3,3,8,3,0);
  this_00 = (ModelingBoxCountConstraint *)func_?(TypeInfo__ModelingBoxCountConstraint);
  minCorner.z = iStack_2;
  minCorner.x = (undefined2)uStack_1;
  minCorner.y = uStack_1._2_2_;
  maxCorner.z = iStack_4;
  maxCorner.x = (undefined2)uStack_3;
  maxCorner.y = uStack_3._2_2_;
  ModelingBoxCountConstraint::ModelingBoxCountConstraint__ctor
            (this_00,(MVCubeModelBase *)cubeModel,minCorner,maxCorner,0x32,(MethodInfo *)0x0);
  return (IModelingConstraint *)this_00;
}


/* MVSentryGunBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint__ctor
               (MVSentryGunBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar2 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar2 = (uint)*piVar2 | 0x1000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSentryGunBlueprint::MVSentryGunBlueprint_get_DocumentationType
          (MVSentryGunBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).gun;
  if (pMVar1 != (MVSentryGun *)0x0) {
    MVar2 = (*(code *)(pMVar1->klass->vtable).get_DocumentationType.method)
                      (pMVar1,(pMVar1->klass->vtable).TraverseRecursiveTail.methodPtr);
    return MVar2;
  }
  return MVWorldObjectDocumentationType__Enum_FireSentryTower;
}

