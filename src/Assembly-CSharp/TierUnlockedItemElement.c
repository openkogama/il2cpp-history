
/* GameObject CreatePreviewObjectClone() */

GameObject *
Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_CreatePreviewObjectClone
          (TierUnlockedItemElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__);
    func_?(&
                    GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
                   );
    func_?(&
                    UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                   );
    func_?(&
                    UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                   );
    func_?(&
                    UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
                   );
    func_?(&TypeInfo__JetPackVisualization);
    func_?(&TypeInfo__MVPickupOwner);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__TintObject);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).previewObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    (*(pMVar1->klass->vtable).SetupTierInventory.methodPtr)
              (pMVar1,(pMVar1->klass->vtable).SetupTierInventory.method);
    pMVar1 = (this->fields).previewObject;
    if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
       (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      pMVar1 = (this->fields).previewObject;
      if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
         (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        bVar4 = false;
        pMVar1 = (this->fields).previewObject;
        if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
           (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
          pIVar5 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                             ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar2,
                              GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
                             );
          unaff_ESI = (IEnumerable_1_System_Object___Class *)0x0;
          if (pIVar5 != (IEnumerable_1_System_Object_ *)0x0) {
            unaff_EDI = (MVPickupOwner__Class *)(pIVar5 + 2);
            for (; (int)unaff_ESI < (int)pIVar5[1].monitor;
                unaff_ESI = (IEnumerable_1_System_Object___Class *)((int)&(unaff_ESI->_0).image + 1)
                ) {
              if ((IEnumerable_1_System_Object___Class *)pIVar5[1].monitor <= unaff_ESI)
              goto code_?;
              pPVar6 = (ParticleSystem__Class *)(unaff_EDI->_0).image;
              if (pPVar6 == (ParticleSystem__Class *)0x0) goto code_?;
              if (*(bool *)&(pPVar6->_0).this_arg.data == 0) {
                GreyOutObjectScript::GreyOutObjectScript_GreyIn
                          ((GreyOutObjectScript *)pPVar6,(MethodInfo *)0x0);
                bVar4 = true;
              }
              unaff_EDI = (MVPickupOwner__Class *)&(unaff_EDI->_0).gc_desc;
            }
            pMVar1 = (this->fields).previewObject;
            if (pMVar1 != (MVWorldObjectClient *)0x0) {
              unaff_ESI = (IEnumerable_1_System_Object___Class *)(pMVar1->fields).gameObject;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              this_00 = (MVPickupOwner__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)unaff_ESI,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  );
              pMVar1 = (this->fields).previewObject;
              unaff_EDI = this_00;
              if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
                 (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,bVar3,(MethodInfo *)0x0);
                unaff_ESI = (IEnumerable_1_System_Object___Class *)0x0;
                pIStack_7 = (IEnumerable_1_System_Object___Class *)0x0;
                if (this_00 != (MVPickupOwner__Class *)0x0) {
                  pIVar8 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_00,
                                      UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                                     );
                  pMVar9 = (MonitorData *)0x0;
                  if (pIVar8 != (IEnumerable_1_System_Object_ *)0x0) {
                    pIVar10 = pIVar8 + 2;
                    for (; (int)pMVar9 < (int)pIVar8[1].monitor; pMVar9 = pMVar9 + 1) {
                      if (pIVar8[1].monitor <= pMVar9) goto code_?;
                      unaff_ESI = pIVar10->klass;
                      if (unaff_ESI == (IEnumerable_1_System_Object___Class *)0x0)
                      goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)unaff_ESI,0,(MethodInfo *)0x0);
                      unaff_EDI = (MVPickupOwner__Class *)TypeInfo__TintObject;
                      pBVar11 = (Behaviour__Class *)(unaff_ESI->_0).image;
                      if (((TypeInfo__TintObject->_1).typeHierarchyDepth <=
                           (pBVar11->_1).typeHierarchyDepth) &&
                         ((pBVar11->_1).typeHierarchy
                          [(TypeInfo__TintObject->_1).typeHierarchyDepth - 1] ==
                          (Il2CppClass *)TypeInfo__TintObject)) {
                        iVar12 = func_?(unaff_ESI,TypeInfo__TintObject);
                        if ((iVar12 == 0) ||
                           (iVar12 = func_?(unaff_ESI,unaff_EDI), iVar12 == 0))
                        goto code_?;
                        func_?(5,iVar12,(this->fields).team);
                      }
                      unaff_EDI = TypeInfo__MVPickupOwner;
                      iVar12 = func_?(unaff_ESI,TypeInfo__MVPickupOwner);
                      if (iVar12 != 0) {
                        iVar12 = func_?(unaff_ESI,unaff_EDI);
                        if ((iVar12 == 0) ||
                           (iVar12 = func_?(unaff_ESI,unaff_EDI), iVar12 == 0))
                        goto code_?;
                        *(undefined1 *)(iVar12 + 0xc) = 0;
                      }
                      unaff_EDI = (MVPickupOwner__Class *)TypeInfo__JetPackVisualization;
                      iVar12 = func_?(unaff_ESI,TypeInfo__JetPackVisualization);
                      if ((iVar12 != 0) &&
                         (pIStack_7 = (IEnumerable_1_System_Object___Class *)
                                       func_?(unaff_ESI,unaff_EDI),
                         pIStack_7 == (IEnumerable_1_System_Object___Class *)0x0))
                      goto code_?;
                      pIVar10 = (IEnumerable_1_System_Object_ *)&pIVar10->monitor;
                    }
                    pIVar8 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_00,
                                        UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                                       );
                    unaff_ESI = (IEnumerable_1_System_Object___Class *)0x0;
                    if (pIVar8 != (IEnumerable_1_System_Object_ *)0x0) {
                      pIVar10 = pIVar8 + 2;
                      for (; (int)unaff_ESI < (int)pIVar8[1].monitor;
                          unaff_ESI = (IEnumerable_1_System_Object___Class *)
                                      ((int)&(unaff_ESI->_0).image + 1)) {
                        if ((IEnumerable_1_System_Object___Class *)pIVar8[1].monitor <= unaff_ESI)
                        goto code_?;
                        unaff_EDI = (MVPickupOwner__Class *)pIVar10->klass;
                        if (unaff_EDI == (MVPickupOwner__Class *)0x0) goto code_?;
                        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                        ParticleSystem_Stop_2((ParticleSystem *)unaff_EDI,(MethodInfo *)0x0);
                        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)unaff_EDI,(MethodInfo *)0x0)
                        ;
                        if (pGVar2 == (GameObject *)0x0) goto code_?;
                        pIVar8 = (IEnumerable_1_System_Object_ *)0x0;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar2,0,(MethodInfo *)0x0);
                        pIVar10 = (IEnumerable_1_System_Object_ *)&pIVar10->monitor;
                      }
                      pIVar8 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_00,
                                          UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
                                         );
                      unaff_ESI = (IEnumerable_1_System_Object___Class *)0x0;
                      if (pIVar8 != (IEnumerable_1_System_Object_ *)0x0) {
                        unaff_EDI = (MVPickupOwner__Class *)(pIVar8 + 2);
                        for (; (int)unaff_ESI < (int)pIVar8[1].monitor;
                            unaff_ESI = (IEnumerable_1_System_Object___Class *)
                                        ((int)&(unaff_ESI->_0).image + 1)) {
                          if ((IEnumerable_1_System_Object___Class *)pIVar8[1].monitor <= unaff_ESI)
                          goto code_?;
                          pPVar6 = (ParticleSystem__Class *)(unaff_EDI->_0).image;
                          if (pPVar6 == (ParticleSystem__Class *)0x0) goto code_?;
                          UseInteractorVisualization::UseInteractorVisualization_Disable
                                    ((UseInteractorVisualization *)pPVar6,(MethodInfo *)0x0);
                          unaff_EDI = (MVPickupOwner__Class *)&(unaff_EDI->_0).gc_desc;
                        }
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__Object);
                        }
                        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_op_Equality
                                          ((Object_1 *)pIStack_7,(Object_1 *)0x0,(MethodInfo *)0x0)
                        ;
                        unaff_ESI = pIStack_7;
                        if (bVar3 == 0) {
                          if (((pIStack_7 != (IEnumerable_1_System_Object___Class *)0x0) &&
                              (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pIStack_7,(MethodInfo *)0x0),
                              pGVar2 != (GameObject *)0x0)) &&
                             (pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_AddComponent_1
                                                  (pGVar2,
                                                  RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                                  ), pOVar13 != (Object *)0x0)) {
                            pOVar13[1].monitor = (MonitorData *)0x428c0000;
                            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pIStack_7,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?(&TypeInfo__UnityEngine__Vector3);
                              cRam_? = '\x01';
                            }
                            unaff_ESI = (IEnumerable_1_System_Object___Class *)0x0;
                            if (this_01 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localPosition
                                        (this_01,TypeInfo__UnityEngine__Vector3->static_fields->
                                                 zeroVector,(MethodInfo *)0x0);
                              (this->fields).cameraOffset.x =
                                   (this->fields).cameraOffset.x + _UNK_?;
                              (this->fields).cameraOffset.z =
                                   (this->fields).cameraOffset.z - _UNK_?;
                              goto code_?;
                            }
                          }
                        }
                        else {
                          pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_AddComponent_1
                                              ((GameObject *)this_00,
                                               RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                              );
                          if (pOVar13 != (Object *)0x0) {
                            pOVar13[1].monitor = (MonitorData *)0x428c0000;
code_?:
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive((GameObject *)this_00,1,(MethodInfo *)0x0);
                            if (bVar4) {
                              unaff_EDI = (MVPickupOwner__Class *)(pIVar5 + 2);
                              for (unaff_ESI = (IEnumerable_1_System_Object___Class *)0x0;
                                  (int)unaff_ESI < (int)pIVar5[1].monitor;
                                  unaff_ESI = (IEnumerable_1_System_Object___Class *)
                                              ((int)&(unaff_ESI->_0).image + 1)) {
                                if ((IEnumerable_1_System_Object___Class *)pIVar5[1].monitor <=
                                    unaff_ESI) goto code_?;
                                pPVar6 = (ParticleSystem__Class *)(unaff_EDI->_0).image;
                                if (pPVar6 == (ParticleSystem__Class *)0x0) goto code_?;
                                GreyOutObjectScript::GreyOutObjectScript_GreyOut
                                          ((GreyOutObjectScript *)pPVar6,(MethodInfo *)0x0);
                                unaff_EDI = (MVPickupOwner__Class *)&(unaff_EDI->_0).gc_desc;
                              }
                            }
                            return (GameObject *)this_00;
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
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_ESI,unaff_EDI);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar14)();
  return pGVar2;
}


/* Color GetTeamColor(MVTeam) */

Color * Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_GetTeamColor
                  (Color *__return_storage_ptr__,TierUnlockedItemElement *this,MVTeam__Enum team,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
    break;
  case MVTeam__Enum_Red:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamRed;
    break;
  case MVTeam__Enum_Green:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
    break;
  case MVTeam__Enum_Yellow:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
    break;
  default:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_OffWhite;
  }
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Void Initialize(List`1[MVWorldObjectClient], Int32) */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_Initialize
               (TierUnlockedItemElement *this,List_1_MVWorldObjectClient_ *tierShopItemData,
               int32_t itemIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__InventoryItem);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    func_?(&StringLiteral_x);
    func_?(&StringLiteral_Preview_Root___TierShopItem);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).objectPreviewerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pIVar1 = (InventoryItemPreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pIVar1,
                      InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                     );
  (this->fields).objectPreviewer = pIVar1;
  func_?(&(this->fields).objectPreviewer,pIVar1);
  if (tierShopItemData != (List_1_MVWorldObjectClient_ *)0x0) {
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       tierShopItemData,0,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                      );
    (this->fields).previewObject = (MVWorldObjectClient *)RVar2;
    func_?(&(this->fields).previewObject,RVar2);
    if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__InventoryItem);
    }
    pMVar3 = (this->fields).previewObject;
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      pOVar4 = (Object *)
               (*(pMVar3->klass->vtable).get_DocumentationType.methodPtr)
                         (pMVar3,(pMVar3->klass->vtable).get_DocumentationType.method);
      if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_00,pOVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                          );
        if (bVar5 != 0) {
          if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__InventoryItem);
          }
          pMVar3 = (this->fields).previewObject;
          this_01 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
          key = (*(pMVar3->klass->vtable).get_DocumentationType.methodPtr)
                          (pMVar3,(pMVar3->klass->vtable).get_DocumentationType.method);
          if (this_01 ==
              (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0)
          goto code_?;
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                             );
          if (pOVar4 == (Object *)0x0) goto code_?;
          uVar6 = *(undefined8 *)&pOVar4[2].monitor;
          pMVar7 = pOVar4[3].monitor;
          (this->fields).cameraOffset.x = (float)(int)uVar6;
          (this->fields).cameraOffset.y = (float)(int)((ulonglong)uVar6 >> 0x20);
          (this->fields).cameraOffset.z = (float)pMVar7;
        }
        this_03 = TierUnlockedItemElement_CreatePreviewObjectClone(this,(MethodInfo *)0x0);
        if (this_03 != (GameObject *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_03,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Quaternion);
            cRam_? = '\x01';
          }
          if (pTVar8 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar8,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            this_04 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
            if (this_04 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                        (this_04,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_04,(MethodInfo *)0x0);
              (this->fields).rootTransform = pTVar8;
              func_?(&(this->fields).rootTransform,pTVar8);
              iStack_9 = (this->fields).previewWidth;
              pIVar1 = (this->fields).objectPreviewer;
              iStack_10 = (this->fields).previewHeight;
              pMVar3 = (this->fields).previewObject;
              uStack_11 = 0x43960000;
              fStack_12 = (float)itemIndex * _UNK_?;
              uStack_13 = 0x43960000;
              if (pMVar3 != (MVWorldObjectClient *)0x0) {
                LStack_14 = (pMVar3->fields).previewLayerMask;
                uStack_15._0_4_ = (this->fields).cameraOffset.x;
                uStack_15._4_4_ = (this->fields).cameraOffset.y;
                fStack_16 = (this->fields).cameraOffset.z;
                pTVar8 = (this->fields).rootTransform;
                iStack_17 = (((this->fields).previewObject)->fields)._.type;
                EStack_18.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
                EStack_18.monitor = (MonitorData *)0xffffffff;
                pSVar19 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_18,(MethodInfo *)0x0);
                if (pIVar1 != (InventoryItemPreviewer *)0x0) {
                  previewPosition.y = (float)uStack_13;
                  previewPosition.x = (float)uStack_11;
                  cameraOffset.z = fStack_16;
                  cameraOffset.x = (float)(undefined4)uStack_15;
                  cameraOffset.y = (float)uStack_15._4_4_;
                  previewPosition.z = fStack_12;
                  InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                            (pIVar1,iStack_9,iStack_10,CameraClearFlags__Enum_Color,LStack_14,
                             cameraOffset,pTVar8,previewPosition,pSVar19,
                             (this->fields).previewObject,this_03,(MethodInfo *)0x0);
                  pIVar1 = (this->fields).objectPreviewer;
                  if ((pIVar1 != (InventoryItemPreviewer *)0x0) &&
                     (this_02 = (this->fields).previewImage, this_02 != (RawImage *)0x0)) {
                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                              (this_02,(Texture *)(pIVar1->fields).previewTexture,(MethodInfo *)0x0)
                    ;
                    pTVar20 = (this->fields).itemAmountText;
                    IStack_21.m_value = (tierShopItemData->fields)._size;
                    pSVar19 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_21,(MethodInfo *)0x0);
                    pSVar19 = mscorlib.dll::System::String::String_Concat_3
                                        (StringLiteral_x,pSVar19,(MethodInfo *)0x0);
                    if (pTVar20 != (Text *)0x0) {
                      (*(pTVar20->klass->vtable).set_text.methodPtr)
                                (pTVar20,pSVar19,(pTVar20->klass->vtable).set_text.method);
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
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_OnDestroy
               (TierUnlockedItemElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).rootTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (this->fields).rootTransform;
    if (pTVar1 == (Transform *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)pTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  (this->fields).rootTransform = (Transform *)0x0;
  func_?();
  pMVar3 = (this->fields).previewObject;
  if (pMVar3 != (MVWorldObjectClient *)0x0) {
    (*(pMVar3->klass->vtable).UnSetupTierInventory.methodPtr)
              (pMVar3,(pMVar3->klass->vtable).UnSetupTierInventory.method);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
               (TierUnlockedItemElement *this,MVTeam__Enum team,MethodInfo *method)

{
  pIVar1 = (this->fields).teamRequirementImage;
  (this->fields).team = team;
  pTVar2 = this;
  if ((pIVar1 == (Image *)0x0) ||
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pIVar1,(MethodInfo *)0x0), this_00 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_00,1,(MethodInfo *)0x0);
  pIVar1 = (this->fields).teamRequirementImage;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = 1.12104e-44;
    __return_storage_ptr__ = &CStack_3;
    break;
  case MVTeam__Enum_Red:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = 1.26117e-44;
    __return_storage_ptr__ = &CStack_4;
    break;
  case MVTeam__Enum_Green:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = 1.54143e-44;
    __return_storage_ptr__ = (Color *)&stack0xffffffcc;
    break;
  case MVTeam__Enum_Yellow:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    colorStyle = 1.4013e-44;
    __return_storage_ptr__ = (Color *)&stack0xffffffbc;
    break;
  default:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    __return_storage_ptr__ = (Color *)&stack0xffffff9c;
    goto code_?;
  case MVTeam__Enum_None:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    __return_storage_ptr__ = (Color *)&stack0xffffffac;
code_?:
    colorStyle = 3.64338e-44;
  }
  Styles::Styles_GetColor(__return_storage_ptr__,(ColorStyle__Enum)colorStyle,(MethodInfo *)0x0);
  pTVar2 = (TierUnlockedItemElement *)0x0;
  if (pIVar1 != (Image *)0x0) {
    (*(pIVar1->klass->vtable).set_color.methodPtr)();
    return;
  }
code_?:
  func_?();
  bVar5 = in(extraout_DX);
  out(*(undefined1 *)team,extraout_DX);
  piVar6 = &(pTVar2->fields).team;
  puVar7 = (undefined1 *)*piVar6;
  *piVar6 = *piVar6 - (int)&stack0xfffffffc;
  *(char *)(team + 0x70) = *(char *)(team + 0x70) + (bVar5 | 0x6f) + (puVar7 < &stack0xfffffffc);
  if ('\x0f' < (char)(bVar5 | 0x6f)) {
    piVar6 = &(pTVar2->fields).team;
    sVar8 = -((ushort)*piVar6 & 3);
    *(ushort *)piVar6 = (short)*piVar6 + (ushort)(0 < sVar8) * sVar8;
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar10 = (char *)(unaff_EBX + 0x56);
  *pcVar10 = *pcVar10 + (char)extraout_DX;
  CStack_3.r = (float)&stack0xffffffb0;
  puVar7 = &stack0xffffffb0;
  if (*pcVar10 == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                   );
    uRam_? = 1;
    puVar7 = (undefined1 *)CStack_3.r;
  }
  CStack_3.r = (float)puVar7;
  CStack_4.a = 0.0;
  pOStack_11 = (Object__Class *)0x0;
  if ((method != (MethodInfo *)0x0) &&
     (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)method,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Values__
                          ),
     this_01 !=
     (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
      *)0x0)) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
             Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&stack0xffffffd4,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                       );
    CStack_4.r = 0.0;
    CStack_3.a = 1.4013e-45;
    tierShopItemData = (List_1_MVWorldObjectClient_ *)pDVar12->_currentValue;
    CStack_4.g = (float)&pOStack_11;
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
              Object,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                          *)&pOStack_11,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                        );
      if (bVar13 == 0) {
        CStack_3.a = -NAN;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&pOStack_11,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                   ,in_stack_14);
        *unaff_FS_OFFSET = CStack_3.g;
        return;
      }
      original = (this->fields).previewImage;
      pLVar15 = tierShopItemData;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        pLVar15 = (List_1_MVWorldObjectClient_ *)&UNK_?;
        func_?();
      }
      pTVar2 = (TierUnlockedItemElement *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           TierUnlockedItemElement_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemElement>_TierUnlockedItemElement_
                          );
      if ((pTVar2 == (TierUnlockedItemElement *)0x0) ||
         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pTVar2,(MethodInfo *)0x0), this_02 == (Transform *)0x0)
         ) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_02,(Transform *)(this->fields).objectPreviewerPrefab,0,(MethodInfo *)0x0);
      TierUnlockedItemElement_Initialize
                (pTVar2,tierShopItemData,(int32_t)CStack_4.a,(MethodInfo *)0x0);
      CStack_4.a = (float)((int)CStack_4.a + 1);
      tierShopItemData = pLVar15;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* TierUnlockedItemElement() */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement__ctor
               (TierUnlockedItemElement *this,MethodInfo *method)

{
  (this->fields).cameraOffset.x = 0.0;
  (this->fields).cameraOffset.y = 0.0;
  (this->fields).cameraOffset.z = 0.0;
  (this->fields).team = 5;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

