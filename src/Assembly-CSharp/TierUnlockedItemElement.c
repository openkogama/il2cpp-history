
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
    (*(code *)(pMVar1->klass->vtable).SetupTierInventory.method)
              (pMVar1,(pMVar1->klass->vtable).UnSetupTierInventory.methodPtr);
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
          pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren
                             (pGVar2,
                              GreyOutObjectScript__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<GreyOutObjectScript>______
                             );
          unaff_ESI = (Behaviour *)0x0;
          if (pOVar5 != (Object__Array *)0x0) {
            unaff_EDI = (MVPickupOwner__Class *)pOVar5->vector;
            for (; (int)unaff_ESI < (int)pOVar5->max_length;
                unaff_ESI = (Behaviour *)((int)&unaff_ESI->klass + 1)) {
              if ((Behaviour *)pOVar5->max_length <= unaff_ESI) goto code_?;
              pIVar6 = (unaff_EDI->_0).image;
              if (pIVar6 == (Il2CppImage *)0x0) goto code_?;
              if (*(bool *)&pIVar6->codeGenModule == 0) {
                GreyOutObjectScript::GreyOutObjectScript_GreyIn
                          ((GreyOutObjectScript *)pIVar6,(MethodInfo *)0x0);
                bVar4 = true;
              }
              unaff_EDI = (MVPickupOwner__Class *)&(unaff_EDI->_0).gc_desc;
            }
            pMVar1 = (this->fields).previewObject;
            if (pMVar1 != (MVWorldObjectClient *)0x0) {
              unaff_ESI = (Behaviour *)(pMVar1->fields).gameObject;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              this_01 = (MVPickupOwner__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)unaff_ESI,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  );
              pMVar1 = (this->fields).previewObject;
              unaff_EDI = this_01;
              if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
                 (pGVar2 = (pMVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,bVar3,(MethodInfo *)0x0);
                unaff_ESI = (Behaviour *)0x0;
                pBStack_7 = (Behaviour *)0x0;
                if (this_01 != (MVPickupOwner__Class *)0x0) {
                  pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_GetComponentsInChildren
                                     ((GameObject *)this_01,
                                      UnityEngine__MonoBehaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MonoBehaviour>______
                                     );
                  uVar9 = 0;
                  if (pOVar8 != (Object__Array *)0x0) {
                    ppOVar10 = pOVar8->vector;
                    for (; (int)uVar9 < (int)pOVar8->max_length; uVar9 = uVar9 + 1) {
                      if (pOVar8->max_length <= uVar9) goto code_?;
                      unaff_ESI = (Behaviour *)*ppOVar10;
                      if (unaff_ESI == (Behaviour *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                (unaff_ESI,0,(MethodInfo *)0x0);
                      unaff_EDI = (MVPickupOwner__Class *)TypeInfo__TintObject;
                      if (((TypeInfo__TintObject->_1).naturalAligment <=
                           (unaff_ESI->klass->_1).naturalAligment) &&
                         ((unaff_ESI->klass->_1).typeHierarchy
                          [(TypeInfo__TintObject->_1).naturalAligment - 1] ==
                          (Il2CppClass *)TypeInfo__TintObject)) {
                        iVar11 = func_?(unaff_ESI,TypeInfo__TintObject);
                        if ((iVar11 == 0) ||
                           (iVar11 = func_?(unaff_ESI,unaff_EDI), iVar11 == 0))
                        goto code_?;
                        func_?(5,iVar11,(this->fields).team);
                      }
                      unaff_EDI = TypeInfo__MVPickupOwner;
                      iVar11 = func_?(unaff_ESI,TypeInfo__MVPickupOwner);
                      if (iVar11 != 0) {
                        iVar11 = func_?(unaff_ESI,unaff_EDI);
                        if ((iVar11 == 0) ||
                           (iVar11 = func_?(unaff_ESI,unaff_EDI), iVar11 == 0))
                        goto code_?;
                        *(undefined1 *)(iVar11 + 0x10) = 0;
                      }
                      unaff_EDI = (MVPickupOwner__Class *)TypeInfo__JetPackVisualization;
                      iVar11 = func_?(unaff_ESI,TypeInfo__JetPackVisualization);
                      if ((iVar11 != 0) &&
                         (pBStack_7 = (Behaviour *)func_?(unaff_ESI,unaff_EDI),
                         pBStack_7 == (Behaviour *)0x0)) goto code_?;
                      ppOVar10 = ppOVar10 + 1;
                    }
                    pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_GetComponentsInChildren
                                       ((GameObject *)this_01,
                                        UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                                       );
                    unaff_EDI = (MVPickupOwner__Class *)0x0;
                    if (pOVar8 != (Object__Array *)0x0) {
                      ppOVar10 = pOVar8->vector;
                      for (; (int)unaff_EDI < (int)pOVar8->max_length;
                          unaff_EDI = (MVPickupOwner__Class *)((int)&(unaff_EDI->_0).image + 1)) {
                        if ((MVPickupOwner__Class *)pOVar8->max_length <= unaff_EDI)
                        goto code_?;
                        unaff_ESI = (Behaviour *)*ppOVar10;
                        if (unaff_ESI == (Behaviour *)0x0) goto code_?;
                        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                        ParticleSystem_Stop_2((ParticleSystem *)unaff_ESI,(MethodInfo *)0x0);
                        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)unaff_ESI,(MethodInfo *)0x0)
                        ;
                        if (pGVar2 == (GameObject *)0x0) goto code_?;
                        pOVar8 = (Object__Array *)0x0;
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar2,0,(MethodInfo *)0x0);
                        ppOVar10 = ppOVar10 + 1;
                      }
                      pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_GetComponentsInChildren
                                         ((GameObject *)this_01,
                                          UseInteractorVisualization__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UseInteractorVisualization>______
                                         );
                      unaff_ESI = (Behaviour *)0x0;
                      if (pOVar8 != (Object__Array *)0x0) {
                        unaff_EDI = (MVPickupOwner__Class *)pOVar8->vector;
                        for (; (int)unaff_ESI < (int)pOVar8->max_length;
                            unaff_ESI = (Behaviour *)((int)&unaff_ESI->klass + 1)) {
                          if ((Behaviour *)pOVar8->max_length <= unaff_ESI) goto code_?;
                          this_00 = (UseInteractorVisualization *)(unaff_EDI->_0).image;
                          if (this_00 == (UseInteractorVisualization *)0x0) goto code_?;
                          UseInteractorVisualization::UseInteractorVisualization_Disable
                                    (this_00,(MethodInfo *)0x0);
                          unaff_EDI = (MVPickupOwner__Class *)&(unaff_EDI->_0).gc_desc;
                        }
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__UnityEngine__Object);
                        }
                        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_op_Equality
                                          ((Object_1 *)pBStack_7,(Object_1 *)0x0,(MethodInfo *)0x0)
                        ;
                        unaff_ESI = pBStack_7;
                        if (bVar3 == 0) {
                          if (((pBStack_7 != (Behaviour *)0x0) &&
                              (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pBStack_7,(MethodInfo *)0x0),
                              pGVar2 != (GameObject *)0x0)) &&
                             (pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_AddComponent_1
                                                  (pGVar2,
                                                  RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                                  ), pOVar12 != (Object *)0x0)) {
                            pOVar12[2].klass = (Object__Class *)0x428c0000;
                            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pBStack_7,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?(&TypeInfo__UnityEngine__Vector3);
                              cRam_? = '\x01';
                            }
                            unaff_ESI = (Behaviour *)0x0;
                            if (this_02 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localPosition
                                        (this_02,TypeInfo__UnityEngine__Vector3->static_fields->
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
                          pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_AddComponent_1
                                              ((GameObject *)this_01,
                                               RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                                              );
                          if (pOVar12 != (Object *)0x0) {
                            pOVar12[2].klass = (Object__Class *)0x428c0000;
code_?:
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive((GameObject *)this_01,1,(MethodInfo *)0x0);
                            if (bVar4) {
                              unaff_EDI = (MVPickupOwner__Class *)pOVar5->vector;
                              for (unaff_ESI = (Behaviour *)0x0;
                                  (int)unaff_ESI < (int)pOVar5->max_length;
                                  unaff_ESI = (Behaviour *)((int)&unaff_ESI->klass + 1)) {
                                if ((Behaviour *)pOVar5->max_length <= unaff_ESI)
                                goto code_?;
                                pIVar6 = (unaff_EDI->_0).image;
                                if (pIVar6 == (Il2CppImage *)0x0) goto code_?;
                                GreyOutObjectScript::GreyOutObjectScript_GreyOut
                                          ((GreyOutObjectScript *)pIVar6,(MethodInfo *)0x0);
                                unaff_EDI = (MVPickupOwner__Class *)&(unaff_EDI->_0).gc_desc;
                              }
                            }
                            return (GameObject *)this_01;
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
  pcVar13 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar13)();
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
    pDVar4 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if (pMVar3 != (MVWorldObjectClient *)0x0) {
      IVar5 = (*(code *)(pMVar3->klass->vtable).get_DocumentationType.method)
                         (pMVar3,(pMVar3->klass->vtable).TraverseRecursiveTail.methodPtr);
      if (pDVar4 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)
                    0x0) {
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar4,IVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                          );
        if (bVar6 != 0) {
          if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__InventoryItem);
          }
          pMVar3 = (this->fields).previewObject;
          pDVar4 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
          if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
          IVar5 = (*(code *)(pMVar3->klass->vtable).get_DocumentationType.method)
                             (pMVar3,(pMVar3->klass->vtable).TraverseRecursiveTail.methodPtr);
          if (pDVar4 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                         *)0x0) goto code_?;
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,IVar5,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                              );
          if (pOVar7 == (Object *)0x0) goto code_?;
          uVar8 = *(undefined8 *)&pOVar7[2].monitor;
          pMVar9 = pOVar7[3].monitor;
          (this->fields).cameraOffset.x = (float)(int)uVar8;
          (this->fields).cameraOffset.y = (float)(int)((ulonglong)uVar8 >> 0x20);
          (this->fields).cameraOffset.z = (float)pMVar9;
        }
        this_01 = TierUnlockedItemElement_CreatePreviewObjectClone(this,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Quaternion);
            cRam_? = '\x01';
          }
          if (pTVar10 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar10,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            this_02 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (this_02,StringLiteral_Preview_Root___TierShopItem,(MethodInfo *)0x0);
            if (this_02 != (GameObject *)0x0) {
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_02,(MethodInfo *)0x0);
              (this->fields).rootTransform = pTVar10;
              func_?(&(this->fields).rootTransform,pTVar10);
              iStack_11 = (this->fields).previewWidth;
              pIVar1 = (this->fields).objectPreviewer;
              iStack_12 = (this->fields).previewHeight;
              pMVar3 = (this->fields).previewObject;
              uStack_13 = 0x43960000;
              fStack_14 = (float)itemIndex * _UNK_?;
              uStack_15 = 0x43960000;
              if (pMVar3 != (MVWorldObjectClient *)0x0) {
                LStack_16 = (pMVar3->fields).previewLayerMask;
                uStack_17._0_4_ = (this->fields).cameraOffset.x;
                uStack_17._4_4_ = (this->fields).cameraOffset.y;
                fStack_18 = (this->fields).cameraOffset.z;
                pTVar10 = (this->fields).rootTransform;
                iStack_19 = (((this->fields).previewObject)->fields)._.type;
                EStack_20.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
                EStack_20.monitor = (MonitorData *)0xffffffff;
                pSVar21 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_20,(MethodInfo *)0x0);
                if (pIVar1 != (InventoryItemPreviewer *)0x0) {
                  previewPosition.y = (float)uStack_15;
                  previewPosition.x = (float)uStack_13;
                  cameraOffset.z = fStack_18;
                  cameraOffset.x = (float)(undefined4)uStack_17;
                  cameraOffset.y = (float)uStack_17._4_4_;
                  previewPosition.z = fStack_14;
                  InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                            (pIVar1,iStack_11,iStack_12,CameraClearFlags__Enum_Color,LStack_16,
                             cameraOffset,pTVar10,previewPosition,pSVar21,
                             (this->fields).previewObject,this_01,(MethodInfo *)0x0);
                  pIVar1 = (this->fields).objectPreviewer;
                  if ((pIVar1 != (InventoryItemPreviewer *)0x0) &&
                     (this_00 = (this->fields).previewImage, this_00 != (RawImage *)0x0)) {
                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                              (this_00,(Texture *)(pIVar1->fields).previewTexture,(MethodInfo *)0x0)
                    ;
                    pTVar22 = (this->fields).itemAmountText;
                    IStack_23.m_value = (tierShopItemData->fields)._size;
                    pSVar21 = mscorlib.dll::System::Int32::Int32_ToString
                                        (&IStack_23,(MethodInfo *)0x0);
                    pSVar21 = mscorlib.dll::System::String::String_Concat_3
                                        (StringLiteral_x,pSVar21,(MethodInfo *)0x0);
                    if (pTVar22 != (Text *)0x0) {
                      (*(code *)(pTVar22->klass->vtable).set_text.method)
                                (pTVar22,pSVar21,
                                 (pTVar22->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
                      ;
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
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
    (*(code *)(pMVar3->klass->vtable).UnSetupTierInventory.method)
              (pMVar3,(pMVar3->klass->vtable).Destroy.methodPtr);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void SetTeam(MVTeam) */

void Assembly-CSharp.dll::TierUnlockedItemElement::TierUnlockedItemElement_SetTeam
               (TierUnlockedItemElement *this,MVTeam__Enum team,MethodInfo *method)

{
  this_00 = (this->fields).teamRequirementImage;
  (this->fields).team = team;
  cVar1 = (int)this_00 < 0;
  if (this_00 == (Image *)0x0) goto code_?;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  cVar1 = (int)this_01 < 0;
  if (this_01 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,1,(MethodInfo *)0x0);
  this = (TierUnlockedItemElement *)(this->fields).teamRequirementImage;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    in_stack_2 = (MethodInfo *)0x0;
    in_stack_3 = 1.12104e-44;
    pCVar4 = &CStack_5;
    break;
  case MVTeam__Enum_Red:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    in_stack_2 = (MethodInfo *)0x0;
    in_stack_3 = 1.26117e-44;
    pCVar4 = &CStack_6;
    break;
  case MVTeam__Enum_Green:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    in_stack_2 = (MethodInfo *)0x0;
    in_stack_3 = 1.54143e-44;
    pCVar4 = &CStack_7;
    break;
  case MVTeam__Enum_Yellow:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    in_stack_2 = (MethodInfo *)0x0;
    in_stack_3 = 1.4013e-44;
    pCVar4 = &CStack_8;
    break;
  default:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar4 = (Color *)&stack0xffffff9c;
    goto code_?;
  case MVTeam__Enum_None:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar4 = &CStack_9;
code_?:
    in_stack_2 = (MethodInfo *)0x0;
    in_stack_3 = 3.64338e-44;
  }
  while( true ) {
    pCVar4 = Styles::Styles_GetColor(pCVar4,(ColorStyle__Enum)in_stack_3,in_stack_2);
    CStack_9.r = pCVar4->a;
    cVar1 = (int)this < 0;
    if ((Image *)this != (Image *)0x0) {
      CStack_9.g = (float)(((Image *)this)->klass->vtable).get_raycastTarget.methodPtr;
      (*(code *)(((Image *)this)->klass->vtable).set_color.method)();
      return;
    }
code_?:
    cVar10 = '\0';
    cVar11 = '\0';
    CStack_9.g = (float)&UNK_?;
    pCVar4 = (Color *)func_?();
    if (cVar10 == cVar1) break;
    *(char *)&pCVar4->r = *(char *)&pCVar4->r + (char)pCVar4 + cVar11;
  }
  pcVar12 = (char *)((int)this + extraout_ECX * 8 + -0x3046efbd);
  *pcVar12 = *pcVar12 + unaff_BL + '\x01' + cVar11;
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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

