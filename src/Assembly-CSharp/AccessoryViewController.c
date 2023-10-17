
/* Void DisplayCategoryFeatures(AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_DisplayCategoryFeatures
               (AccessoryViewController *this,AccessoryCategoryClient__Enum category,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).featuredTabFlare;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,category == AccessoryCategoryClient__Enum_Featured ||
                      category == AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
    this_00 = (this->fields).levelProgress;
    if ((this_00 != (LevelProgressAccessoryShop *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,category == AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
      this_01 = (this->fields).tabMenuAccessoryShop;
      if (this_01 != (TabMenuAccessoryShop *)0x0) {
        this_02 = TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
                            (this_01,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((this_02 == (TabMenuButtonBase *)0x0) ||
             (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_02,(MethodInfo *)0x0),
             pGVar1 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,category != AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HideScreens() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_HideScreens
               (AccessoryViewController *this,MethodInfo *method)

{
  this_00 = (this->fields).bundlePurchaseOptions;
  if (this_00 != (BundleView *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).inventoryView;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        this_01 = (this->fields).accessoryView;
        if (this_01 != (AccessoryView *)0x0) {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_01,(MethodInfo *)0x0);
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_OnDestroy
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                   );
    func_?(&MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  pAVar3 = this;
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            ((this->fields).prevLight,(MethodInfo *)0x0);
  pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
  if (pSVar4 == (SkyboxManager *)0x0) {
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  method = (MethodInfo *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pSVar4,(pAVar3->fields).wasEnabled,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
  in_stack_6 =
       WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
  ;
  in_stack_7 = this_00;
  in_stack_8 =
       MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                 (this_00,
                  WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                 );
  if (in_stack_8 == (WorldObjectClientRef_1_System_Object_ *)0x0) {
    return;
  }
  in_stack_9 =
       (RegexCharClass_SingleRange)
       MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__;
  in_stack_6 = (MethodInfo *)&UNK_?;
  in_stack_10 = in_stack_8;
  pOVar11 = WorldObjectClientRef`1[System::Object]::
            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                      (in_stack_8,
                       MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__);
  if (pOVar11 == (Object *)0x0) {
    return;
  }
  in_stack_12 = MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__;
  in_stack_9 = (RegexCharClass_SingleRange)&UNK_?;
  pOVar11 = WorldObjectClientRef`1[System::Object]::
            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                      (in_stack_8,
                       MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__);
  pMVar13 = in_stack_14;
  if ((pOVar11 == (Object *)0x0) || (pOVar11[0x1b].klass == (Object__Class *)0x0))
  goto code_?;
  in_stack_14 = (MethodInfo *)0xffffffff;
  puStack15 = &DAT_?;
  uStack16 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0x00000038;
  method = pMVar13;
  in_stack_12 = (MethodInfo *)&this;
  this = unaff_EDI;
  ppAVar17 = &this;
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                   );
    cRam_? = '\x01';
    ppAVar17 = (AccessoryViewController **)in_stack_12;
  }
  in_stack_12 = (MethodInfo *)ppAVar17;
  iStack18 = 0;
  if (*(char *)(in_stack_19 + 0xc) != '\0') {
    pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (pSVar4 == (SkyboxManager *)0x0) goto code_?;
    this = (AccessoryViewController *)0x0;
    SkyboxManager::SkyboxManager_Disable(pSVar4,(MethodInfo *)0x0);
  }
  if (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
       (in_stack_19 + 0x14) !=
      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0x00000020,
                        *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                         (in_stack_19 + 0x14),
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    iStack18 = pLVar20->_version;
    RVar21 = pLVar20->_current;
    in_stack_10 = (WorldObjectClientRef_1_System_Object_ *)0x0;
    in_stack_14 = (MethodInfo *)0x1;
    in_stack_9 = (RegexCharClass_SingleRange)&stack0x00000010;
    while( true ) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0x00000010,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar1 == 0) {
        in_stack_14 = (MethodInfo *)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0x00000010,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   ,(MethodInfo *)this);
        *unaff_FS_OFFSET = uStack16;
        return;
      }
      if (RVar21 == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)RVar21 + 0xdc))(RVar21);
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OpenAccessoryManagementScreen(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryViewController::
     AccessoryViewController_OpenAccessoryManagementScreen
               (AccessoryViewController *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryView;
  if (pAVar1 != (AccessoryView *)0x0) {
    if ((pAVar1->fields).accessoryDataClient != (AccessoryDataClient *)0x0) {
      if (accessoryData == (AccessoryDataClient *)0x0) goto code_?;
      if ((((pAVar1->fields).accessoryDataClient)->fields)._.aMDID ==
          (accessoryData->fields)._.aMDID) {
        return;
      }
    }
    AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
    pAVar1 = (this->fields).accessoryView;
    if (pAVar1 != (AccessoryView *)0x0) {
      AccessoryView::AccessoryView_Initialize(pAVar1,accessoryData,(MethodInfo *)0x0);
      pAVar1 = (this->fields).accessoryView;
      if ((pAVar1 != (AccessoryView *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pAVar1,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        this_00 = (this->fields).backbackController;
        if (this_00 != (AccessoryShopToggleInventory *)0x0) {
          AccessoryShopToggleInventory::AccessoryShopToggleInventory_SetBackpackIconIsEnabled
                    (this_00,0,(MethodInfo *)0x0);
          pAVar2 = (this->fields).previewer;
          if (pAVar2 != (AvatarAccessoryPreviewer *)0x0) {
            AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
                      (pAVar2,(MethodInfo *)0x0);
            pAVar2 = (this->fields).previewer;
            if (pAVar2 != (AvatarAccessoryPreviewer *)0x0) {
              AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
                        (pAVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OpenCategoryScreen(Boolean) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_OpenCategoryScreen
               (AccessoryViewController *this,bool canSortByInventory,MethodInfo *method)

{
  AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
  this_00 = (this->fields).inventoryView;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    this_01 = (this->fields).backbackController;
    if (this_01 != (AccessoryShopToggleInventory *)0x0) {
      AccessoryShopToggleInventory::AccessoryShopToggleInventory_SetBackpackIconIsEnabled
                (this_01,0,(MethodInfo *)0x0);
      pAVar1 = (this->fields).previewer;
      if (pAVar1 != (AvatarAccessoryPreviewer *)0x0) {
        AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_OnRestartAnimation
                  (pAVar1,(MethodInfo *)0x0);
        pAVar1 = (this->fields).previewer;
        if (pAVar1 != (AvatarAccessoryPreviewer *)0x0) {
          AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_ResetPreviewTransform
                    (pAVar1,(MethodInfo *)0x0);
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


/* Void PurchasedBundle() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_PurchasedBundle
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__AccessoryViewController____c___PurchasedBundle_b__18_0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AccessoryViewController____c);
    cRam_? = '\x01';
  }
  pAVar1 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient((MethodInfo *)0x0);
  if (pAVar1 != (AccessoryBundleClient *)0x0) {
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pAVar1->fields)._.accessoryBundleItems;
    this_01 = (this->fields).tabMenuAccessoryShop;
    if (this_01 != (TabMenuAccessoryShop *)0x0) {
      TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
                (this_01,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
      index = 0;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        for (; index < (this_00->fields)._size; index = index + 1) {
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                            );
          if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
          pAVar3 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                             (*(int32_t *)((int)RVar2 + 0xc),(MethodInfo *)0x0);
          if (pAVar3 != (AccessoryDataClient *)0x0) {
            AccessoryDataManager::AccessoryDataManager_SetToOwns
                      ((pAVar3->fields)._.sAID,(MethodInfo *)0x0);
          }
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__AccessoryViewController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__AccessoryViewController____c->static_fields->__9__18_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0) {
          if ((TypeInfo__AccessoryViewController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__AccessoryViewController____c->static_fields->__9;
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)func_?();
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IAccessoryInventoryControl_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__AccessoryViewController____c___PurchasedBundle_b__18_0_UnityEngine__EventSystems__IAccessoryInventoryControl__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AccessoryViewController____c->static_fields->__9__18_0 = callbackFunction;
          func_?(&TypeInfo__AccessoryViewController____c->static_fields->__9__18_0,
                          callbackFunction);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryInventoryControl>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryInventoryControl>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowBundle() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_ShowBundle
               (AccessoryViewController *this,MethodInfo *method)

{
  AccessoryViewController_HideScreens(this,(MethodInfo *)0x0);
  pBVar1 = (this->fields).bundlePurchaseOptions;
  if (pBVar1 != (BundleView *)0x0) {
    pAVar2 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                        ((MethodInfo *)0x0);
    (pBVar1->fields).bundleData = pAVar2;
    func_?();
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((this_02 != (MVNetworkGame *)0x0) &&
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
        pMVar3 != (MVLocalPlayer *)0x0)) &&
       (pAVar2 = (pBVar1->fields).bundleData, pAVar2 != (AccessoryBundleClient *)0x0)) {
      if ((pMVar3->fields)._.level < (pAVar2->fields)._.level) {
        BundleView::BundleView_HandleLevel(pBVar1,pAVar2,(MethodInfo *)0x0);
      }
      else {
        BundleView::BundleView_HandlePrices(pBVar1,pAVar2,(MethodInfo *)0x0);
      }
      pBVar1 = (this->fields).bundlePurchaseOptions;
      if ((pBVar1 != (BundleView *)0x0) &&
         (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar1,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,1,(MethodInfo *)0x0);
        pGVar4 = (this->fields).inventoryView;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          this_00 = (this->fields).backbackController;
          if (this_00 != (AccessoryShopToggleInventory *)0x0) {
            AccessoryShopToggleInventory::AccessoryShopToggleInventory_SetBackpackIconIsEnabled
                      (this_00,0,(MethodInfo *)0x0);
            pAVar5 = (this->fields).previewer;
            if (pAVar5 != (AvatarAccessoryPreviewer *)0x0) {
              if ((pAVar5->fields).imagesReady == 0) {
                return;
              }
              pGVar4 = (pAVar5->fields).bodyClone;
              if (pGVar4 != (GameObject *)0x0) {
                this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__UnityEngine__Quaternion);
                  cRam_? = '\x01';
                }
                pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
                fVar7 = (pQVar6->identityQuaternion).x;
                fVar8 = (pQVar6->identityQuaternion).y;
                fVar9 = (pQVar6->identityQuaternion).z;
                fVar10 = (pQVar6->identityQuaternion).w;
                auVar11._4_8_ = 0;
                auVar11._0_4_ = _UNK_?;
                pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffa4,(Vector3)(auVar11 << 0x20),
                                     (MethodInfo *)0x0);
                fVar13 = pQVar12->y;
                fVar14 = pQVar12->z;
                fVar15 = pQVar12->w;
                if (this_03 != (Transform *)0x0) {
                  value.y = (fVar13 * fVar10 + fVar15 * fVar8 + pQVar12->x * fVar9) - fVar14 * fVar7
                  ;
                  value.x = (pQVar12->x * fVar10 + fVar15 * fVar7 + fVar14 * fVar8) - fVar13 * fVar9
                  ;
                  value.z = (fVar14 * fVar10 + fVar15 * fVar9 + fVar13 * fVar7) - pQVar12->x * fVar8
                  ;
                  value.w = ((fVar15 * fVar10 - pQVar12->x * fVar7) - fVar13 * fVar8) -
                            fVar14 * fVar9;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (this_03,value,(MethodInfo *)0x0);
                  pAVar16 = (pAVar5->fields).toPreviewer;
                  if ((pAVar16 != (AvatarPreviewer *)0x0) &&
                     (this_01 = (pAVar16->fields).previewCam, this_01 != (Camera *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                              (this_01,(pAVar5->fields).startFov,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              func_?();
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_Start
               (AccessoryViewController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                   );
    func_?(&MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef
                        (this_00,
                         WorldObjectClientRef<ThemeWorldObject>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<ThemeWorldObject>__
                        );
    if ((this_01 != (WorldObjectClientRef_1_System_Object_ *)0x0) &&
       (pOVar1 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           (this_01,
                            MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__
                           ), pOVar1 != (Object *)0x0)) {
      pOVar1 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         (this_01,
                          MethodInfo__WorldObjectClientRef<ThemeWorldObject>__get_WorldObjectClient__
                         );
      if ((pOVar1 == (Object *)0x0) || (pOVar1[0x1b].klass == (Object__Class *)0x0))
      goto code_?;
      Theme::Theme_Deactivate((Theme *)pOVar1[0x1b].klass,(MethodInfo *)0x0);
    }
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_get_ambientLight
              ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (pSVar2 != (SkyboxManager *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                ((Behaviour *)pSVar2,(MethodInfo *)0x0);
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
      if (pSVar2 != (SkyboxManager *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pSVar2,0,(MethodInfo *)0x0);
        value.g = (float)_UNK_?;
        value.r = (float)_UNK_?;
        value.b = (float)_UNK_?;
        value.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
                  (value,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)&UNK_?,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateHighlightedTab(AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryViewController::AccessoryViewController_UpdateHighlightedTab
               (AccessoryViewController *this,AccessoryCategoryClient__Enum category,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabMenuAccessoryShop;
  if (this_00 != (TabMenuAccessoryShop *)0x0) {
    TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton(this_00,category,(MethodInfo *)0x0);
    iVar1 = func_?();
    if (iVar1 != 0) {
      func_?();
    }
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

