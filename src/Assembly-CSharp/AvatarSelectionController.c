
/* Void AvatarSlotClicked(Int32) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_AvatarSlotClicked
               (AvatarSelectionController *this,int32_t slotIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarSelectionController__OnPicUpdateForPrevAvatar_int__UnityEngine__Texture2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (slotIndex == (this->fields).currSelectedSlot) {
    return;
  }
  key = (this->fields).currSelectedSlot;
  AvatarSelectionController_set_CurrentlySelectedSlotIndex(slotIndex,(MethodInfo *)0x0);
  pAVar1 = (this->fields).avatarBodyController;
  if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
    AvatarEditModeBodyController::AvatarEditModeBodyController_SetCurrentBody
              (pAVar1,slotIndex,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pAVar1 = (this->fields).avatarBodyController;
    if (((pAVar1 != (AvatarEditModeBodyController *)0x0) &&
        (pMVar2 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                            (pAVar1,(MethodInfo *)0x0), pMVar2 != (MVBody *)0x0)) &&
       (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetActiveAvatar
                (this_01,(pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
      AvatarSelectionController_SetStateToRoam(this,(MethodInfo *)0x0);
      pDVar3 = (this->fields).avatarSlots;
      if ((pDVar3 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) &&
         (this_02 = (Component *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                              ), this_02 != (Component *)0x0)) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_02,(MethodInfo *)0x0);
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
        pDVar3 = (this->fields).avatarSlots;
        if (pDVar3 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,(Object *)0x0,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                     ->klass->rgctx_data[0x22].method);
          pAVar1 = (this->fields).avatarBodyController;
          this_03 = (Action_2_Int32Enum_Object_ *)
                    FUN_?(TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
          mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__AvatarSelectionController__OnPicUpdateForPrevAvatar_int__UnityEngine__Texture2D_
                     ,(MethodInfo *)0x0);
          if (pAVar1 != (AvatarEditModeBodyController *)0x0) {
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar4 = (pAVar1->fields).bodies;
            this_00 = (pAVar1->fields).pictureTaker;
            if (pLVar4 != (List_1_MVBody_ *)0x0) {
              if ((uint)(pLVar4->fields)._size <= key) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pMVar6 = (pLVar4->fields)._items;
              if (pMVar6 != (MVBody__Array *)0x0) {
                if ((uint)pMVar6->max_length <= key) {
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (this_00 != (AvatarPictureTakerUGUI *)0x0) {
                  AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
                            (this_00,(MVWorldObjectClient *)pMVar6->vector[(int)key],key,
                             (Action_2_Int32_UnityEngine_Texture2D_ *)this_03,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_Destroy
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarSelectionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AvatarSelectionController->static_fields->instance = (AvatarSelectionController *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AvatarSelectionController->static_fields >> 0xc);
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
  return;
}


/* Void Initialize(AvatarEditModeBodyController, EditorStateMachine) */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_Initialize
               (AvatarSelectionController *this,AvatarEditModeBodyController *bodyController,
               EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarSelectionController__OnPictureTakenCallback_int__UnityEngine__Texture2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarSelectionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AvatarSelectionController->static_fields->instance = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AvatarSelectionController->static_fields >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).avatarBodyController = bodyController;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).avatarBodyController >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar5);
  }
  pAVar7 = (this->fields).avatarBodyController;
  if (pAVar7 != (AvatarEditModeBodyController *)0x0) {
    (pAVar7->fields).publishAvatarBtn = (this->fields).publishAvatarGO;
    if (iVar6 != 0) {
      uVar1 = (uint)((ulonglong)&(pAVar7->fields).publishAvatarBtn >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    AvatarEditModeBodyController::AvatarEditModeBodyController_SetPublishAvatarButtonActive
              (pAVar7,(MethodInfo *)0x0);
    pAVar7 = (this->fields).avatarBodyController;
    this_00 = (Action_2_Int32Enum_Object_ *)
              FUN_?(TypeInfo__System__Action<int,_UnityEngine::Texture2D>);
    mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarSelectionController__OnPictureTakenCallback_int__UnityEngine__Texture2D_
               ,(MethodInfo *)0x0);
    if (pAVar7 != (AvatarEditModeBodyController *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar5 = iRam_? != 0;
      (pAVar7->fields).Picture2DTakenCallback = (Action_2_Int32_UnityEngine_Texture2D_ *)this_00;
      if (bVar5) {
        uVar1 = (uint)((ulonglong)&(pAVar7->fields).Picture2DTakenCallback >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar4 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      iVar6 = 0;
      pLVar8 = (pAVar7->fields).bodies;
      while (pLVar8 != (List_1_MVBody_ *)0x0) {
        if ((pLVar8->fields)._size <= iVar6) {
          return;
        }
        AvatarEditModeBodyController::AvatarEditModeBodyController_GenerateIconForBody
                  (pAVar7,iVar6,(MethodInfo *)0x0);
        iVar6 = iVar6 + 1;
        pLVar8 = (pAVar7->fields).bodies;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPicUpdateForPrevAvatar(Int32, Texture2D) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_OnPicUpdateForPrevAvatar
               (AvatarSelectionController *this,int32_t index,Texture2D *image,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).avatarSelectionSlotPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_02 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                      );
  if (this_02 != (Component *)0x0) {
    this_00 = (RawImage *)this_02[1].monitor;
    *(int32_t *)&this_02[2].klass = index;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)image,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_02,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        uVar2 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar1,(Transform *)(this->fields).avatarSelectionContentRoot,0,(MethodInfo *)0x0
                  );
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (this_02,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                    (pTVar1,index,(MethodInfo *)0x0);
          this_01 = (this->fields).avatarSlots;
          if (this_01 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,index,(Object *)this_02,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),1),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                       ->klass->rgctx_data[0x22].method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPictureTakenCallback(Int32, Texture2D) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_OnPictureTakenCallback
               (AvatarSelectionController *this,int32_t index,Texture2D *image,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).avatarSelectionSlotPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = (Component *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      AvatarSelectionSlot_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionSlot>_AvatarSelectionSlot_
                     );
  if (pCVar1 != (Component *)0x0) {
    this_00 = (RawImage *)pCVar1[1].monitor;
    *(int32_t *)&pCVar1[2].klass = index;
    if (this_00 != (RawImage *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                (this_00,(Texture *)image,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (pCVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        uVar3 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar2,(Transform *)(this->fields).avatarSelectionContentRoot,0,(MethodInfo *)0x0
                  );
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (pCVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                    (pTVar2,index,(MethodInfo *)0x0);
          this_01 = (this->fields).avatarSlots;
          if (this_01 != (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,index,(Object *)pCVar1,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__set_Item_int__AvatarSelectionSlot_
                       ->klass->rgctx_data[0x22].method);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__AvatarSelectionController);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pAVar4 = TypeInfo__AvatarSelectionController->static_fields->instance;
            if (pAVar4 != (AvatarSelectionController *)0x0) {
              if (index != (pAVar4->fields).currSelectedSlot) {
                return;
              }
              pCVar1 = pCVar1[1].fields._.m_CachedPtr;
              if ((pCVar1 != (Component *)0x0) &&
                 (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(pCVar1,(MethodInfo *)0x0),
                 this_02 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_02,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OpenAvatarShop() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_OpenAvatarShop
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarSelectionController____c___OpenAvatarShop_b__20_0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarSelectionController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarSelectionController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarSelectionController____c);
  }
  this_01 = TypeInfo__AvatarSelectionController____c->static_fields->__9__20_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarSelectionController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarSelectionController____c);
    }
    object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IActivateUIElement_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AvatarSelectionController____c___OpenAvatarShop_b__20_0_UnityEngine__EventSystems__IActivateUIElement__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarSelectionController____c->static_fields->__9__20_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__AvatarSelectionController____c->static_fields->__9__20_0
                     >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IActivateUIElement>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IActivateUIElement>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetCurrentAvatar() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_ResetCurrentAvatar
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 == (AvatarEditModeBodyController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarEditModeBodyController__ExecuteReset__);
    LOCK();
    UNLOCK();
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
                  ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = (Object *)FUN_?(TypeInfo__AvatarEditModeBodyController____c__DisplayClass25_0);
  original = (this_00->fields).resetAvatarHandler;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar3 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ResetAvatarHandler_MethodInfo__UnityEngine__Object__Instantiate<ResetAvatarHandler>_ResetAvatarHandler_
                      );
  if (pOVar2 == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar4 = iRam_? != 0;
  pOVar2[1].klass = pOVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
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
  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,pOVar2,
             MethodInfo__AvatarEditModeBodyController____c__DisplayClass25_0___ResetCurrentBody_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar9,(BaseEventData *)0x0,this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pOVar3 = pOVar2[1].klass;
  pMVar10 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                      (this_00,(MethodInfo *)0x0);
  this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this_00,MethodInfo__AvatarEditModeBodyController__ExecuteReset__,
             (MethodInfo *)0x0);
  if (pOVar3 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar11 = iRam_?;
  (pOVar3->_0).generic_class = (Il2CppGenericClass *)this_02;
  if (iVar11 != 0) {
    uVar5 = (uint)((ulonglong)&(pOVar3->_0).generic_class >> 0xc);
    lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar6 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar4 = uVar8 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar4);
  }
  (pOVar3->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)pMVar10;
  if (iVar11 != 0) {
    uVar5 = (uint)((ulonglong)&(pOVar3->_0).typeMetadataHandle >> 0xc);
    lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar6 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar4 = uVar8 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pIVar13 = (pOVar3->_0).interopData;
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
  if (pIVar13 == (Il2CppInteropData *)0x0) {
code_?:
    pGVar9 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (pGVar9,(String *)0x0,(MethodInfo *)0x0);
    if (pGVar9 == (GameObject *)0x0) goto code_?;
    pIVar13 = (Il2CppInteropData *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar9,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (pOVar3->_0).interopData = pIVar13;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(pOVar3->_0).interopData >> 0xc);
      lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar6 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar4 = uVar8 == *puVar6;
        if (bVar4) {
          *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pIVar13->pinvokeMarshalFromNativeFunction == (PInvokeMarshalFromNativeFunc)0x0)
    goto code_?;
  }
  if (pMVar10 != (MVBody *)0x0) {
    iVar14 = (pMVar10->fields)._._._._.id;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>,iVar14,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar15 != (MVGameControllerBase *)0x0) {
      pMVar16 = (pMVar15->fields).game;
      this_03 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
      uVar17 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_03,(Object *)pOVar3,
                 MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar16 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                  (pMVar16,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_03,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar15 != (MVGameControllerBase *)0x0) &&
            (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
           (pMVar18 = (pMVar16->fields).operationRequests,
           pMVar18 != (MVNetworkGame_OperationRequests *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_04 = (Dictionary_2_System_Byte_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object___ctor
                    (this_04,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          aiStackX_20[0] = iVar14;
          pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_20);
          if (this_04 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ->klass->rgctx_data[0x22].method;
            uVar19 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_04,0x16,pOVar2,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),2),method_00
                      );
            pPVar20 = (pMVar18->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar20 != (PhotonPeer *)0x0) {
              (*(pPVar20->klass->vtable).SendOperation.methodPtr)
                        (pPVar20,CONCAT71((int7)((ulonglong)uVar19 >> 8),0x56),this_04,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar20->klass->vtable).SendOperation.method);
              return;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SellCurrentAvatar() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SellCurrentAvatar
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarSelectionController____c___SellCurrentAvatar_b__17_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarSelectionController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarSelectionController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarSelectionController____c);
  }
  this_01 = TypeInfo__AvatarSelectionController____c->static_fields->__9__17_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarSelectionController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarSelectionController____c);
    }
    object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AvatarSelectionController____c___SellCurrentAvatar_b__17_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarSelectionController____c->static_fields->__9__17_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__AvatarSelectionController____c->static_fields->__9__17_0
                     >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetStateToRoam() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SetStateToRoam
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarSelectionController___SetStateToRoam_b__15_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarSelectionController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__AvatarSelectionController___SetStateToRoam_b__15_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarSelectionController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarSelectionController____c);
  }
  this_02 = TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1;
  if (this_02 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarSelectionController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarSelectionController____c);
    }
    object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1 = this_02;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1
                     >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetToNextAnimation() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController_SetToNextAnimation
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this_00->fields).animations;
    if (pLVar1 != (List_1_System_String_ *)0x0) {
      if ((this_00->fields).currentAnimationIndex < (pLVar1->fields)._size + -1) {
        uVar2 = (this_00->fields).currentAnimationIndex + 1;
      }
      else {
        uVar2 = 0;
      }
      (this_00->fields).currentAnimationIndex = uVar2;
      pLVar1 = (this_00->fields).animations;
      if (pLVar1 != (List_1_System_String_ *)0x0) {
        if ((uint)(pLVar1->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pSVar4 = (pLVar1->fields)._items;
        if (pSVar4 != (String__Array *)0x0) {
          if ((uint)pSVar4->max_length <= uVar2) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          animationName = pSVar4->vector[(int)uVar2];
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__AccessoryAnimationHandler);
            LOCK();
            UNLOCK();
            FUN_?(&
                          ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                              (this_00,(MethodInfo *)0x0);
          if (((pMVar5 != (MVBody *)0x0) &&
              (pMVar6 = (pMVar5->fields).bodyObject, pMVar6 != (MVBodyObject *)0x0)) &&
             (this_01 = (pMVar6->fields).boneAnimation, this_01 != (BoneAnimation *)0x0)) {
            BoneAnimation::BoneAnimation_Play(this_01,animationName,(MethodInfo *)0x0);
            pMVar5 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                                (this_00,(MethodInfo *)0x0);
            pMVar7 = 
            ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
            ;
            if ((pMVar5 != (MVBody *)0x0) &&
               (this_02 = (pMVar5->fields)._._._.gameObject, this_02 != (GameObject *)0x0)) {
              if ((
                  ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             ActivateOnAnimationBase__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<ActivateOnAnimationBase>______
                             );
              }
              p_Var11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_4
                                  (this_02,0,((pMVar7->field7_0x38).rgctx_data)->method);
              uVar2 = 0;
              if (p_Var11 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                pp_Var12 = p_Var11->vector;
                do {
                  if ((int)p_Var11->max_length <= (int)uVar2) {
                    return;
                  }
                  if ((uint)p_Var11->max_length <= uVar2) {
code_?:
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (*pp_Var12 != (_Il2CppFullySharedGenericType *)0x0) {
                    p_Var5 = (*pp_Var12)->klass;
                    bVar8 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
                    if ((bVar8 <= (p_Var5->_1).naturalAligment) &&
                       ((p_Var5->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
                        (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
                      this_03 = (AccessoryAnimationHandler *)*pp_Var12;
                      bVar8 = (TypeInfo__AccessoryAnimationHandler->_1).naturalAligment;
                      if (((this_03->klass->_1).naturalAligment < bVar8) ||
                         ((this_03->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
                          (Il2CppClass *)TypeInfo__AccessoryAnimationHandler)) {
                        FUN_?(this_03,TypeInfo__AccessoryAnimationHandler);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      AccessoryAnimationHandler::AccessoryAnimationHandler_SetAllAnimationToLooping
                                (this_03,(MethodInfo *)0x0);
                    }
                  }
                  if ((uint)p_Var11->max_length <= uVar2) goto code_?;
                  p_Var6 = *pp_Var12;
                  if (p_Var6 == (_Il2CppFullySharedGenericType *)0x0) break;
                  (*(code *)p_Var6->klass[1]._0.name)
                            (p_Var6,animationName,p_Var6->klass[1]._0.namespaze);
                  uVar2 = uVar2 + 1;
                  pp_Var12 = pp_Var12 + 1;
                } while( true );
              }
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TakeScreenshotForProfile() */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_TakeScreenshotForProfile
               (AvatarSelectionController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarBodyController;
  if (this_00 == (AvatarEditModeBodyController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarEditModeBodyController____c);
  }
  this_02 = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarEditModeBodyController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarEditModeBodyController____c);
    }
    object = TypeInfo__AvatarEditModeBodyController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__AvatarEditModeBodyController____c___TakeScreenshot_b__34_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0 = this_02;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)
                      &TypeInfo__AvatarEditModeBodyController____c->static_fields->__9__34_0 >> 0xc)
      ;
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar7 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar2,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar8->fields)._size;
    uVar3 = 0;
    if (0 < lVar9) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar8->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar12 = (pLVar8->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = *(Component **)((longlong)pTVar12->vector + lVar11 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_01,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar2,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                           (pMVar7->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SetStateToRoam>b__15_0(IAvatarSetBodyGroup, BaseEventData) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController__SetStateToRoam_b__15_0
               (AvatarSelectionController *this,IAvatarSetBodyGroup *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    pMVar1 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                       (this_00,(MethodInfo *)0x0);
    if (x != (IAvatarSetBodyGroup *)0x0) {
      pIVar2 = x->klass;
      uVar3 = 0;
      uVar4._0_1_ = (pIVar2->_1).rank;
      uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
              (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup) {
            pVVar5 = &(pIVar2->vtable).SetBodyGroup + pIVar2->interfaceOffsets[uVar3].offset;
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAvatarSetBodyGroup,0,pMVar1,
                             unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar5->methodPtr)(x,pMVar1,pVVar5->method,pVVar5->methodPtr);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AvatarSelectionController() */

void Assembly-CSharp.dll::AvatarSelectionController::AvatarSelectionController__ctor
               (AvatarSelectionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).currSelectedSlot = -1;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).avatarSlots = (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarSlots >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Int32 get_CurrentlySelectedSlotIndex() */

int32_t Assembly-CSharp.dll::AvatarSelectionController::
        AvatarSelectionController_get_CurrentlySelectedSlotIndex(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarSelectionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 != (AvatarSelectionController *)0x0) {
    return (pAVar1->fields).currSelectedSlot;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_CurrentlySelectedSlotIndex(Int32) */

void Assembly-CSharp.dll::AvatarSelectionController::
     AvatarSelectionController_set_CurrentlySelectedSlotIndex(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarSelectionController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 == (AvatarSelectionController *)0x0) goto code_?;
  if ((pAVar1->fields).currSelectedSlot != -1) {
    pDVar2 = (pAVar1->fields).avatarSlots;
    if (pDVar2 == (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,
                        (pAVar1->fields).currSelectedSlot,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                       );
    if ((pOVar3 == (Object *)0x0) || ((Component *)pOVar3[2].monitor == (Component *)0x0))
    goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pOVar3[2].monitor,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
    if ((pAVar1 == (AvatarSelectionController *)0x0) ||
       (pDVar2 = (pAVar1->fields).avatarSlots,
       pDVar2 == (Dictionary_2_System_Int32_AvatarSelectionSlot_ *)0x0)) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,value,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarSelectionSlot>__get_Item_int_
                       );
    if ((pOVar3 == (Object *)0x0) || ((Component *)pOVar3[2].monitor == (Component *)0x0))
    goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pOVar3[2].monitor,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,1,(MethodInfo *)0x0);
  }
  pAVar1 = TypeInfo__AvatarSelectionController->static_fields->instance;
  if (pAVar1 != (AvatarSelectionController *)0x0) {
    (pAVar1->fields).currSelectedSlot = value;
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

