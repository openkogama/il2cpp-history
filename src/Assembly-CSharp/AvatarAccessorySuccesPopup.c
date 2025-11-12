
/* Void Initialize(UnityAction, Texture, AccessoryDataClient) */

void Assembly-CSharp.dll::AvatarAccessorySuccesPopup::AvatarAccessorySuccesPopup_Initialize
               (AvatarAccessorySuccesPopup *this,UnityAction *resultCallback,Texture *previewImage,
               AccessoryDataClient *accessoryData,MethodInfo *method)

{
  this_00 = (this->fields).preview;
  if (this_00 != (RawImage *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,previewImage,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).resultCallback = resultCallback;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).resultCallback >> 0xc);
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
    pAVar6 = (this->fields).itemBackground;
    if (pAVar6 != (AccessoryItemBackground *)0x0) {
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
          iVar7 = (accessoryData->fields)._.cost;
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          pRVar8 = Styles::Styles_GetAccessoryColorsFromPrice(iVar7,(MethodInfo *)0x0);
        }
        else {
          iVar7 = (accessoryData->fields)._.lvl;
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          pRVar8 = Styles::Styles_GetAccessoryColorsFromLevel(iVar7,(MethodInfo *)0x0);
        }
        if ((pRVar8 != (RarityStylesDef *)0x0) &&
           (pIVar9 = (pAVar6->fields).rarityImage, pIVar9 != (Image *)0x0)) {
          fStack_10 = (pRVar8->fields).backgroundColor.r;
          fStack_11 = (pRVar8->fields).backgroundColor.g;
          fStack_12 = (pRVar8->fields).backgroundColor.b;
          fStack_13 = (pRVar8->fields).backgroundColor.a;
          (*(pIVar9->klass->vtable).set_color.methodPtr)
                    (pIVar9,&fStack_10,(pIVar9->klass->vtable).set_color.method);
          pIVar9 = (pAVar6->fields).glowImage;
          if (pIVar9 != (Image *)0x0) {
            fStack_10 = (pRVar8->fields).glowColor.r;
            fStack_11 = (pRVar8->fields).glowColor.g;
            fStack_12 = (pRVar8->fields).glowColor.b;
            fStack_13 = (pRVar8->fields).glowColor.a;
            (*(pIVar9->klass->vtable).set_color.methodPtr)();
            pIVar9 = (pAVar6->fields).backgroundRay;
            if ((pIVar9 != (Image *)0x0) &&
               (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pIVar9,(MethodInfo *)0x0),
               pGVar14 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar14,0,(MethodInfo *)0x0);
              if ((accessoryData->fields)._.owns != 0) {
                return;
              }
              pIVar9 = (pAVar6->fields).backgroundRay;
              if ((pIVar9 != (Image *)0x0) &&
                 (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pIVar9,(MethodInfo *)0x0),
                 pGVar14 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar14,(accessoryData->fields)._.iFtr,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__AccessoryDataManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pAVar15 = TypeInfo__AccessoryDataManager->static_fields->accessoryShopData;
                if ((pAVar15 != (AccessoryShopDataClient *)0x0) &&
                   (pAVar16 = (pAVar15->fields).accessoryBundle,
                   pAVar16 != (AccessoryBundleClient *)0x0)) {
                  pLVar17 = (pAVar16->fields)._.accessoryBundleItems;
                  uVar2 = 0;
                  if (pLVar17 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
                    uVar18 = (pLVar17->fields)._size;
                    lVar19 = 0x20;
                    while( true ) {
                      if ((int)uVar18 <= (int)uVar2) {
                        return;
                      }
                      if (uVar18 <= uVar2) {
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                        pcVar20 = (code *)swi(3);
                        (*pcVar20)();
                        return;
                      }
                      pAVar21 = (pLVar17->fields)._items;
                      if (pAVar21 == (AccessoryBundleItem__Array *)0x0) goto code_?;
                      if ((uint)pAVar21->max_length <= uVar2) {
                        FUN_?();
                        pcVar20 = (code *)swi(3);
                        (*pcVar20)();
                        return;
                      }
                      lVar22 = *(longlong *)((longlong)pAVar21->vector + lVar19 + -0x20);
                      if (lVar22 == 0) goto code_?;
                      if (*(int *)(lVar22 + 0x14) == (accessoryData->fields)._.aMDID) break;
                      uVar2 = uVar2 + 1;
                      lVar19 = lVar19 + 8;
                    }
                    pIVar9 = (pAVar6->fields).backgroundRay;
                    if ((pIVar9 != (Image *)0x0) &&
                       (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pIVar9,(MethodInfo *)0x0),
                       pGVar14 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar14,1,(MethodInfo *)0x0);
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
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnButtonPressed() */

void Assembly-CSharp.dll::AvatarAccessorySuccesPopup::AvatarAccessorySuccesPopup_OnButtonPressed
               (AvatarAccessorySuccesPopup *this,MethodInfo *method)

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
                  MethodInfo__AvatarAccessorySuccesPopup____c___OnButtonPressed_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarAccessorySuccesPopup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarAccessorySuccesPopup____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarAccessorySuccesPopup____c);
  }
  this_00 = TypeInfo__AvatarAccessorySuccesPopup____c->static_fields->__9__4_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarAccessorySuccesPopup____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarAccessorySuccesPopup____c);
    }
    object = TypeInfo__AvatarAccessorySuccesPopup____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__AvatarAccessorySuccesPopup____c___OnButtonPressed_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarAccessorySuccesPopup____c->static_fields->__9__4_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__AvatarAccessorySuccesPopup____c->static_fields->__9__4_0
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
  pUVar5 = (this->fields).resultCallback;
  if (pUVar5 == (UnityAction *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar5->fields)._._.invoke_impl)((pUVar5->fields)._._.method_code,(pUVar5->fields)._._.method);
  return;
}

