
/* Void Initialize(UnityAction`1[System.Boolean], String, AccessoryDataClient, String, String) */

void Assembly-CSharp.dll::AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_Initialize
               (AvatarAccessoryErrorPopup *this,UnityAction_1_System_Boolean_ *resultCallback,
               String *previewImageUrl,AccessoryDataClient *accessoryData,String *header,
               String *buttonText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarAccessoryErrorPopup__OnPreviewImageDownLoaded__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).buttonText;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,buttonText,(pTVar1->klass->vtable).set_text.method);
    pTVar1 = (this->fields).header;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,header);
      pGVar2 = (this->fields).loadingWheel;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pSVar3 = (this->fields).preview;
        if ((pSVar3 != (StreamedSpriteToImageManual *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pSVar3,(MethodInfo *)0x0),
           pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pSVar3 = (this->fields).preview;
          this_00 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_00,(Object *)this,
                     MethodInfo__AvatarAccessoryErrorPopup__OnPreviewImageDownLoaded__,
                     (MethodInfo *)0x0);
          if (pSVar3 != (StreamedSpriteToImageManual *)0x0) {
            StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
                      (pSVar3,previewImageUrl,(UnityAction *)this_00,(MethodInfo *)0x0);
            bVar4 = iRam_? != 0;
            (this->fields).resultCallback = resultCallback;
            if (bVar4) {
              uVar5 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
              puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar7 = *puVar6;
                LOCK();
                uVar8 = *puVar6;
                if (uVar7 == uVar8) {
                  *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (uVar7 != uVar8);
            }
            pAVar9 = (this->fields).itemBackground;
            if (pAVar9 != (AccessoryItemBackground *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                              ,accessoryData,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__Styles);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (accessoryData != (AccessoryDataClient *)0x0) {
                if (((accessoryData->fields)._.lvl == 0) || ((accessoryData->fields)._.cost != 0)) {
                  iVar10 = (accessoryData->fields)._.cost;
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pRVar11 = Styles::Styles_GetAccessoryColorsFromPrice(iVar10,(MethodInfo *)0x0);
                }
                else {
                  iVar10 = (accessoryData->fields)._.lvl;
                  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pRVar11 = Styles::Styles_GetAccessoryColorsFromLevel(iVar10,(MethodInfo *)0x0);
                }
                if ((pRVar11 != (RarityStylesDef *)0x0) &&
                   (pIVar12 = (pAVar9->fields).rarityImage, pIVar12 != (Image *)0x0)) {
                  (*(pIVar12->klass->vtable).set_color.methodPtr)
                            (pIVar12,&stack0xffffffffffffffe8,
                             (pIVar12->klass->vtable).set_color.method);
                  pIVar12 = (pAVar9->fields).glowImage;
                  if (pIVar12 != (Image *)0x0) {
                    (*(pIVar12->klass->vtable).set_color.methodPtr)();
                    pIVar12 = (pAVar9->fields).backgroundRay;
                    if ((pIVar12 != (Image *)0x0) &&
                       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pIVar12,(MethodInfo *)0x0),
                       pGVar2 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar2,0,(MethodInfo *)0x0);
                      if ((accessoryData->fields)._.owns != 0) {
                        return;
                      }
                      pIVar12 = (pAVar9->fields).backgroundRay;
                      if ((pIVar12 != (Image *)0x0) &&
                         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)pIVar12,(MethodInfo *)0x0),
                         pGVar2 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar2,(accessoryData->fields)._.iFtr,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__AccessoryDataManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pAVar13 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
                        if ((pAVar13 != (AccessoryShopDataClient *)0x0) &&
                           (pAVar14 = (pAVar13->fields).accessoryBundle,
                           pAVar14 != (AccessoryBundleClient *)0x0)) {
                          pLVar15 = (pAVar14->fields)._.accessoryBundleItems;
                          uVar5 = 0;
                          if (pLVar15 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)
                                        0x0) {
                            uVar16 = (pLVar15->fields)._size;
                            lVar17 = 0x20;
                            while( true ) {
                              if ((int)uVar16 <= (int)uVar5) {
                                return;
                              }
                              if (uVar16 <= uVar5) {
                                mscorlib.dll::System::ThrowHelper::
                                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                          ((MethodInfo *)0x0);
                                pcVar18 = (code *)swi(3);
                                (*pcVar18)();
                                return;
                              }
                              pAVar19 = (pLVar15->fields)._items;
                              if (pAVar19 == (AccessoryBundleItem__Array *)0x0)
                              goto code_?;
                              if ((uint)pAVar19->max_length <= uVar5) {
                                FUN_?();
                                pcVar18 = (code *)swi(3);
                                (*pcVar18)();
                                return;
                              }
                              lVar20 = *(longlong *)((longlong)pAVar19->vector + lVar17 + -0x20);
                              if (lVar20 == 0) goto code_?;
                              if (*(int *)(lVar20 + 0x14) == (accessoryData->fields)._.aMDID) break;
                              uVar5 = uVar5 + 1;
                              lVar17 = lVar17 + 8;
                            }
                            pIVar12 = (pAVar9->fields).backgroundRay;
                            if ((pIVar12 != (Image *)0x0) &&
                               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)pIVar12,(MethodInfo *)0x0),
                               pGVar2 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar2,1,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
code_?:
              FUN_?();
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnButtonPressed(Boolean) */

void Assembly-CSharp.dll::AvatarAccessoryErrorPopup::AvatarAccessoryErrorPopup_OnButtonPressed
               (AvatarAccessoryErrorPopup *this,bool confirmed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarAccessoryErrorPopup____c___OnButtonPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessoryErrorPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarAccessoryErrorPopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarAccessoryErrorPopup____c);
  }
  this_00 = TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9__8_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarAccessoryErrorPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarAccessoryErrorPopup____c);
    }
    object = TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__AvatarAccessoryErrorPopup____c___OnButtonPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9__8_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__AvatarAccessoryErrorPopup____c->static_fields->__9__8_0
                    >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).resultCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    pUVar5 = (this->fields).resultCallback;
    (*(pUVar5->fields)._._.invoke_impl)
              ((pUVar5->fields)._._.method_code,confirmed,(pUVar5->fields)._._.method);
  }
  return;
}


/* Void OnPreviewImageDownLoaded() */

void Assembly-CSharp.dll::AvatarAccessoryErrorPopup::
     AvatarAccessoryErrorPopup_OnPreviewImageDownLoaded
               (AvatarAccessoryErrorPopup *this,MethodInfo *method)

{
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).emptyFrame;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).preview;
      if ((this_00 != (StreamedSpriteToImageManual *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,1);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

